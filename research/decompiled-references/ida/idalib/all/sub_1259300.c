__int64 __fastcall sub_1259300(__m128 *a1)
{
  __int32 v2; // eax
  __int32 v3; // edx
  __int64 result; // rax
  __int64 v5; // rbx
  __m128i v6; // xmm0
  __int64 v7; // rax
  unsigned __int64 v8; // rax
  __int64 v9; // rbp
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rax
  _QWORD *v12; // rdx
  __m128i v13; // xmm0
  __int64 v14; // rax
  __int64 v15; // r12
  __int64 v16; // rbp
  unsigned __int8 *v17; // rbx
  __int64 v18; // r15
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rdx
  __m128i v21; // xmm0
  int v22; // eax
  __int32 v23; // eax
  char v24; // al
  __int64 v25; // rbp
  unsigned __int64 v26; // rax
  __int64 v27; // rbp
  __int64 v28; // r12
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // rax
  char *v31; // rdx
  int v32; // eax
  __int64 v33; // r15
  char *v34; // rdi
  char *v35; // rcx
  __int64 v36; // r9
  unsigned __int64 v37; // rsi
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rax
  __m128d v41; // xmm0
  void **v42; // rbx
  unsigned __int64 v43; // rbp
  void *v44; // rdi
  __int64 v45; // rbx
  __m128d v46; // xmm0
  __int64 v47; // rbx
  unsigned __int64 v48; // rax
  unsigned __int64 v49; // rcx
  __m128i v50; // [rsp+8h] [rbp-120h] BYREF
  char v51; // [rsp+1Fh] [rbp-109h]
  char v52; // [rsp+27h] [rbp-101h] BYREF
  unsigned __int64 v53; // [rsp+28h] [rbp-100h] BYREF
  __m128 *v54; // [rsp+30h] [rbp-F8h]
  char *v55; // [rsp+38h] [rbp-F0h] BYREF
  __m128i v56[2]; // [rsp+40h] [rbp-E8h] BYREF
  unsigned __int64 v57; // [rsp+60h] [rbp-C8h] BYREF
  __m128i v58; // [rsp+68h] [rbp-C0h]
  __m128i v59; // [rsp+80h] [rbp-A8h] BYREF
  __int64 v60; // [rsp+90h] [rbp-98h]
  void *v61; // [rsp+A0h] [rbp-88h] BYREF
  __m128i v62; // [rsp+A8h] [rbp-80h]
  __int64 v63; // [rsp+B8h] [rbp-70h]
  __int64 v64; // [rsp+C0h] [rbp-68h]
  void **v65; // [rsp+C8h] [rbp-60h]
  void *v66[2]; // [rsp+D0h] [rbp-58h]
  __m128 v67; // [rsp+E0h] [rbp-48h]

  v2 = a1->m128_i32[0];
  v3 = a1[9].m128_i32[2];
  v54 = a1;
  v52 = (v2 & 0x10) != 0;
  v55 = &v52;
  switch ( v3 )
  {
    case 20:
      sub_9EE8A0((__int64)&a1[17], (__int64)&a1[13]);
      sub_12510C0(&a1->m128_u8[8]);
      sub_1251340((__int64)v54, &v55);
      sub_124FB10(&v59, a1);
      v5 = v60;
      v50.m128i_i64[0] = sub_1252A50(a1[16].m128_i64[0], -1, v59.m128i_i64[1], v52);
      v6 = _mm_loadl_epi64(&v50);
      v61 = (void *)a1[16].m128_u64[0];
      v7 = *(_QWORD *)(v59.m128i_i64[0] + 56) + 48 * v5;
      v62 = _mm_unpacklo_epi64(v6, v6);
      *(_QWORD *)(v7 + 8) = v6.m128i_i64[0];
      sub_1253380((__m128 *)a1[19].m128_u64, (const __m128i *)&v61);
      return 1;
    case 21:
      sub_9EE8A0((__int64)&a1[17], (__int64)&a1[13]);
      sub_12510C0(&a1->m128_u8[8]);
      sub_1251340((__int64)v54, &v55);
      sub_124FB10((__m128i *)&v61, a1);
      v8 = sub_1252A50(a1[16].m128_i64[0], -1, v62.m128i_i64[0], v52);
      *(_QWORD *)(*((_QWORD *)v61 + 7) + 48 * v62.m128i_i64[1] + 8) = v8;
      v62.m128i_i64[1] = v8;
      sub_1253380((__m128 *)a1[19].m128_u64, (const __m128i *)&v61);
      return 1;
    case 18:
      sub_9EE8A0((__int64)&a1[17], (__int64)&a1[13]);
      sub_12510C0(&a1->m128_u8[8]);
      sub_1251340((__int64)v54, &v55);
      sub_124FB10(&v59, a1);
      v9 = v60;
      v10 = sub_12529C0((_QWORD *)a1[16].m128_u64[0]);
      v11 = sub_1252A50(a1[16].m128_i64[0], -1, v59.m128i_i64[1], v52);
      v12 = (_QWORD *)a1[16].m128_u64[0];
      v50.m128i_i64[0] = v11;
      v13 = _mm_loadl_epi64(&v50);
      v14 = *(_QWORD *)(v59.m128i_i64[0] + 56) + 48 * v9;
      v61 = v12;
      v62 = _mm_unpacklo_epi64(v13, v13);
      *(_QWORD *)(v14 + 8) = v10;
      *(_QWORD *)(v12[7] + 48 * v62.m128i_i64[1] + 8) = v10;
      v62.m128i_i64[1] = v10;
      sub_1253380((__m128 *)a1[19].m128_u64, (const __m128i *)&v61);
      return 1;
  }
  result = 0;
  if ( v3 == 12 )
  {
    v15 = (__int64)&a1[13];
    v16 = (__int64)&a1[17];
    v17 = &a1->m128_u8[8];
    sub_9EE8A0((__int64)&a1[17], (__int64)&a1[13]);
    sub_12510C0(&a1->m128_u8[8]);
    if ( a1[22].m128_u64[0] != a1[20].m128_u64[0] && a1[9].m128_i32[2] == 26 )
    {
      v18 = 0;
      sub_9EE8A0(v16, v15);
      sub_12510C0(v17);
      sub_124FB10(v56, a1);
      v19 = sub_12529C0((_QWORD *)a1[16].m128_u64[0]);
      v20 = a1[16].m128_u64[0];
      v50.m128i_i64[0] = v19;
      v21 = _mm_loadl_epi64(&v50);
      v57 = v20;
      v58 = _mm_unpacklo_epi64(v21, v21);
      v22 = sub_12513B0((__int64)a1, 10);
      v50.m128i_i8[8] = 0;
      v50.m128i_i64[0] = v22;
      v23 = a1[9].m128_i32[2];
      if ( v23 == 25 )
      {
        sub_9EE8A0(v16, v15);
        sub_12510C0(v17);
        v23 = a1[9].m128_i32[2];
        v50.m128i_i8[8] = 1;
        if ( v23 == 26 )
        {
          sub_9EE8A0(v16, v15);
          sub_12510C0(v17);
          v32 = sub_12513B0((__int64)a1, 10);
          v50.m128i_i8[8] = 0;
          v33 = v32;
          v23 = a1[9].m128_i32[2];
          v18 = v33 - v50.m128i_i64[0];
        }
      }
      if ( v23 == 13 )
      {
        sub_9EE8A0(v16, v15);
        sub_12510C0(v17);
        v24 = v52;
        if ( v52 )
        {
          if ( a1[9].m128_i32[2] == 18 )
          {
            v51 = v52;
            sub_9EE8A0(v16, v15);
            sub_12510C0(v17);
            v24 = v51;
          }
          else
          {
            v24 = 0;
          }
        }
        v25 = 0;
        v52 = v24;
        if ( v50.m128i_i64[0] > 0 )
        {
          do
          {
            ++v25;
            sub_1258CB0((__int64 *)&v61, v56[0].m128i_i64);
            *(_QWORD *)(*(_QWORD *)(v57 + 56) + 48 * v58.m128i_i64[1] + 8) = v62.m128i_i64[0];
            v58.m128i_i64[1] = v62.m128i_i64[1];
          }
          while ( v50.m128i_i64[0] != v25 );
        }
        if ( v50.m128i_i8[8] )
        {
          sub_1258CB0((__int64 *)&v61, v56[0].m128i_i64);
          v47 = v62.m128i_i64[1];
          v48 = sub_1252A50(a1[16].m128_i64[0], -1, v62.m128i_i64[0], v52);
          v49 = v57;
          *(_QWORD *)(*((_QWORD *)v61 + 7) + 48 * v47 + 8) = v48;
          *(_QWORD *)(*(_QWORD *)(v49 + 56) + 48 * v58.m128i_i64[1] + 8) = v48;
          v58.m128i_i64[1] = v48;
LABEL_38:
          sub_1253380((__m128 *)a1[19].m128_u64, (const __m128i *)&v57);
          return 1;
        }
        if ( v18 >= 0 )
        {
          v26 = sub_12529C0((_QWORD *)a1[16].m128_u64[0]);
          v61 = nullptr;
          v62 = 0u;
          v27 = v26;
          v63 = 0;
          v64 = 0;
          v65 = nullptr;
          v66[0] = nullptr;
          v66[1] = nullptr;
          v67 = 0u;
          sub_12575D0((__int64)&v61, 0);
          if ( v18 )
          {
            v28 = 0;
            v50.m128i_i64[0] = (__int64)&v59;
            v50.m128i_i64[1] = (__int64)&v53;
            do
            {
              sub_1258CB0((__int64 *)v50.m128i_i64[0], v56[0].m128i_i64);
              v30 = sub_1252A50(a1[16].m128_i64[0], v59.m128i_i64[1], v27, v52);
              v31 = (char *)v66[0];
              v53 = v30;
              if ( v66[0] == (void *)(v67.m128_u64[0] - 8) )
              {
                sub_1253030((__int64)&v61, (__int64 *)v50.m128i_i64[1]);
              }
              else
              {
                *(_QWORD *)v66[0] = v30;
                v66[0] = v31 + 8;
              }
              v29 = v57;
              ++v28;
              *(_QWORD *)(*(_QWORD *)(v57 + 56) + 48 * v58.m128i_i64[1] + 8) = v53;
              v58.m128i_i64[1] = v60;
            }
            while ( v18 > v28 );
          }
          else
          {
            v29 = v57;
          }
          *(_QWORD *)(*(_QWORD *)(v29 + 56) + 48 * v58.m128i_i64[1] + 8) = v27;
          v34 = (char *)v66[0];
          v58.m128i_i64[1] = v27;
          if ( (void *)v62.m128i_i64[1] != v66[0] )
          {
            v35 = (char *)v66[1];
            v36 = v67.m128_i64[1];
            do
            {
              v37 = a1[16].m128_u64[0];
              while ( 1 )
              {
                v38 = *(_QWORD *)(v37 + 56);
                if ( v34 == v35 )
                  break;
                v39 = *((_QWORD *)v34 - 1);
                v34 -= 8;
                v66[0] = v34;
                v40 = 48 * v39 + v38;
                v41 = (__m128d)_mm_loadu_si128((const __m128i *)(v40 + 8));
                *(__m128d *)(v40 + 8) = _mm_shuffle_pd(v41, v41, 1);
                if ( v34 == (char *)v62.m128i_i64[1] )
                  goto LABEL_34;
              }
              v45 = v38 + 48LL * *(_QWORD *)(*(_QWORD *)(v36 - 8) + 504LL);
              operator delete(v34);
              v35 = *(char **)(v67.m128_u64[1] - 8);
              v36 = v67.m128_u64[1] - 8;
              v34 = v35 + 504;
              v50.m128i_i64[0] = (__int64)v35;
              *(__m128 *)v66 = _mm_loadh_ps((const double *)v50.m128i_i64);
              v50.m128i_i64[0] = v67.m128_u64[1] - 8;
              v67 = _mm_loadh_ps((const double *)v50.m128i_i64);
              v46 = (__m128d)_mm_loadu_si128((const __m128i *)(v45 + 8));
              *(__m128d *)(v45 + 8) = _mm_shuffle_pd(v46, v46, 1);
            }
            while ( (char *)v62.m128i_i64[1] != v35 + 504 );
          }
LABEL_34:
          if ( v61 )
          {
            v42 = v65;
            v43 = v67.m128_u64[1] + 8;
            while ( v43 > (unsigned __int64)v42 )
            {
              v44 = *v42++;
              operator delete(v44);
            }
            operator delete(v61);
          }
          goto LABEL_38;
        }
      }
    }
    abort();
  }
  return result;
}
