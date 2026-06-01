__int64 __fastcall sub_71AF20(void **a1, void **a2, double a3)
{
  __int64 v3; // rbx
  void *v4; // rax
  __int64 v5; // rcx
  _QWORD *v6; // rdx
  unsigned int v7; // r14d
  __int64 v8; // r13
  unsigned int v9; // eax
  __int64 v10; // rsi
  int v11; // eax
  _QWORD *v12; // rsi
  __int64 v13; // r14
  _QWORD *v14; // rdx
  __int64 v15; // r15
  _QWORD *v16; // r13
  __int64 v17; // r12
  __int64 v18; // rax
  std::ios_base *v19; // r14
  unsigned int v20; // eax
  unsigned int v21; // r13d
  int v22; // eax
  __int64 v23; // r12
  _QWORD *v24; // r14
  unsigned __int64 v25; // r15
  __int64 v26; // rsi
  bool v27; // zf
  _QWORD *v28; // r15
  unsigned int v29; // r13d
  _QWORD *v30; // r8
  __int64 v31; // rsi
  __int64 v32; // rdi
  __int64 i; // rsi
  void *v34; // rdi
  __int64 v35; // rsi
  int v36; // ecx
  int v37; // r8d
  int v38; // r9d
  __int64 v39; // r13
  void (__fastcall ***v40)(void *); // r14
  __int64 v41; // rdi
  unsigned int v43; // r15d
  size_t v44; // rsi
  unsigned int *v45; // rax
  __int64 v46; // rcx
  _QWORD *v47; // rax
  __int64 v48; // rax
  __int64 v49; // rdi
  int v50; // edx
  __int64 v51; // rax
  _QWORD *v52; // rdx
  int v53; // r13d
  __int64 v54; // rax
  _DWORD *v55; // rax
  void (__fastcall ***v56)(void *); // r13
  unsigned int v57; // r14d
  unsigned int v58; // ecx
  unsigned int *v59; // rax
  __int64 v60; // rax
  _QWORD *v61; // rax
  bool v62; // al
  __int64 v63; // r13
  void *v64; // r15
  int v65; // eax
  int v66; // eax
  void *v67; // r15
  int v68; // eax
  int v69; // eax
  void *v70; // r14
  int v71; // eax
  int v72; // eax
  __int64 v73; // rsi
  __int64 v74; // r13
  __int64 v75; // rdi
  __int64 v76; // r13
  char **v77; // r12
  __int64 v78; // rdx
  char **exception; // r12
  __int64 v80; // rdx
  __int64 *v81; // [rsp+8h] [rbp-90h]
  unsigned __int64 v82; // [rsp+10h] [rbp-88h]
  __int64 v83; // [rsp+18h] [rbp-80h]
  void *v84; // [rsp+20h] [rbp-78h] BYREF
  int v85[2]; // [rsp+28h] [rbp-70h]
  unsigned __int64 v86; // [rsp+30h] [rbp-68h] BYREF
  __m128i v87[5]; // [rsp+40h] [rbp-58h] BYREF

  v3 = (__int64)a1;
  ++*((_DWORD *)a1 + 8);
  v81 = (__int64 *)(a1 + 18);
  if ( (unsigned int)sub_180B130(a1) )
    goto LABEL_61;
  while ( 1 )
  {
    sub_EE4F40(*(_QWORD *)(v3 + 16));
    v4 = *(void **)(v3 + 376);
    v5 = *(_QWORD *)(v3 + 384);
    *(_QWORD *)v85 = 0;
    v84 = v4;
    if ( v5 )
    {
      v6 = nullptr;
      v7 = 0;
      do
      {
        if ( v7 >= *(_DWORD *)(v5 - 4) )
          break;
        v8 = *(_QWORD *)(v5 + 8LL * v7);
        if ( v8 )
          ++*(_DWORD *)(v8 + 8);
        if ( v6 )
        {
          v9 = *((_DWORD *)v6 - 1);
          if ( v9 == *((_DWORD *)v6 - 2) )
          {
            v43 = (3 * v9 + 1) >> 1;
            v44 = 8 * v43 + 8;
            if ( 8 * v9 + 8 >= (unsigned int)v44 || v9 >= v43 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_109F38(v87[0].m128i_i64, "Overflow encountered when expanding vector", v80);
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v87);
              sub_233E40((__int64)v87);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v45 = (unsigned int *)sub_186B300(v6 - 1, v44);
            v46 = v45[1];
            v6 = v45 + 2;
            *v45 = v43;
            *(_QWORD *)v85 = v6;
            LODWORD(v45) = v46;
            v12 = &v6[v46];
            v5 = *(_QWORD *)(v3 + 384);
            v11 = (_DWORD)v45 + 1;
          }
          else
          {
            v10 = v9;
            v11 = v9 + 1;
            v12 = &v6[v10];
          }
        }
        else
        {
          v47 = (_QWORD *)sub_186B270(0x18u);
          v6 = v47 + 1;
          *v47 = 2;
          v5 = *(_QWORD *)(v3 + 384);
          v11 = 1;
          *(_QWORD *)v85 = v6;
          v12 = v6;
        }
        *v12 = v8;
        ++v7;
        *((_DWORD *)v6 - 1) = v11;
      }
      while ( v5 );
    }
    sub_712B50(v81, *(_QWORD *)(v3 + 408), (__int64)&v84);
    v13 = *(_QWORD *)(v3 + 408);
    v14 = *(_QWORD **)v85;
    if ( v13 )
    {
      if ( !*(_QWORD *)v85 )
      {
        if ( (*(_BYTE *)(v3 + 400) & 1) != 0 )
          v19 = *(std::ios_base **)(v3 + 80);
        else
          v19 = *(std::ios_base **)(v3 + 120);
        a2 = nullptr;
        goto LABEL_23;
      }
      v15 = *(_QWORD *)v85 + 8LL * *(unsigned int *)(*(_QWORD *)v85 - 4LL);
      if ( v15 == *(_QWORD *)v85 )
      {
        if ( (*(_BYTE *)(v3 + 400) & 1) != 0 )
          v19 = *(std::ios_base **)(v3 + 80);
        else
          v19 = *(std::ios_base **)(v3 + 120);
LABEL_22:
        a2 = (void **)*((unsigned int *)v14 - 1);
        goto LABEL_23;
      }
      v16 = *(_QWORD **)v85;
      do
      {
        v17 = *v16;
        if ( !(unsigned __int8)sub_1374270(v13, *v16) && (unsigned __int8)sub_13742D0(v13, v17) )
          break;
        ++v16;
      }
      while ( (_QWORD *)v15 != v16 );
      v14 = *(_QWORD **)v85;
    }
    v18 = v3 + 64;
    if ( (*(_BYTE *)(v3 + 400) & 1) == 0 )
      v18 = v3 + 104;
    v19 = *(std::ios_base **)(v18 + 16);
    if ( v14 )
      goto LABEL_22;
    a2 = nullptr;
LABEL_23:
    v20 = sub_E60CB0(v19, (int)a2, (int)v14);
    v21 = v20;
    if ( !v20 )
      goto LABEL_65;
    if ( v20 == 1 )
    {
      a2 = (void **)(v3 + 408);
      (*(void (__fastcall **)(std::ios_base *, __int64))(*(_QWORD *)v19 + 32LL))(v19, v3 + 408);
      v48 = *(_QWORD *)(v3 + 408);
      if ( !v48
        || (v49 = *((_QWORD *)v19 + 7)) != 0
        && (a2 = (void **)(v3 + 408),
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v49 + 32LL))(v49, v3 + 408),
            (v48 = *(_QWORD *)(v3 + 408)) == 0) )
      {
LABEL_65:
        v21 = 0;
        goto LABEL_66;
      }
      v50 = *(_DWORD *)(v3 + 400);
      if ( !v50 )
      {
        v56 = *(void (__fastcall ****)(void *))(v3 + 480);
        ++*(_DWORD *)(v48 + 16);
        if ( v56 )
        {
          v27 = (*((_DWORD *)v56 + 4))-- == 1;
          if ( v27 )
          {
            (**v56)(v56);
            sub_186B220(v56);
            v48 = *(_QWORD *)(v3 + 408);
            v50 = *(_DWORD *)(v3 + 400);
          }
        }
        *(_QWORD *)(v3 + 480) = v48;
      }
      v51 = *(_QWORD *)(v3 + 168);
      *(_DWORD *)(v3 + 400) = v50 + 1;
      if ( v51 )
      {
        v52 = *(_QWORD **)(v3 + 176);
        v53 = *(_DWORD *)(v51 - 4);
        if ( v52 )
        {
LABEL_77:
          v54 = *((unsigned int *)v52 - 1);
          if ( (_DWORD)v54 == *((_DWORD *)v52 - 2) )
          {
            v57 = (unsigned int)(3 * v54 + 1) >> 1;
            v58 = 4 * v57 + 8;
            if ( 4 * (int)v54 + 8 >= v58 || (unsigned int)v54 >= v57 )
            {
              v77 = (char **)__cxa_allocate_exception(0x28u);
              sub_109F38(v87[0].m128i_i64, "Overflow encountered when expanding vector", v78);
              *v77 = (char *)off_1C63128;
              sub_2333C0(v77 + 1, v87);
              sub_233E40((__int64)v87);
              __cxa_throw(v77, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            a2 = (void **)v58;
            v59 = (unsigned int *)sub_186B300(v52 - 1, v58);
            v52 = v59 + 2;
            *v59 = v57;
            v60 = v59[1];
            *(_QWORD *)(v3 + 176) = v52;
            v55 = (_DWORD *)v52 + v60;
          }
          else
          {
            v55 = (_DWORD *)v52 + v54;
          }
          goto LABEL_79;
        }
      }
      else
      {
        v52 = *(_QWORD **)(v3 + 176);
        v53 = 0;
        if ( v52 )
          goto LABEL_77;
      }
      v61 = (_QWORD *)sub_186B270(0x10u);
      *v61 = 2;
      v52 = v61 + 1;
      *(_QWORD *)(v3 + 176) = v61 + 1;
      v55 = v61 + 1;
LABEL_79:
      *v55 = v53;
      ++*((_DWORD *)v52 - 1);
      if ( *(_DWORD *)(v3 + 400) == 1 && *(_DWORD *)(v3 + 416) == 3 )
        sub_71A690(v3, a3);
      goto LABEL_59;
    }
    if ( v20 == -1 )
      break;
LABEL_59:
    a1 = &v84;
    sub_2334C0((__int64 *)&v84);
LABEL_60:
    ++*(_DWORD *)(v3 + 32);
    if ( (unsigned int)sub_180B130(&v84) )
    {
LABEL_61:
      if ( (unsigned __int8)sub_186A530(a3) )
      {
        sub_186A4C0(a3);
        sub_180B150(a1, a2);
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::_M_insert<unsigned long>();
        std::__ostream_insert<char,std::char_traits<char>>();
        v41 = std::ostream::_M_insert<unsigned long>();
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_186A500(v41, ")\n");
      }
      else
      {
        sub_180B150(a1, a2);
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::_M_insert<unsigned long>();
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::_M_insert<unsigned long>();
        std::__ostream_insert<char,std::char_traits<char>>();
      }
    }
  }
  v22 = *(_DWORD *)(v3 + 400);
  if ( !v22 )
    goto LABEL_66;
  if ( v22 != 1 )
  {
    if ( !*(_QWORD *)(v3 + 408) )
    {
LABEL_95:
      a2 = (void **)(&dword_0 + 1);
      sub_712900(v81, 1);
      --*(_DWORD *)(v3 + 400);
      a1 = &v84;
      sub_2334C0((__int64 *)&v84);
      goto LABEL_60;
    }
    a2 = &v84;
    if ( !(unsigned __int8)sub_718C00(v3, (__int64 *)&v84) )
      goto LABEL_65;
    goto LABEL_59;
  }
  if ( *(_DWORD *)(v3 + 416) != 2 )
  {
    v23 = *(_QWORD *)(v3 + 408);
    if ( !v23 )
      goto LABEL_95;
    v24 = *(_QWORD **)v85;
    v83 = *(_QWORD *)(v3 + 16);
    if ( *(_QWORD *)v85 )
    {
      v25 = *(_QWORD *)v85 + 8LL * *(unsigned int *)(*(_QWORD *)v85 - 4LL);
      if ( *(_QWORD *)v85 >= v25 )
        goto LABEL_38;
      do
      {
        while ( 1 )
        {
          v26 = *v24;
          if ( *v24 )
          {
            v27 = (*(_DWORD *)(v26 + 8))-- == 1;
            if ( v27 )
              break;
          }
          if ( (unsigned __int64)++v24 >= v25 )
            goto LABEL_37;
        }
        sub_15D7BC0(v84, v26);
        ++v24;
      }
      while ( (unsigned __int64)v24 < v25 );
LABEL_37:
      v24 = *(_QWORD **)v85;
      if ( *(_QWORD *)v85 )
LABEL_38:
        *((_DWORD *)v24 - 1) = 0;
    }
    (*(void (__fastcall **)(_QWORD, void **))(**(_QWORD **)(v3 + 80) + 24LL))(*(_QWORD *)(v3 + 80), &v84);
    sub_714A10(v81, (__int64 *)&v84, v3 + 184);
    v28 = *(_QWORD **)(v3 + 432);
    v29 = *(_DWORD *)(v3 + 400);
    if ( v28 )
    {
      v30 = &v28[*((unsigned int *)v28 - 1)];
      if ( v28 >= v30 )
        goto LABEL_47;
      do
      {
        while ( 1 )
        {
          v31 = *v28;
          if ( *v28 )
          {
            v32 = *(_QWORD *)(v3 + 424);
            v27 = (*(_DWORD *)(v31 + 8))-- == 1;
            if ( v27 )
              break;
          }
          if ( ++v28 >= v30 )
            goto LABEL_46;
        }
        v82 = (unsigned __int64)v30;
        sub_15D7BC0(v32, v31);
        v30 = (_QWORD *)v82;
        ++v28;
      }
      while ( (unsigned __int64)v28 < v82 );
LABEL_46:
      v28 = *(_QWORD **)(v3 + 432);
      if ( v28 )
LABEL_47:
        *((_DWORD *)v28 - 1) = 0;
    }
    for ( i = *(_QWORD *)(v3 + 392); i; ++v29 )
    {
      if ( v29 >= *(_DWORD *)(i - 4) )
        break;
      sub_3EE030(v3 + 424, 16LL * v29 + i);
      i = *(_QWORD *)(v3 + 392);
    }
    v34 = (void *)(v3 + 56);
    v35 = *(_DWORD *)(v3 + 416) != 1;
    sub_6F0E90(v3 + 56, v35, v3 + 424, v23, &v84, 0);
    if ( *(_DWORD *)(v3 + 416) == 3 )
    {
      v62 = 0;
      if ( *(_QWORD *)v85 )
        v62 = *(_DWORD *)(*(_QWORD *)v85 - 4LL) != 0;
      *(_BYTE *)(v3 + 472) |= v62;
      v63 = *(_QWORD *)(v3 + 464);
      v64 = qword_1C7F2C0;
      if ( (*(_BYTE *)(v3 + 508) & 1) != 0 )
      {
        v35 = *(_QWORD *)(v3 + 464);
        v34 = qword_1C7F2C0;
        sub_182C690(qword_1C7F2C0, v35, v3 + 504);
      }
      else
      {
        v65 = *(_DWORD *)(v3 + 504);
        *(_BYTE *)(v63 + 4) &= ~1u;
        *(_DWORD *)v63 = v65;
      }
      if ( (*(_BYTE *)(v3 + 524) & 1) != 0 )
      {
        v35 = v63 + 16;
        v34 = v64;
        sub_182C690(v64, v63 + 16, v3 + 520);
      }
      else
      {
        v66 = *(_DWORD *)(v3 + 520);
        *(_BYTE *)(v63 + 20) &= ~1u;
        *(_DWORD *)(v63 + 16) = v66;
      }
      v67 = qword_1C7F2C0;
      if ( (*(_BYTE *)(v3 + 540) & 1) != 0 )
      {
        v35 = v63 + 32;
        v34 = qword_1C7F2C0;
        sub_182C690(qword_1C7F2C0, v63 + 32, v3 + 536);
      }
      else
      {
        v68 = *(_DWORD *)(v3 + 536);
        *(_BYTE *)(v63 + 36) &= ~1u;
        *(_DWORD *)(v63 + 32) = v68;
      }
      if ( (*(_BYTE *)(v3 + 556) & 1) != 0 )
      {
        v35 = v63 + 48;
        v34 = v67;
        sub_182C690(v67, v63 + 48, v3 + 552);
      }
      else
      {
        v69 = *(_DWORD *)(v3 + 552);
        *(_BYTE *)(v63 + 52) &= ~1u;
        *(_DWORD *)(v63 + 48) = v69;
      }
      v70 = qword_1C7F2C0;
      if ( (*(_BYTE *)(v3 + 572) & 1) != 0 )
      {
        v35 = v63 + 64;
        v34 = qword_1C7F2C0;
        sub_182C690(qword_1C7F2C0, v63 + 64, v3 + 568);
      }
      else
      {
        v71 = *(_DWORD *)(v3 + 568);
        *(_BYTE *)(v63 + 68) &= ~1u;
        *(_DWORD *)(v63 + 64) = v71;
      }
      if ( (*(_BYTE *)(v3 + 588) & 1) != 0 )
      {
        v35 = v63 + 80;
        v34 = v70;
        sub_182C690(v70, v63 + 80, v3 + 584);
      }
      else
      {
        v72 = *(_DWORD *)(v3 + 584);
        *(_BYTE *)(v63 + 84) &= ~1u;
        *(_DWORD *)(v63 + 80) = v72;
      }
      if ( (unsigned int)sub_180B130(v34) > 2 )
      {
        if ( (unsigned __int8)sub_186A530(a3) )
        {
          sub_186A4C0(a3);
          v74 = sub_180B150(v34, v35);
          std::__ostream_insert<char,std::char_traits<char>>();
          v75 = sub_71A630(v74, *(int **)(v3 + 464));
          std::operator<<<std::char_traits<char>>();
          sub_186A500(v75, ")\n");
        }
        else
        {
          v76 = sub_180B150(v34, v35);
          std::__ostream_insert<char,std::char_traits<char>>();
          sub_71A630(v76, *(int **)(v3 + 464));
          std::operator<<<std::char_traits<char>>();
        }
      }
      v73 = *(_QWORD *)(*(_QWORD *)(v3 + 104) + 856LL);
      if ( *(_QWORD *)(v3 + 488) != v73 )
      {
        sub_E5EBF0(*(_QWORD *)(v3 + 120), *(_QWORD *)(v3 + 488));
        v73 = *(_QWORD *)(v3 + 488);
      }
      if ( *(_QWORD *)(*(_QWORD *)(v3 + 64) + 856LL) != v73 )
        sub_E5EBF0(*(_QWORD *)(v3 + 80), v73);
      v39 = 0;
    }
    else
    {
      sub_41C800(v87, (unsigned __int64 *)&v84);
      sub_15ECFD0((unsigned int)&v86, (unsigned int)v87, 8, v36, v37, v38);
      sub_710AA0(v87[0].m128i_i64[0], v87[0].m128i_i64[1]);
      v39 = v86;
      sub_7186C0(v3, v86);
      v87[0].m128i_i64[0] = v39;
      if ( v39 )
        ++*(_DWORD *)(v39 + 8);
      sub_712A90((_QWORD *)(v3 + 368), v87);
      sub_3EE030(v3 + 440, v3 + 424);
    }
    v40 = *(void (__fastcall ****)(void *))(v3 + 408);
    if ( v40 )
    {
      v27 = (*((_DWORD *)v40 + 4))-- == 1;
      if ( v27 )
      {
        (**v40)(v40);
        sub_186B220(v40);
      }
    }
    *(_QWORD *)(v3 + 408) = 0;
    sub_712900(v81, 1);
    --*(_DWORD *)(v3 + 400);
    a2 = (void **)v83;
    sub_710AA0(v39, v83);
    goto LABEL_59;
  }
  v21 = 1;
LABEL_66:
  sub_2334C0((__int64 *)&v84);
  return v21;
}

