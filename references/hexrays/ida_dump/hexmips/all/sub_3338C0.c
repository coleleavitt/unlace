__int64 __fastcall sub_3338C0(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  char *v4; // r13
  unsigned __int8 v5; // al
  unsigned int v6; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbx
  char **v11; // r14
  __int64 v12; // r15
  const char **v13; // rbp
  __int64 v14; // rsi
  const __m128i *v15; // r15
  const char *v16; // rbp
  const char *v17; // rsi
  __m128i *v18; // rbx
  int v19; // [rsp+4h] [rbp-5Ch]
  char *s1; // [rsp+8h] [rbp-58h] BYREF
  __int128 v21; // [rsp+10h] [rbp-50h]
  unsigned __int64 v22; // [rsp+20h] [rbp-40h]

  v22 = __readfsqword(0x28u);
  v21 = 0;
  s1 = nullptr;
  if ( (unsigned __int8)sub_1CE890((__int64 *)&s1, a1, 0, 0) )
  {
    v3 = v21;
    v4 = s1;
    if ( (_QWORD)v21 )
    {
      if ( !strcmp(s1, "runtime_newobject") )
      {
        v5 = parse_decl(a2, 0, 0, "void *__golang f(const RTYPE *);", 1);
        goto LABEL_7;
      }
      if ( (unsigned __int64)(v3 - 1) > 0x10 && !strncmp(v4, "runtime_morestack", 0x11u) )
      {
        v5 = parse_decl(a2, 0, 0, "void f();", 1);
LABEL_7:
        v6 = 2 * v5;
        goto LABEL_8;
      }
    }
    if ( !(_BYTE)byte_4CF8B8 && __cxa_guard_acquire(&byte_4CF8B8) )
    {
      v15 = &xmmword_4CE610 - 1;
      sub_333670((__int64)(&xmmword_4CE610 - 17), &xmmword_4CE610, 8);
      sub_323F50((const char **)&xmmword_4CE610 - 34, (const char **)&xmmword_4CE610 - 2);
      v16 = off_4CE600;
      v19 = dword_4CE608;
      while ( 1 )
      {
        v17 = (const char *)v15[-1].m128i_i64[0];
        v18 = (__m128i *)v15--;
        if ( strcmp(v16, v17) >= 0 )
          break;
        v15[1] = _mm_load_si128(v15);
      }
      v18->m128i_i64[0] = (__int64)v16;
      v18->m128i_i32[2] = v19;
      __cxa_guard_release(&byte_4CF8B8);
    }
    if ( !strncmp(v4, "objc_msgSend", 0xCu) )
    {
      v14 = 16;
LABEL_20:
      get_stock_tinfo(a2, v14, v8, v9);
      v6 = 2;
      goto LABEL_8;
    }
    v10 = 17;
    v11 = &off_4CE500;
    while ( v10 > 0 )
    {
      while ( 1 )
      {
        v12 = v10 >> 1;
        v13 = (const char **)&v11[2 * (v10 >> 1)];
        if ( strcmp(*v13, v4) < 0 )
          break;
        v10 >>= 1;
        if ( v12 <= 0 )
          goto LABEL_17;
      }
      v11 = (char **)(v13 + 2);
      v10 = v10 - 1 - v12;
    }
LABEL_17:
    if ( v11 != (char **)&xmmword_4CE610 && !strcmp(v4, *v11) )
    {
      v14 = *((unsigned int *)v11 + 2);
      if ( (_DWORD)v14 != 31 )
        goto LABEL_20;
    }
  }
  v6 = 0;
LABEL_8:
  if ( s1 )
  {
    *(_QWORD *)&v21 = 0;
    qfree(s1);
  }
  return v6;
}
