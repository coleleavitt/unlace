unsigned __int64 *__fastcall sub_13719B0(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v4; // rbx
  __int64 i; // r11
  __int64 v6; // r8
  __int64 v7; // rax
  unsigned __int64 *v8; // r13
  unsigned __int64 *result; // rax
  unsigned __int64 v10; // r9
  __int64 v11; // r10
  unsigned int v12; // r12d
  unsigned __int64 v13; // r9
  __int64 v14; // r10
  __int64 v15; // r9
  unsigned __int64 *v16; // r10
  unsigned __int64 v17; // rax
  __int64 v18; // rdx
  unsigned int v19; // r11d
  unsigned __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // r8
  unsigned __int64 v23; // rdx

  v4 = (a3 - 1) / 2;
  if ( a2 >= v4 )
  {
    result = (unsigned __int64 *)(a1 + 8 * a2);
    if ( (a3 & 1) != 0 )
      goto LABEL_29;
    v6 = a2;
    goto LABEL_35;
  }
  for ( i = a2; ; i = v6 )
  {
    v6 = 2 * (i + 1);
    v7 = 16 * (i + 1);
    v8 = (unsigned __int64 *)(a1 + v7 - 8);
    result = (unsigned __int64 *)(a1 + v7);
    v10 = *result;
    while ( 1 )
    {
      v11 = *(_QWORD *)(v10 + 8);
      if ( !v11 )
        break;
      v10 = v11 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v11 & 4) == 0 || !v10 )
        goto LABEL_7;
    }
    v10 = 0;
LABEL_7:
    v12 = *(_DWORD *)(v10 + 72);
    v13 = *v8;
    while ( 1 )
    {
      v14 = *(_QWORD *)(v13 + 8);
      if ( !v14 )
        break;
      v13 = v14 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v14 & 4) == 0 || !v13 )
        goto LABEL_11;
    }
    v13 = 0;
LABEL_11:
    if ( v12 < *(_DWORD *)(v13 + 72) )
      break;
    *(_QWORD *)(a1 + 8 * i) = *result;
    if ( v6 >= v4 )
      goto LABEL_15;
LABEL_13:
    ;
  }
  --v6;
  result = (unsigned __int64 *)(a1 + 8 * v6);
  *(_QWORD *)(a1 + 8 * i) = *result;
  if ( v6 < v4 )
    goto LABEL_13;
LABEL_15:
  if ( (a3 & 1) == 0 )
  {
LABEL_35:
    if ( (a3 - 2) / 2 == v6 )
    {
      v22 = 2 * v6 + 2;
      v23 = *(_QWORD *)(a1 + 8 * v22 - 8);
      v6 = v22 - 1;
      *result = v23;
      result = (unsigned __int64 *)(a1 + 8 * v6);
    }
  }
  v15 = (v6 - 1) / 2;
  if ( v6 <= a2 )
  {
LABEL_29:
    *result = a4;
    return result;
  }
  while ( 2 )
  {
    v16 = (unsigned __int64 *)(a1 + 8 * v15);
    v17 = *v16;
    while ( 1 )
    {
      v18 = *(_QWORD *)(v17 + 8);
      if ( !v18 )
        break;
      v17 = v18 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v18 & 4) == 0 || !v17 )
        goto LABEL_21;
    }
    v17 = 0;
LABEL_21:
    v19 = *(_DWORD *)(v17 + 72);
    v20 = a4;
    do
    {
      v21 = *(_QWORD *)(v20 + 8);
      if ( !v21 )
      {
        result = (unsigned __int64 *)(a1 + 8 * v6);
        goto LABEL_29;
      }
      v20 = v21 & 0xFFFFFFFFFFFFFFF8LL;
    }
    while ( (v21 & 4) != 0 && v20 );
    result = (unsigned __int64 *)(a1 + 8 * v6);
    if ( v19 >= *(_DWORD *)(v20 + 72) )
      goto LABEL_29;
    v6 = v15;
    *result = *v16;
    if ( a2 < v15 )
    {
      v15 = (v15 - 1) / 2;
      continue;
    }
    break;
  }
  *v16 = a4;
  return (unsigned __int64 *)(a1 + 8 * v15);
}
