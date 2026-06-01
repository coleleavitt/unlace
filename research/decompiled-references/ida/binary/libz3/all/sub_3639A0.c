__int64 __fastcall sub_3639A0(__int64 a1)
{
  char **exception; // r12
  _QWORD *v3; // rbx
  __int64 *v4; // r15
  __int64 v5; // rdx
  unsigned int i; // r13d
  __int64 v7; // r12
  unsigned int v8; // eax
  __int64 v9; // rax
  __int64 v10; // rdi
  int v11; // edx
  __int64 v12; // rax
  void *v13; // r12
  __int64 *v14; // r12
  __int64 *v15; // r13
  __int64 v16; // rsi
  bool v17; // zf
  __int64 v18; // rbp
  __int64 *v19; // r12
  unsigned __int64 v20; // r13
  __int64 v21; // rsi
  unsigned int v23; // r14d
  size_t v24; // rsi
  unsigned int *v25; // rax
  __int64 v26; // rcx
  _QWORD *v27; // rcx
  int v28; // eax
  char *v29; // rdx
  __int64 v30; // r12
  __int64 v31; // rax
  int v32; // esi
  unsigned int v33; // ecx
  __int64 v34; // r9
  char *v35; // rcx
  __int64 v36; // r9
  char *v37; // rdi
  char *v38; // r14
  __int64 v39; // rax
  void *v40; // rbx
  __int64 v41; // rax
  void *v42; // r15
  void *v43; // rdi
  _QWORD *v44; // rsi
  __int64 v45; // rax
  _QWORD *v46; // rdx
  unsigned int v47; // ecx
  int v48; // edi
  _QWORD *v49; // rsi
  __int64 v50; // rcx
  _QWORD *v51; // r9
  _QWORD *j; // rax
  _QWORD *v53; // rcx
  void *v54; // r14
  __int64 v55; // rcx
  void *v56; // rdi
  bool v57; // al
  unsigned int v58; // eax
  __int64 v59; // rax
  unsigned int v60; // eax
  int v61; // esi
  int v62; // eax
  void *v63; // r13
  int v64; // r12d
  __int64 *v65; // r13
  __int64 *v66; // r14
  __int64 v67; // rsi
  int v68; // eax
  void *v69; // r12
  int v70; // r15d
  __int64 *v71; // rdi
  __int64 *v72; // rax
  __int64 v73; // r14
  __int64 v74; // rdi
  _QWORD *v75; // rax
  __int64 *v76; // [rsp+0h] [rbp-F8h]
  int v77[2]; // [rsp+10h] [rbp-E8h]
  void *v78; // [rsp+10h] [rbp-E8h]
  void *v79; // [rsp+10h] [rbp-E8h]
  __int64 *v80; // [rsp+40h] [rbp-B8h]
  __int64 v81; // [rsp+48h] [rbp-B0h]
  int v82[2]; // [rsp+50h] [rbp-A8h] BYREF
  _QWORD *v83; // [rsp+58h] [rbp-A0h]
  __int64 v84; // [rsp+60h] [rbp-98h] BYREF
  __int64 *v85; // [rsp+68h] [rbp-90h]
  _BYTE v86[16]; // [rsp+70h] [rbp-88h] BYREF
  int v87; // [rsp+80h] [rbp-78h] BYREF
  char v88; // [rsp+84h] [rbp-74h]
  __int64 v89; // [rsp+90h] [rbp-68h] BYREF
  __int64 v90; // [rsp+98h] [rbp-60h] BYREF
  __int64 v91; // [rsp+A0h] [rbp-58h] BYREF
  __int64 v92; // [rsp+A8h] [rbp-50h] BYREF
  __int64 v93; // [rsp+B0h] [rbp-48h]

  v3 = nullptr;
  v4 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 48LL))(*(_QWORD *)(a1 + 16));
  v5 = v4[1];
  v81 = *v4;
  *(_QWORD *)v82 = *v4;
  if ( v5 )
  {
    for ( i = 0; ; ++i )
    {
      if ( i >= *(_DWORD *)(v5 - 4) )
        goto LABEL_9;
      while ( 1 )
      {
        v7 = *(_QWORD *)(v5 + 8LL * i);
        if ( v7 )
          ++*(_DWORD *)(v7 + 8);
        if ( !v3 )
        {
          v75 = (_QWORD *)sub_186B270(0x18u);
          v3 = v75 + 1;
          *v75 = 2;
          v5 = v4[1];
          v28 = 1;
          v27 = v3;
          goto LABEL_36;
        }
        v8 = *((_DWORD *)v3 - 1);
        if ( v8 == *((_DWORD *)v3 - 2) )
          break;
        ++i;
        v3[v8] = v7;
        *((_DWORD *)v3 - 1) = v8 + 1;
        if ( i >= *(_DWORD *)(v5 - 4) )
          goto LABEL_9;
      }
      v23 = (3 * v8 + 1) >> 1;
      v24 = 8 * v23 + 8;
      if ( 8 * v8 + 8 >= (unsigned int)v24 || v8 >= v23 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(&v89, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, &v89);
        sub_233E40((__int64)&v89);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v25 = (unsigned int *)sub_186B300(v3 - 1, v24);
      v26 = v25[1];
      v3 = v25 + 2;
      v5 = v4[1];
      *v25 = v23;
      LODWORD(v25) = v26;
      v27 = &v3[v26];
      v28 = (_DWORD)v25 + 1;
LABEL_36:
      *v27 = v7;
      *((_DWORD *)v3 - 1) = v28;
      if ( !v5 )
        goto LABEL_9;
    }
  }
  do
  {
LABEL_9:
    if ( !(unsigned __int8)sub_18290A0(*(_QWORD *)a1) )
      break;
    v9 = *(_QWORD *)a1;
    v10 = *(_QWORD *)(a1 + 8);
    v85 = nullptr;
    v84 = v9;
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v10 + 24LL))(v10, &v84);
    sub_3623F0(a1, &v84);
    if ( v85 )
      v11 = *((_DWORD *)v85 - 1);
    else
      v11 = 0;
    sub_361840((__int64)v86, a1, v11, v85);
    sub_3628B0(a1, (__int64)&v84);
    if ( !v85 || (v12 = *((unsigned int *)v85 - 1), !(_DWORD)v12) )
    {
      if ( (unsigned int)sub_180B130(a1) > 0x63 )
      {
        if ( (unsigned __int8)sub_186A530() )
        {
          sub_186A4C0();
          v74 = sub_180B150(a1, &v84);
          std::__ostream_insert<char,std::char_traits<char>>();
          sub_186A500(v74, "(opt.maxres :empty-core)\n");
        }
        else
        {
          sub_180B150(a1, &v84);
          std::__ostream_insert<char,std::char_traits<char>>();
        }
      }
LABEL_15:
      v13 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v86);
      sub_182CBA0(v13, &v87);
      v14 = v85;
      if ( v85 )
      {
        v15 = &v85[*((unsigned int *)v85 - 1)];
        if ( v85 >= v15 )
          goto LABEL_23;
        do
        {
          while ( 1 )
          {
            v16 = *v14;
            if ( *v14 )
            {
              v17 = (*(_DWORD *)(v16 + 8))-- == 1;
              if ( v17 )
                break;
            }
            if ( ++v14 >= v15 )
              goto LABEL_22;
          }
          sub_15D7BC0(v84, v16);
          ++v14;
        }
        while ( v14 < v15 );
LABEL_22:
        v14 = v85;
        if ( v85 )
LABEL_23:
          sub_186B220(v14 - 1);
      }
      break;
    }
    v76 = v85;
    v80 = &v85[v12];
    do
    {
      v29 = *(char **)(a1 + 72);
      v30 = *v76;
      v31 = *(unsigned int *)(a1 + 80);
      v90 = 0;
      v92 = 1;
      v32 = *(_DWORD *)(v30 + 12);
      v33 = v31 - 1;
      v89 = v30;
      v91 = 0;
      v31 *= 40;
      v93 = 0;
      v34 = 5LL * (v32 & v33);
      v35 = &v29[v31];
      v36 = 8 * v34;
      v37 = &v29[v36];
      if ( v36 == v31 )
      {
LABEL_47:
        while ( v37 != v29 )
        {
          v41 = *(_QWORD *)v29;
          if ( *(_QWORD *)v29 > 1u )
          {
            if ( *(_DWORD *)(v41 + 12) == v32 && v30 == v41 )
            {
              v38 = v29;
              goto LABEL_56;
            }
          }
          else if ( !v41 )
          {
            break;
          }
          v29 += 40;
        }
LABEL_46:
        v40 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v90);
        sub_182CBA0(v40, &v92);
        BUG();
      }
      v38 = &v29[v36];
      while ( 1 )
      {
        v39 = *(_QWORD *)v38;
        if ( *(_QWORD *)v38 > 1u )
          break;
        if ( !v39 )
          goto LABEL_46;
LABEL_43:
        v38 += 40;
        if ( v35 == v38 )
          goto LABEL_47;
      }
      if ( *(_DWORD *)(v39 + 12) != v32 || v30 != v39 )
        goto LABEL_43;
