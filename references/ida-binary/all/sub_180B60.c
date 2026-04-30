__int64 sub_180B60()
{
  unsigned int v0; // r15d
  __int64 license_manager; // rbx
  unsigned __int8 v2; // al
  const char *v3; // rsi
  int v4; // eax
  time_t v5; // rdx
  const char *v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r14
  __int64 (__fastcall *v9)(__int64); // rax
  unsigned int v10; // ebx
  __int64 (__fastcall *v12)(__int64, const char **, _QWORD, const char *, __int64 *, _QWORD, const char **); // rax
  const char *v13; // rbx
  const char *v14; // r15
  const char *v15; // r13
  const char *v16; // rax
  time_t v17; // rax
  __int64 v18; // rax
  __int64 v19; // rdi
  const char *v20; // rdi
  __int64 v21; // rbx
  const char *v22; // r15
  __int64 v23; // rdi
  __int64 v24; // r14
  __int64 i; // r13
  __int64 v26; // rdi
  __int64 v27; // rdi
  __int64 v28; // rdi
  __int64 v29; // rbx
  __int64 v30; // rax
  unsigned __int8 *v31; // r15
  __int64 (__fastcall *v32)(__int64); // rax
  __int64 v33; // rbx
  unsigned __int64 v34; // r12
  unsigned __int64 v35; // r12
  unsigned __int64 v36; // r12
  __m128i v37; // xmm0
  const char *v38; // r14
  const char *v39; // r12
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  const void *v43; // r8
  void *v44; // rdi
  const void *v45; // r8
  void *v46; // rax
  const void *v47; // rbx
  void *v48; // rax
  __m128i si128; // xmm0
  const char *v50; // rax
  const char *v51; // r15
  size_t v52; // rax
  size_t v53; // rbx
  __int64 v54; // rdi
  void *v55; // rdi
  size_t v56; // r14
  char v57; // [rsp+7h] [rbp-169h]
  __int64 v58; // [rsp+18h] [rbp-158h]
  __int64 v59; // [rsp+28h] [rbp-148h]
  const void *v60; // [rsp+28h] [rbp-148h]
  const void *v61; // [rsp+28h] [rbp-148h]
  void *v62; // [rsp+30h] [rbp-140h] BYREF
  __int128 v63; // [rsp+38h] [rbp-138h]
  const char *v64; // [rsp+50h] [rbp-120h] BYREF
  __int128 v65; // [rsp+58h] [rbp-118h]
  const char *v66; // [rsp+70h] [rbp-100h] BYREF
  __int128 v67; // [rsp+78h] [rbp-F8h]
  __m128i v68; // [rsp+90h] [rbp-E0h] BYREF
  void *v69; // [rsp+A0h] [rbp-D0h]
  __int64 dest; // [rsp+B0h] [rbp-C0h] BYREF
  void *dest_8[2]; // [rsp+B8h] [rbp-B8h]
  __int16 v72; // [rsp+C8h] [rbp-A8h]
  char v73; // [rsp+CAh] [rbp-A6h]
  char v74; // [rsp+D0h] [rbp-A0h]
  void *v75; // [rsp+D8h] [rbp-98h] BYREF
  __int128 v76; // [rsp+E0h] [rbp-90h]
  void *v77; // [rsp+F0h] [rbp-80h] BYREF
  __int128 v78; // [rsp+F8h] [rbp-78h]
  __m128i v79; // [rsp+108h] [rbp-68h]
  void *v80; // [rsp+118h] [rbp-58h]
  __int64 v81; // [rsp+120h] [rbp-50h] BYREF
  __int128 v82; // [rsp+128h] [rbp-48h]
  unsigned __int64 v83; // [rsp+138h] [rbp-38h]

  v83 = __readfsqword(0x28u);
  v68.m128i_i16[2] = 0;
  v62 = nullptr;
  v68.m128i_i32[0] = 0;
  v68.m128i_i64[1] = 0;
  v69 = nullptr;
  v63 = 0;
  v0 = *(_DWORD *)(get_ph() + 4);
  license_manager = get_license_manager();
  v2 = getinf_flag(3, 4);
  v3 = (const char *)v2;
  v4 = sub_178D60(v0, v2);
  v8 = v4;
  if ( !v4 )
    goto LABEL_5;
  v9 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)license_manager + 40LL);
  v6 = (const char *)(v9 == sub_178B50 ? license_manager + 40 : v9(license_manager));
  if ( !v6[32] || *((_QWORD *)v6 + 1) <= 1u )
    goto LABEL_5;
  v64 = nullptr;
  v65 = 0;
  v3 = (const char *)&v64;
  v66 = nullptr;
  v67 = 0;
  v12 = *(__int64 (__fastcall **)(__int64, const char **, _QWORD, const char *, __int64 *, _QWORD, const char **))(*(_QWORD *)license_manager + 64LL);
  *(_OWORD *)dest_8 = 0x100000001uLL;
  LODWORD(dest) = 0;
  WORD2(dest) = 0;
  v57 = v12(license_manager, &v64, 0, v6, &dest, 0, &v66);
  if ( !v57 )
  {
    v19 = (__int64)v66;
    if ( !v66 )
    {
      v20 = v64;
      if ( !v64 )
        goto LABEL_5;
      v58 = v65;
      if ( (_QWORD)v65 )
        goto LABEL_35;
      goto LABEL_84;
    }
LABEL_31:
    *(_QWORD *)&v67 = 0;
    qfree(v19, v3, v5, v6, v7);
LABEL_32:
    v20 = v64;
    if ( !v64 )
      goto LABEL_5;
    v58 = v65;
    if ( (_QWORD)v65 )
    {
      v57 = 0;
LABEL_35:
      v59 = 0;
      v21 = 0;
      do
      {
        v22 = &v20[v59];
        v23 = *(_QWORD *)&v20[v59 + 128];
        if ( v23 )
        {
          *((_QWORD *)v22 + 17) = 0;
          qfree(v23, v3, v5, v6, v7);
        }
        v3 = *((const char **)v22 + 10);
        if ( v3 )
        {
          v24 = *((_QWORD *)v22 + 11);
          if ( v24 )
          {
            for ( i = 0; i != v24; ++i )
            {
              v6 = &v3[24 * i];
              v26 = *(_QWORD *)v6;
              if ( *(_QWORD *)v6 )
              {
                *((_QWORD *)v6 + 1) = 0;
                qfree(v26, v3, v5, v6, v7);
                v3 = *((const char **)v22 + 10);
              }
            }
          }
          *((_QWORD *)v22 + 11) = 0;
          qfree(v3, v3, v5, v6, v7);
        }
        v27 = *((_QWORD *)v22 + 7);
        if ( v27 )
        {
          *((_QWORD *)v22 + 8) = 0;
          qfree(v27, v3, v5, v6, v7);
        }
        v28 = *((_QWORD *)v22 + 4);
        if ( v28 )
        {
          *((_QWORD *)v22 + 5) = 0;
          qfree(v28, v3, v5, v6, v7);
        }
        ++v21;
        v59 += 152;
        v20 = v64;
      }
      while ( v21 != v58 );
      *(_QWORD *)&v65 = 0;
      qfree(v64, v3, v5, v6, v7);
      if ( v57 )
        goto LABEL_51;
LABEL_5:
      v10 = 0;
      goto LABEL_6;
    }
LABEL_84:
    qfree(v20, v3, v5, v6, v7);
    goto LABEL_5;
  }
  v6 = v64;
  v5 = 9 * v65;
  v13 = &v64[152 * v65];
  if ( v64 == v13 )
  {
LABEL_30:
    v19 = (__int64)v66;
    if ( !v66 )
      goto LABEL_32;
    goto LABEL_31;
  }
  v14 = v64;
  while ( 1 )
  {
    v5 = sub_55C580();
    v6 = *((const char **)v14 + 7);
    v15 = v6;
    v16 = &v6[40 * *((_QWORD *)v14 + 8)];
    if ( v6 != v16 )
    {
      while ( 1 )
      {
        v3 = v15;
        if ( (_DWORD)v8 == *((_DWORD *)v15 + 2) )
          break;
        v3 = v15 + 40;
        v15 = v3;
        if ( v16 == v3 )
          goto LABEL_29;
      }
      if ( v15 )
      {
        if ( !v5 )
          v5 = time(nullptr);
        v17 = *((_QWORD *)v15 + 3);
        if ( v17 == -1 || v17 <= v5 )
        {
          v18 = *((_QWORD *)v15 + 4);
          if ( !v18 )
            break;
          v3 = (const char *)(v18 - 2592000);
          if ( v5 < v18 - 2592000 )
            break;
          v3 = (const char *)(v18 - 1296000);
          if ( v18 - 1296000 < v18 )
            v3 = *((const char **)v15 + 4);
          if ( v5 < (__int64)v3 )
            break;
          v3 = (const char *)(v18 + 1296000);
          if ( v5 < v18 + 1296000 || v5 < v18 + 2592000 )
            break;
        }
      }
    }
LABEL_29:
    v14 += 152;
    if ( v13 == v14 )
      goto LABEL_30;
  }
  v5 = *(_QWORD *)(v14 + 12);
  LODWORD(dest) = *(_DWORD *)v14;
  WORD2(dest) = *((_WORD *)v14 + 2);
  dest_8[1] = (void *)*((unsigned int *)v14 + 5);
  dest_8[0] = (void *)v5;
  si128 = _mm_load_si128((const __m128i *)&dest);
  v69 = dest_8[1];
  v50 = off_8BA320[v8];
  v68 = si128;
  v51 = v50;
  if ( !v50 || (v52 = strlen(v50), (v53 = v52) == 0) )
  {
    v54 = (__int64)v66;
    *(_QWORD *)&v63 = 0;
    if ( v66 )
      goto LABEL_101;
    goto LABEL_107;
  }
  v55 = v62;
  v56 = v52 + 1;
  if ( *((_QWORD *)&v63 + 1) < v52 + 1 )
  {
    v62 = (void *)qvector_reserve(&v62, v62, v56, 1);
    v55 = v62;
  }
  v3 = v51;
  *(_QWORD *)&v63 = v56;
  memmove(v55, v51, v53);
  *((_BYTE *)v62 + v53) = 0;
  v54 = (__int64)v66;
  if ( !v66 )
  {
LABEL_107:
    v20 = v64;
    if ( !v64 )
      goto LABEL_51;
    v58 = v65;
    if ( !(_QWORD)v65 )
      goto LABEL_103;
    goto LABEL_35;
  }
