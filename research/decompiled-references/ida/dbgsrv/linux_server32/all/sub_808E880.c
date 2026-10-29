/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_808E880
// Address: 0x0808E880

//----- (0808E880) --------------------------------------------------------
int __cdecl sub_808E880(int a1, int a2)
{
  _DWORD *v3; // eax
  _DWORD *v4; // ebx
  int v5; // edx
  _DWORD *v6; // esi
  int v7; // eax
  _DWORD *v8; // eax
  _DWORD *v9; // edx
  _DWORD *v10; // ecx
  _DWORD *v11; // eax
  _DWORD *v12; // ecx
  int v13; // eax
  int v14; // eax

  if ( *(_BYTE *)a2 != 5 )
    return sub_8089810((unsigned __int8 *)a1, (unsigned __int8 *)a2);
  v3 = (_DWORD *)operator new(0x20u);
  v4 = *(_DWORD **)(a2 + 4);
  v5 = (int)(v3 + 1);
  v3[1] = 0;
  v6 = v3;
  v3[2] = 0;
  v3[3] = v3 + 1;
  v3[4] = v3 + 1;
  v3[5] = 0;
  v7 = v4[2];
  if ( v7 )
  {
    v8 = sub_808E6A0(v7, v5);
    v9 = v8;
    do
    {
      v10 = v8;
      v8 = (_DWORD *)v8[2];
    }
    while ( v8 );
    v6[3] = v10;
    v11 = v9;
    do
    {
      v12 = v11;
      v11 = (_DWORD *)v11[3];
    }
    while ( v11 );
    v6[4] = v12;
    v13 = v4[5];
    v6[2] = v9;
    v6[5] = v13;
  }
  v14 = v4[7];
  v6[6] = 1;
  v6[7] = v14;
  sub_8089430(a1);
  *(_BYTE *)a1 = 5;
  *(_DWORD *)(a1 + 4) = v6;
  return 0;
}