LABEL_56:
      v42 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v90);
      sub_182CBA0(v42, &v92);
      v43 = qword_1C7F2C0;
      v44 = v38 + 8;
      if ( (v38[28] & 1) != 0 || *((_DWORD *)v38 + 6) != 1 || (v88 & 1) != 0 || v87 != 1 )
      {
        sub_1852000(qword_1C7F2C0, v44, v86);
      }
      else
      {
        sub_1832A70(qword_1C7F2C0, v44, v86);
        sub_182CBA0(v43, v38 + 24);
        v38[28] &= ~1u;
        *((_DWORD *)v38 + 6) = 1;
      }
      v45 = *(unsigned int *)(a1 + 80);
      v46 = *(_QWORD **)(a1 + 72);
      v89 = v30;
      v90 = 0;
      v92 = 1;
      v47 = v45 - 1;
      v48 = *(_DWORD *)(v30 + 12);
      v91 = 0;
      v45 *= 40;
      v49 = (_QWORD *)((char *)v46 + v45);
      v93 = 0;
      v50 = 40LL * (v48 & v47);
      v51 = &v46[(unsigned __int64)v50 / 8];
      if ( v50 != v45 )
      {
        for ( j = &v46[(unsigned __int64)v50 / 8]; v49 != j; j += 5 )
        {
          v53 = (_QWORD *)*j;
          if ( *j > 1u )
          {
            if ( *((_DWORD *)v53 + 3) == v48 && (_QWORD *)v30 == v53 )
            {
              v53 = j;
              goto LABEL_66;
            }
          }
          else if ( !v53 )
          {
            goto LABEL_66;
          }
        }
      }
      if ( v46 == v51 )
      {
LABEL_106:
        v53 = nullptr;
      }
      else
      {
        while ( 1 )
        {
          while ( 1 )
          {
            v53 = (_QWORD *)*v46;
            if ( *v46 > 1u )
              break;
            if ( !v53 )
              goto LABEL_66;
            v46 += 5;
            if ( v51 == v46 )
              goto LABEL_106;
          }
          if ( *((_DWORD *)v53 + 3) == v48 && (_QWORD *)v30 == v53 )
            break;
          v46 += 5;
          if ( v51 == v46 )
            goto LABEL_106;
        }
        v53 = v46;
      }
