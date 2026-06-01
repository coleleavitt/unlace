/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80CEFD0
// Address: 0x080CEFD0

//----- (080CEFD0) --------------------------------------------------------
int __cdecl sub_80CEFD0(int a1, __int64 a2, int a3)
{
  int v3; // esi

  if ( !a1 )
  {
    v3 = -1;
    sub_80C7880(1);
    *__errno_location() = 9;
    sub_80C7880(1);
    return v3;
  }
  v3 = fseeko64(a1, a2, HIDWORD(a2), a3);
  if ( !v3 )
    return v3;
  sub_80C7880(1);
  return v3;
}
// 804BD50: using guessed type int __cdecl fseeko64(_DWORD, _DWORD, _DWORD, _DWORD);
