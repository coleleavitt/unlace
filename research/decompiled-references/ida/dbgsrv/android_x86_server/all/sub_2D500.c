/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2D500
// Address: 0x0002D500

//----- (0002D500) --------------------------------------------------------
void __cdecl sub_2D500(int a1, int a2)
{
  int v2; // esi
  int v3; // edx
  _BYTE *v4; // ecx
  int v5; // eax
  int *v6; // ebx
  int v7; // ecx
  int *v8; // ecx
  int v9; // edx
  _DWORD *v10; // ecx
  int v11; // esi
  int v12; // edx

  v2 = a2;
  *(_BYTE *)(a2 + 12) = a2 == a1;
  if ( a2 != a1 )
  {
    do
    {
      v3 = *(_DWORD *)(v2 + 8);
      if ( *(_BYTE *)(v3 + 12) )
        return;
      v4 = (_BYTE *)(v3 + 12);
      v5 = *(_DWORD *)(v3 + 8);
      v6 = *(int **)v5;
      if ( *(_DWORD *)v5 == v3 )
      {
        v6 = *(int **)(v5 + 4);
        if ( !v6 || *((_BYTE *)v6 + 12) )
        {
          if ( *(_DWORD *)v3 != v2 )
          {
            v10 = *(_DWORD **)(v3 + 4);
            v11 = *v10;
            *(_DWORD *)(v3 + 4) = *v10;
            if ( v11 )
            {
              *(_DWORD *)(v11 + 8) = v3;
              v5 = *(_DWORD *)(v3 + 8);
            }
            v10[2] = v5;
            *(_DWORD *)(*(_DWORD *)(v3 + 8) + 4 * (**(_DWORD **)(v3 + 8) != v3)) = v10;
            *v10 = v3;
            *(_DWORD *)(v3 + 8) = v10;
            v5 = v10[2];
            v4 = v10 + 3;
          }
          *v4 = 1;
          *(_BYTE *)(v5 + 12) = 0;
          v8 = *(int **)v5;
          v12 = *(_DWORD *)(*(_DWORD *)v5 + 4);
          *(_DWORD *)v5 = v12;
          if ( v12 )
            *(_DWORD *)(v12 + 8) = v5;
          v8[2] = *(_DWORD *)(v5 + 8);
          *(_DWORD *)(*(_DWORD *)(v5 + 8) + 4 * (**(_DWORD **)(v5 + 8) != v5)) = v8;
          v8[1] = v5;
          goto LABEL_25;
        }
      }
      else if ( !v6 || *((_BYTE *)v6 + 12) )
      {
        if ( *(_DWORD *)v3 == v2 )
        {
          v7 = *(_DWORD *)(v2 + 4);
          *(_DWORD *)v3 = v7;
          if ( v7 )
          {
            *(_DWORD *)(v7 + 8) = v3;
            v5 = *(_DWORD *)(v3 + 8);
          }
          *(_DWORD *)(v2 + 8) = v5;
          *(_DWORD *)(*(_DWORD *)(v3 + 8) + 4 * (**(_DWORD **)(v3 + 8) != v3)) = v2;
          *(_DWORD *)(v2 + 4) = v3;
          *(_DWORD *)(v3 + 8) = v2;
          v5 = *(_DWORD *)(v2 + 8);
          v4 = (_BYTE *)(v2 + 12);
        }
        *v4 = 1;
        *(_BYTE *)(v5 + 12) = 0;
        v8 = *(int **)(v5 + 4);
        v9 = *v8;
        *(_DWORD *)(v5 + 4) = *v8;
        if ( v9 )
          *(_DWORD *)(v9 + 8) = v5;
        v8[2] = *(_DWORD *)(v5 + 8);
        *(_DWORD *)(*(_DWORD *)(v5 + 8) + 4 * (**(_DWORD **)(v5 + 8) != v5)) = v8;
        *v8 = v5;
LABEL_25:
        *(_DWORD *)(v5 + 8) = v8;
        return;
      }
      *v4 = 1;
      *(_BYTE *)(v5 + 12) = v5 == a1;
      *((_BYTE *)v6 + 12) = 1;
      v2 = v5;
    }
    while ( v5 != a1 );
  }
}
