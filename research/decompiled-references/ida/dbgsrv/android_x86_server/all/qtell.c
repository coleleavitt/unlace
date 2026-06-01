/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qtell
// Address: 0x000AF650

//----- (000AF650) --------------------------------------------------------
int __cdecl qtell(int a1)
{
  __int64 v1; // kr00_8

  v1 = lseek64(a1, 0, 0, 1);
  if ( (HIDWORD(v1) & (unsigned int)v1) == 0xFFFFFFFF )
    set_qerrno(1);
  return v1;
}
// 18040: using guessed type __int64 __cdecl lseek64(_DWORD, _DWORD, _DWORD, _DWORD);
