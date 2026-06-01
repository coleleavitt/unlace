/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140068B60
// Address: 0x0000000140068B60

//----- (0000000140068B60) ----------------------------------------------------
void __fastcall __noreturn sub_140068B60(void (**this)(const char *, ...), unsigned __int8 a2)
{
  int v2; // r15d
  const char *v4; // r14
  unsigned __int64 v5; // rsi
  char *v6; // rdi
  const char *v7; // r9
  const char *v8; // r8
  const char *v9; // r9
  void (*v10)(const char *, ...); // rdi
  const char *v11; // rbx
  char *v12; // rax
  _BYTE *v13; // rax
  const char *v14; // rax
  _QWORD v15[7]; // [rsp+20h] [rbp-38h] BYREF

  v2 = a2;
  unknown_libname_41(v15);
  v4 = __crt_win32_buffer_debug_info::file_name((__crt_win32_buffer_debug_info *)this);
  v5 = 0;
  if ( v4 )
  {
    do
    {
      v6 = (char *)sub_1400684C0(this, v5);
      if ( *v6 )
      {
        v7 = "    ";
        if ( *((_DWORD *)v6 + 8) )
          v7 = " ...";
        sub_140024520((__int64)v15, "  -%c%s", (unsigned int)*v6, v7);
      }
      else
      {
        sub_1400048B0((__int64)v15, "        ");
      }
      v8 = *((const char **)v6 + 1);
      if ( v8 )
      {
        v9 = pNodeName;
        if ( *((_DWORD *)v6 + 8) )
          v9 = " ...";
        sub_140024520((__int64)v15, "  (--%s%s)", v8, v9);
      }
      sub_1400048B0((__int64)v15, (const char *)&word_1400929C4);
      sub_1400048B0((__int64)v15, *((const char **)v6 + 2));
      sub_1400048B0((__int64)v15, "\n");
      ++v5;
    }
    while ( v5 < (unsigned __int64)v4 );
  }
  v10 = (void (*)(const char *, ...))sub_140020810;
  if ( *(this + 9) )
    v10 = *(this + 9);
  v11 = sub_140001880(v15);
  v12 = (char *)sub_140001880(this + 3);
  v13 = sub_14005D9D0(v12);
  v10("Usage: %s [options]\n%s", v13, v11);
  if ( !sub_1400052E0((__int64)(this + 6)) )
  {
    v14 = sub_140001880(this + 6);
    v10("\n%s\n", v14);
  }
  sub_14005A640(v2);
}
// 140001620: using guessed type __int64 __fastcall unknown_libname_41(_QWORD);
// 1400929C4: using guessed type __int16 word_1400929C4;
