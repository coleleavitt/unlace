__int64 __fastcall dummy_decompiler_ah_t__::vfunc_0(
        __m128 a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        double a5,
        double a6,
        __m128 a7,
        __m128 a8)
{
  __int64 ph; // rbx
  unsigned __int8 v9; // al
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __m128 v15; // xmm4
  __m128 v16; // xmm5
  __m128 v17; // xmm0
  __int64 license_manager; // rax
  const char *v19; // rsi
  __int128 v20; // rax
  const char *v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __m128 v24; // xmm4
  __m128 v25; // xmm5
  __int64 v26; // rbx
  __int64 v27; // rbp
  const char *v28; // r14
  size_t v29; // r13
  unsigned __int64 v30; // rdi
  char *v31; // r13
  __m128i v32; // xmm0
  char *v33; // rax
  const char *v34; // rbp
  unsigned __int64 v35; // rbx
  const char *v36; // r13
  const char *v37; // rax
  unsigned __int64 v38; // r12
  size_t v39; // r15
  __int64 v40; // r8
  char *v41; // rsi
  unsigned __int64 v42; // r12
  unsigned __int64 v43; // r15
  char *v44; // rsi
  unsigned __int64 v45; // rbx
  unsigned int v46; // ebp
  __int64 v48; // rdx
  const char *v49; // rdx
  __int64 v50; // r12
  __int64 v51; // rbx
  const char *v52; // rax
  __int64 v53; // rdi
  __m128i v54; // [rsp+0h] [rbp-88h] BYREF
  const char *v55; // [rsp+10h] [rbp-78h] BYREF
  __int128 v56; // [rsp+18h] [rbp-70h]
  char *v57; // [rsp+30h] [rbp-58h] BYREF
  __m128i v58; // [rsp+38h] [rbp-50h] BYREF
  unsigned __int64 v59; // [rsp+48h] [rbp-40h]

  v59 = __readfsqword(0x28u);
  ph = get_ph();
  v9 = getinf_flag(3, 4);
  v10 = v9;
  if ( !(unsigned int)sub_178D60(*(_DWORD *)(ph + 4), v9) )
  {
    sub_169630(
      (int)"AUTOHIDE NONE\nSorry, the current file is not decompilable",
      v10,
      v11,
      v12,
      v13,
      v14,
      a1,
      a2,
      a3,
      a4,
      v15,
      v16,
      a7,
      a8,
      v54.m128i_i8[0]);
    return 1;
  }
  if ( (unsigned int)sub_180B60() == 1 )
    return 1;
  v55 = nullptr;
  v17 = 0;
  v56 = 0;
  license_manager = get_license_manager();
  v19 = nullptr;
  *(_QWORD *)&v20 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)license_manager + 88LL))(
                      license_manager,
                      0,
                      0);
  if ( (_QWORD)v20 )
  {
    v26 = *(_QWORD *)(v20 + 56);
    v27 = v26 + 40LL * *(_QWORD *)(v20 + 64);
    if ( v26 == v27 )
    {
LABEL_16:
      if ( !(_QWORD)v56 )
      {
        sub_169630(
          (int)"AUTOHIDE NONE\nSorry, you do not have any decompilers on Linux",
          (__int64)v19,
          *((__int64 *)&v20 + 1),
          (__int64)v21,
          v22,
          v23,
          v17,
          a2,
          a3,
          a4,
          v24,
          v25,
          a7,
          a8,
          v54.m128i_i8[0]);
LABEL_48:
        v46 = 1;
        goto LABEL_49;
      }
      v34 = v55;
      v35 = 2 * v56 - 2;
      v57 = nullptr;
      v36 = &v55[24 * v56];
      v58 = 0;
      if ( v55 == v36 )
      {
        if ( 2LL * (_QWORD)v56 == 2 )
          goto LABEL_45;
      }
      else
      {
        v37 = v55;
        do
        {
          *((_QWORD *)&v20 + 1) = *((_QWORD *)v37 + 1);
          v21 = (const char *)(*((_QWORD *)&v20 + 1) + v35 - 1);
          if ( *((_QWORD *)&v20 + 1) )
            v35 = *((_QWORD *)&v20 + 1) + v35 - 1;
          v37 += 24;
        }
        while ( v36 != v37 );
        if ( !v35 )
        {
          do
          {
LABEL_33:
            if ( v35 > 1 )
            {
              v42 = v35 - 1;
              v43 = v35 + 1;
              v44 = v57;
              v45 = v35 + 2;
              if ( v58.m128i_i64[1] < v45 )
              {
                v57 = (char *)qvector_reserve(&v57, v57, v45, 1);
                v44 = v57;
              }
              v58.m128i_i64[0] = v45;
              v23 = 8236;
              v44[v43] = 0;
              *(_WORD *)&v57[v42] = 8236;
              v35 = v58.m128i_i64[0];
            }
            v38 = *((_QWORD *)v34 + 1);
            if ( v38 )
            {
              v39 = v38 - 1;
              if ( v38 != 1 )
              {
                v40 = v38 - 1;
                if ( v35 )
                {
                  --v35;
                  v40 = v39 + v35;
                  v38 += v35;
                }
                v41 = v57;
                if ( v58.m128i_i64[1] < v38 )
                {
                  v54.m128i_i64[0] = v40;
                  v57 = (char *)qvector_reserve(&v57, v57, v38, 1);
                  v40 = v54.m128i_i64[0];
                  v41 = v57;
                }
                v58.m128i_i64[0] = v38;
                v41[v40] = 0;
                memcpy(&v57[v35], *(const void **)v34, v39);
                v35 = v58.m128i_i64[0];
              }
            }
            v34 += 24;
          }
          while ( v36 != v34 );
LABEL_44:
          if ( v35 )
          {
            v19 = v57;
LABEL_46:
            sub_169630(
              (int)"AUTOHIDE NONE\n"
                   "Sorry, you do not have a decompiler for the current file.\n"
                   "You can decompile code for the following processor(s):\n"
                   "%s",
              (__int64)v19,
              *((__int64 *)&v20 + 1),
              (__int64)v21,
              v22,
              v23,
              (__m128)0LL,
              a2,
              a3,
              a4,
              v24,
              v25,
              a7,
              a8,
              v54.m128i_i8[0]);
            if ( v57 )
            {
              v58.m128i_i64[0] = 0;
              qfree(v57, v19, v48, v21, v22);
            }
            goto LABEL_48;
          }
LABEL_45:
          v19 = &s1;
          goto LABEL_46;
        }
      }
      *(_QWORD *)&v20 = qvector_reserve(&v57, 0, v35, 1);
      v34 = v55;
      v35 = v58.m128i_i64[0];
      v57 = (char *)v20;
      v36 = &v55[24 * v56];
      if ( v55 == v36 )
        goto LABEL_44;
      goto LABEL_33;
    }
    while ( 1 )
    {
      *(_QWORD *)&v20 = *(int *)(v26 + 8);
      *((_QWORD *)&v20 + 1) = (unsigned int)(v20 - 1);
      if ( DWORD2(v20) > 0x17 )
        goto LABEL_6;
      v28 = off_8BA320[(_QWORD)v20];
      v57 = nullptr;
      v58 = 0;
      if ( v28 )
      {
        v29 = strlen(v28);
        v54.m128i_i64[0] = v29 + 1;
        v57 = (char *)qvector_reserve(&v57, 0, v29 + 1, 1);
        v58.m128i_i64[0] = v54.m128i_i64[0];
        memmove(v57, v28, v29);
        v57[v29] = 0;
      }
      v20 = v56;
      v19 = v55;
      v30 = v56 + 1;
      if ( &v57 < (char **)v55 || (v21 = &v55[24 * *((_QWORD *)&v56 + 1)], &v57 >= (char **)v21) )
      {
        if ( *((_QWORD *)&v56 + 1) < v30 )
        {
          v55 = (const char *)qvector_reserve(&v55, v55, v56 + 1, 24);
          v19 = v55;
          *(_QWORD *)&v20 = v56;
        }
        *((_QWORD *)&v20 + 1) = v57;
        v17 = (__m128)_mm_loadu_si128(&v58);
        *(_QWORD *)&v20 = &v19[24 * v20];
        *(_QWORD *)v20 = v57;
        *(__m128 *)(v20 + 8) = v17;
        *(_QWORD *)&v56 = v56 + 1;
        goto LABEL_6;
      }
      a3 = 0;
      v31 = v57;
      v32 = _mm_loadl_epi64(&v58);
      v57 = nullptr;
      a2 = (__m128)_mm_loadl_epi64((const __m128i *)&v58.m128i_u64[1]);
      v58 = 0;
      if ( *((_QWORD *)&v56 + 1) < v30 )
      {
        v54.m128i_i64[1] = a2.m128_u64[0];
        v54.m128i_i64[0] = v32.m128i_i64[0];
        v55 = (const char *)qvector_reserve(&v55, v55, v56 + 1, 24);
        v19 = v55;
        a2 = (__m128)_mm_loadl_epi64((const __m128i *)&v54.m128i_u64[1]);
        *(_QWORD *)&v20 = v56;
        v32 = _mm_loadl_epi64(&v54);
      }
      v17 = (__m128)_mm_unpacklo_epi64(v32, (__m128i)a2);
      v33 = (char *)&v19[24 * v20];
      *(_QWORD *)v33 = v31;
      *(__m128 *)(v33 + 8) = v17;
      *(_QWORD *)&v56 = v56 + 1;
      if ( v57 )
      {
        v58.m128i_i64[0] = 0;
        v26 += 40;
        qfree(v57, v19, *((_QWORD *)&v20 + 1), v21, v22);
        if ( v27 == v26 )
          goto LABEL_16;
      }
      else
      {
LABEL_6:
        v26 += 40;
        if ( v27 == v26 )
          goto LABEL_16;
      }
    }
  }
  v46 = 0;
LABEL_49:
  v49 = v55;
  if ( v55 )
  {
    v50 = v56;
    if ( (_QWORD)v56 )
    {
      v51 = 0;
      do
      {
        v52 = &v49[24 * v51];
        v53 = *(_QWORD *)v52;
        if ( *(_QWORD *)v52 )
        {
          *((_QWORD *)v52 + 1) = 0;
          qfree(v53, v19, v49, v21, v22);
          v49 = v55;
        }
        ++v51;
      }
      while ( v50 != v51 );
    }
    *(_QWORD *)&v56 = 0;
    qfree(v49, v19, v49, v21, v22);
  }
  return v46;
}
