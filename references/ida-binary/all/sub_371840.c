__int64 __fastcall sub_371840(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _QWORD *a6,
        double a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        double a11,
        double a12,
        __m128 a13,
        __m128 a14)
{
  unsigned int v17; // r13d
  __int64 v18; // rbx
  _QWORD *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v24; // rcx
  __int64 v25; // rdx
  const char *v26; // rsi
  __int64 v27; // r9
  __m128 v28; // xmm4
  __m128 v29; // xmm5
  unsigned __int64 v30; // rbx
  bool v31; // cl
  bool v32; // cf
  bool v33; // zf
  __int64 *v34; // rbx
  __int64 *v35; // r15
  unsigned int v36; // r13d
  __int64 v37; // rdx
  __int64 v38; // rax
  unsigned int v39; // eax
  size_t v40; // rbx
  _QWORD *v41; // rsi
  void *v42; // rax
  void *v43; // rbp
  __int64 v44; // rdi
  __m128i v45; // xmm2
  __m128i v46; // [rsp+0h] [rbp-98h] BYREF
  __int64 v47; // [rsp+10h] [rbp-88h]
  unsigned __int8 v48; // [rsp+1Fh] [rbp-79h]
  void *src; // [rsp+20h] [rbp-78h] BYREF
  __int128 v50; // [rsp+28h] [rbp-70h]
  __int64 *v51; // [rsp+40h] [rbp-58h] BYREF
  __int128 v52; // [rsp+48h] [rbp-50h]
  unsigned __int64 v53; // [rsp+58h] [rbp-40h]

  v17 = a5;
  v18 = *a2;
  v53 = __readfsqword(0x28u);
  if ( v18 == a3 )
    goto LABEL_8;
  v20 = *(_QWORD **)a4;
  v21 = *(_QWORD *)a4 + 8LL * *(_QWORD *)(a4 + 8);
  if ( *(_QWORD *)a4 == v21 )
    goto LABEL_8;
  while ( v18 != *v20 )
  {
    if ( (_QWORD *)v21 == ++v20 )
      goto LABEL_8;
  }
  LODWORD(v22) = 0;
  if ( (_QWORD *)v21 == v20 )
  {
LABEL_8:
    v24 = *(_QWORD *)(a4 + 8);
    src = nullptr;
    v50 = 0;
    if ( v24 )
    {
      v40 = 8 * v24;
      v48 = a5;
      v47 = a4;
      v46.m128i_i64[0] = v24;
      src = (void *)qalloc_or_throw(8 * v24);
      v41 = *(_QWORD **)a4;
      *((_QWORD *)&v50 + 1) = v46.m128i_i64[0];
      memcpy(src, v41, v40);
      v22 = v46.m128i_i64[0];
      v18 = *a2;
      v26 = (const char *)src;
      v25 = v46.m128i_i64[0] + 1;
      *(_QWORD *)&v50 = v46.m128i_i64[0];
      a5 = v48;
      v51 = (__int64 *)v18;
      if ( v46.m128i_i64[0] >= (unsigned __int64)(v46.m128i_i64[0] + 1) )
      {
LABEL_11:
        *(_QWORD *)&v26[8 * v22] = v18;
        v30 = v50 + 1;
        v31 = *a2 == a3;
        v32 = (_QWORD)v50 == -1;
        v33 = (_QWORD)v50 == 0;
        *(_QWORD *)&v50 = v50 + 1;
        LOBYTE(v22) = !v32 && !v33 && v31;
        if ( (_BYTE)v22 )
        {
          if ( a6 )
          {
            LOBYTE(v47) = v22;
            v42 = (void *)qalloc_or_throw(8 * v30);
            v26 = (const char *)src;
            v43 = v42;
            v46 = _mm_unpacklo_epi64((__m128i)v30, (__m128i)v30);
            memcpy(v42, src, 8 * v30);
            v44 = *a6;
            v22 = (unsigned __int8)v47;
            if ( *a6 )
            {
              a6[1] = 0;
              qfree(v44, v26, v25, v22);
              v22 = (unsigned __int8)v47;
            }
            v45 = _mm_load_si128(&v46);
            *a6 = v43;
            *(__m128i *)(a6 + 1) = v45;
          }
          goto LABEL_25;
        }
        v51 = nullptr;
        v52 = 0;
        if ( (_BYTE)v17 )
        {
          v34 = (__int64 *)a2[2];
          v22 = 0;
          v35 = &v34[a2[3]];
          if ( v34 == v35 )
          {
LABEL_25:
            if ( src )
            {
              v46.m128i_i8[0] = v22;
              *(_QWORD *)&v50 = 0;
              qfree(src, v26, v25, v22, a5);
              LODWORD(v22) = v46.m128i_u8[0];
            }
            return (unsigned int)v22;
          }
        }
        else
        {
          v26 = (const char *)a1;
          v46.m128i_i8[0] = a5;
          sub_3716E0(a2, a1, (__int64 *)&v51);
          v34 = v51;
          a5 = v46.m128i_u8[0];
          v35 = &v51[v52];
          if ( v35 == v51 )
          {
            v22 = v17;
LABEL_23:
            if ( v34 )
            {
              v46.m128i_i8[0] = v22;
              *(_QWORD *)&v52 = 0;
              qfree(v34, v26);
              v22 = v46.m128i_u8[0];
            }
            goto LABEL_25;
          }
        }
        v36 = (unsigned __int8)a5;
        while ( 1 )
        {
          v26 = *(const char **)a1;
          v37 = *v34;
          v38 = *(_QWORD *)a1 + 40LL * *(_QWORD *)(a1 + 8);
          if ( *(_QWORD *)a1 == v38 )
            break;
          while ( v37 != *(_QWORD *)v26 )
          {
            v26 += 40;
            if ( (const char *)v38 == v26 )
              goto LABEL_31;
          }
          if ( !v26 )
            break;
          v39 = sub_371840(a1, v26, a3, &src, v36, a6);
          v22 = v39;
          if ( !(_BYTE)v39 && ++v34 != v35 )
            continue;
          v34 = v51;
          goto LABEL_23;
        }
LABEL_31:
        sub_169700(
          (int)"Coherency check failed: it != nullptr\n",
          (__int64)v26,
          v37,
          v22,
          a5,
          v27,
          (__m128)0LL,
          a8,
          a9,
          a10,
          v28,
          v29,
          a13,
          a14,
          v46.m128i_i8[0]);
        v34 = v51;
        v22 = 0;
        goto LABEL_23;
      }
    }
    else
    {
      v51 = (__int64 *)v18;
      v25 = 1;
      v26 = nullptr;
    }
    v46.m128i_i8[0] = a5;
    src = (void *)qvector_reserve(&src, v26, v25, 8);
    v22 = v50;
    v26 = (const char *)src;
    a5 = v46.m128i_u8[0];
    goto LABEL_11;
  }
  return (unsigned int)v22;
}
