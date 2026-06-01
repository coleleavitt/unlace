_QWORD *__fastcall sub_FDBDE0(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  void *v6; // rbx
  _BYTE *v7; // rdi
  void *vars0[2]; // [rsp+0h] [rbp+0h] BYREF
  _BYTE vars10[16]; // [rsp+10h] [rbp+10h] BYREF
  void **vars20; // [rsp+20h] [rbp+20h] BYREF
  __int16 vars40; // [rsp+40h] [rbp+40h]

  vars10[0] = 0;
  vars0[1] = nullptr;
  vars0[0] = vars10;
  v5 = operator new(0x18u);
  *(_OWORD *)v5 = 0;
  v6 = (void *)v5;
  *(_QWORD *)(v5 + 16) = 0;
  if ( !(unsigned __int8)sub_221B6D0(v5, a2, a3, vars0) )
  {
    sub_2218440(v6, a2);
    operator delete(v6, 0x18u);
    vars40 = 260;
    vars20 = vars0;
    sub_21FDD90(&vars20, 1);
  }
  v7 = vars0[0];
  *a1 = v6;
  if ( v7 != vars10 )
    operator delete(v7);
  return a1;
}

