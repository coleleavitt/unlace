/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_474C1A
// Address: 0x00474C1A

//----- (00474C1A) --------------------------------------------------------
int __usercall sub_474C1A@<eax>(int a1@<ebx>, int a2@<edi>, int a3, LONG lDistanceToMove, int a5, DWORD dwMoveMethod)
{
  void *v6; // eax
  int result; // eax
  DWORD LastError; // eax
  int v9[2]; // [esp+8h] [ebp-8h] BYREF

  v6 = (void *)sub_4736C4(a1, a2, a3);
  if ( v6 == (void *)-1 )
  {
    *sub_46B984() = 9;
    return -1;
  }
  if ( !off_4B4054(v6, lDistanceToMove, a5, (DWORD *)v9, dwMoveMethod) )
  {
    LastError = GetLastError();
    sub_46B94E(LastError);
    return -1;
  }
  if ( (v9[1] & v9[0]) == -1 )
    return -1;
  result = v9[0];
  *((_BYTE *)&(*(&dword_4B7B38 + (a3 >> 6)))[1].LockSemaphore + 56 * (a3 & 0x3F)) &= ~2u;
  return result;
}
// 4B4054: using guessed type int (__stdcall *off_4B4054)(HANDLE hFile, LONG lDistanceToMove, int a3, DWORD *a4, DWORD dwMoveMethod);
