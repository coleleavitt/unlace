/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_461790
// Address: 0x00461790

//----- (00461790) --------------------------------------------------------
char __stdcall sub_461790(int a1, unsigned __int8 *a2, int a3)
{
  int v4; // ebp
  unsigned int v5; // ebx
  int v6; // edi
  unsigned int v7; // ecx
  unsigned __int8 *v8; // ecx
  int v9; // eax
  char v10; // bp
  unsigned int v11; // edx
  int v12; // edi
  LPVOID v13; // eax
  int v14; // ebp
  int v15; // edi
  int v17; // [esp+8h] [ebp-10h]
  unsigned int v18; // [esp+Ch] [ebp-Ch]
  int v19; // [esp+10h] [ebp-8h]
  int v20; // [esp+14h] [ebp-4h]
  char v21; // [esp+1Ch] [ebp+4h]
  unsigned __int8 *v22; // [esp+20h] [ebp+8h]

  if ( !a2 )
    return 0;
  if ( !a1 )
    return 0;
  v4 = a3;
  if ( a3 < 0 )
    return 0;
  v5 = 0;
  v6 = 0;
  if ( a3 % 3u )
    v7 = 3 * (a3 / 3u) - a3 + 3;
  else
    v7 = 0;
  v19 = v7;
  if ( a3 )
  {
    v8 = a2;
    do
    {
      v9 = *v8;
      v6 += 8;
      ++v8;
      v5 = v9 | (v5 << 8);
      v22 = v8;
      if ( v6 > 6 )
      {
        v10 = v6 - 6;
        v11 = (v6 - 7) / 6u + 1;
        v17 = v6 - 6;
        v18 = v11;
        v20 = v6 - 6 * v11;
        do
        {
          v21 = byte_4A2C20[(v5 >> v10) & 0x3F];
          v12 = *(_DWORD *)(a1 + 4) != 0 ? *(_DWORD *)(a1 + 4) - 1 : 0;
          if ( (unsigned int)(v12 + 2) > *(_DWORD *)(a1 + 8) )
          {
            v13 = sub_453B00(a1, *(void **)a1, v12 + 2, 1u);
            v11 = v18;
            *(_DWORD *)a1 = v13;
          }
          *(_DWORD *)(a1 + 4) = v12 + 2;
          v10 = v17 - 6;
          --v11;
          v17 -= 6;
          *(_BYTE *)(v12 + *(_DWORD *)a1) = v21;
          v18 = v11;
          *(_BYTE *)(*(_DWORD *)a1 + v12 + 1) = 0;
        }
        while ( v11 );
        v6 = v20;
        v4 = a3;
        v8 = v22;
      }
      a3 = --v4;
    }
    while ( v4 );
    if ( v6 )
      sub_4042E0(a1, byte_4A2C20[(v5 << (6 - v6)) & 0x3F]);
  }
  v14 = v19;
  if ( v19 > 0 )
  {
    do
    {
      v15 = *(_DWORD *)(a1 + 4) != 0 ? *(_DWORD *)(a1 + 4) - 1 : 0;
      if ( (unsigned int)(v15 + 2) > *(_DWORD *)(a1 + 8) )
        *(_DWORD *)a1 = sub_453B00(a1, *(void **)a1, v15 + 2, 1u);
      *(_DWORD *)(a1 + 4) = v15 + 2;
      *(_BYTE *)(v15 + *(_DWORD *)a1) = 61;
      *(_BYTE *)(*(_DWORD *)a1 + v15 + 1) = 0;
      --v14;
    }
    while ( v14 );
  }
  return 1;
}
