__int64 __fastcall sub_BAA8A0(__int64 a1, __m128 a2, __m128 a3, __m128 a4)
{
  char **v4; // rbp
  char **v5; // rbp
  char **v6; // rbp
  char **v7; // rbp
  char **exception; // rbp
  _DWORD *v10; // rdi
  __int64 v11; // rax
  unsigned int v12; // ebx
  unsigned int v13; // ebp
  size_t v14; // rsi
  unsigned int *v15; // rax
  unsigned int v16; // eax
  __int64 v17; // rdx
  int v18; // edx
  unsigned int v19; // ebp
  _QWORD *v20; // r12
  __int64 v21; // rbx
  _QWORD *v22; // rcx
  __int64 v23; // r13
  unsigned int v24; // r15d
  unsigned int v25; // esi
  int v26; // eax
  unsigned int v27; // edx
  __int64 v28; // r15
  unsigned int v29; // edx
  size_t v30; // rsi
  unsigned int *v31; // rax
  unsigned int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rax
  unsigned int v35; // eax
  __int64 v36; // rdx
  unsigned int v37; // eax
  unsigned int v38; // r15d
  int v39; // edx
  unsigned int v40; // ebx
  __int64 v41; // rbp
  unsigned int v42; // esi
  __int64 v43; // r13
  __int64 v44; // r15
  _QWORD *v45; // r15
  unsigned int v46; // r13d
  unsigned int v47; // r15d
  unsigned int v48; // ebx
  unsigned int v50; // edx
  size_t v51; // rsi
  unsigned int *v52; // rax
  unsigned int v53; // eax
  __int64 v54; // rdx
  __int64 v55; // rax
  unsigned int v56; // edx
  size_t v57; // rsi
  unsigned int *v58; // rax
  unsigned int v59; // eax
  __int64 v60; // rdx
  __int64 v61; // rax
  _QWORD *v62; // rax
  unsigned int v63; // eax
  unsigned int v64; // edx
  size_t v65; // rsi
  unsigned int *v66; // rax
  __int64 v67; // rdx
  __int64 v68; // rax
  int v69; // eax
  unsigned int v70; // ecx
  _QWORD *v71; // rax
  _QWORD *v72; // rax
  __int64 v73; // rdx
  _QWORD *v74; // rax
  int v75; // edx
  _QWORD *v76; // rax
  __int64 v77; // rax
  unsigned int v78; // [rsp+Ch] [rbp-8Ch]
  unsigned int v79; // [rsp+Ch] [rbp-8Ch]
  unsigned int v80; // [rsp+Ch] [rbp-8Ch]
  __int64 v81; // [rsp+10h] [rbp-88h]
  unsigned int v82; // [rsp+10h] [rbp-88h]
  _QWORD *v83; // [rsp+10h] [rbp-88h]
  __int64 v84; // [rsp+10h] [rbp-88h]
  __int64 v85; // [rsp+10h] [rbp-88h]
  unsigned int v86; // [rsp+10h] [rbp-88h]
  unsigned int v87; // [rsp+10h] [rbp-88h]
  unsigned int v88; // [rsp+10h] [rbp-88h]
  unsigned int v89; // [rsp+18h] [rbp-80h]
  unsigned int v90; // [rsp+18h] [rbp-80h]
  unsigned int v91; // [rsp+28h] [rbp-70h]
  unsigned int v92; // [rsp+28h] [rbp-70h]
  unsigned int v93; // [rsp+2Ch] [rbp-6Ch]
  unsigned int v94; // [rsp+38h] [rbp-60h] BYREF
  unsigned int v95; // [rsp+3Ch] [rbp-5Ch] BYREF
  __int64 v96[11]; // [rsp+40h] [rbp-58h] BYREF

  v10 = *(_DWORD **)(a1 + 208);
  v11 = *(_QWORD *)(a1 + 32);
  if ( v10 )
  {
    *(v10 - 1) = 0;
    if ( v11 )
    {
      v12 = *(_DWORD *)(v11 - 4);
      if ( !v12 )
        goto LABEL_105;
      goto LABEL_8;
    }
LABEL_116:
    v77 = *(_QWORD *)(a1 + 216);
    if ( v77 )
      *(_DWORD *)(v77 - 4) = 0;
    return 1;
  }
  if ( !v11 )
    goto LABEL_116;
  v12 = *(_DWORD *)(v11 - 4);
  if ( !v12 )
  {
LABEL_105:
    v73 = *(_QWORD *)(a1 + 216);
    if ( v73 )
      *(_DWORD *)(v73 - 4) = 0;
    v94 = 0;
    v95 = 0;
    goto LABEL_12;
  }
  v72 = (_QWORD *)sub_186B270(0x10u);
  v10 = v72 + 1;
  *v72 = 2;
  *(_QWORD *)(a1 + 208) = v72 + 1;
LABEL_8:
  while ( 1 )
  {
    v16 = *(v10 - 2);
    if ( v16 >= v12 )
      break;
    v13 = (3 * v16 + 1) >> 1;
    v14 = 4 * v13 + 8;
    if ( 4 * v16 + 8 >= (unsigned int)v14 || v16 >= v13 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v96, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v96);
      sub_233E40((__int64)v96);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v15 = (unsigned int *)sub_186B300(v10 - 2, v14);
    v10 = v15 + 2;
    *v15 = v13;
    *(_QWORD *)(a1 + 208) = v15 + 2;
  }
  *(v10 - 1) = v12;
  memset(v10, 255, 4LL * v12);
  v17 = *(_QWORD *)(a1 + 216);
  v11 = *(_QWORD *)(a1 + 32);
  if ( v17 )
    *(_DWORD *)(v17 - 4) = 0;
  v94 = 0;
  v95 = 0;
  if ( !v11 )
    return 1;
LABEL_12:
  v18 = *(_DWORD *)(v11 - 4);
  v19 = v18 - 1;
  if ( !v18 )
  {
    v94 = 65;
    v75 = *(_DWORD *)(v11 - 4);
    v40 = v75 - 1;
    if ( v75 )
    {
      v20 = nullptr;
      goto LABEL_52;
    }
    return 1;
  }
  v20 = nullptr;
  v21 = 4LL * v19;
  do
  {
    while ( *(_QWORD *)(*(_QWORD *)(a1 + 64) + 64LL) != sub_15D1F10(**(_QWORD **)(v11 + 2 * v21))
         || *(_DWORD *)(*(_QWORD *)(a1 + 208) + v21) != -1
         || !(unsigned __int8)sub_BA9A50((_QWORD *)a1, v19, &v94, a2, a3, a4) )
    {
      --v19;
      v11 = *(_QWORD *)(a1 + 32);
      v21 -= 4;
      if ( v19 == -1 )
        goto LABEL_50;
    }
    v22 = *(_QWORD **)(a1 + 216);
    v23 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 2 * v21) + 8LL);
    v78 = v94;
    v24 = v94 + 1;
    if ( v22 )
    {
      v91 = *((_DWORD *)v22 - 1);
      if ( v91 >= v24 )
        goto LABEL_20;
    }
    else
    {
      if ( v94 == -1 )
        goto LABEL_20;
      v74 = (_QWORD *)sub_186B270(0x10u);
      v22 = v74 + 1;
      *v74 = 2;
      *(_QWORD *)(a1 + 216) = v74 + 1;
      v91 = 0;
    }
    while ( 1 )
    {
      v32 = *((_DWORD *)v22 - 2);
      if ( v32 >= v24 )
        break;
      v29 = (3 * v32 + 1) >> 1;
      v30 = 4 * v29 + 8;
      if ( 4 * v32 + 8 >= (unsigned int)v30 || v32 >= v29 )
      {
        v5 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v96, "Overflow encountered when expanding vector");
        *v5 = (char *)off_1C63128;
        sub_2333C0(v5 + 1, v96);
        sub_233E40((__int64)v96);
        __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v82 = (3 * v32 + 1) >> 1;
      v31 = (unsigned int *)sub_186B300(v22 - 1, v30);
      v22 = v31 + 2;
      *(_QWORD *)(a1 + 216) = v31 + 2;
      *v31 = v82;
    }
    *((_DWORD *)v22 - 1) = v24;
    v33 = 4LL * v24;
    v34 = 4LL * v91;
    if ( v34 != v33 )
    {
      v83 = v22;
      memset((char *)v22 + v34, 255, v33 - v34);
      v22 = v83;
    }
