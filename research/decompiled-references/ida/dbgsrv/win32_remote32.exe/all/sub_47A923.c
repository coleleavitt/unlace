/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47A923
// Address: 0x0047A923

//----- (0047A923) --------------------------------------------------------
int __usercall sub_47A923@<eax>(int a1@<ebx>, int a2@<edi>, int a3)
{
  int v4; // [esp+4h] [ebp-10h] BYREF
  int *v5; // [esp+8h] [ebp-Ch] BYREF
  int v6; // [esp+Ch] [ebp-8h] BYREF

  if ( a3 == -2 )
  {
    *sub_46B984() = 9;
  }
  else
  {
    if ( a3 >= 0
      && (unsigned int)a3 < dword_4B7D38[0]
      && (*(_BYTE *)(&(*(&dword_4B7B38 + (a3 >> 6)))[1].LockSemaphore + 14 * (a3 & 0x3F)) & 1) != 0 )
    {
      v6 = a3;
      v5 = &a3;
      v4 = a3;
      return sub_47A881(a1, &v4, &v5, &v6);
    }
    *sub_46B984() = 9;
    sub_467EF4(a1, a2);
  }
  return -1;
}
// 4B7D38: using guessed type int dword_4B7D38[];
