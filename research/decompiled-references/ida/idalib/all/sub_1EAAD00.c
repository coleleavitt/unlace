_QWORD *__fastcall sub_1EAAD00(_QWORD *a1, __int64 a2, __int64 *a3)
{
  _QWORD *result; // rax
  unsigned __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // rcx
  __int64 i; // rcx
  unsigned __int64 v9; // rcx
  __int64 v10; // rcx
  unsigned __int64 v11; // rcx
  __int64 v12; // rsi

  a1[4] = 0;
  result = a1;
  v4 = (unsigned __int64)a3;
  while ( 1 )
  {
    v5 = *(_QWORD *)(v4 + 8);
    if ( !v5 )
      break;
    v4 = v5 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v5 & 4) == 0 || !v4 )
      goto LABEL_5;
  }
  v4 = 0;
LABEL_5:
  v6 = *(_QWORD *)(a2 + 8);
  *result = *(_QWORD *)(v4 + 32);
  v7 = 0;
  if ( *(_BYTE *)(v6 + 210) )
  {
    v11 = (unsigned __int64)a3;
    while ( 1 )
    {
      v12 = *(_QWORD *)(v11 + 8);
      if ( !v12 )
        break;
      v11 = v12 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v12 & 4) == 0 || !v11 )
      {
        v7 = *(_QWORD *)(v11 + 40);
        goto LABEL_6;
      }
    }
    v7 = 46966720;
  }
LABEL_6:
  result[1] = v7;
  for ( i = a3[1]; i; i = *(_QWORD *)(v9 + 8) )
  {
    if ( (i & 4) == 0 )
      break;
    v9 = i & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v9 )
      break;
    a3 = (__int64 *)v9;
  }
  v10 = *a3;
  result[2] = a3 + 4;
  result[3] = v10;
  return result;
}
