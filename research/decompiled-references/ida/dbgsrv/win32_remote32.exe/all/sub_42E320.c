/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42E320
// Address: 0x0042E320

//----- (0042E320) --------------------------------------------------------
int __thiscall sub_42E320(int *this, __int16 a2)
{
  int v3; // esi
  unsigned int v4; // eax
  int v5; // esi
  unsigned int v6; // eax
  int result; // eax

  v3 = *(this + 26);
  v4 = *(_DWORD *)(v3 + 4) + 1;
  if ( v4 > *(_DWORD *)(v3 + 8) )
    *(_DWORD *)v3 = sub_453B00(v3, *(void **)v3, v4, 1u);
  *(_BYTE *)(*(_DWORD *)v3 + (*(_DWORD *)(v3 + 4))++) = a2;
  v5 = *(this + 26);
  ++*(this + 27);
  v6 = *(_DWORD *)(v5 + 4) + 1;
  if ( v6 > *(_DWORD *)(v5 + 8) )
    *(_DWORD *)v5 = sub_453B00(v5, *(void **)v5, v6, 1u);
  result = *(_DWORD *)(v5 + 4);
  *(_BYTE *)(*(_DWORD *)v5 + result) = HIBYTE(a2);
  ++*(_DWORD *)(v5 + 4);
  ++*(this + 27);
  return result;
}
