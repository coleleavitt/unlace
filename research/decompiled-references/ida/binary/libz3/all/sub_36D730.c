__int64 __fastcall sub_36D730(__int64 *a1, _QWORD *a2, __int64 a3)
{
  char **v3; // rbp
  char **exception; // rbp
  char **v5; // rbp
  _QWORD *v9; // rdx
  unsigned int v10; // esi
  __int64 v11; // rax
  int v12; // esi
  _QWORD *v13; // rax
  std::ios_base *v14; // rdi
  unsigned int v15; // eax
  __int64 v16; // rdx
  unsigned int v17; // ebp
  __int64 v18; // rcx
  __int64 v19; // rsi
  __int64 v20; // rdi
  bool v21; // zf
  __int64 v23; // rax
  unsigned int **v24; // rdi
  unsigned __int64 v25; // rsi
  unsigned int **v26; // rax
  char v27; // bl
  unsigned int v28; // ecx
  unsigned int **v29; // rbx
  unsigned int **v30; // r12
  unsigned int *v31; // rsi
  __int64 v32; // rdi
  _QWORD *v33; // r12
  __int64 v34; // rdi
  unsigned int v35; // r12d
  unsigned int v36; // eax
  unsigned int *v37; // rax
  __int64 v38; // rax
  int v39; // esi
  _QWORD *v40; // r13
  __int64 v41; // rax
  _QWORD *v42; // r12
  __int64 v43; // rdx
  unsigned int **v44; // rdx
  unsigned int i; // r15d
  unsigned int *v46; // r13
  unsigned int v47; // eax
  __int64 v48; // rdi
  unsigned int v49; // ebx
  size_t v50; // rsi
  unsigned int *v51; // rax
  __int64 v52; // rcx
  unsigned int **v53; // rcx
  int v54; // eax
  _QWORD *v55; // rax
  unsigned int v56; // r15d
  size_t v57; // rdi
  __int64 *v58; // r15
  __int64 v59; // r12
  __int64 v60; // rdx
  __int64 *v61; // rax
  __int64 *v62; // rdi
  __int64 v63; // rsi
  __int64 v64; // rsi
  __int64 *v65; // rbx
  __int64 *v66; // r12
  __int64 v67; // rsi
  __int64 v68; // rdi
  _QWORD *v69; // rax
  __int64 *v70; // [rsp+8h] [rbp-90h]
  _DWORD *v71; // [rsp+10h] [rbp-88h]
  unsigned int v72; // [rsp+1Ch] [rbp-7Ch]
  __int64 v73; // [rsp+30h] [rbp-68h] BYREF
  unsigned int **v74; // [rsp+38h] [rbp-60h]
  __int64 v75[11]; // [rsp+40h] [rbp-58h] BYREF

  if ( a3 )
    ++*(_DWORD *)(a3 + 8);
  v9 = (_QWORD *)a1[5];
  if ( v9 )
  {
    v10 = *((_DWORD *)v9 - 1);
    if ( v10 == *((_DWORD *)v9 - 2) )
    {
      v35 = (3 * v10 + 1) >> 1;
      v36 = 8 * v35 + 8;
      if ( 8 * v10 + 8 >= v36 || v10 >= v35 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v75, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v75);
        sub_233E40((__int64)v75);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v37 = (unsigned int *)sub_186B300(v9 - 1, v36);
      v9 = v37 + 2;
      *v37 = v35;
      v38 = v37[1];
      a1[5] = (__int64)v9;
      v39 = v38;
      v13 = &v9[v38];
      v12 = v39 + 1;
    }
    else
    {
      v11 = v10;
      v12 = v10 + 1;
      v13 = &v9[v11];
    }
  }
  else
  {
    v55 = (_QWORD *)sub_186B270(0x18u);
    v12 = 1;
    v9 = v55 + 1;
    *v55 = 2;
    a1[5] = (__int64)(v55 + 1);
    v13 = v55 + 1;
  }
  *v13 = a3;
  v14 = (std::ios_base *)a1[1];
  *((_DWORD *)v9 - 1) = v12;
  v15 = sub_E60CB0(v14, v12, (int)v9);
  v16 = a1[5];
  v17 = v15;
  v18 = (unsigned int)(*(_DWORD *)(v16 - 4) - 1);
  v19 = *(_QWORD *)(v16 + 8 * v18);
  *(_DWORD *)(v16 - 4) = v18;
  if ( !v19 || (v20 = a1[4], v21 = *(_DWORD *)(v19 + 8) == 1, --*(_DWORD *)(v19 + 8), !v21) )
  {
    if ( v15 != 1 )
      goto LABEL_9;
LABEL_29:
    v33 = (_QWORD *)a1[1];
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v33 + 32LL))(v33, a2);
    if ( *a2 )
    {
      v34 = v33[7];
      if ( v34 )
        (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v34 + 32LL))(v34, a2);
    }
    return v17;
  }
  sub_15D7BC0(v20, v19);
  if ( v17 == 1 )
    goto LABEL_29;
