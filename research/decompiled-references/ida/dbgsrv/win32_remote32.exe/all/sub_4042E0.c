/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4042E0
// Address: 0x004042E0

//----- (004042E0) --------------------------------------------------------
int __thiscall sub_4042E0(int this, char a2)
{
  int v3; // edi

  v3 = *(_DWORD *)(this + 4) != 0 ? *(_DWORD *)(this + 4) - 1 : 0;
  if ( (unsigned int)(v3 + 2) > *(_DWORD *)(this + 8) )
    *(_DWORD *)this = sub_453B00(this, *(void **)this, v3 + 2, 1u);
  *(_DWORD *)(this + 4) = v3 + 2;
  *(_BYTE *)(v3 + *(_DWORD *)this) = a2;
  *(_BYTE *)(*(_DWORD *)this + v3 + 1) = 0;
  return this;
}
