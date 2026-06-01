/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8C440
// Address: 0x0008C440

//----- (0008C440) --------------------------------------------------------
_BYTE *__fastcall sub_8C440(int *a1, _BYTE *a2, int a3)
{
  _BYTE *v4; // r5

  v4 = &a2[-*a1];
  if ( a3 == *a1 + a1[1] )
  {
    a1[1] = (int)v4;
    *a2 = 0;
    return &v4[*a1];
  }
  else
  {
    sub_8BF78(a1, (int)&a2[-*a1], a3 - (_DWORD)a2);
    return &v4[*a1];
  }
}
