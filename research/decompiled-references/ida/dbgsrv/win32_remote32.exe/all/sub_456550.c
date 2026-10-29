/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_456550
// Address: 0x00456550

//----- (00456550) --------------------------------------------------------
__int16 __thiscall sub_456550(int this, unsigned int a2, _WORD *a3)
{
  LPVOID v4; // eax
  unsigned int i; // edx

  if ( a2 > *(_DWORD *)(this + 8) )
  {
    v4 = sub_453B00(this, *(void **)this, a2, 2u);
    *(_DWORD *)this = v4;
  }
  for ( i = *(_DWORD *)(this + 4); i < a2; ++i )
  {
    LOWORD(v4) = *a3;
    *(_WORD *)(*(_DWORD *)this + 2 * i) = *a3;
  }
  *(_DWORD *)(this + 4) = a2;
  return (__int16)v4;
}
// 456588: variable 'v4' is possibly undefined
