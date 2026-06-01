__int64 __fastcall sub_DCA410(_QWORD *a1, __int64 a2)
{
  int v4; // ebp
  __int64 v5; // rax
  int v6; // eax
  unsigned int i; // ebp
  const char *v8; // r15
  unsigned __int64 v9; // r8
  _QWORD *v10; // rcx
  signed __int64 v11; // r8
  size_t v12; // r15
  __m128i v13; // xmm0
  __m128i si128; // xmm2
  __int64 v15; // rax
  unsigned int v16; // eax
  __int64 v18; // r14
  __int64 v19; // r14
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // r14
  __int64 v23; // r14
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // r14
  __int64 *v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rsi
  __int64 v31; // rdi
  bool v32; // zf
  __int64 *v33; // rax
  __int64 v34; // r14
  __int64 v35; // rdx
  __int64 v36; // rax
  __int64 v37; // r14
  __int64 v38; // rax
  _DWORD *v39; // rax
  int v40; // eax
  _DWORD *v41; // rax
  __int64 v42; // r14
  _DWORD *v43; // rax
  void *v44; // rsi
  unsigned __int64 v45; // rdi
  _QWORD *exception; // rbx
  char v47[16]; // [rsp+0h] [rbp-1F8h] BYREF
  _QWORD *v48; // [rsp+10h] [rbp-1E8h]
  __int64 v49; // [rsp+18h] [rbp-1E0h]
  _QWORD *v50; // [rsp+20h] [rbp-1D8h] BYREF
  size_t v51; // [rsp+28h] [rbp-1D0h]
  _QWORD dest[2]; // [rsp+30h] [rbp-1C8h] BYREF
  __m128i v53; // [rsp+40h] [rbp-1B8h] BYREF
  unsigned __int64 v54; // [rsp+60h] [rbp-198h]
  void *src; // [rsp+68h] [rbp-190h]
  unsigned __int64 v56; // [rsp+70h] [rbp-188h]
  _BYTE v57[16]; // [rsp+80h] [rbp-178h] BYREF
  void *v58; // [rsp+90h] [rbp-168h] BYREF
  size_t n; // [rsp+98h] [rbp-160h]
  char *v60; // [rsp+B0h] [rbp-148h] BYREF

  v4 = *(_DWORD *)(a2 + 20);
  v5 = sub_DC2710(a1)[1];
  if ( v5 )
    v6 = *(_DWORD *)(v5 - 4);
  else
    v6 = 0;
  if ( v4 == v6 )
    return 0;
  sub_DC7120(a1, a2);
  for ( i = *((_DWORD *)a1 + 356); ; i = 9 )
  {
    while ( 1 )
    {
      if ( i != 3 )
      {
        exception = __cxa_allocate_exception(0x30u);
        sub_305660(exception, "invalid attributed expression, keyword expected");
        goto LABEL_99;
      }
      v8 = (const char *)a1[6];
      *(_QWORD *)(a2 + 24) = 0;
      if ( (const char *)a1[223] != v8 )
        break;
      sub_DC0980(a1);
      if ( *((_DWORD *)a1 + 356) != 4 )
      {
LABEL_108:
        exception = __cxa_allocate_exception(0x30u);
        sub_305660(exception, "invalid attribute value, symbol expected");
LABEL_99:
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
      }
      v34 = a1[6];
      sub_DC0980(a1);
      v53.m128i_i64[0] = v34;
      v35 = sub_DC2710(a1)[1];
      v36 = 0x7FFFFFFF8LL;
      if ( v35 )
        v36 = 8LL * (unsigned int)(*(_DWORD *)(v35 - 4) - 1);
      v37 = *(_QWORD *)(v35 + v36);
      if ( (*(_WORD *)(v37 + 4) || (*(_BYTE *)(v37 + 30) & 1) == 0)
        && (unsigned __int8)sub_1622630(a1 + 255, *(_QWORD *)(v35 + v36)) )
      {
        exception = __cxa_allocate_exception(0x30u);
        sub_305660(exception, "invalid named expression, expression contains free variables");
        goto LABEL_99;
      }
      sub_E09200(*a1, &v53, 0, 0, v37);
      v38 = v53.m128i_i64[0];
      a1[257] = v37;
      a1[256] = v38;
      v16 = *((_DWORD *)a1 + 356);
LABEL_30:
      if ( v16 == 2 )
        return i;
      i = v16;
    }
    if ( (const char *)a1[230] == v8 || (const char *)a1[229] == v8 )
    {
      sub_DC0980(a1);
      if ( *((_DWORD *)a1 + 356) != 4 )
        goto LABEL_108;
      v18 = *a1;
      sub_DFBCB0(*a1);
      v19 = *(_QWORD *)(v18 + 296);
      v20 = sub_DC2710(a1)[1];
      v21 = 0x7FFFFFFF8LL;
      if ( v20 )
        v21 = 8LL * (unsigned int)(*(_DWORD *)(v20 - 4) - 1);
      if ( !(unsigned __int8)sub_15D2CB0(v19, *(_QWORD *)(v20 + v21)) )
      {
        exception = __cxa_allocate_exception(0x30u);
        sub_305660(exception, "invalid labeled expression, expression must have Bool sort");
        goto LABEL_99;
      }
      v22 = *a1;
      sub_DFBCB0(*a1);
      v23 = *(_QWORD *)(v22 + 296);
      v24 = sub_DC2710(a1)[1];
      v25 = 0x7FFFFFFF8LL;
      if ( v24 )
        v25 = 8LL * (unsigned int)(*(_DWORD *)(v24 - 4) - 1);
      v26 = sub_15E8DD0(v23, a1[230] == (_QWORD)v8, a1 + 6, *(_QWORD *)(v24 + v25));
      v27 = sub_DC2710(a1);
      v28 = v27[1];
      v29 = (unsigned int)(*(_DWORD *)(v28 - 4) - 1);
      v30 = *(_QWORD *)(v28 + 8 * v29);
      *(_DWORD *)(v28 - 4) = v29;
      if ( v30 )
      {
        v31 = *v27;
        v32 = (*(_DWORD *)(v30 + 8))-- == 1;
        if ( v32 )
          sub_15D7BC0(v31, v30);
      }
      v33 = sub_DC2710(a1);
      v53.m128i_i64[0] = v26;
      if ( v26 )
        ++*(_DWORD *)(v26 + 8);
      sub_DBF5A0(v33 + 1, &v53);
      if ( *((_DWORD *)a1 + 356) != 9 )
      {
LABEL_49:
        sub_DC0980(a1);
        v16 = *((_DWORD *)a1 + 356);
        goto LABEL_30;
      }
      continue;
    }
    if ( (const char *)a1[224] == v8 )
    {
      v39 = *(_DWORD **)(a2 + 8);
      if ( !v39 || *v39 != 4 )
      {
LABEL_106:
        exception = __cxa_allocate_exception(0x30u);
        sub_305660(exception, "invalid attribute, not in the scope of a quantifier");
        goto LABEL_99;
      }
      sub_DC0980(a1);
      sub_DBF570(*((unsigned int *)a1 + 356), (__int64)"invalid weight attribute, integer expected");
      v40 = sub_DC09F0((__int64)a1);
      v32 = *((_DWORD *)a1 + 356) == 9;
      *(_DWORD *)(*(_QWORD *)(a2 + 8) + 24LL) = v40;
      if ( !v32 )
        goto LABEL_49;
      continue;
    }
    if ( (const char *)a1[226] != v8 )
      break;
    v41 = *(_DWORD **)(a2 + 8);
    if ( !v41 || *v41 != 4 )
      goto LABEL_106;
    sub_DC0980(a1);
    sub_DBF580(*((unsigned int *)a1 + 356), (__int64)"invalid attribute value, symbol expected");
    v42 = a1[6];
    if ( *((_DWORD *)a1 + 356) != 9 )
    {
      sub_DC0980(a1);
      v16 = *((_DWORD *)a1 + 356);
      *(_QWORD *)(*(_QWORD *)(a2 + 8) + 16LL) = v42;
      goto LABEL_30;
    }
    *(_QWORD *)(*(_QWORD *)(a2 + 8) + 16LL) = v42;
LABEL_60:
    ;
  }
  if ( (const char *)a1[225] == v8 )
  {
    v43 = *(_DWORD **)(a2 + 8);
    if ( !v43 || *v43 != 4 )
      goto LABEL_106;
    sub_DC0980(a1);
    sub_DBF580(*((unsigned int *)a1 + 356), (__int64)"invalid attribute value, symbol expected");
    v32 = *((_DWORD *)a1 + 356) == 9;
    *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL) = a1[6];
    if ( !v32 )
      goto LABEL_49;
    goto LABEL_60;
  }
  if ( (const char *)a1[227] != v8 )
  {
    if ( (const char *)a1[228] == v8 )
    {
      if ( !*((_BYTE *)a1 + 2064) )
      {
        sub_DC0740(a2);
        if ( *((_DWORD *)a1 + 356) != 9 )
          sub_DC0980(a1);
        *(_QWORD *)(a2 + 24) = v8;
        return 0;
      }
      goto LABEL_62;
    }
    std::ostringstream::basic_ostringstream(&v53);
    std::__ostream_insert<char,std::char_traits<char>>();
    if ( ((unsigned __int8)v8 & 7) != 0 )
    {
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::operator<<();
    }
    else
    {
      if ( v8 )
        strlen(v8);
      std::__ostream_insert<char,std::char_traits<char>>();
    }
    v9 = v56;
    v10 = dest;
    LOBYTE(dest[0]) = 0;
    v50 = dest;
    v51 = 0;
    if ( v56 )
    {
      if ( v54 >= v56 )
        v9 = v54;
      if ( !v54 )
        v9 = v56;
      v11 = v9 - (_QWORD)src;
      v12 = v11;
      if ( v11 < 0 )
      {
        v48 = &v50;
        std::__throw_length_error("basic_string::_M_replace");
      }
      if ( (unsigned __int64)v11 > 0xF )
      {
        v48 = &v50;
        sub_23A830(&v50, 0, 0, (char *)src, v11);
      }
      else
      {
        v48 = &v50;
        if ( src != dest )
        {
          if ( v11 )
          {
            if ( v11 == 1 )
              LOBYTE(dest[0]) = *(_BYTE *)src;
            else
              v10 = memcpy(dest, src, v11);
          }
          goto LABEL_27;
        }
        std::string::_M_replace_cold();
      }
LABEL_80:
      v10 = v50;
LABEL_27:
      v51 = v12;
      *((_BYTE *)v10 + v12) = 0;
      v13 = _mm_unpacklo_epi64(
              (__m128i)((unsigned __int64)&`vtable for'std::ostringstream + 24),
              (__m128i)((unsigned __int64)&`vtable for'std::stringbuf + 16));
      *(_QWORD *)&v47[8] = v13.m128i_i64[1];
      sub_1875640("%s", v13.m128i_i8[0]);
      if ( *((_DWORD *)a1 + 356) != 9 )
        sub_DC0980(a1);
      sub_DC10E0(a1);
      sub_233E40((__int64)v48);
      si128 = _mm_load_si128((const __m128i *)v47);
      v60 = (char *)&`vtable for'std::ostringstream + 64;
      v53 = si128;
      sub_233E40((__int64)&v58);
      v53.m128i_i64[1] = (__int64)&`vtable for'std::streambuf + 16;
      std::locale::~locale((std::locale *)v57);
      v15 = `VTT for'std::ostringstream[2];
      v53.m128i_i64[0] = `VTT for'std::ostringstream[1];
      *(__int64 *)((char *)v53.m128i_i64 + *(_QWORD *)(v53.m128i_i64[0] - 24)) = v15;
      v60 = (char *)&`vtable for'std::ios + 16;
      std::ios_base::~ios_base((std::ios_base *)&v60);
      v16 = *((_DWORD *)a1 + 356);
      goto LABEL_30;
    }
    v12 = n;
    if ( n > 0xF )
    {
      if ( (n & 0x8000000000000000LL) != 0LL )
      {
        v48 = &v50;
        std::__throw_length_error("basic_string::_M_create");
      }
      if ( n <= 0x1D )
      {
        *(_QWORD *)v47 = 30;
        v45 = 31;
      }
      else
      {
        v45 = n + 1;
        if ( (__int64)(n + 1) < 0 )
        {
          v48 = &v50;
          std::__throw_bad_alloc();
        }
        *(_QWORD *)v47 = n;
      }
      v48 = &v50;
      v49 = operator new(v45);
      v48 = &v50;
      sub_233E40((__int64)&v50);
      v10 = (_QWORD *)v49;
      v44 = v58;
      v50 = (_QWORD *)v49;
      dest[0] = *(_QWORD *)v47;
    }
    else
    {
      if ( !n )
      {
LABEL_85:
        v48 = &v50;
        goto LABEL_27;
      }
      v44 = v58;
      if ( n == 1 )
      {
        LOBYTE(dest[0]) = *(_BYTE *)v58;
        goto LABEL_85;
      }
      v48 = &v50;
    }
    memcpy(v10, v44, v12);
    goto LABEL_80;
  }
  if ( *((_BYTE *)a1 + 2064) )
  {
LABEL_62:
    sub_DC0980(a1);
    sub_DC10E0(a1);
    v16 = *((_DWORD *)a1 + 356);
    goto LABEL_30;
  }
  sub_DC0740(a2);
  if ( *((_DWORD *)a1 + 356) != 9 )
    sub_DC0980(a1);
  *(_QWORD *)(a2 + 24) = v8;
  return 2;
}

