/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47CD09
// Address: 0x0047CD09

//----- (0047CD09) --------------------------------------------------------
bool __usercall sub_47CD09@<al>(int a1@<ebx>, int a2@<edi>, _DWORD *a3)
{
  void *v4; // esi
  LARGE_INTEGER FileSize; // [esp+0h] [ebp-10h] BYREF
  __int64 v6; // [esp+8h] [ebp-8h] BYREF

  if ( (a3[3] & 8) != 0 )
    return 1;
  if ( (a3[3] & 0xC0) != 0 && *a3 == a3[1] )
    return 0;
  v4 = (void *)sub_4736C4(a1, a2, a3[4]);
  if ( v4 == (void *)-1 || !off_4B4054(v4, 0, 0, (DWORD *)&v6, 1u) || !GetFileSizeEx(v4, &FileSize) )
    return 0;
  return v6 == FileSize.QuadPart;
}
// 4B4054: using guessed type int (__stdcall *off_4B4054)(HANDLE hFile, LONG lDistanceToMove, int a3, DWORD *a4, DWORD dwMoveMethod);
