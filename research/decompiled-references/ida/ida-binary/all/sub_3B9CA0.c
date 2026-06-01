__int64 __fastcall sub_3B9CA0(
        __int64 a1,
        const char *a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  int v10; // r8d
  int v11; // r9d
  const char *v12; // rdx
  const char *v13; // rsi
  __int64 v15; // rbx
  __int64 srclang_parser_internal; // rbx
  const char *v17; // rsi
  unsigned int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __m128 v23; // xmm4
  __m128 v24; // xmm5
  unsigned int v25; // ebp
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __m128 v30; // xmm4
  __m128 v31; // xmm5
  void *v32; // r12
  void *v33; // rdi
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __m128 v38; // xmm4
  __m128 v39; // xmm5
  void *src; // [rsp+0h] [rbp-38h] BYREF
  __int128 v41; // [rsp+8h] [rbp-30h]
  unsigned __int64 v42; // [rsp+18h] [rbp-20h]

  v42 = __readfsqword(0x28u);
  sub_3B8B90(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
  if ( !(_BYTE)byte_8CF9C0 && __cxa_guard_acquire(&byte_8CF9C0) )
  {
    qword_8CF9D0 = nullptr;
    xmmword_8CF9D8 = 0;
    __cxa_atexit((void (*)(void *))sub_16B530, &qword_8CF9D0, &off_85BC80);
    __cxa_guard_release(&byte_8CF9C0);
  }
  src = nullptr;
  v12 = "*.hxx;*.hpp;*.h";
  v41 = 0;
  if ( (unsigned __int64)xmmword_8CF9D8 > 1 )
    LODWORD(v12) = (_DWORD)qword_8CF9D0;
  v13 = nullptr;
  if ( (unsigned __int8)sub_486440((unsigned int)&src, 0, (_DWORD)v12, 1115, v10, v11, (char)src) )
  {
    v15 = v41;
    if ( (unsigned __int64)v41 > 1 )
    {
      v32 = src;
      v33 = qword_8CF9D0;
      if ( *((_QWORD *)&xmmword_8CF9D8 + 1) < (unsigned __int64)v41 )
      {
        qword_8CF9D0 = (void *)qvector_reserve(&qword_8CF9D0, qword_8CF9D0, v41, 1);
        v33 = qword_8CF9D0;
      }
      *(_QWORD *)&xmmword_8CF9D8 = v15;
      memmove(v33, v32, v15 - 1);
      *((char *)qword_8CF9D0 + v15 - 1) = 0;
    }
    else
    {
      *(_QWORD *)&xmmword_8CF9D8 = 0;
    }
    srclang_parser_internal = get_srclang_parser_internal();
    v17 = &s1;
    if ( (_QWORD)v41 )
      v17 = (const char *)src;
    v18 = (*(__int64 (__fastcall **)(_QWORD, const char *, __int64))(srclang_parser_internal + 32))(0, v17, 65600);
    v25 = v18;
    if ( v18 )
    {
      sub_169700(
        (int)"Total %d errors\n",
        v18,
        v19,
        v20,
        v21,
        v22,
        (__m128)0LL,
        a4,
        a5,
        a6,
        v23,
        v24,
        a9,
        a10,
        (char)src);
      v13 = (const char *)v25;
      sub_169630(
        (int)"ICON ERROR\nAUTOHIDE NONE\nThere were %d error(s). Please look at the message window to see the details",
        v25,
        v34,
        v35,
        v36,
        v37,
        (__m128)0LL,
        a4,
        a5,
        a6,
        v38,
        v39,
        a9,
        a10,
        (char)src);
    }
    else
    {
      v13 = &s1;
      if ( (_QWORD)v41 )
        v13 = (const char *)src;
      sub_169700(
        (int)"%s: successfully compiled\n",
        (__int64)v13,
        v19,
        v20,
        v21,
        v22,
        (__m128)0LL,
        a4,
        a5,
        a6,
        v23,
        v24,
        a9,
        a10,
        (char)src);
      sub_16B9E0(
        (int)"Compilation successful",
        (__int64)v13,
        v26,
        v27,
        v28,
        v29,
        (__m128)0LL,
        a4,
        a5,
        a6,
        v30,
        v31,
        a9,
        a10,
        (char)src);
    }
    if ( srclang_parser_internal )
      --*(_DWORD *)(srclang_parser_internal + 12);
  }
  if ( src )
  {
    *(_QWORD *)&v41 = 0;
    qfree(src, v13);
  }
  return 1;
}
