/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_AF430
// Address: 0x000AF430

//----- (000AF430) --------------------------------------------------------
int __cdecl sub_AF430(char *file, unsigned __int16 a2, int a3)
{
  int v3; // eax
  int v4; // esi
  int v5; // eax

  v3 = open(file, 32834, a2);
  if ( v3 == -1 )
  {
    set_qerrno(1);
    return -1;
  }
  v4 = v3;
  if ( !sub_AF2B0(v3, 66, a3) )
  {
    if ( !ftruncate64(v4, 0, 0) )
      return v4;
    set_qerrno(1);
  }
  v5 = close(v4);
  v4 = -1;
  if ( v5 == -1 )
    set_qerrno(1);
  return v4;
}
// 18020: using guessed type int __cdecl ftruncate64(_DWORD, _DWORD, _DWORD);
