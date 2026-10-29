__int64 __fastcall sub_218FF40(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v6; // r13d
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int *v9; // rax
  unsigned int *vars0; // [rsp+0h] [rbp+0h] BYREF
  char vars8; // [rsp+8h] [rbp+8h]

  v6 = a4;
  sub_216EEC0((__int64)&vars0, a2, a3, a4, a5, a6);
  if ( (vars8 & 1) != 0 )
  {
    v9 = vars0;
    *(_BYTE *)(a1 + 8) |= 1u;
    vars0 = nullptr;
    *(_QWORD *)a1 = v9;
  }
  else
  {
    sub_21729C0(a1, a2, vars0, v6, v7, v8);
  }
  sub_216EFC0((__int64 *)&vars0);
  return a1;
}
