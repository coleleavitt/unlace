/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2A9A0
// Address: 0x0002A9A0

//----- (0002A9A0) --------------------------------------------------------
int __cdecl sub_2A9A0(int a1, int a2, unsigned int a3, unsigned int a4, int *a5)
{
  unsigned int v5; // esi
  unsigned int v6; // edx
  int v7; // ecx
  int v8; // eax
  int v9; // ecx
  char v10; // al
  int *v11; // edx
  _DWORD *v12; // eax
  int v13; // edi
  unsigned int v14; // esi
  int *v16; // [esp+18h] [ebp-14h]

  if ( a5 )
  {
    v5 = a4;
    v6 = a3;
    v7 = *(_DWORD *)(a1 + 276);
    *(_DWORD *)(v7 + 44) = a2;
    *(_DWORD *)(v7 + 40) = 0;
    v8 = *(_DWORD *)(a1 + 276);
    if ( a4 )
    {
      v9 = 20 * a3 + 8;
      do
      {
        if ( *(_DWORD *)(v8 + 12) > v6 )
        {
          *(_DWORD *)(v8 + 40) |= *(unsigned __int8 *)(**(_DWORD **)(v8 + 4) + v9);
          v8 = *(_DWORD *)(a1 + 276);
        }
        v9 += 20;
        ++v6;
        --v5;
      }
      while ( v5 );
    }
    v10 = (*(int (__cdecl **)(int))(*(_DWORD *)v8 + 12))(v8);
    v11 = a5;
    if ( v10 )
    {
      v12 = *(_DWORD **)(a1 + 276);
      if ( !a4 )
        return (*(int (__cdecl **)(_DWORD *))(*v12 + 16))(v12);
      v13 = 20 * a3;
      v14 = 0;
      while ( 1 )
      {
        if ( v12[3] <= a3 + v14 )
        {
          if ( !(_BYTE)under_debugger )
            interr(3258);
          BUG();
        }
        v16 = v11;
        if ( !sub_2E7E0((int *)(v13 + v12[2]), (int)v12, v11) )
          break;
        ++v14;
        v11 = v16 + 4;
        v12 = *(_DWORD **)(a1 + 276);
        v13 += 20;
        if ( v14 >= a4 )
          return (*(int (__cdecl **)(_DWORD *))(*v12 + 16))(v12);
      }
    }
  }
  return 0;
}
// 13E34C: using guessed type int under_debugger;
