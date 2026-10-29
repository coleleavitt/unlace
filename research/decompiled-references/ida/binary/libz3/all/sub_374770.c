__int64 __fastcall sub_374770(
        __int64 a1,
        void *a2,
        __int64 a3,
        unsigned __int8 a4,
        int a5,
        unsigned __int8 a6,
        char **a7)
{
  int *v8; // r12
  int *v9; // r14
  int *v10; // r14
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  int *v15; // r12
  int v16; // eax
  int v17; // edx
  int v18; // ecx
  int v19; // r8d
  int v20; // r9d
  _QWORD *v21; // r12
  void *v22; // r14
  __int64 v23; // rax
  char *v24; // rsi
  char *v25; // rax
  int v26; // edx
  int v27; // ecx
  int v28; // r8d
  int v29; // r9d
  __int64 v30; // rax
  char *v31; // rdi
  bool v32; // zf
  __int64 v33; // rax
  _DWORD *v34; // rax
  __int64 v35; // r12
  int v36; // edx
  int v37; // ecx
  int v38; // r8d
  int v39; // r9d
  __int64 v40; // rsi
  void *v41; // rdi
  __int64 v42; // rax
  __int64 v43; // r12
  __int64 v45; // rax
  __int64 v46; // r12
  __int64 v47; // rax
  int v48; // edx
  int v49; // ecx
  int v50; // r8d
  int v51; // r9d
  unsigned int v52; // edx
  unsigned int v53; // ecx
  __int64 v54; // rdi
  int v55; // [rsp+0h] [rbp-610h]
  _QWORD *v56; // [rsp+8h] [rbp-608h]
  __int64 v57; // [rsp+10h] [rbp-600h]
  _QWORD *v58; // [rsp+18h] [rbp-5F8h]
  std::locale *v59; // [rsp+20h] [rbp-5F0h]
  int v60; // [rsp+28h] [rbp-5E8h]
  int v61; // [rsp+28h] [rbp-5E8h]
  std::ios_base *v62; // [rsp+28h] [rbp-5E8h]
  std::ios_base *v63; // [rsp+28h] [rbp-5E8h]
  int v64; // [rsp+30h] [rbp-5E0h]
  unsigned __int8 v65; // [rsp+34h] [rbp-5DCh]
  int v66; // [rsp+38h] [rbp-5D8h]
  unsigned __int8 v67; // [rsp+3Ch] [rbp-5D4h]
  int v68; // [rsp+40h] [rbp-5D0h]
  int v69; // [rsp+40h] [rbp-5D0h]
  void (__fastcall ***v70)(void *); // [rsp+40h] [rbp-5D0h]
  int v71; // [rsp+48h] [rbp-5C8h]
  void **v72; // [rsp+48h] [rbp-5C8h]
  __int64 v73; // [rsp+50h] [rbp-5C0h]
  char **p_s1; // [rsp+58h] [rbp-5B8h]
  int v75; // [rsp+58h] [rbp-5B8h]
  char *s1; // [rsp+60h] [rbp-5B0h] BYREF
  int v77; // [rsp+68h] [rbp-5A8h] BYREF
  int v78; // [rsp+70h] [rbp-5A0h] BYREF
  int v79; // [rsp+78h] [rbp-598h] BYREF
  int *v80; // [rsp+80h] [rbp-590h]
  int v81; // [rsp+88h] [rbp-588h] BYREF
  int v82[2]; // [rsp+90h] [rbp-580h] BYREF
  int v83; // [rsp+98h] [rbp-578h] BYREF
  void *v84; // [rsp+A0h] [rbp-570h] BYREF
  char *v85; // [rsp+A8h] [rbp-568h]
  __int64 v86; // [rsp+B0h] [rbp-560h] BYREF
  __int64 v87; // [rsp+B8h] [rbp-558h]
  void *v88; // [rsp+C0h] [rbp-550h] BYREF
  __int64 v89; // [rsp+C8h] [rbp-548h]
  _QWORD v90[7]; // [rsp+D0h] [rbp-540h] BYREF
  char v91[8]; // [rsp+108h] [rbp-508h] BYREF
  int v92; // [rsp+110h] [rbp-500h]
  void *v93; // [rsp+118h] [rbp-4F8h]
  char *v94; // [rsp+120h] [rbp-4F0h]
  _QWORD v95[2]; // [rsp+128h] [rbp-4E8h] BYREF
  _QWORD v96[28]; // [rsp+138h] [rbp-4D8h] BYREF
  __int16 v97; // [rsp+218h] [rbp-3F8h]
  __int128 v98; // [rsp+220h] [rbp-3F0h]
  __int128 v99; // [rsp+230h] [rbp-3E0h]
  void *v100; // [rsp+240h] [rbp-3D0h] BYREF
  char v101[8]; // [rsp+248h] [rbp-3C8h] BYREF
  _QWORD v102[2]; // [rsp+250h] [rbp-3C0h] BYREF
  __int64 v103; // [rsp+260h] [rbp-3B0h]
  void *v104; // [rsp+268h] [rbp-3A8h]
  __int64 v105; // [rsp+270h] [rbp-3A0h]
  void *ptr; // [rsp+278h] [rbp-398h]
  __int64 v107; // [rsp+280h] [rbp-390h]
  int v108; // [rsp+288h] [rbp-388h]
  char v109; // [rsp+298h] [rbp-378h]
  _BYTE v110[32]; // [rsp+2A0h] [rbp-370h] BYREF
  _BYTE v111[848]; // [rsp+2C0h] [rbp-350h] BYREF

  v67 = a4;
  v73 = a3;
  v66 = a5;
  v65 = a6;
  if ( *(_QWORD *)(a1 + 8) )
    s1 = *(char **)(a1 + 8);
  else
    s1 = *a7;
  v80 = &qword_1C7F4C8;
  sub_17F9A60(&v81, "tactic");
  v8 = v80;
  sub_180C5A0(&v77, "");
  if ( !sub_185A820(v8, "default_tactic", &v81, &v77) )
  {
LABEL_33:
    p_s1 = &s1;
    goto LABEL_34;
  }
  v9 = v80;
  sub_180C5A0(&v78, "");
  p_s1 = &s1;
  if ( (sub_185A820(v9, "default_tactic", &v81, &v78) & 7) != 1 )
  {
    v10 = v80;
    sub_180C5A0(&v100, "");
    v88 = (void *)sub_185A820(v10, "default_tactic", &v81, &v100);
    sub_180CE20(
      (int)&v100,
      (int)&v88,
      v11,
      v12,
      v13,
      v14,
      v55,
      v56,
      v57,
      (__int64)v58,
      (int)v59,
      v60,
      v64,
      v66,
      v68,
      (int)&v88,
      v73,
      (int)&s1,
      (int)s1,
      v77,
      v78,
      v79,
      (int)v80,
      v81,
      v82[0],
      v83,
      (int)v84,
      v85,
      v86,
      v87);
    if ( *(_BYTE *)v100 )
    {
      if ( v100 != v102 )
        operator delete(v100, v102[0] + 1LL);
      sub_E059D0(&v100, 0, a2, &s1);
      v15 = v80;
      sub_180C5A0(v82, "");
      v16 = sub_185A820(v15, "default_tactic", &v81, v82);
      sub_180CE20(
        (int)&v84,
        (int)v82,
        v17,
        v18,
        v19,
        v20,
        v55,
        v56,
        (int)&v84,
        (__int64)v58,
        (int)v59,
        v61,
        v64,
        v66,
        v69,
        v71,
        v73,
        (int)&s1,
        (int)s1,
        v77,
        v78,
        v79,
        (int)v80,
        v81,
        v16,
        v83,
        (int)v84,
        v85,
        v86,
        v87);
      v62 = (std::ios_base *)v96;
      std::ios_base::ios_base((std::ios_base *)v96);
      v97 = 0;
      v98 = 0;
      v96[0] = (char *)&`vtable for'std::ios + 16;
      v99 = 0;
      v21 = (_QWORD *)`VTT for'std::istringstream[1];
      v22 = (void *)`VTT for'std::istringstream[2];
      v96[27] = 0;
      v23 = *(v21 - 3);
      v88 = v21;
      *(void **)((char *)&v88 + v23) = v22;
      v89 = 0;
      std::ios::init();
      memset(&v90[1], 0, 48);
      v88 = (char *)&`vtable for'std::istringstream + 24;
      v96[0] = (char *)&`vtable for'std::istringstream + 64;
      v90[0] = (char *)&`vtable for'std::streambuf + 16;
      v59 = (std::locale *)v91;
      std::locale::locale((std::locale *)v91);
      v24 = (char *)v84;
      v92 = 8;
      v90[0] = (char *)&`vtable for'std::stringbuf + 16;
      v58 = v95;
      v93 = v95;
      v25 = v85;
      if ( v84 == &v86 )
      {
        v52 = (_DWORD)v85 + 1;
        if ( (unsigned int)((_DWORD)v85 + 1) >= 8 )
        {
          *(_QWORD *)((char *)&v95[-1] + v52) = *(_QWORD *)((char *)v84 + v52 - 8);
          if ( (unsigned int)v25 >= 8 )
          {
            v53 = 0;
            do
            {
              v54 = v53;
              v53 += 8;
              *(_QWORD *)((char *)v95 + v54) = *(_QWORD *)&v24[v54];
            }
            while ( v53 < ((unsigned int)v25 & 0xFFFFFFF8) );
          }
        }
        else if ( (v52 & 4) != 0 )
        {
          LODWORD(v95[0]) = v86;
          *(_DWORD *)((char *)&v94 + v52 + 4) = *(_DWORD *)((char *)&v85 + v52 + 4);
        }
        else if ( (_DWORD)v85 != -1 )
        {
          LOBYTE(v95[0]) = v86;
          if ( (v52 & 2) != 0 )
            *(_WORD *)((char *)&v94 + v52 + 6) = *(_WORD *)((char *)&v85 + v52 + 6);
        }
      }
      else
      {
        v93 = v84;
        v95[0] = v86;
      }
      v94 = v25;
      v85 = nullptr;
      v84 = &v86;
      LOBYTE(v86) = 0;
      v56 = v90;
      std::stringbuf::_M_sync();
      std::ios::init();
      if ( v84 != &v86 )
        operator delete(v84, v86 + 1);
      sub_DC04D0(v57, &v100, v72, v73, "");
      v70 = (void (__fastcall ***)(void *))v84;
      if ( v84 )
      {
        v30 = sub_DEF440(
                (unsigned int)&v100,
                (_DWORD)v84,
                v26,
                v27,
                v28,
                v29,
                v55,
                (unsigned int)v90,
                v57,
                (unsigned int)v95,
                (unsigned int)v91,
                (__int64)v96);
        v70 = (void (__fastcall ***)(void *))v30;
        if ( v30 )
          ++*(_DWORD *)(v30 + 8);
        v31 = v85;
        if ( v84 )
        {
          v32 = (*((_DWORD *)v84 + 1))-- == 1;
          if ( v32 )
            sub_17F9000(v31);
        }
      }
      v88 = (char *)&`vtable for'std::istringstream + 24;
      v96[0] = (char *)&`vtable for'std::istringstream + 64;
      v90[0] = (char *)&`vtable for'std::stringbuf + 16;
      if ( v93 != v58 )
        operator delete(v93, v95[0] + 1LL);
      v90[0] = (char *)&`vtable for'std::streambuf + 16;
      std::locale::~locale(v59);
      v33 = *(v21 - 3);
      v88 = v21;
      *(void **)((char *)&v88 + v33) = v22;
      v89 = 0;
      v96[0] = (char *)&`vtable for'std::ios + 16;
      std::ios_base::~ios_base(v62);
      sub_E0AF10(&v100);
      if ( v70 )
        goto LABEL_21;
      goto LABEL_34;
    }
    if ( v100 != v102 )
      operator delete(v100, v102[0] + 1LL);
    goto LABEL_33;
  }
LABEL_34:
  v43 = sub_374440(a2, v73, p_s1);
  if ( v43 )
    goto LABEL_30;
  v45 = sub_3737C0((_DWORD)a2, v73, (_DWORD)p_s1);
  v70 = (void (__fastcall ***)(void *))v45;
  v72 = &v88;
  if ( v45 )
    ++*(_DWORD *)(v45 + 8);
LABEL_21:
  v88 = nullptr;
  v100 = a2;
  sub_16744A0(v101, a2);
  v103 = 0;
  v104 = a2;
  v105 = 0;
  v34 = (_DWORD *)sub_186B270(0x80u);
  *(_QWORD *)v34 = 0;
  v34[2] = 0;
  *((_QWORD *)v34 + 2) = 0;
  v34[6] = 0;
  *((_QWORD *)v34 + 4) = 0;
  v34[10] = 0;
  *((_QWORD *)v34 + 6) = 0;
  v34[14] = 0;
  *((_QWORD *)v34 + 8) = 0;
  v34[18] = 0;
  *((_QWORD *)v34 + 10) = 0;
  v34[22] = 0;
  *((_QWORD *)v34 + 12) = 0;
  v34[26] = 0;
  *((_QWORD *)v34 + 14) = 0;
  v34[30] = 0;
  ptr = v34;
  v107 = 8;
  v108 = 0;
  v109 = 0;
  sub_1427860(&v100, v72);
  v63 = (std::ios_base *)v110;
  sub_157EB00(v110, v101);
  sub_16669D0(v111, a2);
  v111[28] = 0;
  sub_1409FB0(&v100, v72);
  sub_18572D0(v72);
  v35 = sub_374440(a2, v73, p_s1);
  *(_QWORD *)v82 = &qword_1C7F4C8;
  sub_17F9A60(&v83, "tactic");
  if ( !v35 )
  {
    if ( !s1 )
      goto LABEL_42;
    if ( ((unsigned __int8)s1 & 7) == 1 )
    {
      sub_180CE20(
        (int)&v84,
        (int)p_s1,
        v36,
        v37,
        v38,
        v39,
        v55,
        v56,
        v57,
        (__int64)v58,
        (int)v59,
        (int)v110,
        v64,
        v66,
        (int)v70,
        (int)v72,
        v73,
        (int)p_s1,
        (int)s1,
        v77,
        v78,
        v79,
        (int)v80,
        v81,
        v82[0],
        v83,
        (int)v84,
        v85,
        v86,
        v87);
      if ( v85 != &byte_5 || *(_DWORD *)v84 != 1113540177 || *((_BYTE *)v84 + 4) != 86 )
      {
        if ( v84 != &v86 )
          operator delete(v84, v86 + 1);
        goto LABEL_42;
      }
      if ( v84 != &v86 )
        operator delete(v84, v86 + 1);
    }
    else if ( strcmp(s1, "QF_BV") )
    {
      goto LABEL_42;
    }
    if ( v111[16] )
    {
      v35 = sub_68D490(a2, v73, 1);
      if ( v35 )
        goto LABEL_22;
    }
LABEL_42:
    v46 = *(_QWORD *)v82;
    sub_180C5A0(&v79, "");
    v47 = sub_185A820(v46, "default_tactic", &v83, &v79);
    v84 = (void *)v47;
    if ( v47 )
    {
      if ( (v47 & 7) == 1 )
      {
        sub_180CE20(
          (int)v72,
          (int)&v84,
          v48,
          v49,
          v50,
          v51,
          v55,
          v56,
          v57,
          (__int64)v58,
          (int)&v79,
          (int)v63,
          v64,
          v66,
          (int)v70,
          (int)v72,
          v73,
          (int)p_s1,
          (int)s1,
          v77,
          v78,
          v79,
          (int)v80,
          v81,
          v82[0],
          v83,
          (int)v84,
          v85,
          v86,
          v87);
        if ( v89 != 3 || *(_WORD *)v88 != 24947 || *((_BYTE *)v88 + 2) != 116 )
        {
          if ( v88 != v90 )
            operator delete(v88, v90[0] + 1LL);
          goto LABEL_45;
        }
        if ( v88 != v90 )
          operator delete(v88, v90[0] + 1LL);
      }
      else if ( strcmp((const char *)v47, "sat") )
      {
        goto LABEL_45;
      }
      v35 = sub_68D490(a2, v73, 1);
      if ( v35 )
        goto LABEL_22;
    }
LABEL_45:
    v35 = sub_374300((__int64)a2, v73, (__int64)p_s1);
  }
LABEL_22:
  sub_18572D0(&v83);
  sub_157EB20(v63);
  if ( ptr )
    sub_186B220(ptr);
  v40 = v103;
  if ( v103 )
  {
    v41 = v104;
    v32 = (*(_DWORD *)(v103 + 8))-- == 1;
    if ( v32 )
      sub_15D7BC0(v41, v40);
  }
  v42 = sub_E47360((_DWORD)a2, (_DWORD)v70, v73, v67, (unsigned __int8)v66, v65, (__int64)p_s1);
  v43 = sub_E48EC0(v42, v35, v73);
  if ( v70 )
  {
    v75 = *((_DWORD *)v70 + 2);
    *((_DWORD *)v70 + 2) = v75 - 1;
    if ( v75 == 1 )
    {
      (**v70)(v70);
      sub_186B220(v70);
    }
  }
LABEL_30:
  sub_18572D0(&v81);
  return v43;
}

