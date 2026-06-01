unsigned __int64 __fastcall sub_41A6B0(_QWORD *a1)
{
  __int64 v1; // rbp
  __int64 v3; // rdi
  __int64 (*v4)(); // rax
  __m128i v5; // xmm0
  __int64 v6; // rax
  __int64 (__fastcall *v7)(__int64); // rax
  __int64 *v8; // rdi
  __int64 v9; // rax
  unsigned __int8 (*v10)(void); // rdx
  int v11; // eax
  __int64 v12; // rbp
  __int64 v13; // r12
  __int64 v14; // r12
  __int64 v15; // r12
  __m128i v16; // xmm0
  __int64 v17; // r12
  bool v18; // zf
  const char *v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rax
  const char *v22; // rdx
  __int64 v23; // rax
  __m128i si128; // xmm0
  __int64 v25; // rax
  const char *v26; // rdx
  __int64 v27; // rax
  const char *v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rax
  const char *v31; // rdx
  __int64 v32; // rax
  const char *v33; // rsi
  void *v35; // r14
  void *v36; // rax
  void *v37; // r14
  void *v38; // rax
  void *v39; // r14
  void *v40; // rax
  void *v41; // r14
  void *v42; // rax
  __int64 v43; // [rsp+0h] [rbp-198h] BYREF
  __int128 v44; // [rsp+8h] [rbp-190h]
  char *v45; // [rsp+20h] [rbp-178h] BYREF
  __int128 v46; // [rsp+28h] [rbp-170h]
  void *src; // [rsp+40h] [rbp-158h] BYREF
  __int128 v48; // [rsp+48h] [rbp-150h]
  void *v49; // [rsp+58h] [rbp-140h] BYREF
  __int128 v50; // [rsp+60h] [rbp-138h]
  void *v51; // [rsp+70h] [rbp-128h] BYREF
  __int128 v52; // [rsp+78h] [rbp-120h]
  __m128i v53; // [rsp+88h] [rbp-110h] BYREF
  __int16 v54; // [rsp+98h] [rbp-100h]
  void *v55; // [rsp+A0h] [rbp-F8h] BYREF
  __int128 v56; // [rsp+A8h] [rbp-F0h]
  __int64 v57; // [rsp+B8h] [rbp-E0h]
  __int128 v58; // [rsp+C0h] [rbp-D8h]
  __int64 v59; // [rsp+D0h] [rbp-C8h]
  __int128 v60; // [rsp+D8h] [rbp-C0h]
  __int64 v61; // [rsp+E8h] [rbp-B0h]
  __int128 v62; // [rsp+F0h] [rbp-A8h]
  __int64 v63; // [rsp+100h] [rbp-98h]
  __int64 v64; // [rsp+108h] [rbp-90h]
  __int128 v65; // [rsp+110h] [rbp-88h]
  __int64 v66; // [rsp+120h] [rbp-78h]
  __int128 v67; // [rsp+128h] [rbp-70h]
  __int64 v68; // [rsp+138h] [rbp-60h]
  __int128 v69; // [rsp+140h] [rbp-58h]
  __int128 v70; // [rsp+150h] [rbp-48h]
  unsigned __int64 v71; // [rsp+168h] [rbp-30h]

  v1 = a1[4];
  v71 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(v1 + 32);
  if ( !v3 )
    goto LABEL_64;
  v4 = *(__int64 (**)())(*(_QWORD *)v3 + 480LL);
  if ( v4 == sub_178B60 )
    goto LABEL_3;
  if ( (unsigned __int8)v4() )
  {
LABEL_64:
    sub_388000(3, (const char *)&unk_5C2F25, nullptr);
    sub_388000(4, (const char *)&unk_5C2F25, nullptr);
    sub_388000(5, (const char *)&unk_5C2F25, nullptr);
    sub_388000(6, (const char *)&unk_5C2F25, nullptr);
    sub_388000(7, (const char *)&unk_5C2F25, nullptr);
    return sub_388000(7, "HexVault: Disconnected", nullptr);
  }
  v1 = a1[4];
LABEL_3:
  v5.m128i_i64[0] = 0;
  v49 = nullptr;
  v51 = nullptr;
  v54 = 0;
  v55 = nullptr;
  v57 = 0;
  v59 = 0;
  v61 = 0;
  v63 = 0;
  v64 = 0;
  v66 = 0;
  v68 = 0;
  v50 = 0;
  v52 = 0;
  v53 = 0;
  v56 = 0;
  v58 = 0;
  v60 = 0;
  v62 = 0;
  v65 = 0;
  v67 = 0;
  v69 = 0;
  v70 = 0;
  v6 = *(_QWORD *)(v1 + 24);
  src = nullptr;
  v7 = *(__int64 (__fastcall **)(__int64))(v6 + 392);
  v48 = 0;
  if ( v7 == vault_with_events_t__::vfunc_49 )
  {
    v8 = *(__int64 **)(v1 + 32);
    if ( !v8 )
      goto LABEL_66;
    v9 = *v8;
    v10 = *(unsigned __int8 (**)(void))(*v8 + 480);
    if ( (char *)v10 != (char *)sub_178B60 )
    {
      if ( v10() )
        goto LABEL_66;
      v8 = *(__int64 **)(v1 + 32);
      v9 = *v8;
    }
    v11 = (*(__int64 (__fastcall **)(__int64 *, void **))(v9 + 368))(v8, &src);
  }
  else
  {
    v11 = ((__int64 (__fastcall *)(__int64, void **))v7)(v1 + 24, &src);
  }
  if ( !v11 )
  {
    v12 = a1[4];
    if ( (void **)(v12 + 72) != &src )
    {
      v13 = v48;
      if ( (unsigned __int64)v48 > 1 )
      {
        v35 = src;
        v36 = *(void **)(v12 + 72);
        if ( *(_QWORD *)(v12 + 88) < (unsigned __int64)v48 )
        {
          v36 = (void *)qvector_reserve(v12 + 72, *(_QWORD *)(v12 + 72), v48, 1);
          *(_QWORD *)(v12 + 72) = v36;
        }
        *(_QWORD *)(v12 + 80) = v13;
        memmove(v36, v35, v13 - 1);
        *(_BYTE *)(*(_QWORD *)(v12 + 72) + v13 - 1) = 0;
      }
      else
      {
        *(_QWORD *)(v12 + 80) = 0;
      }
    }
    if ( (void **)(v12 + 96) != &v49 )
    {
      v14 = v50;
      if ( (unsigned __int64)v50 > 1 )
      {
        v37 = v49;
        v38 = *(void **)(v12 + 96);
        if ( *(_QWORD *)(v12 + 112) < (unsigned __int64)v50 )
        {
          v38 = (void *)qvector_reserve(v12 + 96, *(_QWORD *)(v12 + 96), v50, 1);
          *(_QWORD *)(v12 + 96) = v38;
        }
        *(_QWORD *)(v12 + 104) = v14;
        memmove(v38, v37, v14 - 1);
        *(_BYTE *)(*(_QWORD *)(v12 + 96) + v14 - 1) = 0;
      }
      else
      {
        *(_QWORD *)(v12 + 104) = 0;
      }
    }
    if ( (void **)(v12 + 120) != &v51 )
    {
      v15 = v52;
      if ( (unsigned __int64)v52 > 1 )
      {
        v41 = v51;
        v42 = *(void **)(v12 + 120);
        if ( *(_QWORD *)(v12 + 136) < (unsigned __int64)v52 )
        {
          v42 = (void *)qvector_reserve(v12 + 120, *(_QWORD *)(v12 + 120), v52, 1);
          *(_QWORD *)(v12 + 120) = v42;
        }
        *(_QWORD *)(v12 + 128) = v15;
        memmove(v42, v41, v15 - 1);
        *(_BYTE *)(*(_QWORD *)(v12 + 120) + v15 - 1) = 0;
      }
      else
      {
        *(_QWORD *)(v12 + 128) = 0;
      }
    }
    v16 = _mm_loadu_si128(&v53);
    *(_WORD *)(v12 + 160) = v54;
    *(__m128i *)(v12 + 144) = v16;
    if ( (void **)(v12 + 168) != &v55 )
    {
      v17 = v56;
      if ( (unsigned __int64)v56 > 1 )
      {
        v39 = v55;
        v40 = *(void **)(v12 + 168);
        if ( *(_QWORD *)(v12 + 184) < (unsigned __int64)v56 )
        {
          v40 = (void *)qvector_reserve(v12 + 168, *(_QWORD *)(v12 + 168), v56, 1);
          *(_QWORD *)(v12 + 168) = v40;
        }
        *(_QWORD *)(v12 + 176) = v17;
        memmove(v40, v39, v17 - 1);
        *(_BYTE *)(*(_QWORD *)(v12 + 168) + v17 - 1) = 0;
      }
      else
      {
        *(_QWORD *)(v12 + 176) = 0;
      }
    }
    v18 = a1[6] == 0;
    v43 = 0;
    v19 = &s1;
    v44 = 0;
    if ( !v18 )
      v19 = (const char *)a1[5];
    sub_169A50(&v43, (__int64)"Server: %s", v19);
    v46 = 0;
    v45 = nullptr;
    v20 = qvector_reserve(&v45, 0, 24, 1);
    v45 = (char *)v20;
    *(_QWORD *)&v46 = 24;
    *(__m128i *)v20 = _mm_load_si128((const __m128i *)&xmmword_5DD950);
    *(_QWORD *)(v20 + 15) = 0x7373657264644120LL;
    v45[23] = 0;
    sub_388120(3, (__int64)&v43, (__int64)&v45);
    if ( v45 )
    {
      *(_QWORD *)&v46 = 0;
      qfree(v45, (const char *)&v43);
    }
    v21 = a1[4];
    v22 = "<n/a>";
    if ( *(_QWORD *)(v21 + 128) > 1u )
      v22 = *(const char **)(v21 + 120);
    sub_169A50(&v43, (__int64)"Client: %s", v22);
    v46 = 0;
    v45 = nullptr;
    v23 = qvector_reserve(&v45, 0, 21, 1);
    v45 = (char *)v23;
    si128 = _mm_load_si128((const __m128i *)&xmmword_5DD960);
    *(_QWORD *)&v46 = 21;
    *(_DWORD *)(v23 + 16) = 1701667150;
    *(__m128i *)v23 = si128;
    v45[20] = 0;
    sub_388120(4, (__int64)&v43, (__int64)&v45);
    if ( v45 )
    {
      *(_QWORD *)&v46 = 0;
      qfree(v45, (const char *)&v43);
    }
    v25 = a1[4];
    v26 = "<n/a>";
    if ( *(_QWORD *)(v25 + 80) > 1u )
      v26 = *(const char **)(v25 + 72);
    sub_169A50(&v43, (__int64)"User: %s", v26);
    v46 = 0;
    v45 = nullptr;
    v45 = (char *)qvector_reserve(&v45, 0, 14, 1);
    *(_QWORD *)&v46 = 14;
    strcpy(v45, "HexVault User");
    sub_388120(5, (__int64)&v43, (__int64)&v45);
    if ( v45 )
    {
      *(_QWORD *)&v46 = 0;
      qfree(v45, (const char *)&v43);
    }
    v27 = a1[4];
    v28 = "<n/a>";
    if ( *(_QWORD *)(v27 + 104) > 1u )
      v28 = *(const char **)(v27 + 96);
    sub_169A50(&v43, (__int64)"Local site: %s", v28);
    v46 = 0;
    v45 = nullptr;
    v29 = qvector_reserve(&v45, 0, 20, 1);
    v45 = (char *)v29;
    *(_QWORD *)&v46 = 20;
    *(__m128i *)v29 = _mm_load_si128((const __m128i *)&xmmword_5DD970);
    *(_DWORD *)(v29 + 15) = 1702127955;
    v45[19] = 0;
    sub_388120(6, (__int64)&v43, (__int64)&v45);
    if ( v45 )
    {
      *(_QWORD *)&v46 = 0;
      qfree(v45, (const char *)&v43);
    }
    v30 = a1[4];
    v31 = "<n/a>";
    if ( *(_QWORD *)(v30 + 176) > 1u )
      v31 = *(const char **)(v30 + 168);
    sub_169A50(&v43, (__int64)"Root directory: %s", v31);
    v46 = 0;
    v45 = nullptr;
    v32 = qvector_reserve(&v45, 0, 24, 1);
    v45 = (char *)v32;
    v33 = (const char *)&v43;
    v5 = _mm_load_si128((const __m128i *)&xmmword_5DD980);
    *(_QWORD *)&v46 = 24;
    *(__m128i *)v32 = v5;
    *(_QWORD *)(v32 + 15) = 0x79726F7463657269LL;
    v45[23] = 0;
    sub_388120(7, (__int64)&v43, (__int64)&v45);
    if ( v45 )
    {
      *(_QWORD *)&v46 = 0;
      *(double *)v5.m128i_i64 = qfree(v45, (const char *)&v43);
    }
    if ( v43 )
    {
      *(_QWORD *)&v44 = 0;
      *(double *)v5.m128i_i64 = qfree(v43, (const char *)&v43, *(double *)v5.m128i_i64);
    }
    goto LABEL_42;
  }
LABEL_66:
  sub_388000(3, (const char *)&unk_5C2F25, nullptr);
  sub_388000(4, (const char *)&unk_5C2F25, nullptr);
  sub_388000(5, (const char *)&unk_5C2F25, nullptr);
  sub_388000(6, (const char *)&unk_5C2F25, nullptr);
  sub_388000(7, (const char *)&unk_5C2F25, nullptr);
  v33 = "HexVault: No info available";
  sub_388000(7, "HexVault: No info available", nullptr);
LABEL_42:
  if ( v68 )
  {
    *(_QWORD *)&v69 = 0;
    *(double *)v5.m128i_i64 = qfree(v68, v33, *(double *)v5.m128i_i64);
  }
  if ( v66 )
  {
    *(_QWORD *)&v67 = 0;
    *(double *)v5.m128i_i64 = qfree(v66, v33, *(double *)v5.m128i_i64);
  }
  if ( v64 )
  {
    *(_QWORD *)&v65 = 0;
    *(double *)v5.m128i_i64 = qfree(v64, v33, *(double *)v5.m128i_i64);
  }
  if ( v61 )
  {
    *(_QWORD *)&v62 = 0;
    *(double *)v5.m128i_i64 = qfree(v61, v33, *(double *)v5.m128i_i64);
  }
  if ( v59 )
  {
    *(_QWORD *)&v60 = 0;
    *(double *)v5.m128i_i64 = qfree(v59, v33, *(double *)v5.m128i_i64);
  }
  if ( v57 )
  {
    *(_QWORD *)&v58 = 0;
    *(double *)v5.m128i_i64 = qfree(v57, v33, *(double *)v5.m128i_i64);
  }
  if ( v55 )
  {
    *(_QWORD *)&v56 = 0;
    *(double *)v5.m128i_i64 = qfree(v55, v33, *(double *)v5.m128i_i64);
  }
  if ( v51 )
  {
    *(_QWORD *)&v52 = 0;
    *(double *)v5.m128i_i64 = qfree(v51, v33, *(double *)v5.m128i_i64);
  }
  if ( v49 )
  {
    *(_QWORD *)&v50 = 0;
    *(double *)v5.m128i_i64 = qfree(v49, v33, *(double *)v5.m128i_i64);
  }
  if ( src )
  {
    *(_QWORD *)&v48 = 0;
    qfree(src, v33, *(double *)v5.m128i_i64);
  }
  return v71 - __readfsqword(0x28u);
}
