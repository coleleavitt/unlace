void __fastcall __noreturn sub_6D36C0(__int64 a1)
{
  char *v1; // r13
  __int64 v2; // rax
  __int64 license_manager; // rdi
  __int64 (__fastcall *v4)(__int64); // rax
  __int64 v5; // rsi
  void *v6; // rdi
  __int64 v7; // rdx
  char *v8; // rsi
  char *v9; // rbx
  _DWORD *v10; // rax
  __int64 v11; // rdx
  char *v12; // rsi
  char *v13; // rdi
  __int64 v14; // rdx
  const char *v15; // rsi
  char *v16; // rbx
  size_t v17; // rax
  size_t v18; // r15
  __int64 v19; // rdx
  __int64 v20; // r15
  _BYTE *v21; // rsi
  __int64 v22; // r15
  _BYTE *v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // r9
  unsigned __int64 v26; // rdx
  __m128i si128; // xmm0
  char *v28; // r8
  __int64 v29; // r15
  _BYTE *v30; // rsi
  unsigned __int64 v31; // rdx
  __int64 v32; // r15
  _BYTE *v33; // rsi
  char *v34; // rbx
  __int64 v35; // rdx
  char *v36; // r15
  char *v37; // rax
  __int64 v38; // rcx
  _BYTE *v39; // rsi
  unsigned __int64 v40; // rdx
  size_t v41; // r10
  __int64 v42; // r9
  size_t v43; // r11
  __int64 v44; // r14
  __int64 v45; // r10
  __int64 v46; // rdx
  void *v47; // rax
  __int64 v48; // rdx
  char *v49; // rsi
  char *v50; // rax
  const char *errdesc; // rsi
  __int64 v52; // [rsp+8h] [rbp-2560h]
  __int64 v53; // [rsp+8h] [rbp-2560h]
  __int64 v54; // [rsp+8h] [rbp-2560h]
  size_t v55; // [rsp+8h] [rbp-2560h]
  unsigned __int64 v56; // [rsp+8h] [rbp-2560h]
  unsigned __int64 v57; // [rsp+8h] [rbp-2560h]
  unsigned __int64 v58; // [rsp+8h] [rbp-2560h]
  __int64 v59; // [rsp+10h] [rbp-2558h]
  __int64 v60; // [rsp+10h] [rbp-2558h]
  size_t v61; // [rsp+10h] [rbp-2558h]
  __int64 v62; // [rsp+20h] [rbp-2548h]
  size_t v63; // [rsp+28h] [rbp-2540h]
  void *v64; // [rsp+50h] [rbp-2518h] BYREF
  __int128 v65; // [rsp+58h] [rbp-2510h]
  void *v66; // [rsp+70h] [rbp-24F8h] BYREF
  __int128 v67; // [rsp+78h] [rbp-24F0h]
  void *v68; // [rsp+90h] [rbp-24D8h] BYREF
  __int128 v69; // [rsp+98h] [rbp-24D0h]
  void *v70; // [rsp+B0h] [rbp-24B8h]
  __int128 v71; // [rsp+B8h] [rbp-24B0h]
  void *ptr; // [rsp+D0h] [rbp-2498h] BYREF
  __int128 v73; // [rsp+D8h] [rbp-2490h]
  _BYTE *v74; // [rsp+E8h] [rbp-2480h]
  __int128 v75; // [rsp+F0h] [rbp-2478h]
  __int64 v76; // [rsp+100h] [rbp-2468h]
  __int128 v77; // [rsp+108h] [rbp-2460h]
  __int64 v78; // [rsp+118h] [rbp-2450h]
  char v79[4096]; // [rsp+520h] [rbp-2048h] BYREF
  char buf[4096]; // [rsp+1520h] [rbp-1048h] BYREF
  _BYTE v81[8]; // [rsp+2520h] [rbp-48h] BYREF
  unsigned __int64 v82; // [rsp+2528h] [rbp-40h]

  v1 = (char *)haystack;
  v82 = __readfsqword(0x28u);
  sub_592AF0(a1, v79, 4096, (__int64)"id3");
  if ( *(_QWORD *)(a1 + 56) )
    v1 = *(char **)(a1 + 48);
  if ( (unsigned int)qrename(v79, v1) )
  {
    errdesc = (const char *)get_errdesc(v1);
    sub_378C70((__int64)"Upgrade failed: %s", errdesc);
  }
  sub_8340A0(buf, 0x1000u);
  v2 = qbasename(buf);
  qstrncpy(v2, "upg32", &v81[-v2]);
  v64 = nullptr;
  v65 = 0;
  license_manager = get_license_manager();
  v4 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)license_manager + 40LL);
  if ( v4 == sub_6D3380 )
    v5 = license_manager + 40;
  else
    v5 = v4(license_manager);
  ptr = nullptr;
  v73 = 0;
  if ( (unsigned __int8)build_license_source_plugin_options(&ptr, v5) )
  {
    v48 = v65;
    v49 = (char *)v64;
    if ( *((_QWORD *)&v65 + 1) < (unsigned __int64)(v65 + 1) )
    {
      v64 = (void *)qvector_reserve(&v64, v64, v65 + 1, 24);
      v48 = v65;
      v49 = (char *)v64;
    }
    v50 = &v49[24 * v48];
    *(_QWORD *)v50 = 0;
    *(_OWORD *)(v50 + 8) = 0;
    *(_QWORD *)&v65 = v65 + 1;
    v6 = *(void **)v50;
    *(_QWORD *)v50 = ptr;
    *(_OWORD *)(v50 + 8) = v73;
    ptr = v6;
    *((_QWORD *)&v73 + 1) = 0;
  }
  else
  {
    v6 = ptr;
  }
  if ( v6 )
  {
    *(_QWORD *)&v73 = 0;
    qfree(v6);
  }
  v7 = v65;
  v8 = (char *)v64;
  if ( *((_QWORD *)&v65 + 1) < (unsigned __int64)(v65 + 1) )
  {
    v64 = (void *)qvector_reserve(&v64, v64, v65 + 1, 24);
    v7 = v65;
    v8 = (char *)v64;
  }
  v9 = &v8[24 * v7];
  *(_QWORD *)v9 = 0;
  *(_OWORD *)(v9 + 8) = 0;
  *(_QWORD *)&v65 = v65 + 1;
  v10 = (_DWORD *)qvector_reserve(v9, *(_QWORD *)v9, 8, 1);
  *(_QWORD *)v9 = v10;
  *((_QWORD *)v9 + 1) = 8;
  *v10 = 1886727469;
  *(_DWORD *)((char *)v10 + 3) = 842229616;
  *(_BYTE *)(*(_QWORD *)v9 + 7LL) = 0;
  v11 = v65;
  v12 = (char *)v64;
  if ( *((_QWORD *)&v65 + 1) < (unsigned __int64)(v65 + 1) )
  {
    v64 = (void *)qvector_reserve(&v64, v64, v65 + 1, 24);
    v11 = v65;
    v12 = (char *)v64;
  }
  v13 = &v12[24 * v11];
  *(_QWORD *)v13 = 0;
  *(_OWORD *)(v13 + 8) = 0;
  *(_QWORD *)&v65 = v65 + 1;
  sub_35A790((char **)v13);
  quote_cmdline_arg((char *)v64 + 24 * v65 - 24, "-L%s.upgrade.log", (const char *)(3 * v65));
  v14 = v65;
  v15 = (const char *)v64;
  if ( *((_QWORD *)&v65 + 1) < (unsigned __int64)(v65 + 1) )
  {
    v64 = (void *)qvector_reserve(&v64, v64, v65 + 1, 24);
    v14 = v65;
    v15 = (const char *)v64;
  }
  v16 = (char *)&v15[24 * v14];
  *(_QWORD *)v16 = 0;
  *(_OWORD *)(v16 + 8) = 0;
  *(_QWORD *)&v65 = v65 + 1;
  if ( v1 && (v17 = strlen(v1), (v18 = v17) != 0) )
  {
    v55 = v17 + 1;
    v47 = (void *)qvector_reserve(v16, *(_QWORD *)v16, v17 + 1, 1);
    *(_QWORD *)v16 = v47;
    v15 = v1;
    *((_QWORD *)v16 + 1) = v55;
    memmove(v47, v1, v18);
    *(_BYTE *)(*(_QWORD *)v16 + v18) = 0;
  }
  else
  {
    *((_QWORD *)v16 + 1) = 0;
  }
  quote_cmdline_arg((char *)v64 + 24 * v65 - 24, v15);
  v67 = 0;
  v66 = nullptr;
  v66 = (void *)qvector_reserve(&v66, 0, 13, 1);
  v19 = 2;
  *(_QWORD *)&v67 = 13;
  strcpy((char *)v66, "TVHEADLESS=1");
  v20 = v67;
  if ( (_QWORD)v67 )
  {
    v19 = v67 + 1;
    v21 = v66;
    v20 = v67 - 1;
    if ( *((_QWORD *)&v67 + 1) >= (unsigned __int64)(v67 + 1) )
      goto LABEL_21;
  }
  else
  {
    v21 = v66;
    if ( *((_QWORD *)&v67 + 1) >= 2u )
      goto LABEL_21;
  }
  v54 = v19;
  v66 = (void *)qvector_reserve(&v66, v21, v19, 1);
  v19 = v54;
  v21 = v66;
