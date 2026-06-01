__int64 __fastcall sub_8E94C0(__int64 a1)
{
  __int64 v1; // r12
  __int64 v2; // rax
  __int64 v3; // r12
  __int64 v4; // r13
  __int64 v5; // rax
  unsigned int v6; // r14d
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v10; // rcx
  _QWORD vars0[3]; // [rsp+0h] [rbp+0h] BYREF
  __int64 vars18; // [rsp+18h] [rbp+18h]
  unsigned int vars20; // [rsp+20h] [rbp+20h]
  int vars30; // [rsp+30h] [rbp+30h]
  _BYTE vars40[104]; // [rsp+40h] [rbp+40h] BYREF

  v1 = *(_QWORD *)(a1 + 184);
  v2 = sub_A1A5A0(v1, 56);
  sub_A1C070(vars0, v2);
  sub_A1A5E0(v1, 56);
  v3 = *(_QWORD *)(a1 + 184);
  if ( vars30 )
    goto LABEL_13;
  v4 = vars18;
  if ( !vars18 )
    goto LABEL_13;
  v5 = *(_QWORD *)(vars18 + 32);
  v6 = vars20;
  if ( *(_DWORD *)(v5 + 16) != vars20 && vars20 )
    v5 = *(_QWORD *)(vars18 + vars20 + 32);
  if ( *(_DWORD *)(v5 + 12) == -1 )
    goto LABEL_13;
  if ( vars20 != -1 )
  {
    if ( (unsigned __int8)sub_8E9400((__int64)vars0) )
    {
      sub_A1C030(vars40, v4, v6, 0xFFFFFFFFLL);
      goto LABEL_14;
    }
    v7 = sub_8E5480((__int64)vars0);
    if ( *(_BYTE *)(v7 + 51) )
    {
      if ( *(_QWORD *)(v7 + 32) )
      {
        if ( vars0[0] == v6 )
        {
          sub_A1C030(vars40, v4, v6 + 16, v6 + 16);
          goto LABEL_14;
        }
LABEL_20:
        sub_A1C030(vars40, v4, vars0[0], vars0[0]);
        goto LABEL_14;
      }
      if ( vars0[0] == v6 )
      {
        sub_A1C030(vars40, v4, v6, vars0[0] + 32LL);
        goto LABEL_14;
      }
    }
    else if ( vars0[0] != v6 )
    {
      goto LABEL_20;
    }
LABEL_13:
    sub_A1BFE0(vars40, vars0);
    goto LABEL_14;
  }
  v10 = vars0[0];
  if ( vars0[0] )
    v10 = 0xFFFFFFFFLL;
  sub_A1C030(vars40, vars18, 16, v10);
LABEL_14:
  v8 = sub_A1A4E0(v3, 56);
  sub_A1C070(v8, vars40);
  sub_A1C0C0(vars40);
  return sub_A1C0C0(vars0);
}

