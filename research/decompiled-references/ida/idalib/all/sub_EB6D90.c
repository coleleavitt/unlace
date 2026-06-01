__int64 __fastcall sub_EB6D90(__int64 *a1, __int64 a2)
{
  __int64 v3; // r12
  __int64 *v4; // rbp
  __int64 v5; // rdi
  __int64 v6; // rax
  int v7; // r10d
  __int64 v9; // [rsp+8h] [rbp-40h]

  sub_995540(*a1, "init(");
  v9 = a2 + 8LL * *(unsigned int *)(a2 + 16) + 32;
  if ( v9 != a2 + 40 )
  {
    v3 = *(_QWORD *)(a2 + 40);
    v4 = (__int64 *)(a2 + 48);
    sub_995540(*a1, "prefer_type(");
    while ( 1 )
    {
      sub_F07C00(v3, *a1, 0, a1[1], 0, 0, (__int64)"\n", 1);
      if ( v4 == (__int64 *)v9 )
        break;
      v3 = *v4++;
      sub_995540(*a1, ",");
    }
    sub_995540(*a1, "), ");
  }
  v5 = *a1;
  if ( *(_BYTE *)(a2 + 24) )
  {
    sub_995540(v5, "target");
    v5 = *a1;
    if ( !*(_BYTE *)(a2 + 25) )
      goto LABEL_8;
    if ( *(_BYTE *)(a2 + 24) )
    {
      sub_995540(v5, ", ");
      v5 = *a1;
    }
LABEL_12:
    sub_995540(v5, "targetsync");
    v5 = *a1;
    goto LABEL_8;
  }
  if ( *(_BYTE *)(a2 + 25) )
    goto LABEL_12;
LABEL_8:
  sub_995540(v5, " : ");
  v6 = sub_EB4C50();
  sub_F07C00(v7, *a1, 0, a1[1], 0, 0, (__int64)"\n", v6);
  return sub_995540(*a1, ")");
}
