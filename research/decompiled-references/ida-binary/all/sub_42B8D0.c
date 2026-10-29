unsigned __int64 __fastcall sub_42B8D0(
        __int64 *a1,
        const char *a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  unsigned int v10; // r12d
  _QWORD **v11; // r14
  __int64 v12; // rbx
  unsigned int v13; // r13d
  const char *v14; // rdi
  const char *file_ext; // rax
  const char *v16; // r15
  const char *v17; // rsi
  const char *v18; // r8
  size_t v19; // r13
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r9
  char v23; // r13
  __m128 v24; // xmm4
  __m128 v25; // xmm5
  __int64 v26; // r8
  __int64 v27; // r13
  _QWORD *v28; // rax
  const char *v29; // r9
  __int64 (__fastcall *v30)(__int64); // rax
  const char *v31; // rdx
  const char *v32; // rsi
  char v33; // al
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __m128 v37; // xmm4
  __m128 v38; // xmm5
  __int64 v39; // rdx
  const char *v40; // rsi
  const char *v42; // rdi
  _QWORD *v43; // rax
  const char *v44; // rdi
  const char *v45; // rax
  const char *v46; // r13
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __m128 v51; // xmm4
  __m128 v52; // xmm5
  const char *v53; // r9
  unsigned int v54; // eax
  const char *v55; // r9
  unsigned int v56; // eax
  __int64 v57; // rax
  _QWORD *v58; // r13
  const char *v59; // rsi
  void *v60; // rax
  __int64 v61; // [rsp-8h] [rbp-128h]
  size_t n; // [rsp+0h] [rbp-120h]
  const char *src; // [rsp+10h] [rbp-110h]
  __int64 v64; // [rsp+20h] [rbp-100h]
  _QWORD *v65; // [rsp+28h] [rbp-F8h]
  unsigned __int8 v66; // [rsp+3Eh] [rbp-E2h] BYREF
  unsigned __int8 v67; // [rsp+3Fh] [rbp-E1h] BYREF
  _QWORD v68[4]; // [rsp+40h] [rbp-E0h] BYREF
  __int64 v69; // [rsp+60h] [rbp-C0h] BYREF
  __int128 v70; // [rsp+68h] [rbp-B8h]
  void *v71; // [rsp+80h] [rbp-A0h] BYREF
  __int128 v72; // [rsp+88h] [rbp-98h]
  __int64 (__fastcall **v73)(); // [rsp+A0h] [rbp-80h] BYREF
  _OWORD v74[3]; // [rsp+A8h] [rbp-78h] BYREF
  __int64 v75; // [rsp+D8h] [rbp-48h]
  unsigned __int64 v76; // [rsp+E8h] [rbp-38h]

  v76 = __readfsqword(0x28u);
  v10 = (unsigned int)a2;
  v65 = sub_426230(a1, a2);
  v11 = (_QWORD **)sub_417080((__int64)v65);
  v12 = *a1;
  v64 = *a1 + 48 * a1[1];
  if ( v64 != *a1 )
  {
    do
    {
      while ( 1 )
      {
        v17 = (const char *)v12;
        v33 = sub_4180F0((__int64)v65, v12);
        v39 = *(_QWORD *)(v12 + 8);
        if ( v33 )
          break;
        v40 = &s1;
        if ( v39 )
          v40 = *(const char **)v12;
        v12 += 48;
        sub_169700(
          (int)"%s: already resolving\n",
          (__int64)v40,
          v39,
          v34,
          v35,
          v36,
          a3,
          a4,
          a5,
          a6,
          v37,
          v38,
          a9,
          a10,
          n);
        if ( v64 == v12 )
          return v76 - __readfsqword(0x28u);
      }
      v13 = v10 - 5;
      v14 = &s1;
      if ( v39 )
        v14 = *(const char **)v12;
      file_ext = (const char *)get_file_ext(v14);
      v16 = file_ext;
      if ( file_ext && ((v17 = "idb", !strcasecmp(file_ext, "idb")) || (v17 = "i64", !strcasecmp(v16, "i64"))) )
      {
        a3 = 0;
        v73 = nullptr;
        memset(v74, 0, 40);
        if ( v13 > 1 )
        {
          v18 = &s1;
          if ( *(_QWORD *)(v12 + 8) )
            v18 = *(const char **)v12;
          a3 = 0;
          v71 = nullptr;
          v72 = 0;
          if ( v18 )
          {
            src = v18;
            v19 = strlen(v18);
            v71 = (void *)qvector_reserve(&v71, 0, v19 + 1, 1);
            *(_QWORD *)&v72 = v19 + 1;
            memmove(v71, src, v19);
            *((_BYTE *)v71 + v19) = 0;
          }
          v17 = (const char *)&v73;
          v23 = sub_417670((__int64)v65, (__int64)&v73, 2, (__int64)&v71, 0, nullptr, v10, 0);
          v26 = v61;
          if ( v71 )
          {
            *(_QWORD *)&v72 = 0;
            *(double *)a3.m128_u64 = qfree(v71, (const char *)&v73, v20, v21, v61);
          }
          if ( !v23 )
          {
            v17 = &s1;
            if ( *(_QWORD *)(v12 + 8) )
              v17 = *(const char **)v12;
            v42 = "Cannot find a MERGE association for %s";
            sub_169700(
              (int)"Cannot find a MERGE association for %s",
              (__int64)v17,
              v20,
              v21,
              v26,
              v22,
              a3,
              a4,
              a5,
              a6,
              v24,
              v25,
              a9,
              a10,
              n);
            goto LABEL_38;
          }
          if ( *((_QWORD *)&v74[1] + 1) <= 1u )
          {
            v44 = &s1;
            if ( *(_QWORD *)(v12 + 8) )
              v44 = *(const char **)v12;
            v45 = (const char *)get_file_ext(v44);
            v46 = v45;
            if ( v45 )
            {
              v17 = "idb";
              if ( !strcasecmp(v45, "idb") || (v17 = "i64", !strcasecmp(v46, "i64")) )
              {
                v42 = "Cannot merge because there are no arguments.\n"
                      "\n"
                      "You can reset the arguments \n"
                      "in View>Options>File extension associations";
                sub_169630(
                  (int)"Cannot merge because there are no arguments.\n"
                       "\n"
                       "You can reset the arguments \n"
                       "in View>Options>File extension associations",
                  (__int64)v17,
                  v47,
                  v48,
                  v49,
                  v50,
                  a3,
                  a4,
                  a5,
                  a6,
                  v51,
                  v52,
                  a9,
                  a10,
                  n);
LABEL_38:
                v43 = sub_426230(v42, v17);
                sub_418570((__int64)v43, 1u, v12);
                if ( *(_QWORD *)&v74[1] )
                {
                  *((_QWORD *)&v74[1] + 1) = 0;
                  *(double *)a3.m128_u64 = qfree(*(_QWORD *)&v74[1], (_BYTE *)&dword_0 + 1);
                }
                if ( v73 )
                {
                  *(_QWORD *)&v74[0] = 0;
                  *(double *)a3.m128_u64 = qfree(v73, (_BYTE *)&dword_0 + 1, *(double *)a3.m128_u64);
                }
                goto LABEL_27;
              }
            }
          }
        }
      }
      else
      {
        if ( v13 > 1 )
        {
          sub_417500((__int64)v68, (__int64)v65, v12);
          a3 = 0;
          v73 = &local_site_t___vtable;
          memset(v74, 0, sizeof(v74));
          v69 = 0;
          v71 = nullptr;
          v75 = 0;
          v70 = 0;
          v72 = 0;
          sub_417360((__int64)v65, &v73);
          v53 = &s1;
          if ( *(_QWORD *)(v12 + 8) )
            v53 = *(const char **)v12;
          v54 = (*(__int64 (__fastcall **)(_QWORD *, __int64 *, unsigned __int8 *, _QWORD, __int64 (__fastcall ***)(), const char *, __int64))(*v11[1] + 456LL))(
                  v11[1],
                  &v69,
                  &v66,
                  0,
                  &v73,
                  v53,
                  -3);
          if ( v54 )
          {
            v59 = "Base path (current revision):";
            sub_4168C0(v54, (__int64)"Base path (current revision):");
          }
          else
          {
            v55 = &s1;
            if ( *(_QWORD *)(v12 + 8) )
              v55 = *(const char **)v12;
            v56 = (*(__int64 (__fastcall **)(_QWORD *, void **, unsigned __int8 *, _QWORD, __int64 (__fastcall ***)(), const char *, __int64))(*v11[1] + 456LL))(
                    v11[1],
                    &v71,
                    &v67,
                    0,
                    &v73,
                    v55,
                    -1);
            if ( v56 )
            {
              v59 = "Remote path (last revision):";
              sub_4168C0(v56, (__int64)"Remote path (last revision):", v61);
            }
            else
            {
              v57 = operator new(0x38u);
              *(_QWORD *)(v57 + 8) = 0;
              v58 = (_QWORD *)v57;
              a3 = 0;
              *(_QWORD *)(v57 + 16) = 0;
              *(_QWORD *)v57 = perform_external_merge;
              *(_QWORD *)(v57 + 32) = 0;
              *(_OWORD *)(v57 + 40) = 0;
              if ( *(_QWORD *)(v12 + 8) )
              {
                n = *(_QWORD *)(v12 + 8);
                v60 = (void *)qalloc_or_throw(n);
                v58[4] = v60;
                v58[6] = n;
                memcpy(v60, *(const void **)v12, n);
                v58[5] = n;
              }
              v59 = (const char *)v68;
              sub_434A50(2, (unsigned int)v68, (unsigned int)&v71, 0, v67, (unsigned int)&v69, v66, v10, (__int64)v58);
            }
          }
          v75 = 0;
          v73 = &local_site_t___vtable;
          if ( *((_QWORD *)&v74[1] + 1) )
          {
            *(_QWORD *)&v74[2] = 0;
            *(double *)a3.m128_u64 = qfree(*((_QWORD *)&v74[1] + 1), v59);
          }
          if ( *(_QWORD *)&v74[0] )
          {
            *((_QWORD *)&v74[0] + 1) = 0;
            *(double *)a3.m128_u64 = qfree(*(_QWORD *)&v74[0], v59);
          }
          if ( v71 )
          {
            *(_QWORD *)&v72 = 0;
            *(double *)a3.m128_u64 = qfree(v71, v59);
          }
          if ( v69 )
          {
            *(_QWORD *)&v70 = 0;
            *(double *)a3.m128_u64 = qfree(v69, v59);
          }
          if ( v68[0] )
          {
            v68[1] = 0;
            *(double *)a3.m128_u64 = qfree(v68[0], v59);
          }
          goto LABEL_27;
        }
        a3 = 0;
        v73 = nullptr;
        memset(v74, 0, 40);
      }
      v27 = operator new(0x60u);
      v28 = sub_426230(96, v17);
      sub_42B820(v27, (__int64)v28, v12);
      v29 = &s1;
      v30 = (__int64 (__fastcall *)(__int64))(*v11)[5];
      if ( *((_QWORD *)&v74[1] + 1) )
        v29 = *(const char **)&v74[1];
      v31 = &s1;
      if ( *(_QWORD *)(v12 + 8) )
        v31 = *(const char **)v12;
      v32 = (const char *)(v27 + 32);
      if ( v30 == vault_with_events_t__::vfunc_5 )
        (*(void (__fastcall **)(_QWORD *, const char *, const char *, _QWORD, __int64, const char *))(*v11[1] + 416LL))(
          v11[1],
          v32,
          v31,
          v10,
          v27,
          v29);
      else
        ((void (__fastcall *)(_QWORD **, const char *, const char *, _QWORD, __int64, const char *))v30)(
          v11,
          v32,
          v31,
          v10,
          v27,
          v29);
      if ( *(_QWORD *)&v74[1] )
      {
        *((_QWORD *)&v74[1] + 1) = 0;
        *(double *)a3.m128_u64 = qfree(*(_QWORD *)&v74[1], v32);
      }
      if ( v73 )
      {
        *(_QWORD *)&v74[0] = 0;
        *(double *)a3.m128_u64 = qfree(v73, v32);
      }
LABEL_27:
      v12 += 48;
    }
    while ( v64 != v12 );
  }
  return v76 - __readfsqword(0x28u);
}