LABEL_20:
    v25 = *((_DWORD *)v22 + v78);
    if ( v25 != -1 && v23 != *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL * v25) + 8LL) )
    {
LABEL_111:
      sub_BAA570(a1, v25, v19, a2, a3, a4);
      v48 = 0;
      goto LABEL_70;
    }
    v26 = sub_18002C0();
    v27 = 255;
    if ( v26 )
    {
      v27 = 0xFFFF;
      if ( v26 != 2 )
        v27 = 196607;
    }
    if ( v27 < v78 )
    {
      sub_BAA400(a1, v19, a2, a3, a4);
      v48 = 0;
LABEL_70:
      if ( v20 )
        goto LABEL_71;
      return v48;
    }
    if ( v23 )
    {
      v25 = sub_B39350(v23, *(_DWORD *)(a1 + 8));
      if ( v25 != -1 )
      {
        v81 = 0;
        v28 = v23;
        goto LABEL_29;
      }
      v28 = v23;
      while ( v23 != v28 || v23 != *(_QWORD *)(v28 + 16) )
      {
        v84 = *(_QWORD *)(v28 + 16);
        v35 = sub_B39350(v84, *(_DWORD *)(a1 + 8));
        v36 = v84;
        v81 = v28;
        v25 = v35;
        v28 = v36;
        if ( v35 == -1 )
          goto LABEL_32;
LABEL_29:
        if ( (unsigned __int8)sub_BA9A50((_QWORD *)a1, v25, &v95, a2, a3, a4) && v78 != v95 )
          goto LABEL_111;
        *(_DWORD *)(*(_QWORD *)(a1 + 208) + 4LL * v25) = v78;
        if ( v81 )
        {
LABEL_32:
          while ( 1 )
          {
            v28 = *(_QWORD *)(v28 + 16);
            if ( v23 == v28 && v23 == v81 )
              goto LABEL_47;
            v25 = sub_B39350(v28, *(_DWORD *)(a1 + 8));
            if ( v25 != -1 )
              goto LABEL_29;
          }
        }
      }
    }
