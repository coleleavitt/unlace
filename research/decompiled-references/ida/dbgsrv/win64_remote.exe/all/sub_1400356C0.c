/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400356C0
// Address: 0x00000001400356C0

//----- (00000001400356C0) ----------------------------------------------------
__int64 __fastcall sub_1400356C0(const char **a1, char a2)
{
  const char *v3; // rcx
  unsigned __int64 v5; // rax
  const char *v6; // rdx
  char *v7; // rcx

  v3 = a1[1];
  v5 = (unsigned __int64)(v3 - 1);
  if ( !v3 )
    v5 = 0;
  if ( v5 >= 0x400 )
  {
    v6 = Str1;
    if ( v3 )
      v6 = *a1;
    sub_140002CE0((struct __crt_locale_pointers *)&dword_140091764, v6);
    v7 = (char *)*a1;
    if ( *a1 )
    {
      a1[1] = nullptr;
      j_free(v7);
      *a1 = nullptr;
      a1[2] = nullptr;
    }
  }
  sub_140004830((__int64)a1, a2);
  return 0;
}
// 140091764: using guessed type int dword_140091764;
