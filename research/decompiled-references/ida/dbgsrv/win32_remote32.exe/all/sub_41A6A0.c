/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41A6A0
// Address: 0x0041A6A0

//----- (0041A6A0) --------------------------------------------------------
int __stdcall sub_41A6A0(_DWORD *a1, int a2)
{
  int v2; // edx
  unsigned int v3; // ebx
  unsigned int v4; // ebp
  int v5; // edi
  int v6; // ecx
  unsigned int v7; // esi
  unsigned int v8; // ebx
  void *v9; // eax
  int v11; // [esp+8h] [ebp-4h]
  void *v12; // [esp+10h] [ebp+4h]

  v2 = a1[14];
  v3 = a1[3] != 0 ? a1[3] - 1 : 0;
  v4 = a1[9] != 0 ? a1[9] - 1 : 0;
  *(_DWORD *)(a2 + 8) = -1;
  if ( v4 <= v3 )
  {
    if ( v4 )
    {
      v5 = a1[2];
      v6 = a1[8];
      v7 = 0;
      v11 = v6;
      v8 = v3 - v4 + 1;
      if ( v8 )
      {
        v9 = sub_465177;
        if ( v2 )
          v9 = sub_469372;
        v12 = v9;
        while ( ((int (__cdecl *)(int, int, unsigned int))v9)(v5, v6, v4) )
        {
          v9 = v12;
          ++v7;
          v6 = v11;
          ++v5;
          if ( v7 >= v8 )
            return 0;
        }
        *(_DWORD *)(a2 + 8) = v7;
      }
    }
  }
  return 0;
}