LABEL_66:
      v54 = qword_1C7F2C0;
      *(_QWORD *)v77 = v53;
      sub_182CBA0(qword_1C7F2C0, &v90);
      sub_182CBA0(v54, &v92);
      v89 = 0;
      v90 = 0;
      v91 = 1;
      v92 = 0;
      sub_182CBA0(qword_1C7F2C0, &v91);
      v55 = *(_QWORD *)v77;
      BYTE4(v91) &= ~1u;
      LODWORD(v91) = 1;
      v56 = qword_1C7F2C0;
      if ( (*(_BYTE *)(*(_QWORD *)v77 + 12LL) & 1) != 0 || (v89 & 0x100000000LL) != 0 )
      {
        v68 = sub_182C7B0(qword_1C7F2C0, *(_QWORD *)v77 + 8LL, &v89);
        v55 = *(_QWORD *)v77;
        if ( v68 )
          goto LABEL_97;
LABEL_69:
        if ( (*(_BYTE *)(v55 + 28) & 1) != 0 || (v91 & 0x100000000LL) != 0 )
          v57 = (unsigned int)sub_182C7B0(v56, v55 + 24, &v91) == 0;
        else
          v57 = *(_DWORD *)(v55 + 24) == (_DWORD)v91;
        if ( v57 )
        {
          v79 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v89);
          sub_182CBA0(v79, &v91);
          if ( v3 )
          {
            v70 = *((_DWORD *)v3 - 1);
            if ( v70 )
            {
              v71 = v3;
              v72 = &v3[v70];
              while ( 1 )
              {
                v73 = *v71;
                if ( v30 == *v71 )
                  break;
                if ( ++v71 == v72 )
                  goto LABEL_74;
              }
              if ( v71 + 1 != v72 )
                memmove(v71, v71 + 1, (char *)(v72 - 1) - (char *)v71);
              *((_DWORD *)v3 - 1) = v70 - 1;
              v17 = (*(_DWORD *)(v73 + 8))-- == 1;
              if ( v17 )
                sub_15D7BC0(v81, v73);
            }
          }
        }
        else
        {
          v78 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v89);
          sub_182CBA0(v78, &v91);
        }
      }
      else
      {
        if ( *(_DWORD *)(*(_QWORD *)v77 + 8LL) == (_DWORD)v89 )
          goto LABEL_69;
LABEL_97:
        v69 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v89);
        sub_182CBA0(v69, &v91);
      }
