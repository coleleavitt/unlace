__int64 __fastcall sub_422C80(
        _QWORD *a1,
        char a2,
        __int64 a3,
        char *a4,
        double a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  const char *v13; // rcx
  bool v14; // zf
  const char *v15; // rax
  const char *v16; // rdx
  const char *v17; // rcx
  const char *v18; // r8
  const char *vault_filter_explanations; // rax
  __m128 v20; // xmm4
  __m128 v21; // xmm5
  __m128 v22; // xmm0
  const char *v23; // r12
  size_t v24; // rax
  size_t v25; // r14
  size_t v26; // r13
  size_t v27; // r12
  char v28; // r15
  int v29; // eax
  const char *v30; // rsi
  size_t v31; // rax
  size_t v32; // r13
  __int64 (__fastcall *v33)(__int64, __int64, unsigned __int8); // rax
  __int64 *v34; // rdi
  __int64 v35; // rax
  unsigned __int8 (*v36)(void); // rdx
  unsigned int v37; // eax
  const char *v38; // r14
  const char *v39; // r13
  const char *v40; // rdi
  const char *v41; // rdx
  __int64 (__fastcall *v42)(__int64); // rax
  __int64 *v43; // rdi
  __int64 v44; // rax
  __int64 (*v45)(void); // rcx
  unsigned int v46; // eax
  __int64 v47; // rdi
  __int64 v48; // rbx
  __int64 v49; // r15
  __int64 v50; // rdx
  __int64 *v51; // rax
  __int64 v52; // rdi
  unsigned int v53; // ebx
  void *v55; // rdi
  size_t v56; // r14
  void *v57; // rax
  const char *v58; // rax
  char v59; // al
  __int64 v60; // rdi
  __int64 v61; // rbx
  __int64 v62; // r14
  __int64 v63; // rcx
  __int64 *v64; // rdx
  __int64 v65; // rdi
  __int64 v66; // rax
  char *v67; // r14
  void *v68; // rdi
  const char *v69; // [rsp-10h] [rbp-1140h]
  const char *v70; // [rsp-10h] [rbp-1140h]
  const char *v71; // [rsp+0h] [rbp-1130h]
  const char *v72; // [rsp+0h] [rbp-1130h]
  char *v73; // [rsp+0h] [rbp-1130h]
  const char *v74; // [rsp+8h] [rbp-1128h]
  __int64 v75; // [rsp+10h] [rbp-1120h]
  char v78; // [rsp+38h] [rbp-10F8h] BYREF
  bool v79; // [rsp+39h] [rbp-10F7h]
  int v80; // [rsp+3Ch] [rbp-10F4h]
  __int64 v81; // [rsp+40h] [rbp-10F0h] BYREF
  __int128 v82; // [rsp+48h] [rbp-10E8h]
  char *s2; // [rsp+60h] [rbp-10D0h] BYREF
  __int128 v84; // [rsp+68h] [rbp-10C8h]
  const char *v85[2]; // [rsp+80h] [rbp-10B0h] BYREF
  const char *v86; // [rsp+90h] [rbp-10A0h]
  __int64 v87; // [rsp+A0h] [rbp-1090h] BYREF
  __int128 v88; // [rsp+A8h] [rbp-1088h]
  __int64 v89; // [rsp+C0h] [rbp-1070h]
  void *src; // [rsp+C8h] [rbp-1068h] BYREF
  size_t n[2]; // [rsp+D0h] [rbp-1060h]
  int v92; // [rsp+E0h] [rbp-1050h]
  char s[4104]; // [rsp+F0h] [rbp-1040h] BYREF
  unsigned __int64 v94; // [rsp+10F8h] [rbp-38h]

  v13 = "User:%q";
  v94 = __readfsqword(0x28u);
  v81 = 0;
  if ( a2 )
    v13 = "<~U~ser       :q2:1000:50::>";
  v14 = *(_QWORD *)(a3 + 8) == 0;
  v82 = 0;
  v15 = &s1;
  if ( !v14 )
    v15 = *(const char **)a3;
  sub_169A50(
    &v81,
    (__int64)"%s\n\n%%/%%*%s\n%s\n%s\n%s\n%s\n\n",
    v15,
    v13,
    "<#Must be unique#~N~ame       :q1:1000:50::>",
    "<~R~ootdir    :F3:0:50::>",
    "<Client ~h~ost:q4:1000:50::>",
    "<#One path per line.\n"
    "To hide a path, prepend it with an exclamation mark.#Path ~f~ilters will be applied to all operations:t5::60:::>");
  v89 = 40;
  src = nullptr;
  v92 = 0;
  *(_OWORD *)n = 0;
  vault_filter_explanations = (const char *)get_vault_filter_explanations(
                                              &v81,
                                              "%s\n\n%%/%%*%s\n%s\n%s\n%s\n%s\n\n",
                                              v16,
                                              v17,
                                              v18,
                                              v69,
                                              v71,
                                              v74);
  v22 = 0;
  v23 = vault_filter_explanations;
  s2 = nullptr;
  v84 = 0;
  if ( vault_filter_explanations
    && (v24 = strlen(vault_filter_explanations),
        v25 = v24 + 1,
        v26 = v24,
        s2 = (char *)qvector_reserve(&s2, 0, v24 + 1, 1),
        *(_QWORD *)&v84 = v25,
        memmove(s2, v23, v26),
        s2[v26] = 0,
        v27 = v84,
        (unsigned __int64)v84 > 1) )
  {
    v67 = s2;
    v68 = src;
    if ( n[1] < (unsigned __int64)v84 )
    {
      src = (void *)qvector_reserve(&src, src, v84, 1);
      v68 = src;
    }
    n[0] = v27;
    memmove(v68, v67, v27 - 1);
    *((char *)src + v27 - 1) = 0;
  }
  else
  {
    n[0] = 0;
  }
  v75 = (__int64)(a4 + 24);
  v28 = (_BYTE)a4 + 72;
  while ( 1 )
  {
    v79 = *((_QWORD *)a4 + 1) > 1u;
    v78 = a2;
    v80 = 0;
    s[0] = 0;
    v29 = sub_1697D0(
            v81,
            (__int64)sub_421D90,
            (__int64)&v78,
            v75,
            (__int64)a4,
            (__int64)s,
            v22,
            a6,
            a7,
            a8,
            v20,
            v21,
            a11,
            a12,
            v28);
    v30 = v70;
    if ( !v29 )
      break;
    v31 = strlen(s);
    v32 = v31;
    if ( v31 )
    {
      v55 = *((void **)a4 + 6);
      v56 = v31 + 1;
      if ( *((_QWORD *)a4 + 8) < v31 + 1 )
      {
        v66 = qvector_reserve(a4 + 48, *((_QWORD *)a4 + 6), v56, 1);
        *((_QWORD *)a4 + 6) = v66;
        v55 = (void *)v66;
      }
      *((_QWORD *)a4 + 7) = v56;
      memmove(v55, s, v32);
      *(_BYTE *)(*((_QWORD *)a4 + 6) + v32) = 0;
    }
    else
    {
      *((_QWORD *)a4 + 7) = 0;
    }
    v30 = (const char *)vault_with_events_t__::vfunc_20;
    v33 = *(__int64 (__fastcall **)(__int64, __int64, unsigned __int8))(*a1 + 160LL);
    if ( v33 != vault_with_events_t__::vfunc_20 )
    {
      v30 = a4;
      v37 = v33((__int64)a1, (__int64)a4, 1u);
      goto LABEL_16;
    }
    v34 = (__int64 *)a1[1];
    if ( !v34 )
      goto LABEL_51;
    v35 = *v34;
    v36 = *(unsigned __int8 (**)(void))(*v34 + 480);
    if ( (char *)v36 == (char *)sub_178B60 )
    {
LABEL_15:
      v30 = a4;
      v37 = (*(__int64 (__fastcall **)(__int64 *, char *, __int64))(v35 + 128))(v34, a4, 1);
LABEL_16:
      if ( v37 && !v79 )
        goto LABEL_52;
LABEL_18:
      v38 = (const char *)n[0];
      v86 = nullptr;
      if ( n[0] )
      {
        v57 = (void *)qalloc_or_throw(n[0]);
        v86 = v38;
        v58 = (const char *)memcpy(v57, src, (size_t)v38);
        v30 = &s1;
        v40 = v58;
        if ( (_QWORD)v84 )
          v30 = s2;
        v39 = v58;
      }
      else
      {
        if ( !(_QWORD)v84 )
          goto LABEL_39;
        v30 = s2;
        v39 = nullptr;
        v40 = &s1;
      }
      if ( !strcmp(v40, v30) )
        goto LABEL_37;
      v85[1] = v38;
      a6 = 0;
      v85[0] = v39;
      v87 = 0;
      v88 = 0;
      sub_421E30((__int64)&v87, v85);
      v41 = &s1;
      v42 = *(__int64 (__fastcall **)(__int64))(*a1 + 200LL);
      if ( *((_QWORD *)a4 + 1) )
        v41 = *(const char **)a4;
      if ( v42 == sub_415630 )
      {
        v43 = (__int64 *)a1[1];
        if ( !v43 )
          goto LABEL_57;
        v44 = *v43;
        v45 = *(__int64 (**)(void))(*v43 + 480);
        if ( v45 != sub_178B60 )
        {
          v72 = v41;
          v59 = v45();
          v41 = v72;
          if ( v59 )
          {
LABEL_57:
            v46 = 52;
            goto LABEL_58;
          }
          v43 = (__int64 *)a1[1];
          v44 = *v43;
        }
        v30 = (const char *)&v87;
        v46 = (*(__int64 (__fastcall **)(__int64 *, __int64 *, const char *))(v44 + 168))(v43, &v87, v41);
      }
      else
      {
        v30 = (const char *)&v87;
        v46 = ((__int64 (__fastcall *)(_QWORD *, __int64 *, const char *))v42)(a1, &v87, v41);
      }
      if ( !v46 )
      {
        v47 = v87;
        if ( v87 )
        {
          if ( (_QWORD)v88 )
          {
            v48 = 0;
            v49 = v88;
            v50 = v87;
            do
            {
              v51 = (__int64 *)(v50 + 24 * v48);
              v52 = *v51;
              if ( *v51 )
              {
                v51[1] = 0;
                qfree(v52, (const char *)&v87);
                v50 = v87;
              }
              ++v48;
            }
            while ( v49 != v48 );
            v47 = v50;
          }
          *(_QWORD *)&v88 = 0;
          *(double *)v22.m128_u64 = qfree(v47, (const char *)&v87);
        }
LABEL_37:
        if ( v39 )
          *(double *)v22.m128_u64 = qfree(v39, v30);
LABEL_39:
        v53 = 1;
        goto LABEL_40;
      }
LABEL_58:
      sub_4168C0(v46, (__int64)"Failed to set filters");
      v60 = v87;
      if ( v87 )
      {
        if ( (_QWORD)v88 )
        {
          v73 = a4;
          v61 = 0;
          v62 = v88;
          v63 = v87;
          do
          {
            v64 = (__int64 *)(v63 + 24 * v61);
            v65 = *v64;
            if ( *v64 )
            {
              v64[1] = 0;
              qfree(v65, "Failed to set filters");
              v63 = v87;
            }
            ++v61;
          }
          while ( v62 != v61 );
          a4 = v73;
          v60 = v63;
        }
        *(_QWORD *)&v88 = 0;
        *(double *)v22.m128_u64 = qfree(v60, "Failed to set filters");
      }
      if ( v39 )
        *(double *)v22.m128_u64 = qfree(v39, "Failed to set filters");
    }
    else
    {
      if ( !v36() )
      {
        v34 = (__int64 *)a1[1];
        v35 = *v34;
        goto LABEL_15;
      }
LABEL_51:
      v37 = 52;
      if ( v79 )
        goto LABEL_18;
LABEL_52:
      sub_4168C0(v37, (__int64)"Failed to add site");
    }
  }
  v53 = 0;
LABEL_40:
  if ( s2 )
  {
    *(_QWORD *)&v84 = 0;
    *(double *)v22.m128_u64 = qfree(s2, v30, *(double *)v22.m128_u64);
  }
  if ( src )
  {
    n[0] = 0;
    *(double *)v22.m128_u64 = qfree(src, v30, *(double *)v22.m128_u64);
  }
  if ( v81 )
  {
    *(_QWORD *)&v82 = 0;
    qfree(v81, v30, *(double *)v22.m128_u64);
  }
  return v53;
}
