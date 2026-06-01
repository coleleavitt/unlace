__int64 __fastcall sub_D7040(__int64 a1, __int64 *a2, unsigned int a3)
{
  __int64 v6; // r13
  __int64 v7; // r14
  _QWORD *v8; // r12
  __int64 v9; // r13
  int v10; // r12d
  __int64 v11; // rax
  const __m128i *v12; // rcx
  void *v13; // r14
  size_t v14; // r13
  void *v15; // r15
  __int64 v16; // r9
  __int16 v17; // r10
  __int64 v18; // rax
  __int64 v19; // rsi
  __int64 v20; // rax
  __m128i v21; // xmm0
  __int64 v22; // rdi
  __int64 v23; // r14
  __int64 v24; // r13
  _QWORD *v25; // r12
  __int64 v26; // r14
  __int64 *v27; // r15
  __int64 v28; // r12
  __int64 v29; // rbx
  __int64 i; // r13
  __int64 v31; // rsi
  __int64 v32; // rdi
  __int64 v33; // r14
  _QWORD *v34; // r12
  __int64 v35; // rax
  const char *v36; // rsi
  __int64 v37; // rax
  const char *v38; // rsi
  const char *v39; // rdi
  __m128i n; // [rsp+0h] [rbp-D8h] BYREF
  __int64 v41; // [rsp+10h] [rbp-C8h]
  __int16 v42; // [rsp+1Eh] [rbp-BAh]
  __int64 v43; // [rsp+20h] [rbp-B8h] BYREF
  __int128 v44; // [rsp+28h] [rbp-B0h]
  _BYTE v45[24]; // [rsp+40h] [rbp-98h] BYREF
  __int64 v46; // [rsp+80h] [rbp-58h]
  __int16 v47; // [rsp+88h] [rbp-50h]
  unsigned __int64 v48; // [rsp+98h] [rbp-40h]

  v48 = __readfsqword(0x28u);
  switch ( a3 )
  {
    case 0xFFFFFFFA:
      if ( !*(_BYTE *)(a1 + 56) )
        return 4294967290LL;
      sub_BDF70(a2, (_QWORD *)(a1 + 64));
      goto LABEL_10;
    case 0xFFFFFFFB:
    case 0xFFFFFFFE:
      return a3;
    case 0xFFFFFFFC:
      sub_C5FC0(a2);
      goto LABEL_10;
    case 1u:
      sub_BDF70((__int64 *)(a1 + 64), a2);
      v9 = *(_QWORD *)(a1 + 16);
      if ( !v9 )
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
          if ( v8[5] )
          {
            v8[6] = 0;
            qfree();
          }
          if ( v8[2] )
          {
            v8[3] = 0;
            qfree();
          }
          ++v7;
        }
        while ( v6 != v7 );
      }
      a2[1] = 0;
