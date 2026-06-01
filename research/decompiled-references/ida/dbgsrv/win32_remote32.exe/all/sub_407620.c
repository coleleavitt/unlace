/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_407620
// Address: 0x00407620

//----- (00407620) --------------------------------------------------------
char __thiscall sub_407620(_DWORD *this, int a2, int a3, int a4, int a5, _DWORD *a6)
{
  int v6; // edx
  int v7; // esi
  void *v9; // [esp-4h] [ebp-8h]

  v6 = *(this + 2);
  v7 = *(this + 1);
  v9 = *(void **)(v7 + 28);
  *(_DWORD *)(v7 + 8) = a2;
  *(_DWORD *)(v7 + 20) = a5;
  *(_DWORD *)(v7 + 12) = a3;
  *(_DWORD *)(v7 + 16) = a4;
  *(_DWORD *)v7 = v6;
  sub_456350(v9);
  sub_456370(*(HANDLE *)(v7 + 32), 0xFFFFFFFF);
  if ( a6 )
    *a6 = *(_DWORD *)(v7 + 20);
  return *(_BYTE *)(v7 + 24);
}
