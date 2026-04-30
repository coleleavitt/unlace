__int64 __fastcall sub_452C50(__int64 *a1, __int64 a2)
{
  __int64 vault_filesys; // rax
  const void *v4; // rdi
  __int64 v5; // r12
  _QWORD *v6; // rbx
  const char *v7; // rsi
  __int64 v9; // r14
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // rax
  const void **v14; // r13
  size_t v15; // r14
  char v16; // al
  __int64 v17; // rdx
  void (__fastcall *v18)(__int64, __int64 *, const char *, _QWORD, void **, __int128 *, __int64); // r10
  const char *v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rbx
  __int64 v22; // rax
  __m128i v23; // xmm0
  const char *v24; // rdx
  void (__fastcall *v25)(__int64 *, __int64, const char *, bool, void **); // r9
  const char *v26; // rdx
  const char *v27; // rdi
  const char *v28; // rax
  size_t v29; // r13
  __m128i v30; // xmm1
  __m128i v31; // xmm0
  size_t v32; // r13
  __int64 v33; // rdx
  __int64 v34; // r15
  __int64 v35; // rbx
  __int64 *v36; // rax
  __int64 v37; // rdi
  unsigned __int8 v38; // [rsp+7h] [rbp-189h]
  __m128i src; // [rsp+8h] [rbp-188h] BYREF
  __int64 v40; // [rsp+18h] [rbp-178h]
  const void **v41; // [rsp+20h] [rbp-170h]
  __int64 v42; // [rsp+28h] [rbp-168h]
  __int64 v43; // [rsp+30h] [rbp-160h] BYREF
  __int64 v44; // [rsp+38h] [rbp-158h]
  unsigned __int64 v45; // [rsp+40h] [rbp-150h]
  __int64 v46; // [rsp+50h] [rbp-140h] BYREF
  __int128 v47; // [rsp+58h] [rbp-138h]
  void *v48; // [rsp+70h] [rbp-120h] BYREF
  __int128 v49; // [rsp+78h] [rbp-118h]
  void *v50; // [rsp+90h] [rbp-100h] BYREF
  __int128 v51; // [rsp+98h] [rbp-F8h]
  void *v52; // [rsp+B0h] [rbp-E0h] BYREF
  __int128 v53; // [rsp+B8h] [rbp-D8h]
  __m128i v54; // [rsp+C8h] [rbp-C8h]
  __int64 v55; // [rsp+D8h] [rbp-B8h]
  const void *v56; // [rsp+E0h] [rbp-B0h] BYREF
  __int128 v57; // [rsp+E8h] [rbp-A8h]
  __m128i v58; // [rsp+108h] [rbp-88h] BYREF
  __m128i v59; // [rsp+120h] [rbp-70h] BYREF
  __int128 v60; // [rsp+130h] [rbp-60h] BYREF
  void (__fastcall *v61)(__int128 *, __int128 *, __int64); // [rsp+140h] [rbp-50h]
  __int64 v62; // [rsp+148h] [rbp-48h]
  unsigned __int64 v63; // [rsp+158h] [rbp-38h]

  v42 = a2;
  v63 = __readfsqword(0x28u);
  v41 = &v56;
  sub_42B280(&v56, a2);
  sub_42F6A0(nullptr, (const char *)&v56, 1u);
  if ( v56 )
  {
    *(_QWORD *)&v57 = 0;
    qfree(v56, (const char *)&v56);
  }
  v56 = nullptr;
  v57 = 0;
  vault_filesys = get_vault_filesys(v41, 0, 0);
  v4 = v56;
  v5 = vault_filesys;
  if ( v56 )
  {
    *(_QWORD *)&v57 = 0;
    qfree(v56, nullptr);
  }
  v6 = sub_426230(v4, nullptr);
  sub_417550((__int64)&v43, (__int64)v6, v42);
  v7 = &s1;
  if ( v44 )
    v7 = (const char *)v43;
  v38 = (*(__int64 (__fastcall **)(__int64, const char *))(*(_QWORD *)v5 + 88LL))(v5, v7);
  if ( v38 )
  {
    v9 = v44;
    if ( v44 )
    {
      v10 = v44 + 1;
      v11 = v44 + 2;
      v12 = v43;
      v9 = v44 - 1;
      if ( v45 >= v44 + 2 )
      {
LABEL_13:
        v44 = v11;
        *(_BYTE *)(v12 + v10) = 0;
        *(_WORD *)(v43 + v9) = 10799;
        v46 = 0;
        v47 = 0;
        v13 = sub_4170B0((__int64)v6);
        v14 = (const void **)v13;
        v48 = nullptr;
        v49 = 0;
        v15 = *(_QWORD *)(v13 + 8);
        if ( v15 )
        {
          v48 = (void *)qalloc_or_throw(*(_QWORD *)(v13 + 8));
          *((_QWORD *)&v49 + 1) = v15;
          memcpy(v48, *v14, v15);
          *(_QWORD *)&v49 = v15;
        }
        v16 = sub_418330((__int64)v6);
        v17 = *(_QWORD *)v5;
        v61 = nullptr;
        v62 = 0;
        v18 = *(void (__fastcall **)(__int64, __int64 *, const char *, _QWORD, void **, __int128 *, __int64))(v17 + 80);
        v60 = 0;
        v19 = &s1;
        v20 = v16 == 0 ? 96 : 224;
        if ( v44 )
          v19 = (const char *)v43;
        v7 = (const char *)&v46;
        v18(v5, &v46, v19, 0, &v48, &v60, v20);
        if ( v61 )
        {
          v7 = (const char *)&v60;
          v61(&v60, &v60, 3);
        }
        v21 = v46;
        v40 = v46 + 24 * v47;
        if ( v40 != v46 )
        {
          do
          {
            v26 = &s1;
            if ( *(_QWORD *)(v21 + 8) )
              v26 = *(const char **)v21;
            (*(void (__fastcall **)(__int64, const void **, const char *))(*(_QWORD *)v5 + 96LL))(v5, v41, v26);
            v27 = &s1;
            if ( *(_QWORD *)(v21 + 8) )
              v27 = *(const char **)v21;
            v28 = (const char *)qbasename(v27);
            v50 = nullptr;
            v51 = 0;
            if ( v28 )
            {
              src.m128i_i64[0] = (__int64)v28;
              v29 = strlen(v28);
              src.m128i_i64[1] = v29 + 1;
              v50 = (void *)qvector_reserve(&v50, 0, v29 + 1, 1);
              *(_QWORD *)&v51 = src.m128i_i64[1];
              memmove(v50, (const void *)src.m128i_i64[0], v29);
              *((_BYTE *)v50 + v29) = 0;
            }
            v30 = _mm_loadl_epi64(&v59);
            v52 = nullptr;
            v31 = _mm_loadl_epi64(&v58);
            v53 = 0;
            v32 = *(_QWORD *)(v42 + 8);
            if ( v32 )
            {
              src.m128i_i64[0] = v31.m128i_i64[0];
              src.m128i_i64[1] = v30.m128i_i64[0];
              v52 = (void *)qalloc_or_throw(v32);
              *((_QWORD *)&v53 + 1) = v32;
              memcpy(v52, *(const void **)v42, v32);
              *(_QWORD *)&v53 = v32;
              v31 = _mm_loadl_epi64(&src);
              v30 = _mm_loadl_epi64((const __m128i *)&src.m128i_u64[1]);
            }
            v22 = *a1;
            v23 = _mm_unpacklo_epi64(v31, v30);
            v24 = &s1;
            v55 = -1;
            v25 = *(void (__fastcall **)(__int64 *, __int64, const char *, bool, void **))(v22 + 520);
            v54 = v23;
            if ( (_QWORD)v51 )
              v24 = (const char *)v50;
            v7 = (const char *)v42;
            v25(a1, v42, v24, (WORD2(v57) & 0xF000) == 0x4000, &v52);
            if ( v52 )
            {
              *(_QWORD *)&v53 = 0;
              *(double *)v23.m128i_i64 = qfree(v52, v7);
            }
            if ( v50 )
            {
              *(_QWORD *)&v51 = 0;
              qfree(v50, v7, *(double *)v23.m128i_i64);
            }
            v21 += 24;
          }
          while ( v40 != v21 );
        }
        if ( v48 )
        {
          *(_QWORD *)&v49 = 0;
          qfree(v48, v7);
        }
        v33 = v46;
        if ( v46 )
        {
          v34 = v47;
          if ( (_QWORD)v47 )
          {
            v35 = 0;
            do
            {
              v36 = (__int64 *)(v33 + 24 * v35);
              v37 = *v36;
              if ( *v36 )
              {
                v36[1] = 0;
                qfree(v37, v7);
                v33 = v46;
              }
              ++v35;
            }
            while ( v34 != v35 );
          }
          *(_QWORD *)&v47 = 0;
          qfree(v33, v7);
        }
        goto LABEL_8;
      }
    }
    else
    {
      v12 = v43;
      v11 = 3;
      v10 = 2;
      if ( v45 >= 3 )
        goto LABEL_13;
    }
    src.m128i_i64[1] = v10;
    v40 = v11;
    v43 = qvector_reserve(&v43, v12, v11, 1);
    v10 = src.m128i_i64[1];
    v12 = v43;
    v11 = v40;
    goto LABEL_13;
  }
LABEL_8:
  if ( v43 )
  {
    v44 = 0;
    qfree(v43, v7);
  }
  return v38;
}