LABEL_47:
    v37 = v78 >> 5;
    if ( v20 )
    {
      v38 = v37 + 1;
      v93 = *((_DWORD *)v20 - 1);
      if ( v37 < v93 )
        goto LABEL_49;
    }
    else
    {
      v38 = v37 + 1;
      v71 = (_QWORD *)sub_186B270(0x10u);
      v93 = 0;
      *v71 = 2;
      v20 = v71 + 1;
    }
    while ( 1 )
    {
      v53 = *((_DWORD *)v20 - 2);
      if ( v53 >= v38 )
        break;
      v50 = (3 * v53 + 1) >> 1;
      v51 = 4 * v50 + 8;
      if ( 4 * v53 + 8 >= (unsigned int)v51 || v53 >= v50 )
      {
        v7 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v96, "Overflow encountered when expanding vector");
        *v7 = (char *)off_1C63128;
        sub_2333C0(v7 + 1, v96);
        sub_233E40((__int64)v96);
        __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v86 = (3 * v53 + 1) >> 1;
      v52 = (unsigned int *)sub_186B300(v20 - 1, v51);
      v20 = v52 + 2;
      *v52 = v86;
    }
    *((_DWORD *)v20 - 1) = v38;
    v54 = 4LL * v38;
    v55 = 4LL * v93;
    if ( v55 != v54 )
      memset((char *)v20 + v55, 0, v54 - v55);
LABEL_49:
    v21 -= 4;
    *((_DWORD *)v20 + (v78 >> 5)) |= 1 << v78;
    *(_DWORD *)(*(_QWORD *)(a1 + 216) + 4LL * v78) = v19--;
    v11 = *(_QWORD *)(a1 + 32);
  }
  while ( v19 != -1 );
LABEL_50:
  v94 = 65;
  if ( !v11 || (v39 = *(_DWORD *)(v11 - 4), v40 = v39 - 1, !v39) )
  {
LABEL_69:
    v48 = 1;
    goto LABEL_70;
  }
LABEL_52:
  v41 = 4LL * v40;
  while ( 2 )
  {
    if ( *(_QWORD *)(*(_QWORD *)(a1 + 64) + 64LL) != sub_15D1F10(**(_QWORD **)(v11 + 2 * v41))
      || *(_DWORD *)(*(_QWORD *)(a1 + 208) + v41) != -1 )
    {
      --v40;
      v41 -= 4;
      if ( v40 == -1 )
        goto LABEL_69;
LABEL_54:
      v11 = *(_QWORD *)(a1 + 32);
      continue;
    }
    break;
  }
  v42 = v94;
  v95 = v94;
  if ( !v20 )
  {
    v79 = v94;
    v92 = v94 >> 5;
LABEL_60:
    v43 = 0;
    v85 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 2 * v41);
    v44 = v85;
    if ( v85 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          *(_DWORD *)(*(_QWORD *)(a1 + 208) + 4LL * (unsigned int)sub_B39350(v44, *(_DWORD *)(a1 + 8))) = v79;
          if ( !v43 )
            break;
          v44 = *(_QWORD *)(v44 + 16);
          if ( v85 == v43 && v85 == v44 )
            goto LABEL_64;
        }
        if ( v85 == v44 && v85 == *(_QWORD *)(v44 + 16) )
          break;
        v43 = v44;
        v44 = *(_QWORD *)(v44 + 16);
      }
    }
