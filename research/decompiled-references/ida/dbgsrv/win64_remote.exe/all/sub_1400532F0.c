/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400532F0
// Address: 0x00000001400532F0

//----- (00000001400532F0) ----------------------------------------------------
_QWORD *__fastcall sub_1400532F0(_QWORD *a1)
{
  _QWORD *v2; // rax

  *a1 = &off_140099238;
  a1[1] = 0;
  a1[2] = 0;
  v2 = operator new(0x30u);
  *v2 = v2;
  v2[1] = v2;
  v2[2] = v2;
  *((_WORD *)v2 + 12) = 257;
  a1[1] = v2;
  return a1;
}
// 140099238: using guessed type __int64 (__fastcall *off_140099238)(void *Block);
