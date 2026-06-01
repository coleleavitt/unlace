/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4156E0
// Address: 0x004156E0

//----- (004156E0) --------------------------------------------------------
char *__thiscall sub_4156E0(int this)
{
  unsigned int v2; // eax
  int v3; // ecx
  _DWORD *v4; // eax

  v2 = *(_DWORD *)(this + 4) + 1;
  if ( v2 > *(_DWORD *)(this + 8) )
    *(_DWORD *)this = sub_453B00(this, *(void **)this, v2, 0xCu);
  v3 = 3 * *(_DWORD *)(this + 4);
  v4 = *(_DWORD **)this;
  v4[v3] = 0;
  v4[v3 + 1] = 0;
  v4[v3 + 2] = 0;
  ++*(_DWORD *)(this + 4);
  return (char *)&v4[v3];
}
