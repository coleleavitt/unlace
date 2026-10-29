__int64 __fastcall sub_705850(__int64 a1)
{
  __int64 v2; // rax
  unsigned int v3; // esi
  __int64 v4; // r13
  __int64 v5; // r14
  unsigned int *v6; // r12
  unsigned int *v7; // r15
  _QWORD *v8; // rbp
  unsigned int v9; // r9d
  __int64 v10; // rdx
  unsigned int v11; // edi
  __int64 v12; // r11
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // rsi
  __int64 i; // rax
  int v17; // ecx
  __int64 v18; // rax
  __int64 v19; // rsi
  __int64 v20; // rdi
  bool v21; // zf
  int v22; // r9d
  __int64 v23; // rsi
  __int64 v24; // rax
  __int64 v25; // rdi
  __int64 v26; // rsi
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rax
  unsigned int *v30; // rbp
  unsigned int v31; // r15d
  unsigned int v32; // r13d
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rax
  __int64 v35; // rax
  int v36; // eax
  __int64 v37; // r13
  unsigned __int32 v38; // eax
  int v39; // r15d
  unsigned __int32 v40; // ebp
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // rax
  unsigned int *v45; // rax
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rax
  __int64 v49; // r14
  unsigned int *v50; // r12
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rcx
  unsigned int v55; // edx
  __int64 result; // rax
  unsigned int *v57; // rbx
  unsigned int *v58; // rbp
  unsigned int v59; // esi
  int v60; // eax
  __int64 v61; // rdx
  unsigned int v62; // eax
  __int64 v63; // rcx
  int v64; // eax
  _QWORD *v65; // rcx
  __int64 v66; // rsi
  __int64 v67; // rdi
  unsigned int v68; // ecx
  size_t v69; // rsi
  unsigned int *v70; // rax
  unsigned int v71; // edx
  size_t v72; // rsi
  unsigned int *v73; // rax
  __int64 v74; // rax
  unsigned int v75; // ebp
  __int64 v76; // rax
  _QWORD *v77; // rbp
  __int64 v78; // rdx
  _DWORD *v79; // rax
  __int64 v80; // rax
  __int64 v81; // rax
  __int64 v82; // rax
  unsigned int v83; // ebp
  __int64 v84; // rsi
  _QWORD *v85; // rax
  char **exception; // r15
  char **v87; // rbp
  unsigned int *v88; // [rsp+8h] [rbp-E0h]
  unsigned int *v89; // [rsp+8h] [rbp-E0h]
  unsigned int v90; // [rsp+8h] [rbp-E0h]
  __int64 v91; // [rsp+10h] [rbp-D8h]
  char v92; // [rsp+28h] [rbp-C0h]
  __int64 v93; // [rsp+28h] [rbp-C0h]
  __int64 v94; // [rsp+28h] [rbp-C0h]
  __int64 v95; // [rsp+30h] [rbp-B8h]
  unsigned int v96; // [rsp+30h] [rbp-B8h]
  __int64 v97; // [rsp+48h] [rbp-A0h] BYREF
  __int64 v98; // [rsp+50h] [rbp-98h] BYREF
  unsigned int *v99; // [rsp+58h] [rbp-90h] BYREF
  __int64 v100; // [rsp+60h] [rbp-88h] BYREF
  __int64 v101; // [rsp+68h] [rbp-80h]
  __int64 v102; // [rsp+70h] [rbp-78h] BYREF
  _QWORD *v103; // [rsp+78h] [rbp-70h] BYREF
  _BYTE v104[12]; // [rsp+80h] [rbp-68h] BYREF
  __m128i v105[5]; // [rsp+90h] [rbp-58h] BYREF

  v91 = a1 + 40;
  v2 = *(_QWORD *)(a1 + 376);
  if ( v2 )
  {
    v3 = *(_DWORD *)(v2 - 4) - 1;
    if ( *(_DWORD *)(v2 - 4) == 1 )
      v3 = 1;
  }
  else
  {
    v3 = -1;
  }
  v99 = nullptr;
  v98 = a1 + 40;
  sub_703280(a1, v3, &v98);
  v4 = *(_QWORD *)(a1 + 24);
  v5 = v98;
  v100 = 0;
  v6 = v99;
  v101 = v4;
  sub_77CEF0(&v97, v4);
  if ( !v6 || (v88 = &v6[*(v6 - 1)], v88 == v6) )
  {
    v8 = nullptr;
    v23 = 0;
    goto LABEL_25;
  }
  v7 = v6;
  v8 = nullptr;
  do
  {
    v9 = *v7;
    v10 = *(_QWORD *)(a1 + 384);
    v11 = *v7 >> 1;
    v12 = 24LL * (v11 & (*(_DWORD *)(a1 + 392) - 1));
    v13 = 24LL * *(unsigned int *)(a1 + 392);
    v14 = v10 + v12;
    v15 = v10 + v13;
    if ( v12 != v13 )
    {
      for ( i = v10 + v12; v15 != i; i += 24 )
      {
        v17 = *(_DWORD *)(i + 4);
        if ( v17 == 2 )
        {
          if ( v11 == *(_DWORD *)i && v11 == *(_DWORD *)(i + 8) )
          {
            v18 = *(_QWORD *)(i + 16);
            if ( !v18 )
              goto LABEL_80;
LABEL_15:
            v19 = v100;
            ++*(_DWORD *)(v18 + 8);
            if ( v19 )
              goto LABEL_16;
            v22 = v9 & 1;
            v100 = v18;
            if ( !v22 )
            {
              v105[0].m128i_i64[0] = v18;
LABEL_20:
              ++*(_DWORD *)(v18 + 8);
              goto LABEL_21;
            }
LABEL_87:
            sub_15ECFD0((unsigned int)v105, (unsigned int)&v100, 8, (unsigned int)v105, v14, v22);
            v66 = v100;
            v18 = v105[0].m128i_i64[0];
            v21 = v100 == 0;
            v100 = v105[0].m128i_i64[0];
            v105[0].m128i_i64[0] = v66;
            if ( !v21 )
            {
              v67 = v105[0].m128i_i64[1];
              v21 = (*(_DWORD *)(v66 + 8))-- == 1;
              if ( v21 )
              {
                sub_15D7BC0(v67, v66);
                v18 = v100;
              }
            }
LABEL_19:
            v105[0].m128i_i64[0] = v18;
            if ( !v18 )
              goto LABEL_21;
            goto LABEL_20;
          }
        }
        else if ( !v17 )
        {
          goto LABEL_83;
        }
      }
    }
    if ( v10 == v14 )
    {
LABEL_83:
      sub_77CF50(v104, &v97, v91, a1 + 304, a1 + 328);
      v61 = *(_QWORD *)v104;
      if ( v8 )
      {
        v62 = *((_DWORD *)v8 - 1);
        if ( v62 == *((_DWORD *)v8 - 2) )
        {
          v68 = (3 * v62 + 1) >> 1;
          v69 = 8 * v68 + 8;
          if ( 8 * v62 + 8 >= (unsigned int)v69 || v62 >= v68 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_6FFCA0(v105[0].m128i_i64, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v105);
            sub_233E40((__int64)v105);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v96 = (3 * v62 + 1) >> 1;
          v93 = *(_QWORD *)v104;
          v70 = (unsigned int *)sub_186B300(v8 - 1, v69);
          v8 = v70 + 2;
          v61 = v93;
          *v70 = v96;
          LODWORD(v70) = v70[1];
          v65 = &v8[(unsigned int)v70];
          v64 = (_DWORD)v70 + 1;
        }
        else
        {
          v63 = v62;
          v64 = v62 + 1;
          v65 = &v8[v63];
        }
      }
      else
      {
        v94 = *(_QWORD *)v104;
        v77 = (_QWORD *)sub_186B270(0x18u);
        *v77 = 2;
        v61 = v94;
        v64 = 1;
        v8 = v77 + 1;
        v65 = v8;
      }
      *v65 = v61;
      *((_DWORD *)v8 - 1) = v64;
      goto LABEL_22;
    }
    while ( 1 )
    {
      v60 = *(_DWORD *)(v10 + 4);
      if ( v60 != 2 )
      {
        if ( !v60 )
          goto LABEL_83;
        goto LABEL_75;
      }
      if ( v11 == *(_DWORD *)v10 && v11 == *(_DWORD *)(v10 + 8) )
        break;
LABEL_75:
      v10 += 24;
      if ( v14 == v10 )
        goto LABEL_83;
    }
    v18 = *(_QWORD *)(v10 + 16);
    if ( v18 )
      goto LABEL_15;
LABEL_80:
    v19 = v100;
    if ( v100 )
    {
LABEL_16:
      v20 = v101;
      v21 = (*(_DWORD *)(v19 + 8))-- == 1;
      if ( v21 )
      {
        v95 = v18;
        v92 = v9;
        sub_15D7BC0(v20, v19);
        v18 = v95;
        LOBYTE(v9) = v92;
      }
      v22 = v9 & 1;
      v100 = v18;
      if ( v22 )
        goto LABEL_87;
      goto LABEL_19;
    }
    v100 = 0;
    v22 = v9 & 1;
    if ( v22 )
      goto LABEL_87;
    v105[0].m128i_i64[0] = 0;
LABEL_21:
    v102 = v4;
    v103 = v8;
    sub_6FFDF0(&v103, v105);
    v4 = v102;
    v8 = v103;
LABEL_22:
    ++v7;
  }
  while ( v88 != v7 );
  if ( v8 )
    v23 = *((unsigned int *)v8 - 1);
  else
    v23 = 0;
LABEL_25:
  v24 = sub_15EC240(v4, v23);
  if ( v24 )
    ++*(_DWORD *)(v24 + 8);
  v25 = v100;
  v26 = v4;
  v100 = v24;
  sub_6FFC80(v25, v4);
  sub_77CF20(&v97);
  v102 = v4;
  v103 = v8;
  sub_2334C0(&v102);
  if ( !v6 || (v29 = *(v6 - 1), !(_DWORD)v29) )
  {
    v74 = *(_QWORD *)(a1 + 376);
    if ( !v74 )
      goto LABEL_134;
    v36 = *(_DWORD *)(v74 - 4);
    if ( v36 == 1 )
      goto LABEL_49;
LABEL_103:
    if ( (v36 & 1) != 0 )
    {
      v75 = *(_DWORD *)(a1 + 56);
      goto LABEL_105;
    }
LABEL_134:
    v75 = *(_DWORD *)(a1 + 56) ^ 1;
LABEL_105:
    sub_11420C0(v5, v75 >> 1, v27, v28);
    if ( !v6 )
      goto LABEL_133;
    goto LABEL_106;
  }
  v30 = v6;
  v31 = -1;
  v32 = -1;
  v89 = &v6[v29];
  do
  {
    while ( 1 )
    {
      v26 = *v30;
      v33 = sub_705380(a1, v26);
      if ( v32 == -1 )
      {
        v32 = v33;
      }
      else
      {
        v28 = (unsigned int)v33;
        if ( v32 >= (unsigned int)v33 )
          v28 = v32;
        if ( (_DWORD)v33 != -1 )
          v32 = v28;
      }
      v34 = HIDWORD(v33);
      if ( v31 != -1 )
        break;
      v31 = v34;
      if ( ++v30 == v89 )
        goto LABEL_42;
    }
    v28 = (unsigned int)v34;
    if ( v31 >= (unsigned int)v34 )
      v28 = v31;
    if ( (_DWORD)v34 != -1 )
      v31 = v28;
    ++v30;
  }
  while ( v30 != v89 );
LABEL_42:
  v35 = *(_QWORD *)(a1 + 376);
  if ( !v35 )
  {
    if ( v32 != -1 )
    {
      if ( v31 == -1 )
      {
        if ( !v32 )
          goto LABEL_49;
        goto LABEL_130;
      }
      if ( v32 >= v31 )
        v31 = v32;
    }
    if ( !v31 )
      goto LABEL_49;
LABEL_130:
    v83 = *(_DWORD *)(a1 + 56);
    v84 = v83 >> 1;
    v75 = v83 ^ 1;
    sub_11420C0(v5, v84, v27, v28);
LABEL_106:
    v76 = *(v6 - 1);
    if ( (_DWORD)v76 != *(v6 - 2) )
    {
LABEL_107:
      v6[v76] = v75;
      ++*(v6 - 1);
      goto LABEL_57;
    }
LABEL_133:
    sub_692C60(&v99);
    v6 = v99;
    v5 = v98;
    v76 = *(v99 - 1);
    goto LABEL_107;
  }
  v36 = *(_DWORD *)(v35 - 4);
  if ( v36 == 1 )
    goto LABEL_49;
  if ( v32 == -1 )
  {
    if ( !v31 )
      goto LABEL_49;
    goto LABEL_103;
  }
  if ( v31 != -1 && v32 < v31 )
    v32 = v31;
  if ( v32 )
    goto LABEL_103;
LABEL_49:
  v37 = v100;
  v38 = sub_1144F00(v91, v26, v27, v28);
  v39 = 2 * v38;
  v40 = v38;
  sub_11420C0(v5, (2 * v38) >> 1, v41, v42);
  if ( v6 )
  {
    v44 = *(v6 - 1);
    if ( (_DWORD)v44 == *(v6 - 2) )
    {
      v71 = (unsigned int)(3 * v44 + 1) >> 1;
      v72 = 4 * v71 + 8;
      if ( 4 * (int)v44 + 8 >= (unsigned int)v72 || (unsigned int)v44 >= v71 )
      {
        v87 = (char **)__cxa_allocate_exception(0x28u);
        sub_6FFCA0(v105[0].m128i_i64, "Overflow encountered when expanding vector");
        *v87 = (char *)off_1C63128;
        sub_2333C0(v87 + 1, v105);
        sub_233E40((__int64)v105);
        __cxa_throw(v87, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v90 = (unsigned int)(3 * v44 + 1) >> 1;
      v73 = (unsigned int *)sub_186B300(v6 - 2, v72);
      v6 = v73 + 2;
      *v73 = v90;
      v45 = &v73[v73[1] + 2];
    }
    else
    {
      v45 = &v6[v44];
    }
  }
  else
  {
    v85 = (_QWORD *)sub_186B270(0x10u);
    *v85 = 2;
    v6 = (unsigned int *)(v85 + 1);
    v45 = (unsigned int *)(v85 + 1);
  }
  *v45 = v39 + 1;
  v46 = *(_QWORD *)(a1 + 352);
  ++*(v6 - 1);
  if ( !v46 || (v47 = *(unsigned int *)(v46 - 4), (_DWORD)v47 == *(_DWORD *)(v46 - 8)) )
  {
    sub_692C60((unsigned int **)(a1 + 352));
    v46 = *(_QWORD *)(a1 + 352);
    v47 = *(unsigned int *)(v46 - 4);
  }
  *(_DWORD *)(v46 + 4 * v47) = v39;
  ++*(_DWORD *)(v46 - 4);
  sub_11420C0(v91, v40, v47, v43);
  v105[0].m128i_i32[0] = v40;
  v105[0].m128i_i64[1] = v37;
  sub_704D20(a1 + 384, v105);
  *(_DWORD *)v104 = v40;
  *(_QWORD *)&v104[4] = -1;
  sub_705040(a1 + 184, (__int32 *)v104);
  v105[0].m128i_i64[0] = v37;
  if ( v37 )
    ++*(_DWORD *)(v37 + 8);
  sub_6FFDF0((_QWORD *)(a1 + 640), v105);
LABEL_57:
  v98 = v5;
  v99 = v6;
  sub_703AD0(a1, &v98);
  v48 = *(_QWORD *)(a1 + 376);
  v49 = v98;
  v50 = v99;
  if ( !v48 || *(_DWORD *)(v48 - 4) != 1 )
    goto LABEL_59;
  sub_14EA2A0(a1 + 496, v100, &v100);
  v78 = *(_QWORD *)(a1 + 16);
  if ( !*(_WORD *)(v100 + 4)
    && (v79 = *(_DWORD **)(*(_QWORD *)(v100 + 16) + 24LL)) != nullptr
    && !*v79
    && v79[1] == 8
    && *(_DWORD *)(v100 + 24) == 1 )
  {
    sub_14EA0D0(a1 + 496, *(_QWORD *)(v100 + 32), *(_QWORD *)(v78 + 864));
  }
  else
  {
    sub_14EA0D0(a1 + 496, v100, *(_QWORD *)(v78 + 856));
  }
  v97 = v100;
  if ( v100 )
    ++*(_DWORD *)(v100 + 8);
  sub_6FFDF0((_QWORD *)(a1 + 488), &v97);
  v80 = *(_QWORD *)(a1 + 376);
  if ( v80 && *(_DWORD *)(v80 - 4) == 1 )
  {
    v81 = *(_QWORD *)(a1 + 88);
    *(_BYTE *)(a1 + 144) = 0;
    if ( v81 )
      *(_DWORD *)(v81 - 4) = 0;
    v82 = *(_QWORD *)(a1 + 96);
    if ( v82 )
      *(_DWORD *)(v82 - 4) = 0;
    sub_1144D70(v91, a1 + 64);
    v53 = *(_QWORD *)(a1 + 376);
    v54 = *(_QWORD *)(a1 + 368);
    if ( v53 )
    {
      v55 = *(_DWORD *)(v53 - 4) - 1;
      if ( !v54 )
      {
LABEL_66:
        *(_DWORD *)(v53 - 4) = v55;
        goto LABEL_67;
      }
LABEL_65:
      *(_DWORD *)(v54 - 4) = *(_DWORD *)(v53 + 4LL * v55);
      goto LABEL_66;
    }
    if ( v54 )
      *(_DWORD *)(v54 - 4) = MEMORY[0x3FFFFFFFC];
  }
  else
  {
LABEL_59:
    v51 = *(_QWORD *)(a1 + 88);
    *(_BYTE *)(a1 + 144) = 0;
    if ( v51 )
      *(_DWORD *)(v51 - 4) = 0;
    v52 = *(_QWORD *)(a1 + 96);
    if ( v52 )
      *(_DWORD *)(v52 - 4) = 0;
    sub_1144D70(v91, a1 + 64);
    v53 = *(_QWORD *)(a1 + 376);
    v54 = *(_QWORD *)(a1 + 368);
    if ( v53 )
    {
      v55 = *(_DWORD *)(v53 - 4) - 2;
      if ( !v54 )
        goto LABEL_66;
      goto LABEL_65;
    }
    if ( v54 )
      *(_DWORD *)(v54 - 4) = MEMORY[0x3FFFFFFF8];
  }
LABEL_67:
  result = sub_6FFC80(v100, v101);
  if ( v50 )
  {
    v57 = v50;
    v58 = &v50[*(v50 - 1)];
    if ( v50 != v58 )
    {
      do
      {
        v59 = *v57++;
        sub_1144670(v49, v59 >> 1);
      }
      while ( v58 != v57 );
    }
    *(v50 - 1) = 0;
    return sub_186B220(v50 - 2);
  }
  return result;
}

