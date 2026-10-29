/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qtell
// Address: 0x0007DDB4

//----- (0007DDB4) --------------------------------------------------------
__int64 __fastcall qtell(int a1)
{
  __int64 v1; // r4

  v1 = lseek64(a1, 1, 0, 0, 1);
  if ( ((unsigned int)v1 & HIDWORD(v1)) == 0xFFFFFFFF )
    set_qerrno(1);
  return v1;
}
// 19754: using guessed type __int64 __fastcall lseek64(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