LABEL_74:
      ++v76;
    }
    while ( v80 != v76 );
    if ( v85 )
      v58 = *((_DWORD *)v85 - 1);
    else
      v58 = 0;
    if ( v58 >= *(_DWORD *)(a1 + 112) )
      goto LABEL_15;
    v59 = *(_QWORD *)(a1 + 64);
    v60 = v59 ? *(_DWORD *)(v59 - 4) : 0;
    if ( v60 >= *(_DWORD *)(a1 + 108) )
      goto LABEL_15;
    if ( *(_BYTE *)(a1 + 104) )
    {
      v83 = v3;
      v62 = sub_362E90((__m128i *)a1, (__int64 *)v82);
    }
    else
    {
      if ( v3 )
        v61 = *((_DWORD *)v3 - 1);
      else
        v61 = 0;
      v62 = sub_E60CB0(*(std::ios_base **)(a1 + 8), v61, (int)v3);
    }
    v63 = qword_1C7F2C0;
    v64 = v62;
    sub_182CBA0(qword_1C7F2C0, v86);
    sub_182CBA0(v63, &v87);
    v65 = v85;
    if ( v85 )
    {
      v66 = &v85[*((unsigned int *)v85 - 1)];
      if ( v85 >= v66 )
        goto LABEL_93;
      do
      {
        while ( 1 )
        {
          v67 = *v65;
          if ( *v65 )
          {
            v17 = (*(_DWORD *)(v67 + 8))-- == 1;
            if ( v17 )
              break;
          }
          if ( ++v65 >= v66 )
            goto LABEL_92;
        }
        sub_15D7BC0(v84, v67);
        ++v65;
      }
      while ( v65 < v66 );
LABEL_92:
      v65 = v85;
      if ( v85 )
LABEL_93:
        sub_186B220(v65 - 1);
    }
  }
  while ( v64 == -1 );
  v18 = a1 + 64;
  if ( v3 )
  {
    v19 = v3;
    v20 = (unsigned __int64)&v3[*((unsigned int *)v3 - 1)];
    if ( (unsigned __int64)v3 < v20 )
    {
      do
      {
        while ( 1 )
        {
          v21 = *v19;
          if ( *v19 )
          {
            v17 = (*(_DWORD *)(v21 + 8))-- == 1;
            if ( v17 )
              break;
          }
          if ( (unsigned __int64)++v19 >= v20 )
            goto LABEL_31;
        }
        ++v19;
        sub_15D7BC0(v81, v21);
      }
      while ( (unsigned __int64)v19 < v20 );
    }
LABEL_31:
    sub_186B220(v3 - 1);
  }
  return v18;
}

