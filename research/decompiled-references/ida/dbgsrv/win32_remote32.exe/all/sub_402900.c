/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_402900
// Address: 0x00402900

//----- (00402900) --------------------------------------------------------
char __thiscall sub_402900(int this, unsigned int a2, _BYTE *a3)
{
  LPVOID v4; // eax
  unsigned int i; // edx

  if ( a2 > *(_DWORD *)(this + 8) )
  {
    v4 = sub_453B00(this, *(void **)this, a2, 1u);
    *(_DWORD *)this = v4;
  }
  for ( i = *(_DWORD *)(this + 4); i < a2; ++i )
  {
    LOBYTE(v4) = *a3;
    *(_BYTE *)(i + *(_DWORD *)this) = *a3;
  }
  *(_DWORD *)(this + 4) = a2;
  return (char)v4;
}
// 402936: variable 'v4' is possibly undefined
