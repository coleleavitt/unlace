/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_453B00
// Address: 0x00453B00

//----- (00453B00) --------------------------------------------------------
LPVOID __stdcall sub_453B00(int a3, void *a4, unsigned int a5, unsigned int a6)
{
  unsigned int v6; // esi
  unsigned int v7; // edi
  signed int v8; // eax
  LPVOID v9; // edi

  if ( !a3 )
  {
    if ( byte_4B70F0 )
      __debugbreak();
    sub_4533F0(2676);
  }
  v6 = a5;
  v7 = 2 * *(_DWORD *)(a3 + 8);
  if ( v7 > a5 )
    v6 = 2 * *(_DWORD *)(a3 + 8);
  if ( a6 && v6 && v6 > 0xFFFFFFFF / a6 )
  {
    if ( a5 >= v7 || a5 && a5 > 0xFFFFFFFF / a6 )
LABEL_22:
      sub_453970();
    v6 = a5;
  }
  v8 = a6 * v6;
  if ( a6 * v6 >= 0x7FFFFFFF )
    goto LABEL_22;
  if ( !v8 )
  {
    sub_46C918(a4);
    goto LABEL_22;
  }
  if ( v8 <= 0 )
  {
    *sub_46B984() = 12;
LABEL_16:
    sub_45CC20(1);
    goto LABEL_22;
  }
  v9 = sub_46D26A(a4, a6 * v6);
  if ( !v9 )
    goto LABEL_16;
  *(_DWORD *)(a3 + 8) = v6;
  return v9;
}
// 453B7E: conditional instruction was optimized away because edi.4==0
// 4B70F0: using guessed type char byte_4B70F0;
