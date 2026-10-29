void __fastcall sub_178F320(__int64 a1, __int64 a2, unsigned int *a3, unsigned __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // r13
  __int64 v7; // r14
  __int64 v8; // r13
  __int64 v9; // r12
  __int64 v10; // rdx
  __int64 v11; // rax
  int v12; // r15d
  unsigned __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // r15d
  __int64 *v20; // r14
  __int64 v21; // r12
  __int64 *v22; // r13
  __int64 v23; // rax
  __int64 v24; // r12
  __int64 *v25; // r12
  __int64 *i; // r12
  __int64 *v27; // rsi
  __int64 v28; // rdx
  __int64 v29; // rax

  v6 = a3[2];
  if ( v6 <= 1 )
    return;
  v7 = *(_QWORD *)a3;
  v8 = *(_QWORD *)a3 + 16 * v6;
  v9 = *(_QWORD *)a3 + 16LL;
  v10 = *(_QWORD *)(*(_QWORD *)a3 + 8LL);
  if ( v8 != v7 + 16 )
  {
    while ( 1 )
    {
      v12 = sub_178F000(a1, a2, v10, a4, a5, a6);
      if ( v12 < (int)sub_178F000(a1, a2, *(_QWORD *)(v9 + 8), v13, v14, v15) )
      {
        v11 = v9 + 16;
        v10 = *(_QWORD *)(v9 + 8);
        if ( v8 == v9 + 16 )
          break;
        v7 = v9;
      }
      else
      {
        v11 = v9 + 16;
        v10 = *(_QWORD *)(v7 + 8);
        if ( v8 == v9 + 16 )
          break;
      }
      v9 = v11;
    }
  }
  v19 = sub_178F000(a1, a2, v10, a4, a5, a6);
  v20 = *(__int64 **)a3;
  v21 = 16LL * a3[2];
  v22 = (__int64 *)(*(_QWORD *)a3 + v21);
  v23 = v21 >> 4;
  v24 = v21 >> 6;
  if ( v24 )
  {
    v25 = &v20[8 * v24];
    while ( (int)sub_178F000(a1, a2, v20[1], v16, v17, v18) >= v19 )
    {
      if ( (int)sub_178F000(a1, a2, v20[3], v16, v17, v18) < v19 )
      {
        v20 += 2;
        if ( v22 != v20 )
          goto LABEL_17;
        goto LABEL_21;
      }
      if ( (int)sub_178F000(a1, a2, v20[5], v16, v17, v18) < v19 )
      {
        v20 += 4;
        if ( v22 != v20 )
          goto LABEL_17;
        goto LABEL_21;
      }
      if ( (int)sub_178F000(a1, a2, v20[7], v16, v17, v18) < v19 )
      {
        v20 += 6;
        if ( v22 != v20 )
          goto LABEL_17;
        goto LABEL_21;
      }
      v20 += 8;
      if ( v20 == v25 )
      {
        v23 = ((char *)v22 - (char *)v20) >> 4;
        goto LABEL_27;
      }
    }
    goto LABEL_16;
  }
LABEL_27:
  switch ( v23 )
  {
    case 2LL:
LABEL_39:
      if ( (int)sub_178F000(a1, a2, v20[1], v16, v17, v18) < v19 )
        goto LABEL_16;
      v20 += 2;
LABEL_41:
      if ( v19 <= (int)sub_178F000(a1, a2, v20[1], v16, v17, v18) )
        break;
LABEL_16:
      if ( v22 != v20 )
      {
LABEL_17:
        for ( i = v20 + 2; v22 != i; i += 2 )
        {
          if ( v19 <= (int)sub_178F000(a1, a2, i[1], v16, v17, v18) )
          {
            v20 += 2;
            *(v20 - 2) = *i;
            *(v20 - 1) = i[1];
          }
        }
      }
      goto LABEL_21;
    case 3LL:
      if ( (int)sub_178F000(a1, a2, v20[1], v16, v17, v18) < v19 )
        goto LABEL_16;
      v20 += 2;
      goto LABEL_39;
    case 1LL:
      goto LABEL_41;
  }
  v20 = v22;
LABEL_21:
  v27 = *(__int64 **)a3;
  v28 = (*(_QWORD *)a3 + 16LL * a3[2] - (__int64)v22) >> 4;
  if ( *(_QWORD *)a3 + 16LL * a3[2] - (__int64)v22 > 0 )
  {
    do
    {
      v29 = *v22;
      v20 += 2;
      v22 += 2;
      *(v20 - 2) = v29;
      *(v20 - 1) = *(v22 - 1);
      --v28;
    }
    while ( v28 );
    v27 = *(__int64 **)a3;
  }
  a3[2] = ((char *)v20 - (char *)v27) >> 4;
}
