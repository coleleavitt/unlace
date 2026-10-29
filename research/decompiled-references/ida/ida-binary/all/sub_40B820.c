__int64 sub_40B820()
{
  __int64 v0; // rbx
  void (__fastcall *hexdsp)(__int64, __int64); // rax
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // r12
  __int64 i; // rbp
  __int64 *v7; // rax
  __int64 v8; // rdi
  void (__fastcall *v9)(__int64, __int64); // rax
  void (__fastcall *v10)(__int64, __int64); // rax
  void (__fastcall *v11)(__int64, __int64); // rax

  v0 = xmmword_8BDEA8;
  qword_8BDEA0 = -1;
  if ( (_QWORD)xmmword_8BDEA8 )
  {
    if ( (*(_DWORD *)(xmmword_8BDEA8 + 104))-- == 1 )
    {
      hexdsp = (void (__fastcall *)(__int64, __int64))get_hexdsp();
      hexdsp(564, v0);
      v3 = *(_QWORD *)(v0 + 160);
      if ( v3 )
      {
        *(_QWORD *)(v0 + 168) = 0;
        qfree(v3, (const char *)v0);
      }
      v4 = *(_QWORD *)(v0 + 128);
      if ( v4 )
      {
        v5 = *(_QWORD *)(v0 + 136);
        if ( v5 )
        {
          for ( i = 0; i != v5; ++i )
          {
            v7 = (__int64 *)(v4 + 32 * i);
            v8 = *v7;
            if ( *v7 )
            {
              v7[1] = 0;
              qfree(v8, (const char *)v0);
              v4 = *(_QWORD *)(v0 + 128);
            }
          }
        }
        *(_QWORD *)(v0 + 136) = 0;
        qfree(v4, (const char *)v0);
      }
      v9 = (void (__fastcall *)(__int64, __int64))get_hexdsp();
      v9(493, v0 + 16);
      v10 = (void (__fastcall *)(__int64, __int64))get_hexdsp();
      v10(444, v0 + 16);
      v11 = (void (__fastcall *)(__int64, __int64))get_hexdsp();
      v11(130, v0);
    }
  }
  word_8BDEB8 = 0;
  xmmword_8BDEA8 = 0;
  return 0;
}
