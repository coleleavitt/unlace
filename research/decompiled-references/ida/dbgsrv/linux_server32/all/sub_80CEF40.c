/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80CEF40
// Address: 0x080CEF40

//----- (080CEF40) --------------------------------------------------------
int __cdecl sub_80CEF40(int a1)
{
  __int64 v1; // rax
  int v2; // esi

  if ( !a1 )
  {
    v2 = -1;
    sub_80C7880(1);
    *__errno_location() = 9;
    sub_80C7880(1);
    return v2;
  }
  v1 = ftello64(a1);
  v2 = v1;
  if ( (HIDWORD(v1) & (unsigned int)v1) != 0xFFFFFFFF )
    return v2;
  sub_80C7880(1);
  return v2;
}
// 804B7B0: using guessed type __int64 __cdecl ftello64(_DWORD);
