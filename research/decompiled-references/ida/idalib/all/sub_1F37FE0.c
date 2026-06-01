void __fastcall sub_1F37FE0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 *v7; // rbx
  __int64 v8; // rax
  unsigned __int64 *v9; // rbp
  unsigned __int64 v10; // rsi
  void **v11; // rbp
  __int64 v12; // r12
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __m128i v17; // xmm2
  __int64 v18; // r14
  void *v19; // rax
  __m128i v20; // xmm0
  __int64 v21; // rax
  __int64 *v22; // rbx
  __m128 v23; // xmm1
  _QWORD *v24; // rax
  void **v25; // r13
  _QWORD *v26; // rax
  unsigned __int64 v27; // rbp
  void **v28; // r12
  void *v29; // rdi
  __m128 v30; // xmm0
  __int64 v31; // rbp
  unsigned __int8 v32; // al
  unsigned __int64 v33; // rdi
  int v34; // eax
  unsigned __int64 v35; // rax
  __int64 *i; // rax
  __int64 v37; // r12
  __int64 v38; // rax
  __m128i v39; // xmm0
  __int64 *j; // rax
  __int64 v41; // rbx
  __int64 v42; // rax
  __m128i v43; // xmm0
  unsigned __int64 *v44; // rbx
  unsigned __int64 *v45; // rbp
  unsigned __int64 v46; // rsi
  unsigned __int64 v47; // rbx
  void *v48; // rdi
  unsigned __int8 v49; // al
  __int64 v50; // rax
  __m128 v51; // xmm5
  __m128i v52; // [rsp+0h] [rbp-78h] BYREF
  void *v53; // [rsp+10h] [rbp-68h]
  void *v54; // [rsp+18h] [rbp-60h]
  __m128i v55; // [rsp+20h] [rbp-58h] BYREF
  __int64 v56; // [rsp+30h] [rbp-48h] BYREF
  _QWORD *v57; // [rsp+38h] [rbp-40h]

  if ( *(_BYTE *)(a1 + 9412) )
  {
    v7 = *(unsigned __int64 **)(a1 + 5192);
    v8 = *(unsigned int *)(a1 + 5200);
    *(_BYTE *)(a1 + 9412) = 0;
    v9 = &v7[v8];
    while ( v9 != v7 )
    {
      v10 = *v7++;
      sub_1EDB980((_QWORD *)a1, v10, a3, a4, a5, a6);
    }
    *(_DWORD *)(a1 + 5200) = 0;
    v11 = (void **)operator new(0x40u);
    v12 = (__int64)(v11 + 3);
    v52.m128i_i64[0] = operator new(0x200u);
    v17 = _mm_loadl_epi64(&v52);
    v11[3] = (void *)v17.m128i_i64[0];
    v18 = v17.m128i_i64[0] + 512;
    v54 = *(void **)(a1 + 10400);
    if ( v54 )
    {
      v19 = *(void **)(a1 + 10424);
      v52.m128i_i64[1] = (__int64)(v11 + 3);
      v20 = _mm_unpacklo_epi64(v17, v17);
      v53 = v19;
      v21 = *(_QWORD *)(a1 + 10448);
      *(_QWORD *)(a1 + 10400) = v11;
      v22 = *(__int64 **)(a1 + 10416);
      v23 = _mm_loadh_ps((const double *)&v52.m128i_i64[1]);
      v52.m128i_i64[1] = v21;
      v24 = *(_QWORD **)(a1 + 10472);
      v18 = *(_QWORD *)(a1 + 10432);
      v25 = *(void ***)(a1 + 10440);
      *(_QWORD *)(a1 + 10408) = 8;
      v57 = v24;
      v26 = v11 + 3;
      v55 = (__m128i)v23;
      *(__m128i *)(a1 + 10416) = v20;
      *(__m128 *)(a1 + 10432) = v23;
      *(__m128i *)(a1 + 10448) = v20;
      *(__m128 *)(a1 + 10464) = v23;
      v56 = v17.m128i_i64[0];
    }
    else
    {
      v25 = v11 + 3;
      v57 = v11 + 3;
      v12 = *(_QWORD *)(a1 + 10440);
      v22 = (__int64 *)v17.m128i_i64[0];
      v50 = *(_QWORD *)(a1 + 10424);
      v52.m128i_i64[1] = v17.m128i_i64[0];
      v55.m128i_i64[0] = v12;
      v13 = *(_QWORD *)(a1 + 10416);
      v56 = v50;
      v26 = *(_QWORD **)(a1 + 10472);
      v53 = (void *)v17.m128i_i64[0];
      v51 = _mm_loadh_ps((const double *)v55.m128i_i64);
      v52.m128i_i64[0] = v13;
      v54 = v11;
      v55 = (__m128i)v51;
    }
    v27 = (unsigned __int64)(v26 + 1);
    v28 = (void **)(v12 + 8);
    if ( v26 + 1 > v28 )
    {
      do
      {
        v29 = *v28++;
        operator delete(v29);
      }
      while ( v27 > (unsigned __int64)v28 );
    }
    v30 = _mm_loadh_ps((const double *)&v56);
    *(__m128i *)(a1 + 10464) = _mm_load_si128(&v55);
    *(__m128 *)(a1 + 10448) = v30;
    while ( v22 != (__int64 *)v52.m128i_i64[1] )
    {
      v31 = *v22;
      if ( v22 == (__int64 *)(v18 - 8) )
      {
        ++v25;
        operator delete(v53);
        v22 = (__int64 *)*v25;
        v18 = (__int64)*v25 + 512;
        v53 = *v25;
      }
      else
      {
        ++v22;
      }
      v32 = *(_BYTE *)(v31 + 28) & 0x7F;
      if ( (unsigned int)v32 - 40 <= 6 && ((v32 + 85) & 0x7D) != 0 )
      {
        v33 = *(_QWORD *)(v31 + 16) & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_QWORD *)(v31 + 16) & 4) != 0 )
          v33 = *(_QWORD *)(v33 + 8);
        v34 = *(_BYTE *)(sub_B8EAA0(v33) + 8) & 0x7F;
        if ( v34 == 24 || !v34 )
          goto LABEL_40;
        if ( (*(_BYTE *)(v31 + 28) & 0x7F) != 0x2B )
        {
          v35 = *(_QWORD *)(v31 + 16) & 0xFFFFFFFFFFFFFFF8LL;
          if ( (*(_QWORD *)(v31 + 16) & 4) != 0 )
            v35 = *(_QWORD *)v35;
          if ( ((*(_BYTE *)(v35 + 8) + 70) & 0x7Fu) <= 3 )
          {
LABEL_40:
            v49 = sub_B81B70(v31);
            if ( !v49 )
              goto LABEL_48;
            if ( v49 > 3u )
            {
              if ( v49 > 6u )
              {
LABEL_48:
                ++*((_DWORD *)v22 + 908);
                BUG();
              }
            }
            else
            {
              sub_B73640(v31);
            }
          }
        }
      }
