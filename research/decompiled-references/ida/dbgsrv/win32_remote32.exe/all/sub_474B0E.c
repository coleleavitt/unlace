/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_474B0E
// Address: 0x00474B0E

//----- (00474B0E) --------------------------------------------------------
int __usercall sub_474B0E@<eax>(int a1@<ebx>, int a2, LONG lDistanceToMove, int a4, DWORD dwMoveMethod)
{
  int v5; // esi
  int v7; // [esp+18h] [ebp-20h]

  if ( a2 == -2 )
  {
    *sub_46B971() = 0;
    *sub_46B984() = 9;
    return -1;
  }
  if ( a2 < 0
    || (unsigned int)a2 >= dword_4B7D38[0]
    || (v7 = 56 * (a2 & 0x3F), (*((_BYTE *)&(*(&dword_4B7B38 + (a2 >> 6)))[1].LockSemaphore + v7) & 1) == 0) )
  {
    *sub_46B971() = 0;
    *sub_46B984() = 9;
    sub_467EF4(a1, a2);
    return -1;
  }
  sub_473448(a2);
  v5 = -1;
  if ( (*((_BYTE *)&(*(&dword_4B7B38 + (a2 >> 6)))[1].LockSemaphore + v7) & 1) != 0 )
  {
    v5 = sub_474C1A(-1, a2, a2, lDistanceToMove, a4, dwMoveMethod);
  }
  else
  {
    *sub_46B984() = 9;
    *sub_46B971() = 0;
  }
  sub_4734FD(a2);
  return v5;
}
// 4B7D38: using guessed type int dword_4B7D38[];
