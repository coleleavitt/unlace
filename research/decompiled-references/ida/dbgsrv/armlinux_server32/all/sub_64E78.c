/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_64E78
// Address: 0x00064E78

//----- (00064E78) --------------------------------------------------------
int __fastcall sub_64E78(void **a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  unsigned int v4; // r6
  signed int v7; // r4
  int v8; // r9
  int v9; // r11
  unsigned int v10; // r10
  void *v11; // r1
  int v12; // r4
  signed int v13; // r0

  v4 = a3;
  if ( a4 == -1 )
  {
    v12 = 0;
  }
  else
  {
    v7 = sub_64D88((int)a1, a4, a3 >> 1);
    if ( v7 <= 0 )
      return -1;
    if ( a1 )
    {
      v8 = (int)a1[1];
      v9 = v8 - 1;
      v10 = v8 + 1;
      if ( !v8 )
      {
        v8 = 1;
        v10 = 2;
        v9 = 0;
      }
      v11 = *a1;
      if ( (unsigned int)a1[2] < v10 )
      {
        v11 = sub_78018((int)a1, v11, v10, 1u);
        *a1 = v11;
      }
      a1[1] = (void *)v10;
      *((_BYTE *)v11 + v9) = 58;
      *((_BYTE *)*a1 + v8) = 0;
    }
    v12 = v7 + 1;
    v4 -= v4 >> 1;
  }
  v13 = sub_64D88((int)a1, a2, v4);
  if ( v13 > 0 )
    return v13 + v12;
  return -1;
}
