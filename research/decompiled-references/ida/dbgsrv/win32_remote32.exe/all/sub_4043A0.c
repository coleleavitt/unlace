/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4043A0
// Address: 0x004043A0

//----- (004043A0) --------------------------------------------------------
int __thiscall sub_4043A0(int this, unsigned int a2, unsigned int a3)
{
  int v4; // edi
  unsigned int v5; // ebx

  v4 = *(_DWORD *)(this + 4) != 0 ? *(_DWORD *)(this + 4) - 1 : 0;
  v5 = v4 + a3 + 1;
  if ( v5 > *(_DWORD *)(this + 8) )
    *(_DWORD *)this = sub_453B00(this, *(void **)this, v4 + a3 + 1, 1u);
  *(_DWORD *)(this + 4) = v5;
  *(_BYTE *)(v4 + *(_DWORD *)this + a3) = 0;
  sub_464310(v4 + *(_DWORD *)this, a2, a3);
  return this;
}