LABEL_10:
      v9 = *(_QWORD *)(a1 + 16);
      if ( v9 )
      {
LABEL_11:
        v10 = 0;
        v11 = 0;
        v43 = 0;
        v44 = 0;
        do
        {
          while ( 1 )
          {
            v12 = (const __m128i *)(*(_QWORD *)(a1 + 8) + 80 * v11);
            if ( (v12[4].m128i_i8[9] & 7) != 0 )
              break;
            v11 = ++v10;
            if ( (unsigned __int64)v10 >= *(_QWORD *)(a1 + 16) )
              goto LABEL_21;
          }
          v13 = nullptr;
          *(__m128i *)v45 = _mm_loadu_si128(v12);
          v14 = v12[1].m128i_u64[1];
          if ( v14 )
          {
            n.m128i_i64[0] = (__int64)v12;
            n.m128i_i64[1] = (__int64)&v43;
            v13 = (void *)qalloc_or_throw();
            memcpy(v13, *(const void **)(n.m128i_i64[0] + 16), v14);
            v12 = (const __m128i *)n.m128i_i64[0];
          }
          v15 = nullptr;
          n.m128i_i64[0] = v12[3].m128i_i64[0];
          if ( n.m128i_i64[0] )
          {
            n.m128i_i64[1] = (__int64)v12;
            v15 = (void *)qalloc_or_throw();
            memcpy(v15, *(const void **)(n.m128i_i64[1] + 40), n.m128i_u64[0]);
            v12 = (const __m128i *)n.m128i_i64[1];
          }
          v16 = v12[4].m128i_i64[0];
          v17 = v12[4].m128i_i16[4];
          v18 = v44;
          v19 = v43;
          v46 = v16;
          v47 = v17;
          if ( *((_QWORD *)&v44 + 1) < (unsigned __int64)(v44 + 1) )
          {
            v42 = v17;
            v41 = v16;
            n.m128i_i64[1] = (__int64)&v43;
            v43 = qvector_reserve();
            v19 = v43;
            v17 = v42;
            v18 = v44;
            v16 = v41;
          }
          ++v10;
          v20 = v19 + 80 * v18;
          *(__m128i *)v20 = _mm_load_si128((const __m128i *)v45);
          *(_QWORD *)(v20 + 16) = v13;
          *(__m128i *)(v20 + 24) = _mm_unpacklo_epi64((__m128i)v14, (__m128i)v14);
          v21 = _mm_loadl_epi64(&n);
          *(_QWORD *)(v20 + 40) = v15;
          *(_QWORD *)(v20 + 64) = v16;
          *(_WORD *)(v20 + 72) = v17;
          *(__m128i *)(v20 + 48) = _mm_unpacklo_epi64(v21, v21);
          v11 = v10;
          *(_QWORD *)&v44 = v44 + 1;
        }
        while ( (unsigned __int64)v10 < *(_QWORD *)(a1 + 16) );
LABEL_21:
        if ( (_QWORD)v44 )
        {
          n.m128i_i64[1] = (__int64)&v43;
          sub_D6A70(a2, a2, &v43);
          v22 = v43;
          if ( !v43 )
            goto LABEL_31;
          v23 = v44;
          if ( (_QWORD)v44 )
          {
            v24 = 0;
            do
            {
              v25 = (_QWORD *)(v22 + 80 * v24);
              if ( v25[5] )
              {
                v25[6] = 0;
                qfree();
              }
              if ( v25[2] )
              {
                v25[3] = 0;
                qfree();
              }
              ++v24;
              v22 = v43;
            }
            while ( v23 != v24 );
          }
          goto LABEL_30;
        }
        if ( v43 )
        {
LABEL_30:
          *(_QWORD *)&v44 = 0;
          qfree();
        }
      }
      else
      {
LABEL_37:
        *(_OWORD *)&v45[8] = 0;
        *(_QWORD *)v45 = qvector_reserve();
        v31 = *(_QWORD *)v45;
        *(_QWORD *)(*(_QWORD *)v45 + 16LL) = 0;
        *(_QWORD *)(v31 + 40) = 0;
        *(_QWORD *)(v31 + 64) = 0;
        *(_WORD *)(v31 + 72) = 0;
        *(_OWORD *)v31 = 0;
        *(_OWORD *)(v31 + 24) = 0;
        *(_OWORD *)(v31 + 48) = 0;
        ++*(_QWORD *)&v45[8];
        sub_C2940(a1, v31);
        sub_D6A70(a2, (__int64 *)v45, a2);
        v32 = *(_QWORD *)v45;
        if ( *(_QWORD *)v45 )
        {
          v33 = *(_QWORD *)&v45[8];
          if ( *(_QWORD *)&v45[8] )
          {
            do
            {
              v34 = (_QWORD *)(v32 + 80 * v9);
              if ( v34[5] )
              {
                v34[6] = 0;
                qfree();
              }
              if ( v34[2] )
              {
                v34[3] = 0;
                qfree();
              }
              ++v9;
              v32 = *(_QWORD *)v45;
            }
            while ( v33 != v9 );
          }
          *(_QWORD *)&v45[8] = 0;
          qfree();
        }
      }
LABEL_31:
      *(_BYTE *)(a1 + 56) = 0;
      v26 = *(_QWORD *)(a1 + 96);
      v27 = (__int64 *)(a1 + 88);
      if ( v26 == a2[1] )
      {
        if ( v26 )
        {
          v28 = *(_QWORD *)(a1 + 88);
          v29 = *a2;
          for ( i = 0; i != v26; ++i )
          {
            if ( *(_QWORD *)v28 != *(_QWORD *)v29 || *(_QWORD *)(v28 + 8) != *(_QWORD *)(v29 + 8) )
              goto LABEL_35;
            v35 = *(_QWORD *)(v28 + 24);
            if ( *(_QWORD *)(v29 + 24) )
            {
              v36 = *(const char **)(v29 + 16);
              if ( !v35 )
              {
                if ( strcmp(s1, v36) )
                  goto LABEL_35;
                goto LABEL_52;
              }
            }
            else
            {
              v36 = s1;
              if ( !v35 )
                goto LABEL_52;
            }
            if ( strcmp(*(const char **)(v28 + 16), v36) )
              goto LABEL_35;
LABEL_52:
            v37 = *(_QWORD *)(v28 + 48);
            if ( *(_QWORD *)(v29 + 48) )
            {
              v38 = *(const char **)(v29 + 40);
              v39 = s1;
              if ( !v37 )
                goto LABEL_55;
            }
            else
            {
              v38 = s1;
              if ( !v37 )
                goto LABEL_56;
            }
            v39 = *(const char **)(v28 + 40);
LABEL_55:
            if ( strcmp(v39, v38) )
              goto LABEL_35;
LABEL_56:
            if ( *(_QWORD *)(v28 + 64) != *(_QWORD *)(v29 + 64) || *(_WORD *)(v28 + 72) != *(_WORD *)(v29 + 72) )
              goto LABEL_35;
            v28 += 80;
            v29 += 80;
          }
        }
        return 4294967290LL;
      }
      else
      {
LABEL_35:
        sub_BDF70(v27, a2);
        return 1;
      }
  }
}