LABEL_64:
    v45 = *(_QWORD **)(a1 + 216);
    v46 = v79 + 1;
    if ( v45 )
    {
      v89 = *((_DWORD *)v45 - 1);
      if ( v89 >= v46 )
        goto LABEL_66;
    }
    else
    {
      if ( v79 == -1 )
        goto LABEL_66;
      v76 = (_QWORD *)sub_186B270(0x10u);
      v45 = v76 + 1;
      *v76 = 2;
      *(_QWORD *)(a1 + 216) = v76 + 1;
      v89 = 0;
    }
    while ( 1 )
    {
      v59 = *((_DWORD *)v45 - 2);
      if ( v59 >= v46 )
        break;
      v56 = (3 * v59 + 1) >> 1;
      v57 = 4 * v56 + 8;
      if ( 4 * v59 + 8 >= (unsigned int)v57 || v59 >= v56 )
      {
        v4 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v96, "Overflow encountered when expanding vector");
        *v4 = (char *)off_1C63128;
        sub_2333C0(v4 + 1, v96);
        sub_233E40((__int64)v96);
        __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v87 = (3 * v59 + 1) >> 1;
      v58 = (unsigned int *)sub_186B300(v45 - 1, v57);
      v45 = v58 + 2;
      *(_QWORD *)(a1 + 216) = v58 + 2;
      *v58 = v87;
    }
    *((_DWORD *)v45 - 1) = v46;
    v60 = 4LL * v46;
    v61 = 4LL * v89;
    if ( v61 != v60 )
    {
      memset((char *)v45 + v61, 255, v60 - v61);
      *((_DWORD *)v45 + v79) = v40;
      if ( v20 )
        goto LABEL_67;
      goto LABEL_85;
    }
LABEL_66:
    *((_DWORD *)v45 + v79) = v40;
    if ( v20 )
    {
LABEL_67:
      v90 = *((_DWORD *)v20 - 1);
      v47 = v92 + 1;
      if ( v92 < v90 )
        goto LABEL_68;
      while ( 1 )
      {
        v63 = *((_DWORD *)v20 - 2);
        if ( v63 >= v47 )
          break;
LABEL_86:
        v64 = (3 * v63 + 1) >> 1;
        v65 = 4 * v64 + 8;
        if ( 4 * v63 + 8 >= (unsigned int)v65 || v63 >= v64 )
        {
          v6 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v96, "Overflow encountered when expanding vector");
          *v6 = (char *)off_1C63128;
          sub_2333C0(v6 + 1, v96);
          sub_233E40((__int64)v96);
          __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v88 = (3 * v63 + 1) >> 1;
        v66 = (unsigned int *)sub_186B300(v20 - 1, v65);
        v20 = v66 + 2;
        *v66 = v88;
      }
LABEL_90:
      *((_DWORD *)v20 - 1) = v47;
      v67 = 4LL * v47;
      v68 = 4LL * v90;
      if ( v68 != v67 )
        memset((char *)v20 + v68, 0, v67 - v68);
LABEL_68:
      --v40;
      v41 -= 4;
      *((_DWORD *)v20 + v92) |= 1 << v79;
      if ( v40 == -1 )
        goto LABEL_69;
      goto LABEL_54;
    }
LABEL_85:
    v47 = v92 + 1;
    v62 = (_QWORD *)sub_186B270(0x10u);
    v90 = 0;
    v20 = v62 + 1;
    *v62 = 2;
    v63 = *(_DWORD *)v62;
    if ( v63 < v92 + 1 )
      goto LABEL_86;
    goto LABEL_90;
  }
  v79 = v94;
  do
  {
    v92 = v79 >> 5;
    if ( v79 >> 5 >= *((_DWORD *)v20 - 1) || (*((_DWORD *)v20 + (v79 >> 5)) & (1 << v79)) == 0 )
      goto LABEL_60;
    v80 = v79 + 1;
    v69 = sub_18002C0();
    v70 = 255;
    if ( v69 )
    {
      v70 = 0xFFFF;
      if ( v69 != 2 )
        v70 = 196607;
    }
    v79 = v80 % v70;
    v94 = v79;
  }
  while ( v42 != v79 );
  sub_BAA340((_QWORD *)a1, a2, a3, a4);
  v48 = 0;
LABEL_71:
  sub_186B220(v20 - 1);
  return v48;
}

