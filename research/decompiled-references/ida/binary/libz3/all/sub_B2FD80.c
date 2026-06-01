__int64 __fastcall sub_B2FD80(__int64 *a1)
{
  char **v1; // r12
  char **exception; // rbx
  char **v3; // r13
  char **v4; // r12
  char **v5; // r13
  char **v6; // r12
  _QWORD *v7; // rbx
  __int64 v8; // r15
  __int64 *v9; // rdx
  __int64 v10; // rax
  unsigned int v11; // ecx
  unsigned int v12; // r14d
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // r12
  __int64 v16; // r12
  __int64 *v17; // rsi
  __int64 *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r12
  __int64 *v21; // rdx
  __int64 v22; // rax
  unsigned int v23; // ecx
  unsigned int v24; // r14d
  __int64 v25; // rax
  __int64 v26; // r8
  __int64 v27; // r12
  __int64 v28; // r12
  __int64 *v29; // rsi
  __int64 *i; // rax
  __int64 v31; // rcx
  _QWORD *v32; // r15
  _QWORD *v33; // r14
  unsigned int v35; // r12d
  size_t v36; // rsi
  unsigned int *v37; // rax
  __int64 v38; // rsi
  unsigned int v39; // r14d
  size_t v40; // rsi
  unsigned int *v41; // rax
  __int64 v42; // rsi
  unsigned int v43; // eax
  __int64 v44; // rdx
  int v45; // eax
  _QWORD *v46; // rcx
  unsigned int v47; // eax
  __int64 v48; // rdx
  int v49; // eax
  _QWORD *v50; // rcx
  unsigned int v51; // edx
  size_t v52; // rsi
  unsigned int *v53; // rax
  unsigned int v54; // edx
  size_t v55; // rsi
  unsigned int *v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  unsigned int v59; // ecx
  __int64 *v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  unsigned int v63; // ecx
  __int64 *v64; // rax
  unsigned int v65; // r8d
  size_t v66; // rsi
  unsigned int *v67; // rax
  __int64 v68; // rax
  int v69; // ecx
  unsigned int v70; // r9d
  size_t v71; // rsi
  unsigned int *v72; // rax
  unsigned int v73; // r8d
  size_t v74; // rsi
  unsigned int *v75; // rax
  __int64 v76; // rax
  int v77; // ecx
  unsigned int v78; // r9d
  size_t v79; // rsi
  unsigned int *v80; // rax
  _QWORD *v81; // rax
  _QWORD *v82; // rax
  __int64 v83; // rax
  __int64 v84; // rax
  __int64 v85; // [rsp+0h] [rbp-78h]
  __int64 v86; // [rsp+0h] [rbp-78h]
  unsigned int v87; // [rsp+0h] [rbp-78h]
  unsigned int v88; // [rsp+0h] [rbp-78h]
  unsigned int v89; // [rsp+0h] [rbp-78h]
  unsigned int v90; // [rsp+0h] [rbp-78h]
  __int64 v91; // [rsp+0h] [rbp-78h]
  __int64 v92; // [rsp+0h] [rbp-78h]
  unsigned int v93; // [rsp+8h] [rbp-70h]
  unsigned int v94; // [rsp+8h] [rbp-70h]
  __int64 v95; // [rsp+8h] [rbp-70h]
  __int64 v96; // [rsp+8h] [rbp-70h]
  __int64 v97[11]; // [rsp+20h] [rbp-58h] BYREF

  v7 = (_QWORD *)a1[12];
  v8 = *a1;
  if ( v7 )
  {
    v9 = *(__int64 **)(v8 + 64);
    *((_BYTE *)v7 + 3) |= 0x40u;
    if ( v9 )
    {
      v10 = *((unsigned int *)v9 - 1);
      if ( (_DWORD)v10 == *((_DWORD *)v9 - 2) )
      {
        v35 = (unsigned int)(3 * v10 + 1) >> 1;
        v36 = 8 * v35 + 8;
        if ( 8 * (int)v10 + 8 >= (unsigned int)v36 || (unsigned int)v10 >= v35 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v97, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v97);
          sub_233E40((__int64)v97);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v37 = (unsigned int *)sub_186B300(v9 - 1, v36);
        v38 = v37[1];
        v9 = (__int64 *)(v37 + 2);
        *(_QWORD *)(v8 + 64) = v37 + 2;
        v11 = v38 + 1;
        *v37 = v35;
        *(_QWORD *)&v37[2 * v38 + 2] = v7;
        v37[1] = v38 + 1;
      }
      else
      {
        v11 = v10 + 1;
        v9[v10] = (__int64)v7;
        *((_DWORD *)v9 - 1) = v10 + 1;
      }
    }
    else
    {
      v83 = sub_186B270(0x18u);
      v11 = 1;
      v9 = (__int64 *)(v83 + 8);
      *(_QWORD *)v83 = 2;
      *(_QWORD *)(v8 + 64) = v83 + 8;
      *(_QWORD *)(v83 + 8) = v7;
      *(_DWORD *)(v83 + 4) = 1;
    }
    v12 = 0;
    v7 = nullptr;
    while ( v12 < v11 )
    {
      v13 = v12++;
      v14 = v9[v13];
      if ( *(char *)(v14 + 3) < 0 )
      {
        if ( v7 )
        {
          v47 = *((_DWORD *)v7 - 1);
          if ( v47 == *((_DWORD *)v7 - 2) )
          {
            v54 = (3 * v47 + 1) >> 1;
            v55 = 8 * v54 + 8;
            if ( 8 * v47 + 8 >= (unsigned int)v55 || v47 >= v54 )
            {
              v3 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v97, "Overflow encountered when expanding vector");
              *v3 = (char *)off_1C63128;
              sub_2333C0(v3 + 1, v97);
              sub_233E40((__int64)v97);
              __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v94 = (3 * v47 + 1) >> 1;
            v86 = v14;
            v56 = (unsigned int *)sub_186B300(v7 - 1, v55);
            v7 = v56 + 2;
            v14 = v86;
            *v56 = v94;
            LODWORD(v56) = v56[1];
            v50 = &v7[(unsigned int)v56];
            v49 = (_DWORD)v56 + 1;
          }
          else
          {
            v48 = v47;
            v49 = v47 + 1;
            v50 = &v7[v48];
          }
        }
        else
        {
          v91 = v9[v13];
          v81 = (_QWORD *)sub_186B270(0x18u);
          v14 = v91;
          v7 = v81 + 1;
          *v81 = 2;
          v49 = 1;
          v50 = v7;
        }
        *v50 = *(_QWORD *)(v14 + 8);
        v9 = *(__int64 **)(v8 + 64);
        *((_DWORD *)v7 - 1) = v49;
        if ( !v9 )
          goto LABEL_14;
      }
      else
      {
        v15 = *(_QWORD *)(v14 + 8);
        if ( (*(_BYTE *)(v15 + 3) & 0x40) != 0 )
        {
          v16 = *(_QWORD *)(v14 + 16);
          if ( (*(_BYTE *)(v16 + 3) & 0x40) != 0 )
            goto LABEL_9;
LABEL_62:
          if ( v11 == *((_DWORD *)v9 - 2) )
          {
            v65 = (3 * v11 + 1) >> 1;
            v66 = 8 * v65 + 8;
            if ( 8 * v11 + 8 >= (unsigned int)v66 )
              goto LABEL_82;
            v87 = (3 * v11 + 1) >> 1;
            if ( v11 >= v65 )
              goto LABEL_82;
            v67 = (unsigned int *)sub_186B300(v9 - 1, v66);
            v9 = (__int64 *)(v67 + 2);
            *(_QWORD *)(v8 + 64) = v67 + 2;
            *v67 = v87;
            v68 = v67[1];
            v69 = v68;
            v64 = &v9[v68];
            v63 = v69 + 1;
          }
          else
          {
            v62 = v11;
            v63 = v11 + 1;
            v64 = &v9[v62];
          }
          *v64 = v16;
          *((_DWORD *)v9 - 1) = v63;
          *(_BYTE *)(v16 + 3) |= 0x40u;
          goto LABEL_9;
        }
        if ( v11 == *((_DWORD *)v9 - 2) )
        {
          v95 = v9[v13];
          v70 = (3 * v11 + 1) >> 1;
          v71 = 8 * v70 + 8;
          if ( 8 * v11 + 8 >= (unsigned int)v71 || (v88 = (3 * v11 + 1) >> 1, v11 >= v70) )
          {
LABEL_82:
            v1 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v97, "Overflow encountered when expanding vector");
            *v1 = (char *)off_1C63128;
            sub_2333C0(v1 + 1, v97);
            sub_233E40((__int64)v97);
            __cxa_throw(v1, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v72 = (unsigned int *)sub_186B300(v9 - 1, v71);
          v9 = (__int64 *)(v72 + 2);
          v11 = v72[1];
          *(_QWORD *)(v8 + 64) = v72 + 2;
          v14 = v95;
          *v72 = v88;
        }
        v61 = v11++;
        v9[v61] = v15;
        *((_DWORD *)v9 - 1) = v11;
        *(_BYTE *)(v15 + 3) |= 0x40u;
        v16 = *(_QWORD *)(v14 + 16);
        if ( (*(_BYTE *)(v16 + 3) & 0x40) == 0 )
          goto LABEL_62;
      }
LABEL_9:
      v11 = *((_DWORD *)v9 - 1);
    }
    v17 = &v9[*((unsigned int *)v9 - 1)];
    if ( v9 != v17 )
    {
      v18 = v9;
      do
      {
        v19 = *v18++;
        *(_BYTE *)(v19 + 3) &= ~0x40u;
      }
      while ( v18 != v17 );
    }
    *((_DWORD *)v9 - 1) = 0;
LABEL_14:
    v8 = *a1;
  }
  v20 = a1[13];
  if ( v20 )
  {
    v21 = *(__int64 **)(v8 + 64);
    *(_BYTE *)(v20 + 3) |= 0x40u;
    if ( v21 )
    {
      v22 = *((unsigned int *)v21 - 1);
      if ( (_DWORD)v22 == *((_DWORD *)v21 - 2) )
      {
        v39 = (unsigned int)(3 * v22 + 1) >> 1;
        v40 = 8 * v39 + 8;
        if ( 8 * (int)v22 + 8 >= (unsigned int)v40 || (unsigned int)v22 >= v39 )
        {
          v4 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v97, "Overflow encountered when expanding vector");
          *v4 = (char *)off_1C63128;
          sub_2333C0(v4 + 1, v97);
          sub_233E40((__int64)v97);
          __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v41 = (unsigned int *)sub_186B300(v21 - 1, v40);
        v42 = v41[1];
        v21 = (__int64 *)(v41 + 2);
        *(_QWORD *)(v8 + 64) = v41 + 2;
        v23 = v42 + 1;
        *v41 = v39;
        *(_QWORD *)&v41[2 * v42 + 2] = v20;
        v41[1] = v42 + 1;
      }
      else
      {
        v23 = v22 + 1;
        v21[v22] = v20;
        *((_DWORD *)v21 - 1) = v22 + 1;
      }
    }
    else
    {
      v84 = sub_186B270(0x18u);
      v21 = (__int64 *)(v84 + 8);
      *(_QWORD *)v84 = 2;
      v23 = 1;
      *(_QWORD *)(v8 + 64) = v84 + 8;
      *(_QWORD *)(v84 + 8) = v20;
      *(_DWORD *)(v84 + 4) = 1;
    }
    v24 = 0;
    while ( v24 < v23 )
    {
      v25 = v24++;
      v26 = v21[v25];
      if ( *(char *)(v26 + 3) < 0 )
      {
        if ( v7 )
        {
          v43 = *((_DWORD *)v7 - 1);
          if ( v43 == *((_DWORD *)v7 - 2) )
          {
            v51 = (3 * v43 + 1) >> 1;
            v52 = 8 * v51 + 8;
            if ( 8 * v43 + 8 >= (unsigned int)v52 || v43 >= v51 )
            {
              v5 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v97, "Overflow encountered when expanding vector");
              *v5 = (char *)off_1C63128;
              sub_2333C0(v5 + 1, v97);
              sub_233E40((__int64)v97);
              __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v93 = (3 * v43 + 1) >> 1;
            v85 = v26;
            v53 = (unsigned int *)sub_186B300(v7 - 1, v52);
            v7 = v53 + 2;
            v26 = v85;
            *v53 = v93;
            LODWORD(v53) = v53[1];
            v46 = &v7[(unsigned int)v53];
            v45 = (_DWORD)v53 + 1;
          }
          else
          {
            v44 = v43;
            v45 = v43 + 1;
            v46 = &v7[v44];
          }
        }
        else
        {
          v92 = v21[v25];
          v82 = (_QWORD *)sub_186B270(0x18u);
          v26 = v92;
          v7 = v82 + 1;
          *v82 = 2;
          v45 = 1;
          v46 = v7;
        }
        *v46 = *(_QWORD *)(v26 + 8);
        v21 = *(__int64 **)(v8 + 64);
        *((_DWORD *)v7 - 1) = v45;
        if ( !v21 )
          goto LABEL_27;
      }
      else
      {
        v27 = *(_QWORD *)(v26 + 8);
        if ( (*(_BYTE *)(v27 + 3) & 0x40) != 0 )
        {
          v28 = *(_QWORD *)(v26 + 16);
          if ( (*(_BYTE *)(v28 + 3) & 0x40) != 0 )
            goto LABEL_23;
LABEL_57:
          if ( *((_DWORD *)v21 - 2) == v23 )
          {
            v73 = (3 * v23 + 1) >> 1;
            v74 = 8 * v73 + 8;
            if ( 8 * v23 + 8 >= (unsigned int)v74 )
              goto LABEL_87;
            v89 = (3 * v23 + 1) >> 1;
            if ( v23 >= v73 )
              goto LABEL_87;
            v75 = (unsigned int *)sub_186B300(v21 - 1, v74);
            v21 = (__int64 *)(v75 + 2);
            *(_QWORD *)(v8 + 64) = v75 + 2;
            *v75 = v89;
            v76 = v75[1];
            v77 = v76;
            v60 = &v21[v76];
            v59 = v77 + 1;
          }
          else
          {
            v58 = v23;
            v59 = v23 + 1;
            v60 = &v21[v58];
          }
          *v60 = v28;
          *((_DWORD *)v21 - 1) = v59;
          *(_BYTE *)(v28 + 3) |= 0x40u;
          goto LABEL_23;
        }
        if ( *((_DWORD *)v21 - 2) == v23 )
        {
          v96 = v21[v25];
          v78 = (3 * v23 + 1) >> 1;
          v79 = 8 * v78 + 8;
          if ( 8 * v23 + 8 >= (unsigned int)v79 || (v90 = (3 * v23 + 1) >> 1, v23 >= v78) )
          {
LABEL_87:
            v6 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v97, "Overflow encountered when expanding vector");
            *v6 = (char *)off_1C63128;
            sub_2333C0(v6 + 1, v97);
            sub_233E40((__int64)v97);
            __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v80 = (unsigned int *)sub_186B300(v21 - 1, v79);
          v21 = (__int64 *)(v80 + 2);
          v23 = v80[1];
          *(_QWORD *)(v8 + 64) = v80 + 2;
          v26 = v96;
          *v80 = v90;
        }
        v57 = v23++;
        v21[v57] = v27;
        *((_DWORD *)v21 - 1) = v23;
        *(_BYTE *)(v27 + 3) |= 0x40u;
        v28 = *(_QWORD *)(v26 + 16);
        if ( (*(_BYTE *)(v28 + 3) & 0x40) == 0 )
          goto LABEL_57;
      }
LABEL_23:
      v23 = *((_DWORD *)v21 - 1);
    }
    v29 = &v21[*((unsigned int *)v21 - 1)];
    for ( i = v21; i != v29; *(_BYTE *)(v31 + 3) &= ~0x40u )
      v31 = *i++;
    *((_DWORD *)v21 - 1) = 0;
  }
LABEL_27:
  std::__ostream_insert<char,std::char_traits<char>>();
  sub_B2FD00((__int64)a1);
  std::__ostream_insert<char,std::char_traits<char>>();
  if ( !v7 )
    return std::__ostream_insert<char,std::char_traits<char>>();
  v32 = v7;
  v33 = &v7[*((unsigned int *)v7 - 1)];
  if ( v33 != v7 )
  {
    while ( 1 )
    {
      std::ostream::_M_insert<void const*>();
      if ( v33 == ++v32 )
        break;
      std::__ostream_insert<char,std::char_traits<char>>();
    }
  }
  std::__ostream_insert<char,std::char_traits<char>>();
  return sub_186B220(v7 - 1);
}

