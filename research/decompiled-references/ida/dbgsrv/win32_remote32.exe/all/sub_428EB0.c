/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_428EB0
// Address: 0x00428EB0

//----- (00428EB0) --------------------------------------------------------
char __userpurge sub_428EB0@<al>(__m128i a1@<xmm0>, int a2, int a3, char *a4, int a5)
{
  _DWORD v6[2]; // [esp+4h] [ebp-8h] BYREF

  if ( a2 )
  {
    sub_423B70(a2);
    *(_BYTE *)a2 = 2;
    *(_DWORD *)(a2 + 8) = 0;
  }
  v6[1] = a3;
  v6[0] = &off_48BE8C;
  return sub_428B60(a1, (char *)a2, a4, a5, (int)v6);
}
// 48BE8C: using guessed type _UNKNOWN *off_48BE8C;
