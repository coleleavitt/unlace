/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80C2300
// Address: 0x080C2300

//----- (080C2300) --------------------------------------------------------
int __cdecl sub_80C2300(int a1, char *s)
{
  size_t v2; // eax
  int v3; // eax
  int v4; // ebx
  int v5; // edi

  v2 = strlen(s);
  v3 = (*(int (__cdecl **)(char *, size_t))(dword_811E820 + 16))(s, v2);
  if ( !v3 )
    return 0;
  v4 = v3;
  v5 = (*(int (__cdecl **)(int, _DWORD, _DWORD, _DWORD))(dword_811E820 + 44))(v3, 0, 0, 0);
  (*(void (__cdecl **)(int))(dword_811E820 + 8))(v4);
  return v5;
}
// 811E820: using guessed type int dword_811E820;