LABEL_9:
  if ( v17 != -1 )
    return v17;
  v23 = *a1;
  v24 = (unsigned int **)a1[1];
  v74 = nullptr;
  v73 = v23;
  v25 = (unsigned __int64)&v73;
  (*((void (__fastcall **)(unsigned int **, __int64 *))*v24 + 3))(v24, &v73);
  v26 = v74;
  if ( !v74 || (v24 = &v74[*((unsigned int *)v74 - 1)], v24 == v74) )
  {
    v27 = 1;
    if ( (unsigned int)sub_180B130(v24) <= 1 )
      goto LABEL_36;
    goto LABEL_47;
  }
  v27 = 1;
  do
  {
    while ( 1 )
    {
      v28 = **v26;
      if ( v28 >= *((_DWORD *)a1 + 42) )
        break;
      v25 = v28 >> 5;
      ++v26;
      v27 &= (*(_DWORD *)(a1[22] + 4 * v25) & (1 << v28)) != 0;
      if ( v26 == v24 )
        goto LABEL_17;
    }
    ++v26;
    v27 = 0;
  }
  while ( v26 != v24 );
LABEL_17:
  if ( (unsigned int)sub_180B130(v24) > 1 )
  {
LABEL_47:
    if ( (unsigned __int8)sub_186A530() )
    {
      sub_186A4C0();
      sub_180B150(v24, v25);
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::_M_insert<bool>();
      std::__ostream_insert<char,std::char_traits<char>>();
      v48 = std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_186A500(v48, "\n");
    }
    else
    {
      sub_180B150(v24, v25);
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::_M_insert<bool>();
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
    }
  }
  if ( !v27 )
  {
    v29 = v74;
    if ( v74 )
    {
LABEL_20:
      v30 = &v29[*((unsigned int *)v29 - 1)];
      if ( v29 >= v30 )
        goto LABEL_27;
      do
      {
        while ( 1 )
        {
          v31 = *v29;
          if ( *v29 )
          {
            v32 = v73;
            v21 = v31[2]-- == 1;
            if ( v21 )
              break;
          }
          if ( ++v29 >= v30 )
            goto LABEL_26;
        }
        sub_15D7BC0(v32, v31);
        ++v29;
      }
      while ( v29 < v30 );
LABEL_26:
      v29 = v74;
      if ( v74 )
LABEL_27:
        sub_186B220(v29 - 1);
    }
    return v17;
  }
