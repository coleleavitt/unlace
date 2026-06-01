/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_406080
// Address: 0x00406080

//----- (00406080) --------------------------------------------------------
char __thiscall sub_406080(int this, char a2)
{
  unsigned int v3; // eax

  v3 = *(_DWORD *)(this + 4) + 1;
  if ( v3 > *(_DWORD *)(this + 8) )
    *(_DWORD *)this = sub_453B00(this, *(void **)this, v3, 1u);
  *(_BYTE *)(*(_DWORD *)(this + 4) + *(_DWORD *)this) = a2;
  ++*(_DWORD *)(this + 4);
  return a2;
}
