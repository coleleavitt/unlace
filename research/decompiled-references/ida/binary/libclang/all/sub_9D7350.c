__int64 __fastcall sub_9D7350(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // r14
  __int64 v5; // rax
  unsigned int v6; // r12d
  __int64 v8; // r14
  __int64 v9; // rax
  _DWORD vars0[6]; // [rsp+0h] [rbp+0h] BYREF
  __int64 vars18; // [rsp+18h] [rbp+18h]
  _BYTE vars40[104]; // [rsp+40h] [rbp+40h] BYREF

  v4 = *(_QWORD *)(a1 + 184);
  v5 = sub_A1A5A0(v4, 56);
  sub_A1C070(vars0, v5);
  sub_A1A5E0(v4, 56);
  if ( (unsigned __int8)sub_9D4FE0(a1, a2, (__int64)vars0, 1)
    && sub_9D71E0(a1, a2, (__int64)vars0, 1)
    && (v6 = sub_9C7700(a1, a2, (__int64)vars0, a3), (_BYTE)v6) )
  {
    v8 = *(_QWORD *)(a1 + 184);
    sub_A1C030(vars40, vars18, vars0[0] - a3, vars0[0] - a3);
    v9 = sub_A1A4E0(v8, 56);
    sub_A1C070(v9, vars40);
    sub_A1C0C0(vars40);
  }
  else
  {
    v6 = 0;
  }
  sub_A1C0C0(vars0);
  return v6;
}

