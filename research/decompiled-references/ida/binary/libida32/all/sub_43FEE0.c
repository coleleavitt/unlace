unsigned __int64 __fastcall sub_43FEE0(__int64 a1)
{
  __int64 v2; // rbp
  size_t v3; // rax
  size_t v4; // r12
  size_t v5; // rbx
  const char *v6; // rsi
  void *ptr; // [rsp+0h] [rbp-58h] BYREF
  __int128 v8; // [rsp+8h] [rbp-50h]
  char s[24]; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v10; // [rsp+38h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a1 + 772) & 1) != 0 )
  {
    v2 = *(_QWORD *)(a1 + 1480);
    sub_4EF9B0(*(_QWORD *)(v2 + 2448), v2 + 2408);
    sub_4EF970(v2 + 2408);
    if ( !(unsigned __int8)sub_4F0B10(*(_QWORD *)(v2 + 2448), v2 + 2408, "$ memory mappings", "$ memory mappings", 12) )
      sub_4EFFD0(v2 + 2408, "$ memory mappings", "$ memory mappings", 12);
    if ( !getinf_buf(1, s, 16) )
      s[0] = 0;
    ptr = nullptr;
    v8 = 0;
    v3 = strlen(s);
    v4 = v3 + 1;
    v5 = v3;
    ptr = (void *)qvector_reserve(&ptr, 0, v3 + 1, 1);
    *(_QWORD *)&v8 = v4;
    memmove(ptr, s, v5);
    v6 = haystack;
    *((_BYTE *)ptr + v5) = 0;
    if ( (_QWORD)v8 )
      v6 = (const char *)ptr;
    sub_38CF20(
      (int)"IDA for '%s' supports memory mapping.\n"
           "If you see references to the memory addresses not\n"
           "belonging to the program, you may want to use it.\n"
           "The memory mapping is available at\n"
           "Options, General, Analysis, Memory mapping\n",
      v6);
  }
  return v10 - __readfsqword(0x28u);
}

