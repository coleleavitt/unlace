/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_20E60
// Address: 0x00020E60

//----- (00020E60) --------------------------------------------------------
char __cdecl sub_20E60(_DWORD *a1, _DWORD *a2, int a3)
{
  int v3; // edi
  int v4; // eax
  int v5; // edx
  unsigned int v6; // ecx
  int v7; // eax
  unsigned int v8; // ecx
  int v9; // ebx
  unsigned int v10; // edx
  int v11; // edi
  int v12; // ecx
  int v13; // eax
  char result; // al
  _DWORD *v15; // esi

  if ( a3 == 1 )
  {
    v3 = a1[1];
    v4 = a1[2];
    v5 = 93 * ((v4 - v3) >> 2) - 1;
    if ( v4 == v3 )
      v5 = a1[2] - v3;
    v6 = a1[4] + a1[5];
    if ( v5 == v6 )
    {
      sub_2C600(a1);
      v3 = a1[1];
      v4 = a1[2];
      v6 = a1[5] + a1[4];
    }
    if ( v4 == v3 )
      v7 = 0;
    else
      v7 = *(_DWORD *)(v3 + 4 * (v6 / 0x5D)) + 44 * (v6 % 0x5D);
    v15 = a1 + 5;
    *(_DWORD *)v7 = -1;
    *(_DWORD *)(v7 + 4) = 0;
    *(_DWORD *)(v7 + 8) = -1;
    *(_BYTE *)(v7 + 12) = 0;
    *(_DWORD *)(v7 + 16) = 0;
    result = copy_debug_event(v7, a2);
  }
  else
  {
    v8 = a1[4];
    if ( !v8 )
    {
      sub_2B960(a1);
      v8 = a1[4];
    }
    v9 = a1[1];
    v10 = v8 / 0x5D;
    v11 = *(_DWORD *)(v9 + 4 * (v8 / 0x5D));
    v12 = v11 + 44 * (v8 % 0x5D);
    v13 = 0;
    if ( a1[2] != v9 )
      v13 = v12;
    if ( v13 == v11 )
      v13 = *(_DWORD *)(v9 + 4 * v10 - 4) + 4092;
    *(_DWORD *)(v13 - 44) = -1;
    *(_DWORD *)(v13 - 40) = 0;
    *(_DWORD *)(v13 - 36) = -1;
    *(_BYTE *)(v13 - 32) = 0;
    *(_DWORD *)(v13 - 28) = 0;
    result = copy_debug_event(v13 - 44, a2);
    --a1[4];
    v15 = a1 + 5;
  }
  ++*v15;
  return result;
}
