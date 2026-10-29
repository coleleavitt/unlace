/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2A7F0
// Address: 0x0002A7F0

//----- (0002A7F0) --------------------------------------------------------
int __cdecl sub_2A7F0(int a1, int a2, int a3, _DWORD *a4)
{
  int v4; // edi
  int v5; // edx
  unsigned int v6; // eax
  int v7; // esi
  int v8; // ecx
  _DWORD *v9; // edx
  int v11; // [esp+0h] [ebp-1Ch]
  _DWORD *v12; // [esp+4h] [ebp-18h]
  int v13; // [esp+8h] [ebp-14h]

  v4 = -1;
  if ( a4 )
  {
    v5 = *(_DWORD *)(a1 + 276);
    *(_DWORD *)(v5 + 44) = a2;
    *(_DWORD *)(v5 + 40) = a3;
    if ( (*(unsigned __int8 (__cdecl **)(_DWORD))(**(_DWORD **)(a1 + 276) + 12))(*(_DWORD *)(a1 + 276)) )
    {
      v6 = *(_DWORD *)(*(_DWORD *)(a1 + 276) + 12);
      v4 = 1;
      if ( v6 )
      {
        v11 = *(_DWORD *)(a1 + 276);
        v7 = 0;
        v8 = 0;
        v9 = a4;
        do
        {
          v13 = v8;
          if ( (*(unsigned __int8 *)(**(_DWORD **)(v11 + 4) + v7 + 8) & *(_DWORD *)(v11 + 40)) != 0 )
          {
            v12 = v9;
            sub_2E650((int *)(v7 + *(_DWORD *)(v11 + 8)), v9, v11);
            v9 = v12;
            v6 = *(_DWORD *)(v11 + 12);
          }
          v8 = v13 + 1;
          v7 += 20;
          v9 += 4;
        }
        while ( v6 > v13 + 1 );
        return 1;
      }
    }
  }
  return v4;
}