LABEL_24:
      for ( i = *(__int64 **)(a1 + 10416); *(__int64 **)(a1 + 10448) != i; i = *(__int64 **)(a1 + 10416) )
      {
        v37 = *i;
        if ( i == (__int64 *)(*(_QWORD *)(a1 + 10432) - 8LL) )
        {
          operator delete(*(void **)(a1 + 10424));
          v38 = *(_QWORD *)(a1 + 10440);
          v52.m128i_i64[0] = *(_QWORD *)(v38 + 8);
          v39 = _mm_loadl_epi64(&v52);
          *(__m128i *)(a1 + 10416) = _mm_unpacklo_epi64(v39, v39);
          v52.m128i_i64[0] = v38 + 8;
          *(__m128 *)(a1 + 10432) = _mm_loadh_ps((const double *)v52.m128i_i64);
          if ( !(unsigned __int8)sub_1F37DC0(a1, v37) )
            goto LABEL_24;
        }
        else
        {
          *(_QWORD *)(a1 + 10416) = i + 1;
          if ( !(unsigned __int8)sub_1F37DC0(a1, v37) )
            goto LABEL_24;
        }
        sub_1EAB530(a1, v37);
      }
      if ( (unsigned __int8)sub_1F37DC0(a1, v31) )
        sub_1EAB530(a1, v31);
    }
LABEL_31:
    for ( j = *(__int64 **)(a1 + 10416); *(__int64 **)(a1 + 10448) != j; j = *(__int64 **)(a1 + 10416) )
    {
      v41 = *j;
      if ( j == (__int64 *)(*(_QWORD *)(a1 + 10432) - 8LL) )
      {
        operator delete(*(void **)(a1 + 10424));
        v42 = *(_QWORD *)(a1 + 10440);
        v52.m128i_i64[0] = *(_QWORD *)(v42 + 8);
        v43 = _mm_loadl_epi64(&v52);
        *(__m128i *)(a1 + 10416) = _mm_unpacklo_epi64(v43, v43);
        v52.m128i_i64[0] = v42 + 8;
        *(__m128 *)(a1 + 10432) = _mm_loadh_ps((const double *)v52.m128i_i64);
        if ( !(unsigned __int8)sub_1F37DC0(a1, v41) )
          goto LABEL_31;
      }
      else
      {
        *(_QWORD *)(a1 + 10416) = j + 1;
        if ( !(unsigned __int8)sub_1F37DC0(a1, v41) )
          goto LABEL_31;
      }
      sub_1EAB530(a1, v41);
    }
    v44 = *(unsigned __int64 **)(a1 + 5336);
    v45 = &v44[*(unsigned int *)(a1 + 5344)];
    while ( v45 != v44 )
    {
      v46 = *v44++;
      sub_1EDB980((_QWORD *)a1, v46, v13, v14, v15, v16);
      sub_1EAB5F0(a1);
    }
    *(_DWORD *)(a1 + 5344) = 0;
    v47 = (unsigned __int64)(v57 + 1);
    if ( v57 + 1 > v25 )
    {
      do
      {
        v48 = *v25++;
        operator delete(v48);
      }
      while ( v47 > (unsigned __int64)v25 );
    }
    operator delete(v54);
    *(_BYTE *)(a1 + 9412) = 1;
  }
}
