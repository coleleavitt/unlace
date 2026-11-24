// SPDX-License-Identifier: MIT
pragma solidity ^0.8.24;
contract Token {
    string public name = "Test";
    uint8 public decimals = 18;
    uint256 public totalSupply;
    mapping(address => uint256) public balanceOf;
    mapping(address => mapping(address => uint256)) public allowance;
    event Transfer(address indexed from, address indexed to, uint256 value);
    event Approval(address indexed owner, address indexed spender, uint256 value);
    constructor(uint256 s) { totalSupply = s; balanceOf[msg.sender] = s; }
    function transfer(address to, uint256 v) external returns (bool) {
        require(balanceOf[msg.sender] >= v, "low");
        balanceOf[msg.sender] -= v; balanceOf[to] += v; emit Transfer(msg.sender, to, v); return true;
    }
    function approve(address s, uint256 v) external returns (bool) { allowance[msg.sender][s] = v; emit Approval(msg.sender, s, v); return true; }
    function transferFrom(address f, address t, uint256 v) external returns (bool) {
        uint256 a = allowance[f][msg.sender]; require(a >= v, "allow"); allowance[f][msg.sender] = a - v;
        require(balanceOf[f] >= v, "low"); balanceOf[f] -= v; balanceOf[t] += v; emit Transfer(f, t, v); return true;
    }
}
contract Vault {
    mapping(address => uint256) public deposits; address public owner; uint256[] public history;
    constructor() { owner = msg.sender; }
    function deposit() external payable { deposits[msg.sender] += msg.value; history.push(msg.value); }
    function withdraw(uint256 amt) external { require(deposits[msg.sender] >= amt); deposits[msg.sender] -= amt; (bool ok,) = msg.sender.call{value: amt}(""); require(ok); }
    function sum() external view returns (uint256 s) { for (uint i = 0; i < history.length; i++) s += history[i]; }
    function kill() external { require(msg.sender == owner); selfdestruct(payable(owner)); }
}
