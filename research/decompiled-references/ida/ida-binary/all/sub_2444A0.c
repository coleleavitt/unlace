__int64 __fastcall sub_2444A0(__int64 a1, __int64 *a2, unsigned int a3)
{
  __int64 *v4; // rbp
  __int64 v6; // r13
  __int64 v7; // r14
  _QWORD *v8; // r12
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // r13
  int v12; // r12d
  __int64 v13; // rax
  const __m128i *v14; // rcx
  void *v15; // r14
  size_t v16; // r13
  __int64 v17; // rax
  void *v18; // r15
  __int64 v19; // r9
  __int16 v20; // r10
  __int64 v21; // rax
  __int64 *v22; // rax
  __m128i v23; // xmm0
  __int64 v24; // rdi
  __int64 v25; // r14
  __int64 v26; // r13
  _QWORD *v27; // r12
  __int64 v28; // rdi
  __int64 v29; // rdi
  __int64 v30; // r14
  __int64 *v31; // r15
  __int64 v32; // r12
  __int64 v33; // rbx
  __int64 i; // r13
  __int64 v35; // rsi
  __int64 v36; // rdi
  __int64 v37; // r14
  _QWORD *v38; // r12
  __int64 v39; // rdi
  __int64 v40; // rdi
  __int64 v41; // rax
  const char *v42; // rsi
  __int64 v43; // rax
  const char *v44; // rsi
  const char *v45; // rdi
  __int64 v46; // rdi
  __m128i n; // [rsp+0h] [rbp-D8h] BYREF
  __int64 v48; // [rsp+10h] [rbp-C8h]
  __int16 v49; // [rsp+1Eh] [rbp-BAh]
  __int64 v50; // [rsp+20h] [rbp-B8h] BYREF
  __int128 v51; // [rsp+28h] [rbp-B0h]
  __m128i v52; // [rsp+40h] [rbp-98h] BYREF
  __int64 v53; // [rsp+80h] [rbp-58h]
  __int16 v54; // [rsp+88h] [rbp-50h]
  unsigned __int64 v55; // [rsp+98h] [rbp-40h]

  v55 = __readfsqword(0x28u);
  v4 = a2;
  switch ( a3 )
  {
    case 0xFFFFFFFA:
      if ( !*(_BYTE *)(a1 + 56) )
        return 4294967290LL;
      a2 = (__int64 *)(a1 + 64);
      sub_22BB70(v4, (_QWORD *)(a1 + 64));
      goto LABEL_10;
    case 0xFFFFFFFB:
    case 0xFFFFFFFE:
      return a3;
    case 0xFFFFFFFC:
      sub_234E50(a2, (const char *)a2);
      goto LABEL_10;
    case 1u:
      sub_22BB70((__int64 *)(a1 + 64), a2);
      v11 = *(_QWORD *)(a1 + 16);
      if ( !v11 )
        goto LABEL_37;
      goto LABEL_11;
    default:
      v6 = a2[1];
      v7 = 0;
      if ( v6 )
      {
        do
        {
          v8 = (_QWORD *)(*a2 + 80 * v7);
          v9 = v8[5];
          if ( v9 )
          {
            v8[6] = 0;
            qfree(v9, (const char *)a2);
          }
          v10 = v8[2];
          if ( v10 )
          {
            v8[3] = 0;
            qfree(v10, (const char *)a2);
          }
          ++v7;
        }
        while ( v6 != v7 );
      }
      a2[1] = 0;
LABEL_10:
      v11 = *(_QWORD *)(a1 + 16);
      if ( v11 )
      {
LABEL_11:
        v12 = 0;
        v13 = 0;
        v50 = 0;
        v51 = 0;
        do
        {
          while ( 1 )
          {
            v14 = (const __m128i *)(*(_QWORD *)(a1 + 8) + 80 * v13);
            if ( (v14[4].m128i_i8[9] & 7) != 0 )
              break;
            v13 = ++v12;
            if ( (unsigned __int64)v12 >= *(_QWORD *)(a1 + 16) )
              goto LABEL_21;
          }
          v15 = nullptr;
          v52 = _mm_loadu_si128(v14);
          v16 = v14[1].m128i_u64[1];
          if ( v16 )
          {
            v46 = v14[1].m128i_i64[1];
            n.m128i_i64[0] = (__int64)v14;
            n.m128i_i64[1] = (__int64)&v50;
            v15 = (void *)qalloc_or_throw(v46);
            memcpy(v15, *(const void **)(n.m128i_i64[0] + 16), v16);
            v14 = (const __m128i *)n.m128i_i64[0];
          }
          v17 = v14[3].m128i_i64[0];
          v18 = nullptr;
          n.m128i_i64[0] = v17;
          if ( v17 )
          {
            n.m128i_i64[1] = (__int64)v14;
            v18 = (void *)qalloc_or_throw(v17);
            memcpy(v18, *(const void **)(n.m128i_i64[1] + 40), n.m128i_u64[0]);
            v14 = (const __m128i *)n.m128i_i64[1];
          }
          v19 = v14[4].m128i_i64[0];
          v20 = v14[4].m128i_i16[4];
          v21 = v51;
          a2 = (__int64 *)v50;
          v53 = v19;
          v54 = v20;
          if ( *((_QWORD *)&v51 + 1) < (unsigned __int64)(v51 + 1) )
          {
            v49 = v20;
            v48 = v19;
            n.m128i_i64[1] = (__int64)&v50;
            v50 = qvector_reserve(&v50, v50, v51 + 1, 80);
            a2 = (__int64 *)v50;
            v20 = v49;
            v21 = v51;
            v19 = v48;
          }
          ++v12;
          v22 = &a2[10 * v21];
          *(__m128i *)v22 = _mm_load_si128(&v52);
          v22[2] = (__int64)v15;
          *(__m128i *)(v22 + 3) = _mm_unpacklo_epi64((__m128i)v16, (__m128i)v16);
          v23 = _mm_loadl_epi64(&n);
          v22[5] = (__int64)v18;
          v22[8] = v19;
          *((_WORD *)v22 + 36) = v20;
          *((__m128i *)v22 + 3) = _mm_unpacklo_epi64(v23, v23);
          v13 = v12;
          *(_QWORD *)&v51 = v51 + 1;
        }
        while ( (unsigned __int64)v12 < *(_QWORD *)(a1 + 16) );
LABEL_21:
        if ( (_QWORD)v51 )
        {
          a2 = v4;
          n.m128i_i64[1] = (__int64)&v50;
          sub_243ED0(v4, v4, &v50);
          v24 = v50;
          if ( !v50 )
            goto LABEL_31;
          v25 = v51;
          if ( (_QWORD)v51 )
          {
            v26 = 0;
            do
            {
              v27 = (_QWORD *)(v24 + 80 * v26);
              v28 = v27[5];
              if ( v28 )
              {
                v27[6] = 0;
                qfree(v28, (const char *)v4);
              }
              v29 = v27[2];
              if ( v29 )
              {
                v27[3] = 0;
                qfree(v29, (const char *)v4);
              }
              ++v26;
              v24 = v50;
            }
            while ( v25 != v26 );
          }
          goto LABEL_30;
        }
        v24 = v50;
        if ( v50 )
        {
LABEL_30:
          *(_QWORD *)&v51 = 0;
          qfree(v24, (const char *)a2);
        }
      }
      else
      {
LABEL_37:
        memset(&v52, 0, 24);
        v52.m128i_i64[0] = qvector_reserve(&v52, 0, 1, 80);
        v35 = v52.m128i_i64[0] + 80 * v52.m128i_i64[1];
        *(_QWORD *)(v35 + 16) = 0;
        *(_QWORD *)(v35 + 40) = 0;
        *(_QWORD *)(v35 + 64) = 0;
        *(_WORD *)(v35 + 72) = 0;
        *(_OWORD *)v35 = 0;
        *(_OWORD *)(v35 + 24) = 0;
        *(_OWORD *)(v35 + 48) = 0;
        ++v52.m128i_i64[1];
        sub_231B10(a1, v35);
        sub_243ED0(v4, &v52, v4);
        v36 = v52.m128i_i64[0];
        if ( v52.m128i_i64[0] )
        {
          v37 = v52.m128i_i64[1];
          if ( v52.m128i_i64[1] )
          {
            do
            {
              v38 = (_QWORD *)(v36 + 80 * v11);
              v39 = v38[5];
              if ( v39 )
              {
                v38[6] = 0;
                qfree(v39, v52.m128i_i8);
              }
              v40 = v38[2];
              if ( v40 )
              {
                v38[3] = 0;
                qfree(v40, v52.m128i_i8);
              }
              ++v11;
              v36 = v52.m128i_i64[0];
            }
            while ( v37 != v11 );
          }
          v52.m128i_i64[1] = 0;
          qfree(v36, v52.m128i_i8);
        }
      }
LABEL_31:
      *(_BYTE *)(a1 + 56) = 0;
      v30 = *(_QWORD *)(a1 + 96);
      v31 = (__int64 *)(a1 + 88);
      if ( v30 == v4[1] )
      {
        if ( v30 )
        {
          v32 = *(_QWORD *)(a1 + 88);
          v33 = *v4;
          for ( i = 0; i != v30; ++i )
          {
            if ( *(_QWORD *)v32 != *(_QWORD *)v33 || *(_QWORD *)(v32 + 8) != *(_QWORD *)(v33 + 8) )
              goto LABEL_35;
            v41 = *(_QWORD *)(v32 + 24);
            if ( *(_QWORD *)(v33 + 24) )
            {
              v42 = *(const char **)(v33 + 16);
              if ( !v41 )
              {
                if ( strcmp(&s1, v42) )
                  goto LABEL_35;
                goto LABEL_52;
              }
            }
            else
            {
              v42 = &s1;
              if ( !v41 )
                goto LABEL_52;
            }
            if ( strcmp(*(const char **)(v32 + 16), v42) )
              goto LABEL_35;
LABEL_52:
            v43 = *(_QWORD *)(v32 + 48);
            if ( *(_QWORD *)(v33 + 48) )
            {
              v44 = *(const char **)(v33 + 40);
              v45 = &s1;
              if ( !v43 )
                goto LABEL_55;
            }
            else
            {
              v44 = &s1;
              if ( !v43 )
                goto LABEL_56;
            }
            v45 = *(const char **)(v32 + 40);
LABEL_55:
            if ( strcmp(v45, v44) )
              goto LABEL_35;
LABEL_56:
            if ( *(_QWORD *)(v32 + 64) != *(_QWORD *)(v33 + 64) || *(_WORD *)(v32 + 72) != *(_WORD *)(v33 + 72) )
              goto LABEL_35;
            v32 += 80;
            v33 += 80;
          }
        }
        return 4294967290LL;
      }
      else
      {
LABEL_35:
        sub_22BB70(v31, v4);
        return 1;
      }
  }
}