LABEL_21:
  *(_QWORD *)&v67 = v19;
  v21[v20] = 0;
  *((_BYTE *)v66 + v20 + 1) = 0;
  v22 = v67;
  if ( (_QWORD)v67 )
  {
    v25 = v67 + 20;
    v24 = v67 + 21;
    v23 = v66;
    v22 = v67 - 1;
    if ( *((_QWORD *)&v67 + 1) >= (unsigned __int64)(v67 + 21) )
      goto LABEL_23;
  }
  else
  {
    v23 = v66;
    v24 = 22;
    v25 = 21;
    if ( *((_QWORD *)&v67 + 1) >= 0x16u )
      goto LABEL_23;
  }
  v60 = v25;
  v53 = v24;
  v66 = (void *)qvector_reserve(&v66, v23, v24, 1);
  v25 = v60;
  v23 = v66;
  v24 = v53;
LABEL_23:
  *(_QWORD *)&v67 = v24;
  v26 = 2;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8070);
  v23[v25] = 0;
  v28 = (char *)v66 + v22;
  *(__m128i *)v28 = si128;
  *(_QWORD *)(v28 + 13) = 0x313D534545525452LL;
  v29 = v67;
  if ( (_QWORD)v67 )
  {
    v26 = v67 + 1;
    v29 = v67 - 1;
  }
  v30 = v66;
  if ( *((_QWORD *)&v67 + 1) < v26 )
  {
    v58 = v26;
    v66 = (void *)qvector_reserve(&v66, v66, v26, 1);
    v26 = v58;
    v30 = v66;
  }
  *(_QWORD *)&v67 = v26;
  v31 = 2;
  v30[v29] = 0;
  *((_BYTE *)v66 + v29 + 1) = 0;
  v32 = v67;
  if ( (_QWORD)v67 )
  {
    v31 = v67 + 1;
    v32 = v67 - 1;
  }
  v33 = v66;
  if ( *((_QWORD *)&v67 + 1) < v31 )
  {
    v57 = v31;
    v66 = (void *)qvector_reserve(&v66, v66, v31, 1);
    v31 = v57;
    v33 = v66;
  }
  *(_QWORD *)&v67 = v31;
  v33[v32] = 0;
  *((_BYTE *)v66 + v32 + 1) = 0;
  v75 = -1;
  ptr = &qword_50;
  v74 = nullptr;
  v76 = -1;
  v78 = 0;
  LODWORD(v73) = 256;
  *((_QWORD *)&v73 + 1) = buf;
  v68 = nullptr;
  v77 = 0;
  v69 = 0;
  if ( (_QWORD)v65 )
  {
    v34 = (char *)v64;
    v35 = v65 - 1;
    v36 = (char *)v64 + 24 * v65;
    if ( v64 != v36 )
    {
      v37 = (char *)v64;
      do
      {
        v38 = *((_QWORD *)v37 + 1);
        if ( v38 )
          v35 = v35 + v38 - 1;
        v37 += 24;
      }
      while ( v37 != v36 );
      v39 = nullptr;
      if ( !v35 )
      {
        do
        {
LABEL_48:
          v44 = v69;
          if ( (unsigned __int64)v69 > 1 )
          {
            v45 = v69 - 1;
            v46 = v69 + 1;
            if ( *((_QWORD *)&v69 + 1) < (unsigned __int64)(v69 + 1) )
            {
              v59 = v69 - 1;
              v52 = v69 + 1;
              v68 = (void *)qvector_reserve(&v68, v39, v46, 1);
              v45 = v59;
              v39 = v68;
              v46 = v52;
            }
            *(_QWORD *)&v69 = v46;
            v39[v44] = 0;
            *((_BYTE *)v68 + v45) = 32;
            v39 = v68;
          }
          v40 = *((_QWORD *)v34 + 1);
          if ( v40 )
          {
            v41 = v40 - 1;
            if ( v40 != 1 )
            {
              v42 = v69;
              v43 = v40 - 1;
              if ( (_QWORD)v69 )
              {
                v42 = v69 - 1;
                v43 = v41 + v69 - 1;
                v40 += v69 - 1;
              }
              if ( *((_QWORD *)&v69 + 1) < v40 )
              {
                v63 = v43;
                v62 = v42;
                v61 = v41;
                v56 = v40;
                v68 = (void *)qvector_reserve(&v68, v39, v40, 1);
                v43 = v63;
                v39 = v68;
                v42 = v62;
                v41 = v61;
                v40 = v56;
              }
              *(_QWORD *)&v69 = v40;
              v39[v43] = 0;
              memcpy((char *)v68 + v42, *(const void **)v34, v41);
              v39 = v68;
            }
          }
          v34 += 24;
        }
        while ( v36 != v34 );
LABEL_58:
        v74 = v39;
        *(_QWORD *)&v77 = v66;
        v70 = nullptr;
        v71 = 0;
        sub_368890();
      }
LABEL_59:
      v68 = (void *)qvector_reserve(&v68, 0, v35, 1);
      v39 = v68;
      v34 = (char *)v64;
      v36 = (char *)v64 + 24 * v65;
      if ( v64 == v36 )
        goto LABEL_58;
      goto LABEL_48;
    }
    if ( (_QWORD)v65 != 1 )
      goto LABEL_59;
  }
  v39 = nullptr;
  goto LABEL_58;
}
