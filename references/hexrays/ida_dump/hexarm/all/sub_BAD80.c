__int64 __fastcall sub_BAD80(__int64 *a1)
{
  __int64 result; // rax
  bool v2; // zf
  __int64 v3; // rdi
  int v4; // r12d
  _QWORD *v5; // rbp
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rbx
  __int64 i; // r13
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // r15
  __int64 j; // rbx
  __int64 v14; // r13
  __int64 v15; // rdi
  unsigned __int64 *v16; // rax
  unsigned __int64 v17; // rbx
  __int64 *v18; // r13
  __int64 v19; // rdx
  __int64 v20; // rdi
  __int64 v21; // rdi
  __int64 v22; // r13
  __int64 v23; // r14
  __int64 v24; // r15
  __int64 v25; // rbx
  __int64 *v26; // rdi
  __int64 *v27; // rdi

  result = (__int64)a1;
  v2 = a1[1] == 0;
  v3 = *a1;
  if ( !v2 )
  {
    v4 = 0;
    result = 0;
    while ( 1 )
    {
      v5 = *(_QWORD **)(v3 + 8 * result);
      if ( v5 )
        break;
LABEL_30:
      result = ++v4;
      if ( v4 >= (unsigned __int64)a1[1] )
        goto LABEL_31;
    }
    v6 = v5[241];
    if ( v6 )
    {
      v5[242] = 0;
      qfree(v6);
    }
    v7 = v5[237];
    if ( v7 )
    {
      v8 = v5[238];
      if ( v8 )
      {
        for ( i = 0; i != v8; ++i )
        {
          v10 = i;
          sub_11C7E0(16 * v10 + v7);
          v7 = v5[237];
        }
      }
      v5[238] = 0;
      qfree(v7);
    }
    v11 = v5[234];
    if ( v11 )
    {
      v12 = v5[235];
      if ( v12 )
      {
        for ( j = 0; j != v12; ++j )
        {
          v14 = v11 + 40 * j;
          v15 = *(_QWORD *)(v14 + 16);
          if ( v15 )
          {
            *(_QWORD *)(v14 + 24) = 0;
            qfree(v15);
          }
          sub_11C7E0(v14);
          v11 = v5[234];
        }
      }
      v5[235] = 0;
      qfree(v11);
    }
    v16 = (unsigned __int64 *)v5[232];
    if ( !v16 )
    {
LABEL_24:
      v21 = v5[229];
      if ( v21 )
      {
        v22 = v5[230];
        if ( v22 )
        {
          v23 = 0;
          v24 = 0;
          do
          {
            v25 = v21 + v23;
            ++v24;
            v23 += 88;
            sub_11C7E0(v25 + 72);
            sub_11C7E0(v25 + 56);
            sub_11C7E0(v25 + 40);
            v21 = v5[229];
          }
          while ( v22 != v24 );
        }
        v5[230] = 0;
        qfree(v21);
      }
      sub_BAB60(v5 + 190);
      sub_83CD0((__int64)v5);
      j__qfree(v5);
      v3 = *a1;
      goto LABEL_30;
    }
    v17 = *v16;
    if ( !v5[233] )
    {
      *v16 = *v16 & 3 | (unsigned __int64)v16 & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(v5[232] + 8LL) = _mm_unpacklo_epi64(
                                      (__m128i)(unsigned __int64)v5[232],
                                      (__m128i)(unsigned __int64)v5[232]);
      *(_QWORD *)v5[232] &= ~1uLL;
      *(_QWORD *)v5[232] |= 2uLL;
LABEL_22:
      v20 = v5[232];
      if ( v20 )
        qfree(v20);
      goto LABEL_24;
    }
    v18 = (__int64 *)(v17 & 0xFFFFFFFFFFFFFFFCLL);
    v19 = *(_QWORD *)(v17 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v19 & 2) != 0 )
    {
LABEL_21:
      *v16 = v17 & 3 | (unsigned __int64)v16 & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(v5[232] + 8LL) = _mm_unpacklo_epi64(
                                      (__m128i)(unsigned __int64)v5[232],
                                      (__m128i)(unsigned __int64)v5[232]);
      *(_QWORD *)v5[232] &= ~1uLL;
      *(_QWORD *)v5[232] |= 2uLL;
      v5[233] = 0;
      goto LABEL_22;
    }
    v26 = (__int64 *)v18[1];
    if ( (*(_BYTE *)v26 & 2) != 0 )
    {
      v27 = (__int64 *)v18[2];
      if ( (*(_BYTE *)v27 & 2) != 0 )
        goto LABEL_43;
    }
    else
    {
      sub_B7F70(v26);
      v27 = (__int64 *)v18[2];
      if ( (*(_BYTE *)v27 & 2) != 0 )
        goto LABEL_38;
    }
    sub_B7F70(v27);
LABEL_38:
    v19 = *v18;
    if ( (*v18 & 2) != 0 )
    {
LABEL_39:
      if ( v17 > 3 )
        qfree(v17 & 0xFFFFFFFFFFFFFFFCLL);
      v16 = (unsigned __int64 *)v5[232];
      v17 = *v16;
      goto LABEL_21;
    }
LABEL_43:
    *v18 = v19 | 2;
    goto LABEL_39;
  }
LABEL_31:
  if ( v3 )
  {
    a1[1] = 0;
    return qfree(v3);
  }
  return result;
}
