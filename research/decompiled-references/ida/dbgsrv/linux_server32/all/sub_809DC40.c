/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_809DC40
// Address: 0x0809DC40

//----- (0809DC40) --------------------------------------------------------
int __cdecl sub_809DC40(int a1, int a2, int a3)
{
  int v3; // edi
  int v4; // ebx
  _DWORD *v5; // eax
  _DWORD *v6; // esi
  int v7; // edx
  int v8; // ecx
  int v9; // eax
  int v10; // eax

  if ( !a3 )
    return 1;
  v3 = *(_DWORD *)(a3 + 4) & 1;
  if ( (*(_DWORD *)(a3 + 4) & 1) == 0 )
  {
    v4 = *(_DWORD *)(a2 + 4);
    v5 = *(_DWORD **)(a1 + 184);
    if ( v5 )
    {
      v6 = (_DWORD *)(a1 + 180);
      do
      {
        while ( 1 )
        {
          v7 = v5[2];
          v8 = v5[3];
          if ( v5[4] >= v4 )
            break;
          v5 = (_DWORD *)v5[3];
          if ( !v8 )
            goto LABEL_8;
        }
        v6 = v5;
        v5 = (_DWORD *)v5[2];
      }
      while ( v7 );
LABEL_8:
      if ( v6 != (_DWORD *)(a1 + 180) && v4 >= v6[4] )
      {
        v9 = v6[6];
        if ( v9 )
        {
          v10 = v6[5] + 24 * v9;
          LOBYTE(v10) = *(_DWORD *)(v10 - 8) == *(_DWORD *)(a2 + 8);
          return v10;
        }
      }
    }
  }
  return v3;
}
