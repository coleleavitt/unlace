/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_AF624
// Address: 0x00000000000AF624

//----- (00000000000AF624) ----------------------------------------------------
__int64 __usercall sub_AF624@<X0>(char *s@<X1>, __int64 result@<X0>, __int64 a3@<X8>)
{
  __int64 v3; // x23
  __int64 *v4; // x22
  __int64 v7; // x24
  unsigned __int64 v8; // x2
  size_t v9; // x21
  __int64 v10; // x25
  unsigned __int64 v11; // x9
  __int64 v12; // x8
  __int64 v13; // x10
  __int64 *v14; // x12
  __int64 v15; // x13
  __int64 v16; // x14
  __int64 v17; // x15
  __int64 v18; // t1
  __int64 v19; // x17
  __int64 v20; // x14
  __int64 v21; // x15
  __int64 v22; // x9
  __int64 v23; // x9
  unsigned __int64 v24; // x23
  void *v25; // x1
  __int64 v26; // x8
  size_t v27; // x22
  void *v28; // x1
  __int64 v29; // x9
  __int64 v30; // x26
  __int64 v31; // x23

  *(_QWORD *)(a3 + 8) = 0;
  *(_QWORD *)(a3 + 16) = 0;
  *(_QWORD *)a3 = 0;
  v3 = *(_QWORD *)(result + 8);
  if ( !v3 )
    return result;
  v4 = (__int64 *)result;
  result = strlen(s);
  v7 = *v4;
  v8 = result * (v3 - 1);
  v9 = result;
  v10 = *v4 + 24 * v3;
  if ( 24 * v3 )
  {
    v11 = ((unsigned __int64)(8 * v3 - 8) >> 3) + 1;
    if ( v11 > 1 )
    {
      v13 = 0;
      v12 = v7 + 24 * (v11 & 0x3FFFFFFFFFFFFFFELL);
      v14 = (__int64 *)(v7 + 32);
      v15 = v11 & 0x3FFFFFFFFFFFFFFELL;
      do
      {
        v16 = *(v14 - 3);
        v18 = *v14;
        v14 += 6;
        v17 = v18;
        v19 = v18 - 1;
        if ( v16 )
          v20 = v16 - 1;
        else
          v20 = 0;
        if ( v17 )
          v21 = v19;
        else
          v21 = 0;
        v8 += v20;
        v15 -= 2;
        v13 += v21;
      }
      while ( v15 );
      v8 += v13;
      if ( v11 == (v11 & 0x3FFFFFFFFFFFFFFELL) )
        goto LABEL_18;
    }
    else
    {
      v12 = *v4;
    }
    do
    {
      v22 = *(_QWORD *)(v12 + 8);
      v12 += 24;
      if ( v22 )
        v23 = v22 - 1;
      else
        v23 = 0;
      v8 += v23;
    }
    while ( v10 != v12 );
  }
LABEL_18:
  if ( *(_QWORD *)(a3 + 16) < v8 )
  {
    result = (__int64)qvector_reserve((pthread_mutex_t *)a3, *(void **)a3, v8, 1u);
    *(_QWORD *)a3 = result;
    v7 = *v4;
    v10 = *v4 + 24 * v4[1];
  }
  for ( ; v10 != v7; v7 += 24 )
  {
    v24 = *(_QWORD *)(a3 + 8);
    if ( v24 >= 2 )
    {
      v25 = *(void **)a3;
      if ( *(_QWORD *)(a3 + 16) < v24 + v9 )
      {
        v25 = qvector_reserve((pthread_mutex_t *)a3, v25, v24 + v9, 1u);
        *(_QWORD *)a3 = v25;
      }
      *(_QWORD *)(a3 + 8) = v24 + v9;
      *((_BYTE *)v25 + v24 + v9 - 1) = 0;
      result = (__int64)memmove((void *)(*(_QWORD *)a3 + v24 - 1), s, v9);
    }
    v26 = *(_QWORD *)(v7 + 8);
    if ( v26 )
    {
      v27 = v26 - 1;
      if ( v26 != 1 )
      {
        v28 = *(void **)a3;
        v29 = *(_QWORD *)(a3 + 8);
        if ( v29 )
          v30 = v29 - 1;
        else
          v30 = 0;
        v31 = v30 + v26;
        if ( *(_QWORD *)(a3 + 16) < (unsigned __int64)(v30 + v26) )
        {
          v28 = qvector_reserve((pthread_mutex_t *)a3, v28, v30 + v26, 1u);
          *(_QWORD *)a3 = v28;
        }
        *(_QWORD *)(a3 + 8) = v31;
        *((_BYTE *)v28 + v30 + v27) = 0;
        result = (__int64)memcpy((void *)(*(_QWORD *)a3 + v30), *(const void **)v7, v27);
      }
    }
  }
  return result;
}
