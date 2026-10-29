/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42E650
// Address: 0x0042E650

//----- (0042E650) --------------------------------------------------------
void *__thiscall sub_42E650(int this, char a2)
{
  int v3; // esi
  unsigned int v4; // eax
  void *result; // eax

  v3 = *(_DWORD *)(this + 104);
  *(_BYTE *)(this + 112) = a2;
  v4 = *(_DWORD *)(v3 + 4) + 1;
  if ( v4 > *(_DWORD *)(v3 + 8) )
    *(_DWORD *)v3 = sub_453B00(v3, *(void **)v3, v4, 1u);
  result = *(void **)v3;
  *(_BYTE *)(*(_DWORD *)(v3 + 4) + *(_DWORD *)v3) = a2;
  ++*(_DWORD *)(v3 + 4);
  ++*(_DWORD *)(this + 108);
  return result;
}
