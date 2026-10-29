/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_74AF4
// Address: 0x00074AF4

//----- (00074AF4) --------------------------------------------------------
_DWORD *__fastcall sub_74AF4(int *a1)
{
  _DWORD *v2; // r0
  _DWORD *v3; // r5

  if ( !a1 )
    return nullptr;
  if ( a1[3] >= 0 && a1[4] >= 0 )
  {
    v2 = sub_808A4(0x30u);
    v2[2] = a1;
    *v2 = 4;
    v3 = v2;
    sub_74878((int)v2);
    return v3;
  }
  (*(void (__fastcall **)(int *))(*a1 + 8))(a1);
  return nullptr;
}
