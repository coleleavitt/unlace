__int64 __fastcall sub_18C30(__int64 a1)
{
  unsigned int v1; // ebp

  if ( !(unsigned __int8)netnode_inited() )
    return 0;
  netnode_check();
  if ( (unsigned __int8)netnode_exist() )
  {
    *(_DWORD *)(a1 + 748) = netnode_altval();
  }
  else if ( dbg )
  {
    *(_DWORD *)(a1 + 748) = (strcmp(*(const char **)(dbg + 8LL), "ios") == 0) + 1;
  }
  else
  {
    sub_EC40();
  }
  *(_DWORD *)(a1 + 744) = (unsigned __int8)getinf_flag() == 0 ? 4 : 8;
  if ( sub_133F0()
    && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 112LL))(a1, 4)
    && (v1 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 120LL))(a1), (_BYTE)v1) )
  {
    if ( (unsigned __int8)sub_135D0(a1) )
      sub_186B0((__int64 *)a1);
    setinf();
    get_abi_name();
    getinf_flag();
    set_compiler();
  }
  else
  {
    return 0;
  }
  return v1;
}
