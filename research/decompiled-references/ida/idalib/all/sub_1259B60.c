void __fastcall sub_1259B60(__m128 *a1, char *a2, _WORD *a3)
{
  __m128 *v3; // rcx
  char *v4; // r13
  char *v6; // r15
  char *v7; // r12
  char *v8; // r8
  __int64 v9; // rax
  __int64 v10; // rdi
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // rbp
  __int64 v15; // r14
  char *v16; // rax
  unsigned __int64 v17; // rdi
  unsigned __int64 v18; // r8
  __int64 v19; // rdx
  unsigned __int64 v20; // rdx
  char *v21; // rax
  _WORD *v22; // rdx
  unsigned __int64 v23; // rdi
  __int64 v24; // rdx
  unsigned __int64 v25; // r13
  _WORD *v26; // rdx
  unsigned __int64 v27; // rdx
  char v28; // r9
  char v29; // r8
  __int64 v30; // [rsp+8h] [rbp-50h] BYREF
  __m128 *v31; // [rsp+10h] [rbp-48h]
  _WORD *v32; // [rsp+18h] [rbp-40h]

  v3 = a1;
  v4 = a2;
  v6 = (char *)a1->m128_u64[1];
  v7 = (char *)a1->m128_u64[0];
  v8 = &a2[-a1->m128_u64[0]];
  v9 = (__int64)&v6[-a1->m128_u64[0]];
  if ( !(v9 >> 1) )
  {
    v10 = 1;
    goto LABEL_38;
  }
  v10 = a1->m128_u64[1] - a1->m128_u64[0];
  v11 = -2;
  if ( v9 >> 1 > (unsigned __int64)v9 || v9 < 0 )
    goto LABEL_3;
  if ( v9 )
  {
LABEL_38:
    v11 = 2 * v10;
LABEL_3:
    v32 = a3;
    v31 = v3;
    v30 = (__int64)v8;
    v12 = operator new(v11);
    v8 = (char *)v30;
    v3 = v31;
    a3 = v32;
    v13 = v12 + v11;
    v14 = v12;
    v15 = v12 + 2;
    goto LABEL_4;
  }
  v15 = 2;
  v13 = 0;
  v14 = 0;
LABEL_4:
  *(_WORD *)&v8[v14] = *a3;
  if ( a2 != v7 )
  {
    v16 = v7;
    v17 = (unsigned __int64)(a2 - 2 - v7) >> 1;
    if ( (v14 >= (unsigned __int64)(v7 + 16) || (unsigned __int64)v7 >= v14 + 16)
      && (unsigned __int64)(a2 - 2 - v7) > 0xC )
    {
      v18 = v17 + 1;
      v19 = 0;
      do
      {
        *(__m128i *)(v14 + v19) = _mm_loadu_si128((const __m128i *)&v7[v19]);
        v19 += 16;
      }
      while ( v19 != 16 * ((v17 + 1) >> 3) );
      v20 = 2 * (v18 & 0xFFFFFFFFFFFFFFF8LL);
      v21 = &v7[v20];
      v22 = (_WORD *)(v14 + v20);
      if ( v18 != (v18 & 0xFFFFFFFFFFFFFFF8LL) )
      {
        *v22 = *(_WORD *)v21;
        if ( a2 != v21 + 2 )
        {
          v22[1] = *((_WORD *)v21 + 1);
          if ( a2 != v21 + 4 )
          {
            v22[2] = *((_WORD *)v21 + 2);
            if ( a2 != v21 + 6 )
            {
              v22[3] = *((_WORD *)v21 + 3);
              if ( a2 != v21 + 8 )
              {
                v22[4] = *((_WORD *)v21 + 4);
                if ( a2 != v21 + 10 )
                {
                  v22[5] = *((_WORD *)v21 + 5);
                  if ( a2 != v21 + 12 )
                    v22[6] = *((_WORD *)v21 + 6);
                }
              }
            }
          }
        }
      }
    }
    else
    {
      v27 = v14;
      do
      {
        v28 = *v16;
        v29 = v16[1];
        v16 += 2;
        v27 += 2LL;
        *(_BYTE *)(v27 - 2) = v28;
        *(_BYTE *)(v27 - 1) = v29;
      }
      while ( a2 != v16 );
    }
    v15 = v14 + 2 * v17 + 4;
  }
  if ( a2 != v6 )
  {
    v23 = ((unsigned __int64)(v6 - a2 - 2) >> 1) + 1;
    if ( (unsigned __int64)(v6 - a2 - 2) <= 0xC )
    {
      v26 = (_WORD *)v15;
    }
    else
    {
      v24 = 0;
      do
      {
        *(__m128i *)(v15 + v24) = _mm_loadu_si128((const __m128i *)&a2[v24]);
        v24 += 16;
      }
      while ( v24 != 16 * (v23 >> 3) );
      v25 = 2 * (v23 & 0xFFFFFFFFFFFFFFF8LL);
      v26 = (_WORD *)(v15 + v25);
      v4 = &a2[v25];
      if ( v23 == (v23 & 0xFFFFFFFFFFFFFFF8LL) )
      {
LABEL_30:
        v15 += 2 * v23;
        goto LABEL_31;
      }
    }
    *v26 = *(_WORD *)v4;
    if ( v6 != v4 + 2 )
    {
      v26[1] = *((_WORD *)v4 + 1);
      if ( v6 != v4 + 4 )
      {
        v26[2] = *((_WORD *)v4 + 2);
        if ( v6 != v4 + 6 )
        {
          v26[3] = *((_WORD *)v4 + 3);
          if ( v6 != v4 + 8 )
          {
            v26[4] = *((_WORD *)v4 + 4);
            if ( v6 != v4 + 10 )
            {
              v26[5] = *((_WORD *)v4 + 5);
              if ( v6 != v4 + 12 )
                v26[6] = *((_WORD *)v4 + 6);
            }
          }
        }
      }
    }
    goto LABEL_30;
  }
LABEL_31:
  if ( v7 )
  {
    v31 = v3;
    v30 = v13;
    operator delete(v7);
    v3 = v31;
  }
  v30 = v15;
  v3[1].m128_u64[0] = v13;
  *v3 = _mm_loadh_ps((const double *)&v30);
}
