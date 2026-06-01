/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80D3A50
// Address: 0x080D3A50

//----- (080D3A50) --------------------------------------------------------
int __cdecl sub_80D3A50(int a1, char *s, int a3)
{
  size_t v3; // eax
  void *v4; // esp
  const char *v5; // eax
  int result; // eax
  char v7; // [esp-Ch] [ebp-38h] BYREF
  int v8; // [esp+0h] [ebp-2Ch]
  unsigned int v9; // [esp+10h] [ebp-1Ch]

  v8 = a3;
  v9 = __readgsdword(0x14u);
  if ( a1 )
  {
    v3 = strlen(s);
    v4 = alloca(v3 + 112);
    v5 = sub_80D35D0(s, &v7, v3 + 100);
    result = __vfprintf_chk(a1, 1, v5, v8);
  }
  else
  {
    sub_80C7880(1);
    *__errno_location() = 9;
    sub_80C7880(1);
    result = -1;
  }
  if ( v9 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return result;
}
// 804B1B0: using guessed type int __cdecl __vfprintf_chk(_DWORD, _DWORD, _DWORD, _DWORD);
