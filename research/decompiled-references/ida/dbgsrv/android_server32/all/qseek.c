/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qseek
// Address: 0x0007DDDE

//----- (0007DDDE) --------------------------------------------------------
__int64 __fastcall qseek(int a1, int a2, int a3, int a4, int a5)
{
  __int64 v5; // r4

  v5 = lseek64(a1, a5, a3, a4, a5);
  if ( ((unsigned int)v5 & HIDWORD(v5)) == 0xFFFFFFFF )
    set_qerrno(1);
  return v5;
}
// 19754: using guessed type __int64 __fastcall lseek64(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
