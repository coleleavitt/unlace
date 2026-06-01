/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4028B0
// Address: 0x004028B0

//----- (004028B0) --------------------------------------------------------
void __thiscall sub_4028B0(int this, unsigned int a2)
{
  if ( a2 <= *(_DWORD *)(this + 4) )
  {
    if ( a2 != *(_DWORD *)(this + 4) && a2 < *(_DWORD *)(this + 4) )
      *(_DWORD *)(this + 4) = a2;
  }
  else
  {
    if ( a2 > *(_DWORD *)(this + 8) )
      *(_DWORD *)this = sub_453B00(this, *(void **)this, a2, 1u);
    sub_464890((__m128i *)(*(_DWORD *)(this + 4) + *(_DWORD *)this), 0, a2 - *(_DWORD *)(this + 4));
    *(_DWORD *)(this + 4) = a2;
  }
}
