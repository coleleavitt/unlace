/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_422CD0
// Address: 0x00422CD0

//----- (00422CD0) --------------------------------------------------------
void *__thiscall sub_422CD0(int this, int *a2)
{
  int v3; // edi
  unsigned int v4; // eax
  void *result; // eax

  v3 = *a2;
  v4 = *(_DWORD *)(this + 4) + 1;
  if ( v4 > *(_DWORD *)(this + 8) )
    *(_DWORD *)this = sub_453B00(this, *(void **)this, v4, 4u);
  result = *(void **)this;
  *(_DWORD *)(*(_DWORD *)this + 4 * (*(_DWORD *)(this + 4))++) = v3;
  return result;
}
