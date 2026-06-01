/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42BBD0
// Address: 0x0042BBD0

//----- (0042BBD0) --------------------------------------------------------
int __stdcall sub_42BBD0(_DWORD *a1)
{
  int v2; // ebx
  int v3; // eax
  int v4; // ecx
  void *v5; // edi
  signed int v6; // eax
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // esi
  void *v11; // eax
  unsigned int *v13; // [esp+20h] [ebp-10h]
  unsigned int v14; // [esp+38h] [ebp+8h]

  v2 = sub_42EFE0((int)a1, 2);
  if ( !v2 )
  {
    v3 = a1[44];
    v4 = *(unsigned __int16 *)(a1[43] + 2 * v3 - 2);
    if ( v3 )
      a1[44] = v3 - 1;
    *(_DWORD *)(*(_DWORD *)(a1[46] + 4 * a1[47] - 4) + 12) = v4;
  }
  v5 = nullptr;
  v13 = (unsigned int *)(a1[21] + 12 * a1[22] - 12);
  v6 = v13[1];
  v14 = v6;
  if ( v6 )
  {
    v5 = sub_4539E0(v6);
    sub_464310((unsigned int)v5, *v13, v14);
  }
  v7 = a1[22];
  if ( v7 )
  {
    v8 = a1[21];
    v9 = v7 - 1;
    a1[22] = v9;
    v10 = v8 + 12 * v9;
    v11 = *(void **)v10;
    if ( *(_DWORD *)v10 )
    {
      *(_DWORD *)(v10 + 4) = 0;
      sub_453A20(v11);
      *(_DWORD *)v10 = 0;
      *(_DWORD *)(v10 + 8) = 0;
    }
  }
  if ( v5 )
    sub_453A20(v5);
  return v2;
}
