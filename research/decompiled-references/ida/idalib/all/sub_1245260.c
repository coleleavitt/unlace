const char *__fastcall sub_1245260(__int64 a1)
{
  unsigned __int64 v1; // rax
  __int64 v2; // rdx
  _QWORD *v3; // rbx
  _QWORD *v4; // rbp
  const char *v5; // rbx
  __int64 v7; // r12
  __int64 v8; // rax
  const char **v9; // rax
  int v10[7]; // [rsp+Ch] [rbp-1Ch] BYREF

  v10[0] = 2323;
  v1 = sub_21B6DA0(a1, v10, 1);
  v2 = *(_QWORD *)(a1 + 8);
  v3 = (_QWORD *)(v2 + 8LL * (unsigned int)v1);
  v4 = (_QWORD *)(v2 + 8 * HIDWORD(v1));
  if ( v3 == v4 )
    goto LABEL_5;
  while ( !*v3 || !(unsigned __int8)sub_21B9810(*v3, 2323) )
  {
    if ( v4 == ++v3 )
      goto LABEL_5;
  }
  if ( v4 == v3 )
  {
LABEL_5:
    v5 = "hexagonv68";
    if ( *(_DWORD *)"hexagonv68" != 1635280232 )
      return v5;
    goto LABEL_17;
  }
  do
  {
    v7 = *v3;
    v8 = *(_QWORD *)(*v3 + 16LL);
    if ( !v8 )
      v8 = *v3;
    ++v3;
    *(_BYTE *)(v8 + 44) |= 1u;
    if ( v3 == v4 )
      break;
    while ( !*v3 || !(unsigned __int8)sub_21B9810(*v3, 2323) )
    {
      if ( v4 == ++v3 )
        goto LABEL_14;
    }
  }
  while ( v4 != v3 );
LABEL_14:
  v9 = *(const char ***)(v7 + 48);
  v5 = *v9;
  if ( *v9 && strlen(*v9) > 6 && *(_DWORD *)v5 == 1635280232 )
  {
LABEL_17:
    if ( *((_WORD *)v5 + 2) == 28519 && v5[6] == 110 )
      v5 += 7;
  }
  return v5;
}
