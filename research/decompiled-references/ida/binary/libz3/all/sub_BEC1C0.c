__int64 __fastcall sub_BEC1C0(__int64 *a1, unsigned int a2, double a3)
{
  char **v3; // r13
  char **v4; // r13
  char **exception; // r13
  __int64 v7; // rdx
  __int64 v8; // r13
  __int64 v9; // rbp
  int v10; // eax
  __int64 v11; // r14
  int v12; // r15d
  int v13; // ecx
  int v14; // r8d
  int v15; // r9d
  __int64 v16; // rdi
  int v17; // eax
  int v18; // edx
  int v19; // ecx
  int v20; // r8d
  int v21; // r9d
  unsigned int v22; // eax
  __int64 v23; // rsi
  unsigned int v24; // r8d
  __int64 v25; // rdi
  bool v26; // zf
  __int64 v27; // r14
  int v28; // ecx
  int v29; // r8d
  int v30; // r9d
  __int64 v31; // rdi
  void *v32; // r13
  int v33; // eax
  int v34; // edx
  int v35; // ecx
  int v36; // r8d
  int v37; // r9d
  unsigned int v38; // eax
  __int64 v39; // rsi
  unsigned int v40; // r13d
  __int64 v41; // rdi
  __int64 v42; // rdx
  unsigned int *v43; // rsi
  unsigned int v44; // r14d
  __int64 v45; // rdi
  __int64 v46; // rsi
  __int64 v47; // r14
  unsigned int *v48; // rbp
  unsigned int *v49; // rdx
  unsigned int *v50; // r12
  unsigned int v51; // ecx
  __int64 v52; // rax
  unsigned int *v53; // rax
  int v54; // ecx
  __int64 v55; // rax
  __int64 v56; // rdi
  unsigned int v57; // eax
  unsigned int *v58; // rdx
  unsigned int v59; // r13d
  __int64 v60; // rax
  unsigned int *v61; // rax
  _QWORD *v62; // rdi
  __int64 result; // rax
  __int64 v64; // rsi
  __int64 v65; // rdi
  __int64 v66; // rsi
  __int64 v67; // r12
  __int64 v68; // rbp
  char v69; // al
  void *v70; // r14
  unsigned int v71; // r8d
  size_t v72; // rsi
  unsigned int *v73; // rax
  unsigned int v74; // r8d
  size_t v75; // rsi
  unsigned int *v76; // rax
  unsigned int v77; // ecx
  size_t v78; // rsi
  unsigned int *v79; // rax
  _DWORD *v80; // rax
  char v81; // al
  unsigned __int64 v82; // rax
  unsigned int v83; // r14d
  __int64 v84; // rdi
  unsigned int v85; // r8d
  __int64 v86; // rdx
  __int64 v87; // rax
  __int64 v88; // rax
  __int64 v89; // [rsp+8h] [rbp-C0h]
  unsigned int v90; // [rsp+10h] [rbp-B8h]
  unsigned int v91; // [rsp+10h] [rbp-B8h]
  unsigned int v92; // [rsp+10h] [rbp-B8h]
  void *v93; // [rsp+10h] [rbp-B8h]
  unsigned int v94; // [rsp+10h] [rbp-B8h]
  unsigned int v95; // [rsp+10h] [rbp-B8h]
  int v96[2]; // [rsp+18h] [rbp-B0h]
  unsigned int v97; // [rsp+18h] [rbp-B0h]
  __int64 v98; // [rsp+28h] [rbp-A0h]
  __int64 v99; // [rsp+28h] [rbp-A0h]
  unsigned int v100; // [rsp+28h] [rbp-A0h]
  void *v101; // [rsp+38h] [rbp-90h]
  unsigned int v102; // [rsp+48h] [rbp-80h]
  unsigned int v103[2]; // [rsp+4Ch] [rbp-7Ch] BYREF
  unsigned int *v104; // [rsp+58h] [rbp-70h] BYREF
  __m128i v105; // [rsp+60h] [rbp-68h] BYREF
  unsigned int *v106; // [rsp+70h] [rbp-58h] BYREF
  __int64 v107; // [rsp+78h] [rbp-50h]
  __int64 v108; // [rsp+80h] [rbp-48h] BYREF
  __int64 v109; // [rsp+88h] [rbp-40h]

  v7 = a1[1];
  v8 = *a1;
  v103[0] = a2;
  v9 = *(_QWORD *)(*(_QWORD *)(v7 + 8840) + 8LL * (a2 >> 1));
  if ( !(unsigned __int8)sub_1407860(v8 + 1848, v8 + 2112, v9) || *(_DWORD *)(v9 + 24) != 3 )
  {
LABEL_3:
    sub_1872CE0("");
    sub_1873130(114, 259);
  }
  v66 = *(_QWORD *)(v9 + 40);
  v67 = *(_QWORD *)(v9 + 32);
  v68 = *(_QWORD *)(v9 + 48);
  v106 = nullptr;
  v107 = 0;
  v108 = 1;
  v109 = 0;
  v105.m128i_i8[0] = 1;
  v69 = sub_1666AE0(v8 + 2000, v66, &v106, &v105);
  v70 = qword_1C7F2C0;
  if ( !v69
    || !v105.m128i_i8[0]
    || (v108 & 0x100000000LL) != 0
    || (_DWORD)v108 != 1
    || (v81 = sub_182CFA0(qword_1C7F2C0, &v106), v70 = qword_1C7F2C0, !v81)
    || (v82 = sub_182D020(qword_1C7F2C0, &v106), v70 = qword_1C7F2C0, HIDWORD(v82)) )
  {
    sub_182CBA0(v70, &v106);
    sub_182CBA0(v70, &v108);
    goto LABEL_3;
  }
  v83 = sub_182D020(qword_1C7F2C0, &v106);
  v93 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v106);
  sub_182CBA0(v93, &v108);
  result = sub_BEA930(a1, v68, v103[0], a3);
  if ( !(_BYTE)result )
  {
    v84 = *a1;
    v94 = v83;
    LODWORD(v106) = v103[0];
    if ( *(_DWORD *)(v84 + 4152) < v83 )
    {
      v85 = *(_DWORD *)(v84 + 4156);
      if ( v85 != -2 )
      {
        v86 = a1[1];
        if ( *(_BYTE *)(*(_QWORD *)(v86 + 8848) + v85) == 1 && *(_DWORD *)(v86 + 9464) != *(_DWORD *)(v86 + 9468) )
          return sub_BC37F0(v84, 0, 1, (unsigned int *)&v106, v85 ^ 1, a3);
      }
    }
    v102 = sub_163F2F0(v84 + 1752, v68);
    v10 = sub_163B240(*a1 + 1696, v102, v83);
    v11 = *a1;
    v12 = v10;
    v98 = *a1 + 2184;
    sub_BB1EF0((__int64)&v105, *a1);
    v107 = 0;
    BYTE4(v106) &= 0xFCu;
    v108 = 1;
    v109 = 0;
    LODWORD(v106) = v12;
    sub_182CBA0(qword_1C7F2C0, &v108);
    v16 = *(_QWORD *)(v11 + 2216);
    BYTE4(v108) &= ~1u;
    LODWORD(v108) = 1;
    if ( !v16 )
    {
      sub_16669E0(v11 + 2208);
      v16 = *(_QWORD *)(v11 + 2216);
    }
    sub_166A700(v16, (unsigned int)&v106, 1, v13, v14, v15);
    v101 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v106);
    sub_182CBA0(v101, &v108);
    v17 = sub_15E1B70(*(_QWORD *)(v11 + 2208));
    v22 = sub_BF5550(v98, v17, v18, v19, v20, v21);
    v23 = v105.m128i_i64[0];
    v24 = v22;
    if ( v105.m128i_i64[0] )
    {
      v25 = v105.m128i_i64[1];
      v26 = (*(_DWORD *)(v105.m128i_i64[0] + 8))-- == 1;
      if ( v26 )
      {
        v100 = v22;
        sub_15D7BC0(v25, v23);
        v24 = v100;
      }
    }
    sub_BC37F0(*a1, 0, 1, v103, v24, a3);
    v27 = *a1;
    v99 = *a1 + 2184;
    sub_BB1EF0((__int64)&v105, *a1);
    v107 = 0;
    BYTE4(v106) &= 0xFCu;
    v108 = 1;
    v109 = 0;
    LODWORD(v106) = v94;
    sub_182CBA0(qword_1C7F2C0, &v108);
    v31 = *(_QWORD *)(v27 + 2216);
    BYTE4(v108) &= ~1u;
    LODWORD(v108) = 1;
    if ( !v31 )
    {
      sub_16669E0(v27 + 2208);
      v31 = *(_QWORD *)(v27 + 2216);
    }
    sub_166A700(v31, (unsigned int)&v106, 1, v28, v29, v30);
    v32 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v106);
    sub_182CBA0(v32, &v108);
    v33 = sub_15E1B70(*(_QWORD *)(v27 + 2208));
    v38 = sub_BF5550(v99, v33, v34, v35, v36, v37);
    v39 = v105.m128i_i64[0];
    v40 = v38;
    if ( v105.m128i_i64[0] )
    {
      v41 = v105.m128i_i64[1];
      v26 = (*(_DWORD *)(v105.m128i_i64[0] + 8))-- == 1;
      if ( v26 )
        sub_15D7BC0(v41, v39);
    }
    if ( v102 )
      goto LABEL_21;
    sub_155D090(&v106, *a1 + 1224);
    sub_14B9B80(*a1 + 1192, &v106);
    v42 = a1[2];
    if ( *(unsigned int **)(v42 + 864) == v106 )
    {
      sub_BC37F0(*a1, 0, 1, v103, v40 ^ 1, a3);
    }
    else
    {
      v43 = *(unsigned int **)(v42 + 856);
      if ( v106 == v43 )
        goto LABEL_56;
      v44 = sub_966440(*a1, v106);
      *(_QWORD *)v96 = a1[1];
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)v96 + 7488LL) + 48LL))(
        *(_QWORD *)(*(_QWORD *)v96 + 7488LL),
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v96 + 8840LL) + 8LL * (v44 >> 1)));
      a3 = (*(double (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)v96 + 7488LL) + 64LL))(*(_QWORD *)(*(_QWORD *)v96 + 7488LL));
      sub_BBF3C0((_QWORD *)*a1, v103[0] ^ 1, v40 ^ 1, v44, 0xFFFFFFFE, 0xFFFFFFFE, a3);
      v43 = v106;
      if ( *((_WORD *)v106 + 2) )
        goto LABEL_19;
      v80 = *(_DWORD **)(*((_QWORD *)v106 + 2) + 24LL);
      if ( !v80 || *v80 != *(_DWORD *)(*a1 + 1744) )
        goto LABEL_19;
      if ( v80[1] != 16 )
      {
LABEL_56:
        if ( !v43 )
        {
LABEL_21:
          v46 = *a1;
          v104 = nullptr;
          sub_BB0FB0(&v105, v46);
          v47 = a1[2];
          sub_BE7720((__int64 *)&v106, a1, v105.m128i_i64[0], v68);
          v48 = v106;
          v89 = a1[2];
          sub_BEA9F0((__int64 *)&v106, a1, v67, v94 + 1, (__int64)v106);
          v49 = v104;
          v50 = v106;
          v51 = v103[0] ^ 1;
          if ( v104 )
          {
            v52 = *(v104 - 1);
            if ( (_DWORD)v52 == *(v104 - 2) )
            {
              v74 = (unsigned int)(3 * v52 + 1) >> 1;
              v75 = 4 * v74 + 8;
              if ( 4 * (int)v52 + 8 >= (unsigned int)v75 || (unsigned int)v52 >= v74 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0((__int64 *)&v106, "Overflow encountered when expanding vector");
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, &v106);
                sub_233E40((__int64)&v106);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              v97 = (unsigned int)(3 * v52 + 1) >> 1;
              v91 = v103[0] ^ 1;
              v76 = (unsigned int *)sub_186B300(v104 - 2, v75);
              v49 = v76 + 2;
              v51 = v91;
              v104 = v76 + 2;
              *v76 = v97;
              v53 = &v76[v76[1] + 2];
            }
            else
            {
              v53 = &v104[v52];
            }
          }
          else
          {
            v95 = v103[0] ^ 1;
            v87 = sub_186B270(0x10u);
            v49 = (unsigned int *)(v87 + 8);
            *(_QWORD *)v87 = 2;
            v51 = v95;
            v104 = (unsigned int *)(v87 + 8);
            v53 = (unsigned int *)(v87 + 8);
          }
          *v53 = v51;
          v54 = *(v49 - 1);
          v55 = (unsigned int)(v54 + 1);
          *(v49 - 1) = v55;
          if ( (_DWORD)v55 == *(v49 - 2) )
          {
            v71 = (unsigned int)(3 * v55 + 1) >> 1;
            v72 = 4 * v71 + 8;
            if ( 4 * v54 + 12 >= (unsigned int)v72 || (unsigned int)v55 >= v71 )
            {
              v3 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0((__int64 *)&v106, "Overflow encountered when expanding vector");
              *v3 = (char *)off_1C63128;
              sub_2333C0(v3 + 1, &v106);
              sub_233E40((__int64)&v106);
              __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v90 = (unsigned int)(3 * v55 + 1) >> 1;
            v73 = (unsigned int *)sub_186B300(v49 - 2, v72);
            v49 = v73 + 2;
            v104 = v73 + 2;
            *v73 = v90;
            v55 = v73[1];
          }
          v49[v55] = v40;
          v56 = *a1;
          ++*(v49 - 1);
          v57 = sub_966440(v56, v50);
          v58 = v104;
          v59 = v57;
          if ( v104 )
          {
            v60 = *(v104 - 1);
            if ( (_DWORD)v60 == *(v104 - 2) )
            {
              v77 = (unsigned int)(3 * v60 + 1) >> 1;
              v78 = 4 * v77 + 8;
              if ( 4 * (int)v60 + 8 >= (unsigned int)v78 || (unsigned int)v60 >= v77 )
              {
                v4 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0((__int64 *)&v106, "Overflow encountered when expanding vector");
                *v4 = (char *)off_1C63128;
                sub_2333C0(v4 + 1, &v106);
                sub_233E40((__int64)&v106);
                __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v92 = (unsigned int)(3 * v60 + 1) >> 1;
              v79 = (unsigned int *)sub_186B300(v104 - 2, v78);
              v58 = v79 + 2;
              v104 = v79 + 2;
              *v79 = v92;
              v61 = &v79[v79[1] + 2];
            }
            else
            {
              v61 = &v104[v60];
            }
          }
          else
          {
            v88 = sub_186B270(0x10u);
            v58 = (unsigned int *)(v88 + 8);
            *(_QWORD *)v88 = 2;
            v104 = (unsigned int *)(v88 + 8);
            v61 = (unsigned int *)(v88 + 8);
          }
          *v61 = v59;
          v62 = (_QWORD *)*a1;
          ++*(v58 - 1);
          result = sub_BBF120(v62, &v104, a3);
          if ( v50 )
          {
            v26 = v50[2]-- == 1;
            if ( v26 )
              result = sub_15D7BC0(v89, v50);
          }
          if ( v48 )
          {
            v26 = v48[2]-- == 1;
            if ( v26 )
              result = sub_15D7BC0(v47, v48);
          }
          v64 = v105.m128i_i64[0];
          if ( v105.m128i_i64[0] )
          {
            v65 = v105.m128i_i64[1];
            v26 = (*(_DWORD *)(v105.m128i_i64[0] + 8))-- == 1;
            if ( v26 )
              result = sub_15D7BC0(v65, v64);
          }
          if ( v104 )
            return sub_186B220(v104 - 2);
          return result;
        }
LABEL_19:
        v45 = v107;
        v26 = v43[2]-- == 1;
        if ( v26 )
          sub_15D7BC0(v45, v43);
        goto LABEL_21;
      }
      sub_BB81F0(*a1, (__int64)v106);
    }
    v43 = v106;
    goto LABEL_56;
  }
  return result;
}

