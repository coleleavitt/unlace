/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_938E0
// Address: 0x000938E0

//----- (000938E0) --------------------------------------------------------
int __cdecl sub_938E0(int a1, unsigned int a2, int a3)
{
  int v3; // ecx
  int v4; // edx
  int *v5; // edi
  int *v6; // esi
  int *v7; // eax
  int v8; // eax
  int v9; // edx
  _DWORD *v10; // ecx
  int v11; // eax
  _DWORD *v12; // edi
  int v13; // eax
  int v15; // [esp+8h] [ebp-14h]

  (*(void (__cdecl **)(_DWORD))(**(_DWORD **)(a1 + 44) + 8))(*(_DWORD *)(a1 + 44));
  v3 = a1;
  v4 = *(_DWORD *)(a1 + 44);
  v5 = *(int **)(v4 + 8);
  v15 = v4;
  if ( v5 )
  {
    v6 = (int *)(v4 + 8);
    while ( 1 )
    {
      if ( v5[4] <= a2 )
      {
        if ( v5[4] >= a2 )
          goto LABEL_12;
        v6 = v5 + 1;
        v7 = (int *)v5[1];
        if ( !v7 )
          goto LABEL_12;
      }
      else
      {
        v7 = (int *)*v5;
        v6 = v5;
        if ( !*v5 )
          goto LABEL_11;
      }
      v5 = v7;
    }
  }
  v5 = (int *)(v4 + 8);
LABEL_11:
  v6 = v5;
LABEL_12:
  v8 = a3;
  v9 = *v6;
  if ( !*v6 )
  {
    v10 = operator new(0x18u);
    v10[4] = a2;
    v10[5] = 0;
    *v10 = 0;
    v10[1] = 0;
    v10[2] = v5;
    *v6 = (int)v10;
    v11 = **(_DWORD **)(v15 + 4);
    v12 = v10;
    if ( v11 )
    {
      *(_DWORD *)(v15 + 4) = v11;
      v13 = *v6;
    }
    else
    {
      v13 = (int)v10;
    }
    sub_2D500(*(_DWORD *)(v15 + 8), v13);
    ++*(_DWORD *)(v15 + 12);
    v3 = a1;
    v8 = a3;
    v9 = (int)v12;
  }
  *(_DWORD *)(v9 + 20) = v8;
  return (*(int (__cdecl **)(_DWORD))(**(_DWORD **)(v3 + 44) + 12))(*(_DWORD *)(v3 + 44));
}
