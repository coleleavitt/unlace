__int64 __fastcall sub_5C9560(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        __int64 a9,
        int a10,
        int a11,
        __int64 a12,
        __int64 a13,
        int a14,
        int a15,
        char a16,
        __int64 a17,
        int a18,
        int a19,
        __int64 a20,
        __int64 a21,
        __int64 a22,
        int a23,
        int a24,
        int a25,
        int a26,
        int a27,
        int a28,
        int a29,
        int a30,
        int a31,
        int a32,
        int a33,
        int a34,
        int a35,
        int a36,
        int a37,
        int a38,
        int a39,
        int a40,
        int a41,
        __int64 a42,
        __int64 a43)
{
  char **v43; // r12
  char **exception; // r12
  _BYTE *v46; // rdx
  bool *v47; // rcx
  int v48; // r8d
  int v49; // r9d
  _QWORD *v50; // rbx
  _QWORD *v51; // r15
  __int64 v52; // rsi
  __int64 v53; // rdi
  bool v54; // zf
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rcx
  int v58; // eax
  _QWORD *v59; // rcx
  bool v60; // r12
  unsigned int v61; // eax
  __int64 v62; // rcx
  int v63; // eax
  __int64 v64; // r13
  __int64 v65; // rax
  __int64 v66; // rbx
  int v67; // eax
  int v68; // edx
  _QWORD *v69; // rdx
  unsigned int v70; // eax
  unsigned int v71; // ecx
  size_t v72; // rsi
  unsigned int *v73; // rax
  unsigned int v74; // ecx
  size_t v75; // rsi
  unsigned int *v76; // rax
  __int64 v77; // rcx
  int v78; // edx
  __int64 v79; // rbx
  __int64 v80; // rsi
  int v81; // edx
  int v82; // ecx
  int v83; // r8d
  int v84; // r9d
  _QWORD *v86; // rax
  _QWORD *v87; // rax
  __int64 *v89; // [rsp+0h] [rbp-D0h]
  int v90; // [rsp+8h] [rbp-C8h]
  unsigned int v91; // [rsp+Ch] [rbp-C4h]
  unsigned int v92; // [rsp+Ch] [rbp-C4h]
  void **v93; // [rsp+10h] [rbp-C0h]
  __int64 v94; // [rsp+18h] [rbp-B8h]
  char *v95; // [rsp+20h] [rbp-B0h]
  __int64 *v96; // [rsp+28h] [rbp-A8h]
  unsigned __int64 *v97; // [rsp+30h] [rbp-A0h]
  int v98; // [rsp+38h] [rbp-98h]
  unsigned int v99; // [rsp+3Ch] [rbp-94h]
  int v100; // [rsp+40h] [rbp-90h]
  void *v101; // [rsp+48h] [rbp-88h] BYREF
  __int64 v102; // [rsp+50h] [rbp-80h] BYREF
  __int64 v103; // [rsp+58h] [rbp-78h]
  void *v104; // [rsp+60h] [rbp-70h] BYREF
  int v105; // [rsp+68h] [rbp-68h]
  __int64 v106; // [rsp+70h] [rbp-60h] BYREF
  int v107; // [rsp+78h] [rbp-58h]
  unsigned __int64 v108; // [rsp+80h] [rbp-50h] BYREF
  int v109; // [rsp+88h] [rbp-48h]

  sub_5C8E50(a1, *(_QWORD *)(*(_QWORD *)(a1 + 248) + 40LL), (__int64 *)(a1 + 208));
  v50 = *(_QWORD **)(a1 + 232);
  if ( v50 )
  {
    if ( v50 >= &v50[*((unsigned int *)v50 - 1)] )
      goto LABEL_9;
    v51 = &v50[*((unsigned int *)v50 - 1)];
    do
    {
      while ( 1 )
      {
        v52 = *v50;
        if ( *v50 )
        {
          v53 = *(_QWORD *)(a1 + 224);
          v54 = (*(_DWORD *)(v52 + 8))-- == 1;
          if ( v54 )
            break;
        }
        if ( ++v50 >= v51 )
          goto LABEL_8;
      }
      sub_15D7BC0(v53, v52);
      ++v50;
    }
    while ( v50 < v51 );
LABEL_8:
    v50 = *(_QWORD **)(a1 + 232);
    if ( v50 )
LABEL_9:
      *((_DWORD *)v50 - 1) = 0;
  }
  v55 = *(_QWORD *)(a1 + 240);
  if ( v55 )
    *(_DWORD *)(v55 - 4) = 0;
  v56 = *(_QWORD *)(a1 + 248);
  v98 = *(_DWORD *)(v56 + 56);
  if ( v98 )
  {
    v99 = 0;
    v93 = &v104;
    v96 = &v106;
    v97 = &v108;
    v95 = (char *)&v101 + 4;
    v94 = a1 + 16;
    while ( 1 )
    {
      v64 = *(_QWORD *)a1;
      v102 = 0;
      HIDWORD(v101) = 0;
      v65 = *(_QWORD *)(v56 + 8LL * v99 + 80);
      v103 = v64;
      v109 = 0;
      v104 = nullptr;
      v108 = v65 & 0xFFFFFFFFFFFFFFF8LL;
      v105 = 0;
      v106 = 0;
      v107 = 0;
      sub_FA4800(
        v94,
        1,
        (unsigned int)&v101 + 4,
        (unsigned int)&v108,
        (unsigned int)&v106,
        (unsigned int)&v104,
        (__int64)&v102);
      v66 = v102;
      if ( v102 )
      {
        v67 = *(_DWORD *)(v102 + 8);
        v68 = v67 + 1;
        if ( !v67 )
        {
          sub_15D7BC0(v103, v102);
          v68 = *(_DWORD *)(v66 + 8) + 1;
        }
        *(_DWORD *)(v66 + 8) = v68;
      }
      v69 = *(_QWORD **)(a1 + 232);
      if ( v69 )
      {
        v70 = *((_DWORD *)v69 - 1);
        if ( v70 == *((_DWORD *)v69 - 2) )
        {
          v71 = (3 * v70 + 1) >> 1;
          v72 = 8 * v71 + 8;
          if ( 8 * v70 + 8 >= (unsigned int)v72 || v70 >= v71 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0((__int64 *)&v108, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, &v108);
            sub_233E40((__int64)&v108);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v91 = (3 * v70 + 1) >> 1;
          v73 = (unsigned int *)sub_186B300(v69 - 1, v72);
          v69 = v73 + 2;
          *(_QWORD *)(a1 + 232) = v73 + 2;
          *v73 = v91;
          LODWORD(v73) = v73[1];
          v59 = &v69[(unsigned int)v73];
          v58 = (_DWORD)v73 + 1;
        }
        else
        {
          v57 = v70;
          v58 = v70 + 1;
          v59 = &v69[v57];
        }
      }
      else
      {
        v87 = (_QWORD *)sub_186B270(0x18u);
        v69 = v87 + 1;
        *v87 = 2;
        v58 = 1;
        *(_QWORD *)(a1 + 232) = v69;
        v59 = v69;
      }
      *v59 = v66;
      *((_DWORD *)v69 - 1) = v58;
      v46 = *(_BYTE **)(a1 + 240);
      v60 = (*(_QWORD *)(*(_QWORD *)(a1 + 248) + 8LL * v99 + 80) & 7LL) == 1;
      if ( v46 )
      {
        v61 = *((_DWORD *)v46 - 1);
        if ( v61 == *((_DWORD *)v46 - 2) )
        {
          v74 = (3 * v61 + 1) >> 1;
          v75 = v74 + 8;
          if ( v61 + 8 >= (unsigned int)v75 || v61 >= v74 )
          {
            v43 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0((__int64 *)&v108, "Overflow encountered when expanding vector");
            *v43 = (char *)off_1C63128;
            sub_2333C0(v43 + 1, &v108);
            sub_233E40((__int64)&v108);
            __cxa_throw(v43, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v92 = (3 * v61 + 1) >> 1;
          v76 = (unsigned int *)sub_186B300(v46 - 8, v75);
          v46 = v76 + 2;
          *(_QWORD *)(a1 + 240) = v76 + 2;
          *v76 = v92;
          LODWORD(v76) = v76[1];
          v47 = &v46[(unsigned int)v76];
          v63 = (_DWORD)v76 + 1;
        }
        else
        {
          v62 = v61;
          v63 = v61 + 1;
          v47 = &v46[v62];
        }
      }
      else
      {
        v86 = (_QWORD *)sub_186B270(0xAu);
        v46 = v86 + 1;
        *v86 = 2;
        v63 = 1;
        *(_QWORD *)(a1 + 240) = v46;
        v47 = v46;
      }
      *v47 = v60;
      *((_DWORD *)v46 - 1) = v63;
      if ( v66 )
      {
        v54 = (*(_DWORD *)(v66 + 8))-- == 1;
        if ( v54 )
          sub_15D7BC0(v64, v66);
      }
      if ( v98 == ++v99 )
        break;
      v56 = *(_QWORD *)(a1 + 248);
    }
  }
  sub_6447F0(
    a1 + 224,
    a1 + 240,
    (int)v46,
    (int)v47,
    v48,
    v49,
    a2,
    v90,
    (int)v93,
    v94,
    (int)v95,
    (int)v96,
    (int)v97,
    v98,
    v100,
    v101,
    v102,
    v103,
    v104);
  v77 = *(_QWORD *)(a1 + 232);
  if ( v77 )
    v78 = *(_DWORD *)(v77 - 4);
  else
    v78 = 0;
  v79 = sub_62C680(
          *(_DWORD *)(a1 + 8) + 656,
          *(_QWORD *)(a1 + 208),
          v78,
          v77,
          *(_QWORD *)(a1 + 240),
          *(_DWORD *)(a1 + 248) + 72,
          1);
  if ( v79 )
    sub_62A000(v89[1], v79);
  if ( *v89 )
    sub_62A410(v89[1], *v89);
  v80 = *(_QWORD *)(a1 + 8);
  *v89 = v79;
  sub_629AF0(v79, v80);
  return sub_62BE20(
           *v89,
           v89[1],
           v81,
           v82,
           v83,
           v84,
           a7,
           a8,
           a9,
           a10,
           a11,
           a12,
           a13,
           a14,
           a15,
           a16,
           a17,
           a18,
           a19,
           a20,
           a21,
           a22,
           a23,
           a24,
           a25,
           a26,
           a27,
           a28,
           a29,
           a30,
           a31,
           a32,
           a33,
           a34,
           a35,
           a36,
           a37,
           a38,
           a39,
           a40,
           a41,
           a42,
           a43);
}