LABEL_101:
  *(_QWORD *)&v67 = 0;
  qfree(v54, v3, v5, v6, v7);
  v20 = v64;
  if ( v64 )
  {
    v58 = v65;
    if ( !(_QWORD)v65 )
    {
LABEL_103:
      qfree(v20, v3, v5, v6, v7);
      goto LABEL_51;
    }
    goto LABEL_35;
  }
LABEL_51:
  v29 = get_license_manager();
  v30 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v29 + 88LL))(v29, 0, 0);
  v73 = 1;
  dest = 0;
  v31 = (unsigned __int8 *)v30;
  v72 = 0;
  v74 = 0;
  v75 = nullptr;
  v77 = nullptr;
  v79.m128i_i32[0] = 0;
  v79.m128i_i16[2] = 0;
  v79.m128i_i64[1] = 0;
  v80 = nullptr;
  v81 = 0;
  *(_OWORD *)dest_8 = 0;
  v76 = 0;
  v78 = 0;
  v82 = 0;
  v32 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v29 + 40LL);
  if ( v32 == sub_178B50 )
    v33 = v29 + 40;
  else
    v33 = v32(v29);
  if ( (__int64 *)v33 != &dest )
  {
    v34 = *(_QWORD *)(v33 + 8);
    if ( v34 > 1 )
    {
      v43 = *(const void **)v33;
      v44 = (void *)dest;
      if ( dest_8[1] < (void *)v34 )
      {
        v61 = *(const void **)v33;
        dest = qvector_reserve(&dest, dest, *(_QWORD *)(v33 + 8), 1);
        v43 = v61;
        v44 = (void *)dest;
      }
      dest_8[0] = (void *)v34;
      memmove(v44, v43, v34 - 1);
      *(_BYTE *)(dest + v34 - 1) = 0;
    }
    else
    {
      dest_8[0] = nullptr;
    }
  }
  v72 = *(_WORD *)(v33 + 24);
  v73 = *(_BYTE *)(v33 + 26);
  v74 = *(_BYTE *)(v33 + 32);
  if ( &v75 != (void **)(v33 + 40) )
  {
    v35 = *(_QWORD *)(v33 + 48);
    if ( v35 > 1 )
    {
      v45 = *(const void **)(v33 + 40);
      v46 = v75;
      if ( *((_QWORD *)&v76 + 1) < v35 )
      {
        v60 = *(const void **)(v33 + 40);
        v46 = (void *)qvector_reserve(&v75, v75, *(_QWORD *)(v33 + 48), 1);
        v75 = v46;
        v45 = v60;
      }
      *(_QWORD *)&v76 = v35;
      memmove(v46, v45, v35 - 1);
      *((char *)v75 + v35 - 1) = 0;
    }
    else
    {
      *(_QWORD *)&v76 = 0;
    }
  }
  if ( &v77 != (void **)(v33 + 64) )
  {
    v36 = *(_QWORD *)(v33 + 72);
    if ( v36 > 1 )
    {
      v47 = *(const void **)(v33 + 64);
      v48 = v77;
      if ( *((_QWORD *)&v78 + 1) < v36 )
      {
        v48 = (void *)qvector_reserve(&v77, v77, v36, 1);
        v77 = v48;
      }
      *(_QWORD *)&v78 = v36;
      memmove(v48, v47, v36 - 1);
      *((char *)v77 + v36 - 1) = 0;
    }
    else
    {
      *(_QWORD *)&v78 = 0;
    }
  }
  v37 = _mm_load_si128(&v68);
  v66 = nullptr;
  v79 = v37;
  v80 = v69;
  v67 = 0;
  sub_169A50(
    (__int64 *)&v66,
    (__int64)"%02X-%02X%02X-%02X%02X-%02X",
    v37.m128i_u8[0],
    v37.m128i_u8[1],
    v37.m128i_u8[2],
    v37.m128i_u8[3],
    v37.m128i_u8[4],
    v37.m128i_u8[5]);
  v38 = &s1;
  if ( (_QWORD)v67 )
    v38 = v66;
  v39 = &s1;
  if ( (_QWORD)v63 )
    v39 = (const char *)v62;
  if ( v31 )
  {
    v64 = nullptr;
    v65 = 0;
    sub_169A50((__int64 *)&v64, (__int64)"%02X-%02X%02X-%02X%02X-%02X", *v31, v31[1], v31[2], v31[3], v31[4], v31[5]);
    v3 = "Your current license (%s) does not contain a decompiler for %s, which is needed to decompile the current file.\n"
         "We have found a suitable license (%s) on the license server, would you like to switch to it instead?";
    if ( (_QWORD)v65 )
      sub_169A50(
        &v81,
        (__int64)"Your current license (%s) does not contain a decompiler for %s, which is needed to decompile the curren"
                 "t file.\n"
                 "We have found a suitable license (%s) on the license server, would you like to switch to it instead?",
        v64,
        v39,
        v38);
    else
      sub_169A50(
        &v81,
        (__int64)"Your current license (%s) does not contain a decompiler for %s, which is needed to decompile the curren"
                 "t file.\n"
                 "We have found a suitable license (%s) on the license server, would you like to switch to it instead?",
        &s1,
        v39,
        v38);
    if ( v64 )
    {
      *(_QWORD *)&v65 = 0;
      qfree(
        v64,
        "Your current license (%s) does not contain a decompiler for %s, which is needed to decompile the current file.\n"
        "We have found a suitable license (%s) on the license server, would you like to switch to it instead?",
        v40,
        v41,
        v42);
    }
  }
  else
  {
    v3 = "Your current license (%s) does not contain a decompiler for %s, which is needed to decompile the current file.\n"
         "We have found a suitable license (%s) on the license server, would you like to switch to it instead?";
    sub_169A50(
      &v81,
      (__int64)"Your current license (%s) does not contain a decompiler for %s, which is needed to decompile the current "
               "file.\n"
               "We have found a suitable license (%s) on the license server, would you like to switch to it instead?",
      "<invalid>",
      v39,
      v38);
  }
  if ( v66 )
  {
    *(_QWORD *)&v67 = 0;
    qfree(
      v66,
      "Your current license (%s) does not contain a decompiler for %s, which is needed to decompile the current file.\n"
      "We have found a suitable license (%s) on the license server, would you like to switch to it instead?",
      v40,
      v41,
      v42);
  }
  v10 = sub_559CA0(&dest);
  if ( v81 )
  {
    *(_QWORD *)&v82 = 0;
    qfree(
      v81,
      "Your current license (%s) does not contain a decompiler for %s, which is needed to decompile the current file.\n"
      "We have found a suitable license (%s) on the license server, would you like to switch to it instead?",
      v5,
      v6,
      v7);
  }
  if ( v77 )
  {
    *(_QWORD *)&v78 = 0;
    qfree(
      v77,
      "Your current license (%s) does not contain a decompiler for %s, which is needed to decompile the current file.\n"
      "We have found a suitable license (%s) on the license server, would you like to switch to it instead?",
      v5,
      v6,
      v7);
  }
  if ( v75 )
  {
    *(_QWORD *)&v76 = 0;
    qfree(
      v75,
      "Your current license (%s) does not contain a decompiler for %s, which is needed to decompile the current file.\n"
      "We have found a suitable license (%s) on the license server, would you like to switch to it instead?",
      v5,
      v6,
      v7);
  }
  if ( dest )
  {
    dest_8[0] = nullptr;
    qfree(
      dest,
      "Your current license (%s) does not contain a decompiler for %s, which is needed to decompile the current file.\n"
      "We have found a suitable license (%s) on the license server, would you like to switch to it instead?",
      v5,
      v6,
      v7);
  }
LABEL_6:
  if ( v62 )
  {
    *(_QWORD *)&v63 = 0;
    qfree(v62, v3, v5, v6, v7);
  }
  return v10;
}
