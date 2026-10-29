/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qseek
// Address: 0x000AF6A0

//----- (000AF6A0) --------------------------------------------------------
int __cdecl qseek(int a1, int a2, int a3, int a4)
{
  __int64 v4; // kr00_8

  v4 = lseek64(a1, a2, a3, a4);
  if ( (HIDWORD(v4) & (unsigned int)v4) == 0xFFFFFFFF )
    set_qerrno(1);
  return v4;
}
// 18040: using guessed type __int64 __cdecl lseek64(_DWORD, _DWORD, _DWORD, _DWORD);
