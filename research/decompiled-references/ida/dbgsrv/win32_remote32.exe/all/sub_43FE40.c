/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43FE40
// Address: 0x0043FE40

//----- (0043FE40) --------------------------------------------------------
void __cdecl sub_43FE40(int a1, int a2, int a3)
{
  int v3; // ebx
  int *v4; // esi
  int v5; // ecx
  _DWORD *v6; // edi
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // ecx
  void *v13; // eax
  void *v14; // [esp-4h] [ebp-20h]
  int v15; // [esp+28h] [ebp+Ch]

  v3 = a3 - 1;
  if ( a3 - 1 >= 0 )
  {
    v4 = (int *)(a2 + 20);
    v5 = a2 - a1 - 20;
    v6 = (_DWORD *)(a1 + 20);
    v15 = v5;
    do
    {
      *(v6 - 5) = *(_DWORD *)((char *)v6 + v5);
      v7 = *(v4 - 4);
      *(_DWORD *)((char *)v6 + v5) = 0;
      *(v6 - 4) = v7;
      v8 = *(v4 - 3);
      *(v4 - 4) = 0;
      *(v6 - 3) = v8;
      v9 = *(v4 - 2);
      *(v4 - 3) = 0;
      *(v6 - 2) = v9;
      v10 = *(v4 - 1);
      *(v4 - 2) = 0;
      *(v6 - 1) = v10;
      v11 = *v4;
      *(v4 - 1) = 0;
      *v6 = v11;
      *v4 = 0;
      v6[1] = v4[1];
      v6[2] = v4[2];
      v12 = v4[4];
      v6[3] = v4[3];
      v6[4] = v12;
      v13 = (void *)*(v4 - 2);
      if ( v13 )
      {
        *(v4 - 1) = 0;
        sub_453A20(v13);
        *(v4 - 2) = 0;
        *v4 = 0;
      }
      v5 = v15;
      if ( *(_DWORD *)((char *)v6 + v15) )
      {
        v14 = *(void **)((char *)v6 + v15);
        *(v4 - 4) = 0;
        sub_453A20(v14);
        v5 = v15;
        *(v4 - 3) = 0;
        *(_DWORD *)((char *)v6 + v15) = 0;
      }
      v6 += 10;
      v4 += 10;
      --v3;
    }
    while ( v3 >= 0 );
  }
}
