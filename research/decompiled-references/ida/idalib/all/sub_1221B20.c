void __fastcall sub_1221B20(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        double a8)
{
  __int64 v9; // r12
  __int64 v10; // r15
  __int64 *v11; // r14
  __int64 *v12; // r13
  const char *v13; // rax
  signed __int64 v14; // rdx
  const char *v15; // rax
  signed __int64 v16; // rdx
  signed __int64 v17; // r13
  size_t v18; // r14
  const void *v19; // rax
  __int64 v20; // rdx
  int v21; // eax
  const char *v22; // rsi
  void (*v23)(); // rax
  const char *v24; // r13
  int v25; // eax
  __int64 v26; // r13
  __int64 v27; // rcx
  __int64 v28; // r8
  int v29; // eax
  char v30; // r13
  __int64 v31; // rbx
  const __m128i *v32; // r13
  __int64 v33; // r14
  __int64 v34; // r12
  void *v35; // rdi
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  void *v39; // rdi
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  void (__fastcall *v44)(__m128i *, __int64, __int64, const char *, size_t, _QWORD, _QWORD); // r13
  size_t v45; // rax
  __int64 v46; // rax
  unsigned __int8 (__fastcall *v47)(__int64, __m128i *); // rdx
  __int64 v48; // rax
  __int64 v49; // rcx
  __int64 (*v50)(); // rax
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 (__fastcall *v54)(__int64); // rax
  __int64 v55; // rax
  bool v56; // r13
  __int64 v57; // rax
  char v58; // r8
  char v59; // al
  char *v60; // rdx
  __int64 v61; // rax
  char *v62; // rdx
  __int64 v63; // rax
  char *v64; // rdx
  void (__fastcall *v65)(__m128i *, __int64, __int64, const char *, size_t, _QWORD, _QWORD); // r13
  size_t v66; // rax
  __int64 v67; // rax
  unsigned __int8 (__fastcall *v68)(__int64, __m128i *); // rdx
  char *v69; // [rsp+8h] [rbp-200h]
  int v75; // [rsp+40h] [rbp-1C8h]
  char v76; // [rsp+40h] [rbp-1C8h]
  signed __int64 v77; // [rsp+48h] [rbp-1C0h]
  bool v78; // [rsp+48h] [rbp-1C0h]
  bool v79; // [rsp+48h] [rbp-1C0h]
  int v80; // [rsp+54h] [rbp-1B4h]
  __int64 v81; // [rsp+58h] [rbp-1B0h]
  char *v82; // [rsp+60h] [rbp-1A8h]
  bool v83; // [rsp+60h] [rbp-1A8h]
  int v84; // [rsp+68h] [rbp-1A0h]
  bool v85; // [rsp+6Dh] [rbp-19Bh]
  char v86; // [rsp+6Fh] [rbp-199h]
  void *v87[2]; // [rsp+70h] [rbp-198h] BYREF
  _BYTE v88[16]; // [rsp+80h] [rbp-188h] BYREF
  __m128i v89; // [rsp+90h] [rbp-178h] BYREF
  _BYTE v90[16]; // [rsp+A0h] [rbp-168h] BYREF
  __int16 v91; // [rsp+B0h] [rbp-158h]
  __m128i v92; // [rsp+C0h] [rbp-148h] BYREF
  _WORD v93[16]; // [rsp+D0h] [rbp-138h] BYREF
  __m128i v94; // [rsp+F0h] [rbp-118h] BYREF
  _BYTE v95[16]; // [rsp+100h] [rbp-108h] BYREF
  __int16 v96; // [rsp+110h] [rbp-F8h]
  void *ptr[2]; // [rsp+140h] [rbp-C8h] BYREF
  _BYTE v98[184]; // [rsp+150h] [rbp-B8h] BYREF

  v9 = *(_QWORD *)(a1 + 24);
  v10 = *(_QWORD *)(v9 + 8);
  v75 = *(_DWORD *)(v9 + 48);
  v80 = *(_DWORD *)(v9 + 64);
  v84 = *(_DWORD *)(v9 + 60);
  v85 = 1;
  if ( v80 != 49 )
    v85 = *(_DWORD *)(v9 + 60) == 39;
  v81 = sub_10DCD30(a6, 0xCE2u);
  if ( v81 && sub_10DCD30(a6, 0xBCCu) )
  {
    v11 = *(__int64 **)(v9 + 8);
    v12 = sub_1105E80();
    v13 = sub_11609A0((_DWORD *)(v12[4] + 263760), (_QWORD *)v12[1], v12[2]);
    v77 = v14;
    v69 = (char *)v13;
    v15 = sub_11609A0((_DWORD *)(v12[4] + 243680), (_QWORD *)v12[1], v12[2]);
    v17 = v16;
    v82 = (char *)v15;
    sub_FC70B0((__int64)ptr, *v11, 0, 328);
    sub_AEC220((unsigned __int8 **)ptr, v69, v77);
    sub_AEC220((unsigned __int8 **)ptr, v82, v17);
    sub_AEA040((__int64)ptr);
  }
  v78 = 0;
  if ( sub_10DCD30(a6, 0xCE3u) )
    v78 = sub_10DCD30(a6, 0xCE2u) == 0;
  v18 = j__strlen(&byte_22F0C30);
  v19 = (const void *)sub_22B76B0(v9 + 16);
  v83 = 1;
  if ( v18 == v20 && (!v18 || !memcmp(v19, &byte_22F0C30, v18)) )
    v83 = *(_DWORD *)(v9 + 56) != 7;
  ptr[0] = v98;
  ptr[1] = (void *)0x1000000000LL;
  sub_21B7CF0(a6, 36);
  sub_21B7CF0(a6, 345);
  sub_21B7CF0(a6, 3480);
  if ( *(_QWORD *)(v10 + 496) )
  {
    sub_C05100((__int64)&v92, "--sysroot=", v10 + 488);
    v94.m128i_i64[0] = (__int64)&v92;
    v96 = 260;
    v36 = sub_10DA6C0(a6, (__int64)&v94);
    sub_10DC5D0((__int64)ptr, v36);
    if ( (_WORD *)v92.m128i_i64[0] != v93 )
      operator delete((void *)v92.m128i_i64[0]);
  }
  if ( sub_10DCD30(a6, 0xCF9u) )
    sub_10DC5D0((__int64)ptr, (__int64)"-s");
  v21 = *(_DWORD *)(v9 + 1792);
  if ( (unsigned int)(v21 - 35) <= 1 || (unsigned int)(v21 - 1) <= 1 )
  {
    v22 = "-EL";
    if ( (unsigned __int8)sub_113D610(v9 + 1760, a6) )
    {
      sub_113F900(a6, (__int64)ptr, v9 + 1760);
      v22 = "-EB";
    }
LABEL_16:
    sub_10DC5D0((__int64)ptr, (__int64)v22);
    goto LABEL_17;
  }
  if ( (unsigned int)(v21 - 3) <= 2 )
  {
    v22 = "-EB";
    if ( v75 != 4 )
      v22 = "-EL";
    goto LABEL_16;
  }
LABEL_17:
  if ( v75 == 3 && (v80 == 17 || v85) && (unsigned __int8)sub_21B7850(a6, 2365, 2593, 1) )
  {
    sub_11C8180(&v94, (__int64 *)v10, a6, (_DWORD *)(v9 + 1760), 0);
    if ( !v94.m128i_i64[1] || !sub_9B4AA0((__int64)&v94, "generic") || !sub_9B4AA0((__int64)&v94, "cortex-a53") )
      sub_10DC5D0((__int64)ptr, (__int64)"--fix-cortex-a53-843419");
    if ( (_BYTE *)v94.m128i_i64[0] != v95 )
      operator delete((void *)v94.m128i_i64[0]);
  }
  v23 = *(void (**)())(*(_QWORD *)v9 + 800LL);
  if ( v23 != nullsub_575 )
    ((void (__fastcall *)(__int64, void **))v23)(v9, ptr);
  sub_10DC5D0((__int64)ptr, (__int64)"--eh-frame-hdr");
  v24 = sub_11BACD0((_DWORD *)(v9 + 16), a6);
  if ( v24 )
  {
    sub_10DC5D0((__int64)ptr, (__int64)"-m");
    sub_10DC5D0((__int64)ptr, (__int64)v24);
    v25 = *(_DWORD *)(v9 + 1792);
    if ( (unsigned int)(v25 - 27) <= 1 || (unsigned int)(v25 - 13) <= 1 )
    {
      sub_10DC5D0((__int64)ptr, (__int64)"-X");
      if ( sub_10DCD30(a6, 0xA8Cu) )
        sub_10DC5D0((__int64)ptr, (__int64)"--no-relax");
    }
    v26 = sub_10DCD30(a6, 0xCC0u);
    if ( v26 )
      sub_10DC5D0((__int64)ptr, (__int64)"-shared");
    if ( v81 )
    {
      sub_10DC5D0((__int64)ptr, (__int64)"-static");
      sub_10DC5D0((__int64)ptr, (__int64)"-pie");
      sub_10DC5D0((__int64)ptr, (__int64)"--no-dynamic-linker");
      sub_10DC5D0((__int64)ptr, (__int64)"-z");
      sub_10DC5D0((__int64)ptr, (__int64)"text");
      v86 = 0;
    }
    else if ( v78 )
    {
      sub_10DC5D0((__int64)ptr, (__int64)"-static");
      v86 = 0;
    }
    else
    {
      if ( sub_10DCD30(a6, 0xCA4u) )
        goto LABEL_30;
      if ( sub_10DCD30(a6, 0xC83u) )
        sub_10DC5D0((__int64)ptr, (__int64)"-export-dynamic");
      if ( v26 )
      {
LABEL_30:
        v86 = 0;
      }
      else
      {
        v49 = 0;
        v50 = *(__int64 (**)())(*(_QWORD *)v9 + 368LL);
        if ( v50 != sub_12137F0 )
          v49 = ((unsigned __int8 (__fastcall *)(__int64, __int64, __int64 (*)(), _QWORD))v50)(v9, a6, sub_12137F0, 0);
        v86 = sub_21B7850(a6, 3132, 3020, v49);
        if ( v86 )
          sub_10DC5D0((__int64)ptr, (__int64)"-pie");
        sub_10DC5D0((__int64)ptr, (__int64)"-dynamic-linker");
        v54 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 792LL);
        if ( v54 == sub_10D8350 )
        {
          v88[0] = 0;
          v87[0] = v88;
          v87[1] = nullptr;
        }
        else
        {
          ((void (__fastcall *)(void **, __int64, __int64))v54)(v87, v9, a6);
        }
        v92.m128i_i64[0] = (__int64)v87;
        v91 = 260;
        v89.m128i_i64[0] = v10 + 520;
        v93[8] = 260;
        sub_A41580(&v94, &v89, &v92, v51, v52, v53);
        v55 = sub_10DA6C0(a6, (__int64)&v94);
        sub_10DC5D0((__int64)ptr, v55);
        if ( v87[0] != v88 )
          operator delete(v87[0]);
      }
    }
    sub_10DC5D0((__int64)ptr, (__int64)"-o");
    sub_10DC5D0((__int64)ptr, *a4);
    if ( sub_113FA70(a6, 0xBF0u, 0xBEBu, 3236) )
    {
LABEL_32:
      v94.m128i_i64[0] = 0xD250000089CLL;
      sub_21B6650(a6, ptr, &v94, 2);
      sub_112D940(v9, a6, (__int64)ptr, v27, v28);
      v29 = *(_DWORD *)(v10 + 40);
      if ( v29 )
        sub_11C8A90((_DWORD *)v9, a6, (__int64)ptr, (char **)a4, a5, v29 == 2, (__m128i)a7);
      if ( sub_10DCD30(a6, 0xDBFu) )
        sub_10DC5D0((__int64)ptr, (__int64)"--no-demangle");
      v30 = sub_11C3BD0((__int64 **)v9, a6, (__int64)ptr);
      v76 = sub_11BDB50(v9, a6, (__int64)ptr);
      sub_11BD3E0(v9, a6, (__int64)ptr);
      sub_11C3660(v9, a5, a6, (__int64)ptr, a3);
      sub_11BC8B0(v9, a2, a6, (__int64)ptr);
      (*(void (__fastcall **)(_QWORD, __int64, void **))(**(_QWORD **)(a1 + 24) + 672LL))(*(_QWORD *)(a1 + 24), a6, ptr);
      if ( *(_DWORD *)(v10 + 16) == 1 && !sub_113FA70(a6, 0xBF0u, 0xBDDu, 3236) )
      {
        if ( sub_112D7B0(v9, a6) )
        {
          if ( sub_10DCD30(a6, 0xCE0u) && !sub_10DCD30(a6, 0xCE3u) )
          {
            sub_10DC5D0((__int64)ptr, (__int64)"-Bstatic");
            (*(void (__fastcall **)(__int64, __int64, void **))(*(_QWORD *)v9 + 640LL))(v9, a6, ptr);
            sub_10DC5D0((__int64)ptr, (__int64)"-Bdynamic");
          }
          else
          {
            (*(void (__fastcall **)(__int64, __int64, void **))(*(_QWORD *)v9 + 640LL))(v9, a6, ptr);
          }
        }
        sub_10DC5D0((__int64)ptr, (__int64)"-lm");
      }
      sub_21B7CF0(a6, 3306);
      if ( *(_DWORD *)(v10 + 16) == 4 && !sub_10DE660(a6, 0xBF0u, 0xBDDu) )
      {
        (*(void (__fastcall **)(__int64, __int64, void **))(*(_QWORD *)v9 + 320LL))(v9, a6, ptr);
        (*(void (__fastcall **)(__int64, __int64, void **))(*(_QWORD *)v9 + 312LL))(v9, a6, ptr);
        sub_10DC5D0((__int64)ptr, (__int64)"-lm");
      }
      if ( !sub_10DE660(a6, 0xBF0u, 0xCA4u) )
      {
        if ( sub_10DCD30(a6, 0xBDDu) )
        {
          v41 = sub_10DCD30(a6, 0xBEBu);
          if ( v84 == 26 || v41 )
            goto LABEL_39;
        }
        else
        {
          v79 = v81 != 0 || v78;
          if ( v79 )
            sub_10DC5D0((__int64)ptr, (__int64)"--start-group");
          if ( v30 )
            sub_11BC1D0(v9, a6, (__int64)ptr);
          if ( v76 )
            sub_11BC020(v9, a6, (__int64)ptr);
          v56 = 1;
          if ( !sub_10DCD30(a6, 0xC6Au) )
            v56 = sub_10DCD30(a6, 0xC69u) != 0;
          v57 = sub_10DCD30(a6, 0xCE1u);
          v58 = 0;
          if ( v57 )
            v58 = sub_10DCD30(a6, 0xCE3u) == 0;
          v59 = sub_11C50B0(a2, (__int64)ptr, v9, a6, v58, (*(_DWORD *)(a3 + 60) >> 2) & 1, 1);
          if ( v59 )
            v56 = v59;
          sub_11BEF20(v9, v10, (__int64)ptr, a6);
          if ( *(_DWORD *)(*(_QWORD *)(a1 + 24) + 48LL) == 29 )
          {
            sub_10DC5D0((__int64)ptr, (__int64)"--push-state");
            sub_10DC5D0((__int64)ptr, (__int64)"--as-needed");
            sub_10DC5D0((__int64)ptr, (__int64)"-latomic");
            sub_10DC5D0((__int64)ptr, (__int64)"--pop-state");
          }
          if ( v56 && v80 != 17 && !v85 )
            sub_10DC5D0((__int64)ptr, (__int64)"-lpthread");
          if ( sub_10DCD30(a6, 0x71Au) )
            sub_10DC5D0((__int64)ptr, (__int64)"--wrap=pthread_create");
          if ( !sub_10DCD30(a6, 0xBE4u) )
            sub_10DC5D0((__int64)ptr, (__int64)"-lc");
          if ( v84 == 26 )
            sub_10DC5D0((__int64)ptr, (__int64)"-lgloss");
          if ( v79 )
            sub_10DC5D0((__int64)ptr, (__int64)"--end-group");
          else
            sub_11BEF20(v9, v10, (__int64)ptr, a6);
          if ( v84 == 26 )
          {
            sub_10DC5D0((__int64)ptr, (__int64)"--as-needed");
            sub_10DC5D0((__int64)ptr, (__int64)"-lsoftfp");
            sub_10DC5D0((__int64)ptr, (__int64)"--no-as-needed");
            sub_10DCD30(a6, 0xBEBu);
            goto LABEL_39;
          }
          if ( sub_10DCD30(a6, 0xBEBu) )
            goto LABEL_39;
        }
        if ( v83 )
        {
          v90[0] = 0;
          v89.m128i_i64[0] = (__int64)v90;
          v89.m128i_i64[1] = 0;
          if ( !(*(unsigned int (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 600LL))(v9, a6) && v80 != 17 )
          {
            v65 = *(void (__fastcall **)(__m128i *, __int64, __int64, const char *, size_t, _QWORD, _QWORD))(*(_QWORD *)v9 + 304LL);
            v66 = j__strlen("crtend");
            v65(&v92, v9, a6, "crtend", v66, 0, 0);
            v67 = sub_112C5D0(v9);
            v68 = *(unsigned __int8 (__fastcall **)(__int64, __m128i *))(*(_QWORD *)v67 + 96LL);
            v96 = 260;
            v94.m128i_i64[0] = (__int64)&v92;
            if ( v68(v67, &v94) )
              sub_9EE8A0((__int64)&v89, (__int64)&v92);
            if ( (_WORD *)v92.m128i_i64[0] != v93 )
              operator delete((void *)v92.m128i_i64[0]);
          }
          if ( !v89.m128i_i64[1] )
          {
            if ( sub_10DCD30(a6, 0xCC0u) )
            {
              v64 = "crtend_so.o";
              if ( v80 != 17 )
                v64 = "crtendS.o";
            }
            else if ( v86 || v81 )
            {
              v64 = "crtend_android.o";
              if ( v80 != 17 )
                v64 = "crtendS.o";
            }
            else
            {
              v64 = "crtend_android.o";
              if ( v80 != 17 )
                v64 = "crtend.o";
            }
            sub_112D4E0(&v94, v9, v64);
            sub_A0AAD0((__int64)&v89, &v94);
            if ( (_BYTE *)v94.m128i_i64[0] != v95 )
              operator delete((void *)v94.m128i_i64[0]);
          }
          v96 = 260;
          v94.m128i_i64[0] = (__int64)&v89;
          v42 = sub_10DA6C0(a6, (__int64)&v94);
          sub_10DC5D0((__int64)ptr, v42);
          if ( (_BYTE *)v89.m128i_i64[0] != v90 )
            operator delete((void *)v89.m128i_i64[0]);
        }
        if ( v80 != 17 )
        {
          sub_112D4E0(&v92, v9, "crtn.o");
          v96 = 260;
          v94.m128i_i64[0] = (__int64)&v92;
          v43 = sub_10DA6C0(a6, (__int64)&v94);
          sub_10DC5D0((__int64)ptr, v43);
          if ( (_WORD *)v92.m128i_i64[0] != v93 )
            operator delete((void *)v92.m128i_i64[0]);
        }
      }
LABEL_39:
      v94.m128i_i64[0] = 0xD1700000D15LL;
      sub_21B6650(a6, ptr, &v94, 2);
      sub_1132E50(&v92, v9, nullptr);
      v94.m128i_i64[0] = (__int64)&v92;
      v96 = 260;
      v31 = sub_10DA6C0(a6, (__int64)&v94);
      if ( (_WORD *)v92.m128i_i64[0] != v93 )
        operator delete((void *)v92.m128i_i64[0]);
      v32 = *(const __m128i **)a5;
      v33 = *(unsigned int *)(a5 + 8);
      v34 = operator new(0x208u);
      sub_1106AE0(v34, a3, a1, 0x100000000LL, (__int64)"@", v31, (__int64)ptr, v32, v33, (__int64)a4, 1, 0);
      v94.m128i_i64[0] = v34;
      sub_118A0F0(a2, v94.m128i_i64, a7, a8);
      if ( v94.m128i_i64[0] )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v94.m128i_i64[0] + 8LL))(v94.m128i_i64[0]);
      v35 = ptr[0];
      if ( ptr[0] != v98 )
        goto LABEL_44;
      return;
    }
    if ( v84 == 26 || v80 == 17 )
    {
      if ( v75 != 59 )
      {
LABEL_74:
        if ( v84 == 26 )
        {
          sub_112D4E0(&v92, v9, "crt0.o");
          v96 = 260;
          v94.m128i_i64[0] = (__int64)&v92;
          v48 = sub_10DA6C0(a6, (__int64)&v94);
          sub_10DC5D0((__int64)ptr, v48);
          v39 = (void *)v92.m128i_i64[0];
          if ( (_WORD *)v92.m128i_i64[0] == v93 )
            goto LABEL_81;
          goto LABEL_80;
        }
        if ( !v83 )
        {
LABEL_81:
          sub_112FB00(v9, a6, (__int64)ptr);
          if ( v80 == 17 )
          {
            if ( (unsigned __int8)sub_21B7850(a6, 423, 1015, 0) )
            {
              sub_112D4E0(&v92, v9, "crt_pad_segment.o");
              v96 = 260;
              v94.m128i_i64[0] = (__int64)&v92;
              v40 = sub_10DA6C0(a6, (__int64)&v94);
              sub_10DC5D0((__int64)ptr, v40);
              if ( (_WORD *)v92.m128i_i64[0] != v93 )
                operator delete((void *)v92.m128i_i64[0]);
            }
          }
          goto LABEL_32;
        }
LABEL_76:
        v90[0] = 0;
        v89.m128i_i64[0] = (__int64)v90;
        v89.m128i_i64[1] = 0;
        if ( !(*(unsigned int (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 600LL))(v9, a6) && v80 != 17 )
        {
          v44 = *(void (__fastcall **)(__m128i *, __int64, __int64, const char *, size_t, _QWORD, _QWORD))(*(_QWORD *)v9 + 304LL);
          v45 = j__strlen("crtbegin");
          v44(&v92, v9, a6, "crtbegin", v45, 0, 0);
          v46 = sub_112C5D0(v9);
          v47 = *(unsigned __int8 (__fastcall **)(__int64, __m128i *))(*(_QWORD *)v46 + 96LL);
          v96 = 260;
          v94.m128i_i64[0] = (__int64)&v92;
          if ( v47(v46, &v94) )
            sub_9EE8A0((__int64)&v89, (__int64)&v92);
          if ( (_WORD *)v92.m128i_i64[0] != v93 )
            operator delete((void *)v92.m128i_i64[0]);
        }
        if ( !v89.m128i_i64[1] )
        {
          if ( sub_10DCD30(a6, 0xCC0u) )
          {
            v60 = "crtbegin_so.o";
            if ( v80 != 17 )
              v60 = "crtbeginS.o";
          }
          else if ( v78 )
          {
            v60 = "crtbegin_static.o";
            if ( v80 != 17 )
              v60 = "crtbeginT.o";
          }
          else if ( v86 || v81 )
          {
            v60 = "crtbegin_dynamic.o";
            if ( v80 != 17 )
              v60 = "crtbeginS.o";
          }
          else
          {
            v60 = "crtbegin_dynamic.o";
            if ( v80 != 17 )
              v60 = (char *)"crtbegin.o";
          }
          sub_112D4E0(&v94, v9, v60);
          sub_A0AAD0((__int64)&v89, &v94);
          if ( (_BYTE *)v94.m128i_i64[0] != v95 )
            operator delete((void *)v94.m128i_i64[0]);
        }
        v96 = 260;
        v94.m128i_i64[0] = (__int64)&v89;
        v38 = sub_10DA6C0(a6, (__int64)&v94);
        sub_10DC5D0((__int64)ptr, v38);
        v39 = (void *)v89.m128i_i64[0];
        if ( (_BYTE *)v89.m128i_i64[0] == v90 )
          goto LABEL_81;
LABEL_80:
        operator delete(v39);
        goto LABEL_81;
      }
    }
    else
    {
      if ( !sub_10DCD30(a6, 0xCC0u) )
      {
        v61 = sub_10DCD30(a6, 0xC39u);
        v62 = "gcrt1.o";
        if ( !v61 )
        {
          v62 = "Scrt1.o";
          if ( !v86 )
          {
            v62 = "crt1.o";
            if ( v81 )
              v62 = "rcrt1.o";
          }
        }
        sub_112D4E0(&v92, v9, v62);
        v96 = 260;
        v94.m128i_i64[0] = (__int64)&v92;
        v63 = sub_10DA6C0(a6, (__int64)&v94);
        sub_10DC5D0((__int64)ptr, v63);
        if ( (_WORD *)v92.m128i_i64[0] != v93 )
          operator delete((void *)v92.m128i_i64[0]);
      }
      sub_112D4E0(&v92, v9, "crti.o");
      v96 = 260;
      v94.m128i_i64[0] = (__int64)&v92;
      v37 = sub_10DA6C0(a6, (__int64)&v94);
      sub_10DC5D0((__int64)ptr, v37);
      if ( (_WORD *)v92.m128i_i64[0] != v93 )
        operator delete((void *)v92.m128i_i64[0]);
      if ( v75 != 59 )
      {
        if ( !v83 )
        {
          sub_112FB00(v9, a6, (__int64)ptr);
          goto LABEL_32;
        }
        goto LABEL_76;
      }
    }
    sub_10DC5D0((__int64)ptr, (__int64)"-z");
    sub_10DC5D0((__int64)ptr, (__int64)"max-page-size=0x4000000");
    goto LABEL_74;
  }
  sub_FC70B0((__int64)&v94, *(_QWORD *)v10, 0, 67);
  sub_AEC220((unsigned __int8 **)&v94, *(_BYTE **)(v9 + 1760), *(_QWORD *)(v9 + 1768));
  sub_AEA040((__int64)&v94);
  v35 = ptr[0];
  if ( ptr[0] != v98 )
LABEL_44:
    free(v35);
}
