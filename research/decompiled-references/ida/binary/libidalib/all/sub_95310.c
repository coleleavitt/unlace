__int64 __fastcall sub_95310(int a1)
{
  const char *v1; // rax
  void **v2; // rax
  size_t v3; // r12
  const void **v4; // rbx
  int v5; // r12d
  char *v6; // r15
  TView *v7; // rbx
  char v8; // r14
  char *v9; // rax
  __int64 license_manager; // rax
  unsigned int v11; // r15d
  __int64 v12; // rax
  __int64 v13; // rbx
  void *v15; // rax
  void *v16; // rax
  __int64 v17; // rax
  size_t v18; // r8
  __int64 v19; // r14
  size_t v20; // r9
  __int64 v21; // rsi
  void *v22; // rax
  __m128i v23; // xmm1
  void *v24; // r14
  __m128i si128; // xmm1
  __int64 v26; // rax
  char *v27; // r14
  char *v28; // r8
  __int64 v29; // r14
  char *v30; // r9
  void *v31; // rsi
  int v32; // eax
  _DWORD *v33; // rax
  char *v34; // r8
  char *v35; // r8
  __int64 v36; // r14
  char *v37; // r9
  __int64 v38; // rsi
  const char *v39; // rdx
  TView *v40; // r13
  _BYTE *v41; // rsi
  char *v42; // rax
  size_t v43; // r8
  __int64 v44; // r13
  char *v45; // r9
  __int64 v46; // rsi
  TView *v47; // rbx
  const char *v48; // rdx
  void (__fastcall *v49)(TView *, void **); // rax
  int v50; // ebx
  __int64 v51; // rax
  TView *v52; // r13
  __int16 v53; // bx
  __int64 v54; // rax
  const char *v55; // rdi
  int v56; // eax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // rax
  int v62; // r12d
  TView *v63; // r15
  __int64 v64; // rax
  TView *v65; // r15
  void *v66; // rdi
  char *v67; // r8
  __int64 v68; // r14
  char *v69; // r9
  void *v70; // rsi
  void *v71; // rdi
  char *v72; // r8
  __int64 v73; // r14
  char *v74; // r9
  void *v75; // rsi
  void *v76; // rdi
  char *v77; // r8
  __int64 v78; // r14
  char *v79; // r9
  void *v80; // rsi
  __int64 v81; // r14
  char *v82; // r9
  void *v83; // rsi
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // r8
  __int64 v87; // r9
  char *v88; // [rsp+0h] [rbp-110h]
  void *v90; // [rsp+10h] [rbp-100h]
  char *v91; // [rsp+10h] [rbp-100h]
  char *v92; // [rsp+10h] [rbp-100h]
  char *v93; // [rsp+10h] [rbp-100h]
  char *v94; // [rsp+10h] [rbp-100h]
  size_t v95; // [rsp+10h] [rbp-100h]
  char *v96; // [rsp+10h] [rbp-100h]
  char *v97; // [rsp+10h] [rbp-100h]
  char *v98; // [rsp+10h] [rbp-100h]
  char *v99; // [rsp+10h] [rbp-100h]
  char *v100; // [rsp+20h] [rbp-F0h]
  char *v101; // [rsp+20h] [rbp-F0h]
  TView *v102; // [rsp+28h] [rbp-E8h]
  char *s[2]; // [rsp+30h] [rbp-E0h] BYREF
  void *src; // [rsp+40h] [rbp-D0h] BYREF
  __int128 v105; // [rsp+48h] [rbp-C8h]
  __int64 v106; // [rsp+60h] [rbp-B0h]
  __int128 v107; // [rsp+68h] [rbp-A8h]
  void *v108; // [rsp+80h] [rbp-90h] BYREF
  __m128i v109; // [rsp+88h] [rbp-88h]
  void *v110[4]; // [rsp+A0h] [rbp-70h] BYREF
  char v111[24]; // [rsp+C0h] [rbp-50h] BYREF
  unsigned __int64 v112; // [rsp+D8h] [rbp-38h]

  v112 = __readfsqword(0x28u);
  v1 = (const char *)itext();
  strchr(v1, 10);
  v102 = (TView *)operator new(0xB0u);
  *(__m128i *)v110 = _mm_load_si128((const __m128i *)&xmmword_1D2FE0);
  TDialog::TDialog(v102, v110, "About");
  v2 = sub_92810();
  v3 = (size_t)v2[1];
  v4 = (const void **)v2;
  if ( v3 )
  {
    v15 = (void *)qalloc_or_throw();
    v16 = memcpy(v15, *v4, v3);
    v110[0] = nullptr;
    v90 = v16;
  }
  else
  {
    v110[0] = nullptr;
    v90 = nullptr;
  }
  *(_OWORD *)&v110[1] = 0;
  sub_95250((__int64 *)v110);
  v5 = 2;
  s[0] = (char *)v110[0];
  while ( 1 )
  {
    v8 = 0;
    v9 = strchr(s[0], 10);
    if ( !v9 )
    {
      v8 = 1;
      v9 = &s[0][strlen(s[0])];
    }
    *v9 = 0;
    v6 = v9 + 1;
    v7 = (TView *)operator new(0x50u);
    LODWORD(v108) = 2;
    HIDWORD(v108) = v5;
    v109.m128i_i32[0] = 58;
    v109.m128i_i32[1] = v5 + 1;
    TStaticText::TStaticText(v7, &v108, s[0]);
    TGroup::insert(v102, v7);
    if ( v8 )
      break;
    s[0] = v6;
    ++v5;
  }
  if ( v110[0] )
  {
    v110[1] = nullptr;
    qfree();
  }
  if ( v90 )
    qfree();
  license_manager = get_license_manager();
  v11 = 0;
  v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)license_manager + 88LL))(license_manager, 0, 0);
  v13 = v12;
  if ( v12 && *(_DWORD *)(v12 + 8) )
  {
    src = nullptr;
    v105 = 0;
    sub_94440((__int64 *)&src);
    v106 = 0;
    v107 = 0;
    v17 = qvector_reserve();
    *(_QWORD *)&v107 = 11;
    v106 = v17;
    *(_QWORD *)v17 = 0x65736E6563694C03LL;
    strcpy((char *)(v17 + 8), ": ");
    s[0] = (char *)v105;
    if ( (_QWORD)v105 )
    {
      v18 = v105 - 1;
      if ( (_QWORD)v105 != 1 )
      {
        v19 = v107;
        v20 = v105 - 1;
        if ( (_QWORD)v107 )
        {
          v19 = v107 - 1;
          v20 = v18 + v107 - 1;
          s[0] = (char *)(v18 + v107);
        }
        v21 = v106;
        if ( (char *)*((_QWORD *)&v107 + 1) < s[0] )
        {
          v88 = (char *)(v105 - 1);
          v95 = v20;
          v106 = qvector_reserve();
          v18 = (size_t)v88;
          v21 = v106;
          v20 = v95;
        }
        *(char **)&v107 = s[0];
        *(_BYTE *)(v21 + v20) = 0;
        memcpy((void *)(v19 + v106), src, v18);
      }
    }
    v108 = nullptr;
    v109 = 0;
    if ( (unsigned int)*(_QWORD *)(v13 + 24) == 1 )
    {
      v108 = (void *)qvector_reserve();
      v109.m128i_i64[0] = 11;
      strcpy((char *)v108, ", 1 user, ");
    }
    else
    {
      qsnprintf();
      memset(v110, 0, 24);
      s[0] = (char *)strlen(v111);
      v110[0] = (void *)qvector_reserve();
      v110[1] = s[0] + 1;
      memmove(v110[0], v111, (size_t)s[0]);
      *((_BYTE *)v110[0] + (unsigned __int64)s[0]) = 0;
      v22 = v110[0];
      v23 = _mm_loadu_si128((const __m128i *)&v110[1]);
      memset(v110, 0, 24);
      v24 = v22;
      if ( v108 )
      {
        *(__m128i *)s = v23;
        v109.m128i_i64[0] = 0;
        qfree();
        si128 = _mm_load_si128((const __m128i *)s);
        v108 = v24;
        v109 = si128;
        if ( v110[0] )
        {
          v110[1] = nullptr;
          qfree();
        }
      }
      else
      {
        v108 = v22;
        v109 = v23;
      }
    }
    v26 = *(int *)(v13 + 12);
    memset(v110, 0, 24);
    if ( (int)v26 >= 7 )
      v26 = 0;
    v27 = off_245020[v26];
    if ( v27 )
    {
      s[0] = (char *)strlen(off_245020[v26]);
      v91 = s[0] + 1;
      v110[0] = (void *)qvector_reserve();
      v110[1] = v91;
      memmove(v110[0], v27, (size_t)s[0]);
      *((_BYTE *)v110[0] + (unsigned __int64)s[0]) = 0;
      s[0] = (char *)v110[1];
      if ( v110[1] )
      {
        v28 = s[0] - 1;
        if ( s[0] != (_BYTE *)&dword_0 + 1 )
        {
          v29 = v109.m128i_i64[0];
          v30 = s[0] - 1;
          if ( v109.m128i_i64[0] )
          {
            v29 = v109.m128i_i64[0] - 1;
            v30 = &v28[v109.m128i_i64[0] - 1];
            s[0] += v109.m128i_i64[0] - 1;
          }
          v31 = v108;
          if ( (char *)v109.m128i_i64[1] < s[0] )
          {
            v88 = v28;
            v93 = v30;
            v108 = (void *)qvector_reserve();
            v28 = v88;
            v31 = v108;
            v30 = v93;
          }
          v109.m128i_i64[0] = (__int64)s[0];
          v30[(_QWORD)v31] = 0;
          memcpy((char *)v108 + v29, v110[0], (size_t)v28);
        }
      }
      if ( v110[0] )
      {
        v110[1] = nullptr;
        qfree();
      }
    }
    v32 = *(_DWORD *)(v13 + 8);
    memset(v110, 0, 24);
    switch ( v32 )
    {
      case 2:
        v110[0] = (void *)qvector_reserve();
        v110[1] = byte_9 + 2;
        strcpy((char *)v110[0], ", computer");
        v76 = v110[0];
        s[0] = (char *)v110[1];
        if ( v110[1] )
        {
          v77 = s[0] - 1;
          if ( s[0] != (_BYTE *)&dword_0 + 1 )
          {
            v78 = v109.m128i_i64[0];
            v79 = s[0] - 1;
            if ( v109.m128i_i64[0] )
            {
              v78 = v109.m128i_i64[0] - 1;
              v79 = &v77[v109.m128i_i64[0] - 1];
              s[0] += v109.m128i_i64[0] - 1;
            }
            v80 = v108;
            if ( (char *)v109.m128i_i64[1] < s[0] )
            {
              v88 = v79;
              v96 = v77;
              v108 = (void *)qvector_reserve();
              v79 = v88;
              v80 = v108;
              v77 = v96;
            }
            v109.m128i_i64[0] = (__int64)s[0];
            v79[(_QWORD)v80] = 0;
            memcpy((char *)v108 + v78, v110[0], (size_t)v77);
            v76 = v110[0];
          }
        }
        if ( !v76 )
          goto LABEL_46;
        break;
      case 3:
        v110[0] = (void *)qvector_reserve();
        v110[1] = byte_9 + 2;
        strcpy((char *)v110[0], ", floating");
        v71 = v110[0];
        s[0] = (char *)v110[1];
        if ( v110[1] )
        {
          v72 = s[0] - 1;
          if ( s[0] != (_BYTE *)&dword_0 + 1 )
          {
            v73 = v109.m128i_i64[0];
            v74 = s[0] - 1;
            if ( v109.m128i_i64[0] )
            {
              v73 = v109.m128i_i64[0] - 1;
              v74 = &v72[v109.m128i_i64[0] - 1];
              s[0] += v109.m128i_i64[0] - 1;
            }
            v75 = v108;
            if ( (char *)v109.m128i_i64[1] < s[0] )
            {
              v88 = v72;
              v97 = v74;
              v108 = (void *)qvector_reserve();
              v72 = v88;
              v75 = v108;
              v74 = v97;
            }
            v109.m128i_i64[0] = (__int64)s[0];
            v74[(_QWORD)v75] = 0;
            memcpy((char *)v108 + v73, v110[0], (size_t)v72);
            v71 = v110[0];
          }
        }
        if ( !v71 )
          goto LABEL_46;
        break;
      case 1:
        v33 = (_DWORD *)qvector_reserve();
        v110[0] = v33;
        v110[1] = &byte_8;
        *v33 = 1634607148;
        *(_DWORD *)((char *)v33 + 3) = 1684368737;
        *((_BYTE *)v110[0] + 7) = 0;
        s[0] = (char *)v110[1];
        if ( v110[1] )
        {
          v34 = s[0] - 1;
          if ( s[0] != (_BYTE *)&dword_0 + 1 )
          {
            v81 = v109.m128i_i64[0];
            v82 = s[0] - 1;
            if ( v109.m128i_i64[0] )
            {
              v81 = v109.m128i_i64[0] - 1;
              v82 = &v34[v109.m128i_i64[0] - 1];
              s[0] += v109.m128i_i64[0] - 1;
            }
            v83 = v108;
            if ( (char *)v109.m128i_i64[1] < s[0] )
            {
              v88 = v34;
              v98 = v82;
              v108 = (void *)qvector_reserve();
              v34 = v88;
              v83 = v108;
              v82 = v98;
            }
            v109.m128i_i64[0] = (__int64)s[0];
            v82[(_QWORD)v83] = 0;
            memcpy((char *)v108 + v81, v110[0], (size_t)v34);
          }
        }
        if ( !v110[0] )
          goto LABEL_46;
        break;
      default:
        v110[0] = (void *)qvector_reserve();
        v110[1] = byte_9 + 6;
        strcpy((char *)v110[0], ", unknown type");
        v66 = v110[0];
        s[0] = (char *)v110[1];
        if ( v110[1] )
        {
          v67 = s[0] - 1;
          if ( s[0] != (_BYTE *)&dword_0 + 1 )
          {
            v68 = v109.m128i_i64[0];
            v69 = s[0] - 1;
            if ( v109.m128i_i64[0] )
            {
              v68 = v109.m128i_i64[0] - 1;
              v69 = &v67[v109.m128i_i64[0] - 1];
              s[0] += v109.m128i_i64[0] - 1;
            }
            v70 = v108;
            if ( (char *)v109.m128i_i64[1] < s[0] )
            {
              v88 = v67;
              v99 = v69;
              v108 = (void *)qvector_reserve();
              v67 = v88;
              v70 = v108;
              v69 = v99;
            }
            v109.m128i_i64[0] = (__int64)s[0];
            v69[(_QWORD)v70] = 0;
            memcpy((char *)v108 + v68, v110[0], (size_t)v67);
            v66 = v110[0];
          }
        }
        if ( !v66 )
          goto LABEL_46;
        break;
    }
    v110[1] = nullptr;
    qfree();
LABEL_46:
    s[0] = (char *)v109.m128i_i64[0];
    if ( v109.m128i_i64[0] )
    {
      v35 = s[0] - 1;
      if ( s[0] != (_BYTE *)&dword_0 + 1 )
      {
        v36 = v107;
        v37 = s[0] - 1;
        if ( (_QWORD)v107 )
        {
          v36 = v107 - 1;
          v37 = &v35[v107 - 1];
          s[0] += v107 - 1;
        }
        v38 = v106;
        if ( (char *)*((_QWORD *)&v107 + 1) < s[0] )
        {
          v94 = v35;
          v101 = v37;
          v106 = qvector_reserve();
          v35 = v94;
          v38 = v106;
          v37 = v101;
        }
        *(char **)&v107 = s[0];
        v37[v38] = 0;
        memcpy((void *)(v36 + v106), v108, (size_t)v35);
      }
    }
    if ( v108 )
    {
      v109.m128i_i64[0] = 0;
      qfree();
    }
    s[0] = (char *)operator new(0x50u);
    v39 = s1;
    if ( (_QWORD)v107 )
      v39 = (const char *)v106;
    HIDWORD(v110[0]) = v5 + 1;
    v40 = (TView *)s[0];
    LODWORD(v110[0]) = 2;
    LODWORD(v110[1]) = 58;
    HIDWORD(v110[1]) = v5 + 2;
    TStaticText::TStaticText(s[0], v110, v39);
    TGroup::insert(v102, v40);
    v41 = (_BYTE *)v106;
    *(_QWORD *)&v107 = 0;
    if ( *((_QWORD *)&v107 + 1) <= 1u )
    {
      v106 = qvector_reserve();
      v41 = (_BYTE *)v106;
    }
    *(_QWORD *)&v107 = 2;
    *v41 = 3;
    *(_BYTE *)(v106 + 1) = 0;
    v42 = *(char **)(v13 + 40);
    s[0] = v42;
    if ( v42 )
    {
      v43 = (size_t)(v42 - 1);
      if ( v42 != (_BYTE *)&dword_0 + 1 )
      {
        v44 = v107;
        v45 = v42 - 1;
        if ( (_QWORD)v107 )
        {
          v44 = v107 - 1;
          v45 = (char *)(v43 + v107 - 1);
          s[0] = (char *)(v43 + v107);
        }
        v46 = v106;
        if ( (char *)*((_QWORD *)&v107 + 1) < s[0] )
        {
          v92 = v42 - 1;
          v100 = v45;
          v106 = qvector_reserve();
          v43 = (size_t)v92;
          v46 = v106;
          v45 = v100;
        }
        *(char **)&v107 = s[0];
        v45[v46] = 0;
        memcpy((void *)(v44 + v106), *(const void **)(v13 + 32), v43);
      }
    }
    v47 = (TView *)operator new(0x50u);
    v48 = s1;
    if ( (_QWORD)v107 )
      v48 = (const char *)v106;
    LODWORD(v110[0]) = 2;
    HIDWORD(v110[0]) = v5 + 2;
    LODWORD(v110[1]) = 58;
    HIDWORD(v110[1]) = v5 + 3;
    TStaticText::TStaticText(v47, v110, v48);
    TGroup::insert(v102, v47);
    v49 = *(void (__fastcall **)(TView *, void **))(*(_QWORD *)v102 + 56LL);
    LODWORD(v110[1]) = 60;
    v110[0] = nullptr;
    HIDWORD(v110[1]) = v5 + 7;
    v49(v102, v110);
    v50 = v5 + 4;
    if ( (_DWORD)xmmword_2518A8 )
    {
      v61 = operator new(0x58u);
      v62 = v5 + 6;
      HIDWORD(v110[0]) = v50;
      LODWORD(v110[0]) = 16;
      LODWORD(v110[1]) = 25;
      v63 = (TView *)v61;
      HIDWORD(v110[1]) = v62;
      TButton::TButton(v61, v110, " OK", 10, 1);
      TGroup::insert(v102, v63);
      v64 = operator new(0x58u);
      HIDWORD(v110[0]) = v50;
      HIDWORD(v110[1]) = v62;
      v65 = (TView *)v64;
      LODWORD(v110[0]) = 35;
      LODWORD(v110[1]) = 45;
      TButton::TButton(v64, v110, "Addons", 12, 0);
      TGroup::insert(v102, v65);
    }
    else
    {
      v51 = operator new(0x58u);
      HIDWORD(v110[0]) = v5 + 4;
      v52 = (TView *)v51;
      LODWORD(v110[0]) = 26;
      LODWORD(v110[1]) = 35;
      HIDWORD(v110[1]) = v5 + 6;
      TButton::TButton(v51, v110, " OK", 10, 1);
      TGroup::insert(v102, v52);
    }
    *((_WORD *)v102 + 12) |= 0x300u;
    TGroup::selectNext(v102, 0);
    v53 = 10;
    if ( a1 && !batch )
    {
      set_ida_state();
      while ( 1 )
      {
        v53 = TGroup::execView(TProgram::deskTop, v102);
        if ( v53 != 12 )
          break;
        sub_93A00();
      }
      set_ida_state();
    }
    if ( v102 )
    {
      (*(void (__fastcall **)(TView *))(*(_QWORD *)v102 + 16LL))(v102);
      (*(void (__fastcall **)(TView *))(*(_QWORD *)v102 + 8LL))(v102);
    }
    memset(v110, 0, 24);
    sub_92100((__int64)v110);
    LODWORD(v54) = reg_int_op();
    if ( !(_DWORD)v54 )
    {
      if ( batch || (unsigned __int8)sub_10E040("EULA 90", 0) )
      {
        sub_92660();
        sub_92050((__int64)"License not yet accepted, cannot run in batch mode", 0, v84, v85, v86, v87, (char)v88);
      }
      v55 = s1;
      if ( v110[1] )
        v55 = (const char *)v110[0];
      v56 = sub_16E8D0(v55);
      if ( !v56 )
        sub_92050((__int64)"You have to agree with the license in order to use IDA", 0, v57, v58, v59, v60, (char)v88);
      if ( v56 != 1 )
        sub_92050(
          (__int64)"The license.txt file is missing or unreadable, cannot continue",
          0,
          v57,
          v58,
          v59,
          v60,
          (char)v88);
      v54 = reg_int_op();
    }
    if ( v110[0] )
    {
      v110[1] = nullptr;
      v54 = qfree();
    }
    LOBYTE(v54) = v53 == 10;
    v11 = v54;
    if ( v106 )
    {
      *(_QWORD *)&v107 = 0;
      qfree();
    }
    if ( src )
    {
      *(_QWORD *)&v105 = 0;
      qfree();
    }
  }
  return v11;
}

