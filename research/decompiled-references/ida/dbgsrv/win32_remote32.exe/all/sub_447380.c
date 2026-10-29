/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_447380
// Address: 0x00447380

//----- (00447380) --------------------------------------------------------
void __thiscall sub_447380(int this, unsigned int a2, _DWORD *a3)
{
  unsigned int i; // esi
  _DWORD *v5; // eax
  int v6; // edx

  if ( a2 > *(_DWORD *)(this + 8) )
    *(_DWORD *)this = sub_453B00(this, *(void **)this, a2, 8u);
  for ( i = *(_DWORD *)(this + 4); i < a2; ++i )
  {
    v5 = *(_DWORD **)this;
    v6 = a3[1];
    v5[2 * i] = *a3;
    v5[2 * i + 1] = v6;
  }
  *(_DWORD *)(this + 4) = a2;
}
