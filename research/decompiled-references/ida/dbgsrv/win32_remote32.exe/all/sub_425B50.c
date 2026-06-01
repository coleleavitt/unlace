/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_425B50
// Address: 0x00425B50

//----- (00425B50) --------------------------------------------------------
char __userpurge sub_425B50@<al>(int a1@<ebx>, __m128i a2@<xmm0>, const char *a3, int a4, char *a5, int a6)
{
  _DWORD v7[2]; // [esp+0h] [ebp-8h] BYREF

  if ( !a5 )
    return 0;
  v7[1] = a4;
  v7[0] = &off_48BE8C;
  return sub_428A70(a1, a2, a3, a5, a6, (int)v7, 0);
}
// 48BE8C: using guessed type _UNKNOWN *off_48BE8C;
