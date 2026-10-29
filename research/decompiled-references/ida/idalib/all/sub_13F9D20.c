__m128 *__fastcall sub_13F9D20(__m128 *a1, char *a2, _QWORD *a3)
{
  char *v3; // r12
  char *v5; // r14
  char *v6; // rbp
  signed __int64 v7; // rcx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // r15
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  unsigned __int64 v13; // r8
  char *v14; // rax
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // rdi
  __int64 v17; // rax
  __m128i v18; // xmm0
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rcx
  char *v21; // rax
  _QWORD *v22; // rcx
  __int64 v23; // rdx
  unsigned __int64 v24; // rcx
  __int64 v25; // rax
  __m128i v26; // xmm2
  __int64 v27; // rdi
  unsigned __int64 v28; // r12
  _QWORD *v29; // rdx
  __int64 v30; // rax
  char *i; // rbx
  _QWORD *v32; // r15
  unsigned __int8 *v33; // r12
  unsigned __int8 *v34; // r13
  __int64 v35; // rdx
  __int64 v36; // rdi
  __m128 *result; // rax
  unsigned __int64 v38; // rsi
  unsigned __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // [rsp+8h] [rbp-70h] BYREF
  __m128i v42; // [rsp+10h] [rbp-68h]
  unsigned __int64 v43; // [rsp+20h] [rbp-58h]
  __m128 *v44; // [rsp+28h] [rbp-50h]
  unsigned __int64 v45; // [rsp+30h] [rbp-48h]
  _QWORD *v46; // [rsp+38h] [rbp-40h]

  v3 = a2;
  v5 = (char *)a1->m128_u64[1];
  v6 = (char *)a1->m128_u64[0];
  v44 = a1;
  v7 = a2 - v6;
  v8 = (v5 - v6) >> 3;
  if ( !v8 )
  {
    v9 = 1;
    goto LABEL_38;
  }
  v9 = 2 * v8;
  v10 = -8;
  if ( v8 > 2 * v8 || v9 > 0x1FFFFFFFFFFFFFFFLL )
    goto LABEL_3;
  if ( v9 )
  {
LABEL_38:
    v10 = 8 * v9;
LABEL_3:
    v46 = a3;
    v42.m128i_i64[0] = v7;
    v11 = operator new(v10);
    v7 = v42.m128i_i64[0];
    a3 = v46;
    v43 = v11;
    v45 = v11 + v10;
    v41 = v11 + 8;
    goto LABEL_4;
  }
  v41 = 8;
  v45 = 0;
  v43 = 0;
LABEL_4:
  v12 = *a3;
  v13 = v43;
  *a3 = 0;
  *(_QWORD *)(v13 + v7) = v12;
  if ( a2 != v6 )
  {
    v14 = v6;
    v15 = (unsigned __int64)(a2 - 8 - v6) >> 3;
    if ( (v13 >= (unsigned __int64)(v6 + 16) || (unsigned __int64)v6 >= v13 + 16)
      && (unsigned __int64)(a2 - 8 - v6) > 0x10 )
    {
      v16 = v15 + 1;
      v17 = 0;
      do
      {
        v18 = _mm_loadu_si128((const __m128i *)&v6[v17]);
        v19 = v43;
        *(_OWORD *)&v6[v17] = 0;
        *(__m128i *)(v19 + v17) = v18;
        v17 += 16;
      }
      while ( 16 * ((v15 + 1) >> 1) != v17 );
      v20 = 8 * (v16 & 0xFFFFFFFFFFFFFFFELL);
      v21 = &v6[v20];
      v22 = (_QWORD *)(v43 + v20);
      if ( v16 != (v16 & 0xFFFFFFFFFFFFFFFELL) )
      {
        v23 = *(_QWORD *)v21;
        *(_QWORD *)v21 = 0;
        *v22 = v23;
      }
    }
    else
    {
      v39 = v43;
      do
      {
        v40 = *(_QWORD *)v14;
        *(_QWORD *)v14 = 0;
        v14 += 8;
        v39 += 8LL;
        *(_QWORD *)(v39 - 8) = v40;
      }
      while ( a2 != v14 );
    }
    v41 = v43 + 8 * v15 + 16;
  }
  if ( a2 != v5 )
  {
    v24 = ((unsigned __int64)(v5 - a2 - 8) >> 3) + 1;
    if ( v5 - a2 == 8 )
    {
      v29 = (_QWORD *)v41;
    }
    else
    {
      v25 = 0;
      do
      {
        v26 = _mm_loadu_si128((const __m128i *)&a2[v25]);
        v27 = v41;
        *(_OWORD *)&a2[v25] = 0;
        *(__m128i *)(v27 + v25) = v26;
        v25 += 16;
        v42 = v26;
      }
      while ( 16 * (v24 >> 1) != v25 );
      v28 = 8 * (v24 & 0xFFFFFFFFFFFFFFFELL);
      v29 = (_QWORD *)(v27 + v28);
      v3 = &a2[v28];
      if ( v24 == (v24 & 0xFFFFFFFFFFFFFFFELL) )
        goto LABEL_18;
    }
    v30 = *(_QWORD *)v3;
    *(_QWORD *)v3 = 0;
    *v29 = v30;
LABEL_18:
    v41 += 8 * v24;
  }
  for ( i = v6; i != v5; i += 8 )
  {
    v32 = *(_QWORD **)i;
    if ( *(_QWORD *)i )
    {
      v33 = (unsigned __int8 *)v32[4];
      v34 = (unsigned __int8 *)v32[3];
      if ( v33 != v34 )
      {
        do
        {
          while ( 1 )
          {
            v35 = v34[136];
            if ( (_BYTE)v35 == 0xFF )
              break;
            v36 = (__int64)v34;
            v34 += 144;
            ((void (__fastcall *)(__int64))funcs_13F3420[v35])(v36);
            if ( v33 == v34 )
              goto LABEL_24;
          }
          v34 += 144;
        }
        while ( v33 != v34 );
LABEL_24:
        v34 = (unsigned __int8 *)v32[3];
      }
      if ( v34 )
        operator delete(v34);
      operator delete(v32, 0x30u);
    }
  }
  if ( v6 )
    operator delete(v6);
  result = v44;
  v38 = v45;
  *v44 = _mm_loadh_ps((const double *)&v41);
  result[1].m128_u64[0] = v38;
  return result;
}
