/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47A198
// Address: 0x0047A198

//----- (0047A198) --------------------------------------------------------
int __cdecl sub_47A198(char *a1, int a2, int a3, int a4, char a5, _DWORD *a6)
{
  char v6; // dl
  unsigned int v7; // esi
  int v8; // ecx
  bool v9; // zf
  char *v10; // ecx
  int v11; // eax
  const char *v12; // eax
  char *v13; // ecx
  const char *v14; // ecx
  int v15; // eax
  int v16; // eax
  _DWORD v18[3]; // [esp+Ch] [ebp-14h] BYREF
  char v19; // [esp+18h] [ebp-8h]
  char *v20; // [esp+1Ch] [ebp-4h]

  sub_467FF8((int)v18, a6);
  v6 = 0;
  v7 = a3;
  v8 = *(_DWORD *)(a4 + 4) - 1;
  if ( a5 && v8 == a3 )
    *(_WORD *)&a1[v8 + (*(_DWORD *)a4 == 45)] = 48;
  v9 = *(_DWORD *)a4 == 45;
  v10 = a1;
  v20 = a1;
  if ( v9 )
  {
    v10 = a1 + 1;
    *a1 = 45;
    v20 = a1 + 1;
  }
  v11 = *(_DWORD *)(a4 + 4);
  if ( v11 <= 0 )
  {
    if ( !v11 && **(_BYTE **)(a4 + 8) == 48 )
      v6 = 1;
    if ( !a5 || !v6 )
    {
      sub_47A3F1((int)a1, a2, v10, 1);
      v10 = v20;
    }
    *v10 = 48;
    v11 = 1;
  }
  v12 = &v10[v11];
  v20 = (char *)v12;
  if ( a3 > 0 )
  {
    sub_47A3F1((int)a1, a2, v12, 1);
    v13 = v20;
    *v20 = ***(_BYTE ***)(v18[1] + 136);
    v14 = v13 + 1;
    v15 = *(_DWORD *)(a4 + 4);
    if ( v15 < 0 )
    {
      v16 = -v15;
      if ( a5 || v16 < a3 )
        v7 = v16;
      sub_47A3F1((int)a1, a2, v14, v7);
      sub_464890((__m128i *)(v20 + 1), 0x30u, v7);
    }
  }
  if ( v19 )
    *(_DWORD *)(v18[0] + 848) &= ~2u;
  return 0;
}