LABEL_36:
  v40 = (_QWORD *)a1[16];
  if ( v40 )
  {
    LODWORD(v41) = *((_DWORD *)v40 - 1);
    v42 = &v40[2 * (unsigned int)v41];
    if ( (_DWORD)v41 == *((_DWORD *)v40 - 2) )
    {
      v56 = (unsigned int)(3 * v41 + 1) >> 1;
      v72 = v56;
      v57 = 16 * v56 + 8;
      if ( 16 * (int)v41 + 8 >= (unsigned int)v57 || (unsigned int)v41 >= v56 )
      {
        v3 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v75, "Overflow encountered when expanding vector");
        *v3 = (char *)off_1C63128;
        sub_2333C0(v3 + 1, v75);
        sub_233E40((__int64)v75);
        __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v41 = sub_186B270(v57);
      v58 = (__int64 *)a1[16];
      v71 = (_DWORD *)v41;
      v40 = (_QWORD *)(v41 + 8);
      if ( v58 )
      {
        v59 = *((unsigned int *)v58 - 1);
        v60 = v41 + 8;
        *(_DWORD *)(v41 + 4) = v59;
        v61 = v58;
        v62 = &v58[2 * v59];
        if ( v62 != v58 )
        {
          do
          {
            v63 = *v61;
            v61 += 2;
            v60 += 16;
            *(_QWORD *)(v60 - 16) = v63;
            v64 = *(v61 - 1);
            *(v61 - 1) = 0;
            *(_QWORD *)(v60 - 8) = v64;
          }
          while ( v62 != v61 );
        }
        v70 = &v58[2 * v59];
        if ( (_DWORD)v59 )
        {
          do
          {
            v65 = (__int64 *)v58[1];
            if ( v65 )
            {
              v66 = &v65[*((unsigned int *)v65 - 1)];
              if ( v65 >= v66 )
                goto LABEL_71;
              do
              {
                while ( 1 )
                {
                  v67 = *v65;
                  if ( *v65 )
                  {
                    v68 = *v58;
                    v21 = (*(_DWORD *)(v67 + 8))-- == 1;
                    if ( v21 )
                      break;
                  }
                  if ( ++v65 >= v66 )
                    goto LABEL_70;
                }
                sub_15D7BC0(v68, v67);
                ++v65;
              }
              while ( v65 < v66 );
LABEL_70:
              v65 = (__int64 *)v58[1];
              if ( v65 )
LABEL_71:
                sub_186B220(v65 - 1);
            }
            v58 += 2;
          }
          while ( v58 != v70 );
          v58 = (__int64 *)a1[16];
        }
        sub_186B220(v58 - 1);
        v41 = (unsigned int)v71[1];
        v42 = &v40[2 * v41];
      }
      else
      {
        *(_DWORD *)(v41 + 4) = 0;
        v42 = (_QWORD *)(v41 + 8);
        LODWORD(v41) = 0;
      }
      a1[16] = (__int64)v40;
      *v71 = v72;
    }
  }
  else
  {
    v41 = sub_186B270(0x28u);
    v40 = (_QWORD *)(v41 + 8);
    *(_QWORD *)v41 = 2;
    LODWORD(v41) = 0;
    a1[16] = (__int64)v40;
    v42 = v40;
  }
  v43 = v73;
  v42[1] = 0;
  v29 = v74;
  *v42 = v43;
  if ( v29 )
  {
    v44 = nullptr;
    for ( i = 0; ; ++i )
    {
      if ( i >= *((_DWORD *)v29 - 1) )
      {
LABEL_46:
        ++*(_DWORD *)(a1[16] - 4);
        goto LABEL_20;
      }
      while ( 1 )
      {
        v46 = v29[i];
        if ( v46 )
          ++v46[2];
        if ( !v44 )
        {
          v69 = (_QWORD *)sub_186B270(0x18u);
          v44 = v69 + 1;
          *v69 = 2;
          v54 = 1;
          v42[1] = v44;
          v53 = (unsigned int **)v44;
          v29 = v74;
          goto LABEL_52;
        }
        v47 = *((_DWORD *)v44 - 1);
        if ( v47 == *((_DWORD *)v44 - 2) )
          break;
        ++i;
        v44[v47] = v46;
        *((_DWORD *)v44 - 1) = v47 + 1;
        if ( i >= *((_DWORD *)v29 - 1) )
          goto LABEL_46;
      }
      v49 = (3 * v47 + 1) >> 1;
      v50 = 8 * v49 + 8;
      if ( 8 * v47 + 8 >= (unsigned int)v50 || v47 >= v49 )
      {
        v5 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v75, "Overflow encountered when expanding vector");
        *v5 = (char *)off_1C63128;
        sub_2333C0(v5 + 1, v75);
        sub_233E40((__int64)v75);
        __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v51 = (unsigned int *)sub_186B300(v44 - 1, v50);
      v52 = v51[1];
      v44 = v51 + 2;
      v42[1] = v51 + 2;
      *v51 = v49;
      LODWORD(v51) = v52;
      v29 = v74;
      v53 = (unsigned int **)&v44[v52];
      v54 = (_DWORD)v51 + 1;
LABEL_52:
      *v53 = v46;
      *((_DWORD *)v44 - 1) = v54;
      if ( !v29 )
        break;
    }
    ++*(_DWORD *)(a1[16] - 4);
  }
  else
  {
    *((_DWORD *)v40 - 1) = v41 + 1;
  }
  return v17;
}

