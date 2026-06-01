/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_446770
// Address: 0x00446770

//----- (00446770) --------------------------------------------------------
__m128i *__thiscall sub_446770(int this)
{
  unsigned int v2; // eax
  __m128i *v3; // esi

  v2 = *(_DWORD *)(this + 4) + 1;
  if ( v2 > *(_DWORD *)(this + 8) )
    *(_DWORD *)this = sub_453B00(this, *(void **)this, v2, 0x68u);
  v3 = (__m128i *)(*(_DWORD *)this + 104 * *(_DWORD *)(this + 4));
  sub_464890(v3, 0, 0x68u);
  ++*(_DWORD *)(this + 4);
  return v3;
}
