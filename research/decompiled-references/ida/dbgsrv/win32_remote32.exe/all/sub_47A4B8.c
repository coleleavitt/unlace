/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47A4B8
// Address: 0x0047A4B8

//----- (0047A4B8) --------------------------------------------------------
int __usercall sub_47A4B8@<eax>(
        int a1@<ebx>,
        __m128i a2@<xmm0>,
        int *a3,
        char *a4,
        unsigned int a5,
        _BYTE *a6,
        int a7,
        int a8,
        int a9,
        char a10,
        int a11,
        _DWORD *a12,
        int a13)
{
  int v14; // ebx
  char v15; // cl
  int v16; // ecx
  bool v17; // zf
  int v18; // esi
  int v19; // [esp-8h] [ebp-18h]
  char v20; // [esp+Ch] [ebp-4h]

  if ( !a4 || !a5 || !a6 || !a7 )
  {
    *sub_46B984() = 22;
    sub_467EF4(a1, (int)a4);
    return 22;
  }
  v14 = 0;
  if ( a8 == 65 || a8 == 69 || a8 == 70 || (v20 = 0, a8 == 71) )
    v20 = 1;
  v15 = a10;
  if ( (a10 & 8) == 0 )
  {
    v16 = sub_479B08(a3);
    if ( v16 )
    {
      if ( a3[1] >= 0 )
        return sub_47A35C(v16, 0, a4, a5, v20);
      else
        return sub_47A35C(v16, 1u, a4, a5, v20);
    }
    v15 = a10;
  }
  if ( (v15 & 0x10) != 0 )
    v19 = 3;
  else
    v19 = 2;
  if ( (v15 & 0x20) != 0 )
    v14 = a13;
  if ( a8 > 97 )
  {
    v18 = a8 - 101;
    v17 = a8 == 101;
  }
  else
  {
    if ( a8 == 97 || a8 == 65 )
      return sub_479C0D(v14, a2, (int)a3, a4, a5, a6, a7, a9, v20, v19, a12, v14);
    v18 = a8 - 69;
    v17 = a8 == 69;
  }
  if ( v17 )
    return sub_479F1C(v14, a2, (double *)a3, a4, a5, a6, a7, a9, v20, v19, a12, v14);
  if ( v18 == 1 )
    return sub_47A105(v14, a2, (double *)a3, a4, a5, a6, a7, a9, a12, v14);
  return sub_47A290(a2, (double *)a3, a4, a5, a6, a7, a9, v20, v19, v14, a12);
}
