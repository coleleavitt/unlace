/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42E870
// Address: 0x0042E870

//----- (0042E870) --------------------------------------------------------
void __thiscall sub_42E870(int this, const char *a2, unsigned int a3)
{
  int v4; // esi
  unsigned int v5; // eax
  unsigned int v6; // esi

  v4 = *(_DWORD *)(this + 104);
  *(_BYTE *)(this + 112) = -88;
  v5 = *(_DWORD *)(v4 + 4) + 1;
  if ( v5 > *(_DWORD *)(v4 + 8) )
    *(_DWORD *)v4 = sub_453B00(v4, *(void **)v4, v5, 1u);
  *(_BYTE *)(*(_DWORD *)v4 + (*(_DWORD *)(v4 + 4))++) = -88;
  ++*(_DWORD *)(this + 108);
  v6 = a3;
  if ( !a3 )
    v6 = strlen(a2);
  sub_42E320((int *)this, v6);
  sub_42E320((int *)this, SHIWORD(v6));
  sub_4272C0(*(unsigned int **)(this + 104), (unsigned int)a2, v6);
  *(_DWORD *)(this + 108) += v6;
}
