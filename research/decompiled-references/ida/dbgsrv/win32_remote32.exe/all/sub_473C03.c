/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_473C03
// Address: 0x00473C03

//----- (00473C03) --------------------------------------------------------
int __usercall sub_473C03@<eax>(int a1@<ebx>, int a2@<edi>, int a3, __int16 *lpWideCharStr, DWORD a5)
{
  unsigned int v5; // edi
  int v7; // [esp+10h] [ebp-20h]

  if ( a3 == -2 )
  {
    *sub_46B971() = 0;
    *sub_46B984() = 9;
    return -1;
  }
  if ( a3 < 0
    || (unsigned int)a3 >= dword_4B7D38[0]
    || (a1 = a3 >> 6, v7 = 56 * (a3 & 0x3F),
                      (*((_BYTE *)&(*(&dword_4B7B38 + (a3 >> 6)))[1].LockSemaphore + v7) & 1) == 0) )
  {
    *sub_46B971() = 0;
    *sub_46B984() = 9;
    goto LABEL_13;
  }
  if ( a5 > 0x7FFFFFFF )
  {
    *sub_46B971() = 0;
    *sub_46B984() = 22;
LABEL_13:
    sub_467EF4(a1, a2);
    return -1;
  }
  sub_473448(a3);
  v5 = -1;
  if ( (*((_BYTE *)&(*(&dword_4B7B38 + a1))[1].LockSemaphore + v7) & 1) != 0 )
  {
    v5 = sub_473D17(-1, a3, lpWideCharStr, a5);
  }
  else
  {
    *sub_46B984() = 9;
    *sub_46B971() = 0;
  }
  sub_4734FD(a3);
  return v5;
}
// 4B7D38: using guessed type int dword_4B7D38[];
