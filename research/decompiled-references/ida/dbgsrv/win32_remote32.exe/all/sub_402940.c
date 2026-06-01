/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_402940
// Address: 0x00402940

//----- (00402940) --------------------------------------------------------
void __thiscall sub_402940(int this, unsigned int a2)
{
  if ( a2 > *(_DWORD *)(this + 8) )
    *(_DWORD *)this = sub_453B00(this, *(void **)this, a2, 1u);
  *(_DWORD *)(this + 4) = a2;
}
