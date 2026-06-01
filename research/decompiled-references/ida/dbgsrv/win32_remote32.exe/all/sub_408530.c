/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_408530
// Address: 0x00408530

//----- (00408530) --------------------------------------------------------
int __thiscall sub_408530(_DWORD *this, int a2)
{
  int v2; // edx
  int v3; // esi
  int v4; // ecx

  v2 = *(this + 4);
  v3 = *(this + 3);
  v4 = *(this + 2);
  *(_DWORD *)(v2 + 4) = a2;
  return (*(int (__thiscall **)(int, int, int, int))(*(_DWORD *)v4 + 4))(v4, a2, v3, v2);
}
