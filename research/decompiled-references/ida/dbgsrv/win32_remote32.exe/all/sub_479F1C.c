/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_479F1C
// Address: 0x00479F1C

//----- (00479F1C) --------------------------------------------------------
int __usercall sub_479F1C@<eax>(
        int a1@<ebx>,
        __m128i a2@<xmm0>,
        double *a3,
        _BYTE *a4,
        unsigned int a5,
        _BYTE *a6,
        int a7,
        int a8,
        char a9,
        int a10,
        _DWORD *a11,
        int a12)
{
  int v12; // eax
  unsigned int v13; // ecx
  int result; // eax
  int v15[3]; // [esp+8h] [ebp-Ch] BYREF

  v12 = sub_47F276(a2, *a3, a8 + 1, 1, v15, a6, a7);
  v13 = -1;
  if ( a5 != -1 )
    v13 = a5 - (v15[0] == 45) - (a8 > 0);
  result = sub_47F193(a1, (unsigned int)&a4[(v15[0] == 45) + (a8 > 0)], v13, a8 + 1, v15, v12, a12);
  if ( !result )
    return sub_479FBD(a1, a4, a5, a8, a9, a10, (int)v15, 0, a11);
  *a4 = 0;
  return result;
}
