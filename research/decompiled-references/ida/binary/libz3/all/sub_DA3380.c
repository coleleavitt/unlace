__int64 __fastcall sub_DA3380(__int64 *a1, __int64 a2, __int64 a3)
{
  char **exception; // r12
  char **v4; // r12
  char **v5; // r12
  __int64 v7; // r12
  __int64 v8; // r15
  unsigned int *v9; // r14
  _QWORD *v10; // rax
  _QWORD *v11; // r13
  _QWORD *v12; // rbp
  __int64 i; // rdx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // r8
  unsigned int v20; // eax
  __int64 v21; // rdx
  int v22; // eax
  _QWORD *v23; // rdx
  _QWORD *v24; // r8
  _BYTE *v25; // r8
  __int64 v26; // rax
  unsigned int *v27; // rax
  _BYTE *v28; // r8
  int v29; // r12d
  __int64 v30; // rdx
  __int64 *v31; // rax
  __int64 *v32; // rcx
  __int64 v33; // rdx
  unsigned int v35; // r9d
  __int64 v36; // r8
  unsigned int v37; // eax
  __int64 v38; // rdx
  int v39; // eax
  _QWORD *v40; // rdx
  unsigned __int64 *v41; // rdx
  unsigned int v42; // edx
  size_t v43; // rsi
  unsigned int *v44; // rax
  unsigned int v45; // edx
  size_t v46; // rsi
  unsigned int *v47; // rax
  unsigned int v48; // r9d
  unsigned int v49; // eax
  unsigned int *v50; // rax
  unsigned int v51; // ecx
  unsigned int v52; // eax
  __int64 v53; // rdx
  _QWORD *v54; // rbp
  _QWORD *v55; // rbp
  __int64 v56; // [rsp+8h] [rbp-80h]
  _QWORD *v57; // [rsp+8h] [rbp-80h]
  _BYTE *v58; // [rsp+8h] [rbp-80h]
  __int64 v59; // [rsp+8h] [rbp-80h]
  __int64 v60; // [rsp+8h] [rbp-80h]
  unsigned int v61; // [rsp+8h] [rbp-80h]
  unsigned int v62; // [rsp+8h] [rbp-80h]
  __int64 v63; // [rsp+8h] [rbp-80h]
  __int64 v64; // [rsp+8h] [rbp-80h]
  _QWORD *v65; // [rsp+10h] [rbp-78h]
  unsigned int v66; // [rsp+10h] [rbp-78h]
  unsigned int v67; // [rsp+10h] [rbp-78h]
  __int64 v68; // [rsp+10h] [rbp-78h]
  unsigned __int64 v69; // [rsp+10h] [rbp-78h]
  unsigned __int64 v70; // [rsp+18h] [rbp-70h]
  __int64 v71[11]; // [rsp+30h] [rbp-58h] BYREF

  v7 = *(_QWORD *)(a3 + 8);
  v8 = *a1;
  v9 = (unsigned int *)(v7 & 0xFFFFFFFFFFFFFFFELL);
  v10 = (_QWORD *)sub_186B270(0x18u);
  v10[1] = v7 & 0xFFFFFFFFFFFFFFFELL;
  v11 = v10 + 1;
  v12 = nullptr;
  *v10 = 0x100000002LL;
  for ( i = 1; ; i = (unsigned int)v14 )
  {
    v14 = (unsigned int)(i - 1);
    v15 = v11[v14];
    if ( (*(_BYTE *)(v15 + 24) & 1) != 0 )
      goto LABEL_18;
    v16 = *(_QWORD *)(v15 + 8);
    if ( !v16 )
    {
      if ( v12 )
      {
        v37 = *((_DWORD *)v12 - 1);
        if ( v37 == *((_DWORD *)v12 - 2) )
        {
          v42 = (3 * v37 + 1) >> 1;
          v43 = 8 * v42 + 8;
          if ( 8 * v37 + 8 >= (unsigned int)v43 || v37 >= v42 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v71, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v71);
            sub_233E40((__int64)v71);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v66 = (3 * v37 + 1) >> 1;
          v59 = v15;
          v44 = (unsigned int *)sub_186B300(v12 - 1, v43);
          v12 = v44 + 2;
          v15 = v59;
          *v44 = v66;
          LODWORD(v44) = v44[1];
          v40 = &v12[(unsigned int)v44];
          v39 = (_DWORD)v44 + 1;
        }
        else
        {
          v38 = v37;
          v39 = v37 + 1;
          v40 = &v12[v38];
        }
      }
      else
      {
        v63 = v15;
        v54 = (_QWORD *)sub_186B270(0x18u);
        *v54 = 2;
        v15 = v63;
        v39 = 1;
        v12 = v54 + 1;
        v40 = v12;
      }
      *v40 = v15;
      *((_DWORD *)v12 - 1) = v39;
      *(_BYTE *)(v15 + 24) |= 1u;
      LODWORD(v14) = *((_DWORD *)v11 - 1) - 1;
      *((_DWORD *)v11 - 1) = v14;
      goto LABEL_19;
    }
    v17 = v16 & 0xFFFFFFFFFFFFFFFELL;
    v18 = v17;
    if ( (*(_BYTE *)(v17 + 24) & 1) != 0 )
    {
      v19 = *(_QWORD *)(v15 + 16) & 0xFFFFFFFFFFFFFFFELL;
      if ( (*(_BYTE *)(v19 + 24) & 1) != 0 )
      {
        if ( v12 )
        {
          v20 = *((_DWORD *)v12 - 1);
          if ( v20 == *((_DWORD *)v12 - 2) )
          {
            v45 = (3 * v20 + 1) >> 1;
            v46 = 8 * v45 + 8;
            if ( 8 * v20 + 8 >= (unsigned int)v46 || v20 >= v45 )
            {
              v4 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v71, "Overflow encountered when expanding vector");
              *v4 = (char *)off_1C63128;
              sub_2333C0(v4 + 1, v71);
              sub_233E40((__int64)v71);
              __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v67 = (3 * v20 + 1) >> 1;
            v60 = v15;
            v47 = (unsigned int *)sub_186B300(v12 - 1, v46);
            v12 = v47 + 2;
            v15 = v60;
            *v47 = v67;
            LODWORD(v47) = v47[1];
            v23 = &v12[(unsigned int)v47];
            v22 = (_DWORD)v47 + 1;
          }
          else
          {
            v21 = v20;
            v22 = v20 + 1;
            v23 = &v12[v21];
          }
        }
        else
        {
          v64 = v15;
          v55 = (_QWORD *)sub_186B270(0x18u);
          *v55 = 2;
          v15 = v64;
          v22 = 1;
          v12 = v55 + 1;
          v23 = v12;
        }
        *v23 = v15;
        *((_DWORD *)v12 - 1) = v22;
        *(_BYTE *)(v15 + 24) |= 1u;
        v56 = v15;
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::_M_insert<unsigned long>();
        std::__ostream_insert<char,std::char_traits<char>>();
        v24 = (_QWORD *)(v56 + 8);
        v65 = (_QWORD *)(v56 + 24);
        do
        {
          v57 = v24;
          std::__ostream_insert<char,std::char_traits<char>>();
          v25 = v57;
          v26 = *v57;
          if ( (*v57 & 1) != 0 )
          {
            std::__ostream_insert<char,std::char_traits<char>>();
            v25 = v57;
            v26 = *v57;
          }
          v27 = (unsigned int *)(v26 & 0xFFFFFFFFFFFFFFFELL);
          v58 = v25;
          if ( *((_QWORD *)v27 + 1) )
          {
            std::__ostream_insert<char,std::char_traits<char>>();
            std::ostream::_M_insert<unsigned long>();
          }
          else
          {
            sub_1648CA0(a2, *(_QWORD *)(v8 + 104), *(_QWORD *)(*(_QWORD *)(v8 + 112) + 8LL * *v27), 3);
          }
          v28 = v58;
          if ( (*v58 & 1) != 0 )
          {
            std::__ostream_insert<char,std::char_traits<char>>();
            v28 = v58;
          }
          v24 = v28 + 8;
        }
        while ( v65 != v24 );
        std::__ostream_insert<char,std::char_traits<char>>();
        LODWORD(v14) = *((_DWORD *)v11 - 1) - 1;
LABEL_18:
        *((_DWORD *)v11 - 1) = v14;
        goto LABEL_19;
      }
      v35 = *((_DWORD *)v11 - 2);
      goto LABEL_39;
    }
    v35 = *((_DWORD *)v11 - 2);
    if ( (_DWORD)i == v35 )
    {
      v70 = v17;
      v48 = (3 * v35 + 1) >> 1;
      v68 = v15;
      v49 = 8 * v48 + 8;
      if ( 8 * (int)i + 8 >= v49 || (v61 = v48, (unsigned int)i >= v48) )
      {
LABEL_61:
        v5 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v71, "Overflow encountered when expanding vector");
        *v5 = (char *)off_1C63128;
        sub_2333C0(v5 + 1, v71);
        sub_233E40((__int64)v71);
        __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v50 = (unsigned int *)sub_186B300(v11 - 1, v49);
      v35 = v61;
      LODWORD(i) = v50[1];
      v11 = v50 + 2;
      v15 = v68;
      v18 = v70;
      *v50 = v61;
    }
    v11[(unsigned int)i] = v18;
    v36 = *(_QWORD *)(v15 + 16);
    LODWORD(v14) = i + 1;
    *((_DWORD *)v11 - 1) = i + 1;
    v19 = v36 & 0xFFFFFFFFFFFFFFFELL;
    if ( (*(_BYTE *)(v19 + 24) & 1) == 0 )
    {
      i = (unsigned int)v14;
LABEL_39:
      if ( (_DWORD)i == v35 )
      {
        v69 = v19;
        v51 = (unsigned int)(3 * i + 1) >> 1;
        v52 = 8 * v51 + 8;
        if ( 8 * (int)i + 8 >= v52 )
          goto LABEL_61;
        v62 = (unsigned int)(3 * i + 1) >> 1;
        if ( (unsigned int)i >= v51 )
          goto LABEL_61;
        v14 = sub_186B300(v11 - 1, v52);
        v53 = *(unsigned int *)(v14 + 4);
        v11 = (_QWORD *)(v14 + 8);
        v19 = v69;
        *(_DWORD *)v14 = v62;
        LODWORD(v14) = v53 + 1;
        v41 = &v11[v53];
      }
      else
      {
        LODWORD(v14) = i + 1;
        v41 = &v11[i];
      }
      *v41 = v19;
      *((_DWORD *)v11 - 1) = v14;
    }
LABEL_19:
    if ( !(_DWORD)v14 )
      break;
  }
  std::__ostream_insert<char,std::char_traits<char>>();
  v29 = v7 & 1;
  if ( v29 )
  {
    std::__ostream_insert<char,std::char_traits<char>>();
    if ( !*((_QWORD *)v9 + 1) )
      goto LABEL_30;
LABEL_22:
    std::__ostream_insert<char,std::char_traits<char>>();
    std::ostream::_M_insert<unsigned long>();
  }
  else
  {
    if ( *((_QWORD *)v9 + 1) )
      goto LABEL_22;
LABEL_30:
    sub_1648CA0(a2, *(_QWORD *)(v8 + 104), *(_QWORD *)(*(_QWORD *)(v8 + 112) + 8LL * *v9), 3);
  }
  if ( (_BYTE)v29 )
    std::__ostream_insert<char,std::char_traits<char>>();
  std::__ostream_insert<char,std::char_traits<char>>();
  if ( !v12 )
    return sub_186B220(v11 - 1);
  v30 = *((unsigned int *)v12 - 1);
  v31 = v12;
  v32 = &v12[v30];
  if ( (_DWORD)v30 )
  {
    do
    {
      v33 = *v31++;
      *(_BYTE *)(v33 + 24) &= ~1u;
    }
    while ( v31 != v32 );
  }
  sub_186B220(v11 - 1);
  return sub_186B220(v12 - 1);
}

