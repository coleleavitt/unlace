/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_78950
// Address: 0x00078950

//----- (00078950) --------------------------------------------------------
char __cdecl sub_78950(int a1, int a2)
{
  int v2; // ecx
  int v3; // esi
  _DWORD *v4; // edx
  int v5; // eax
  unsigned int v6; // edi
  int v7; // ebx
  int v8; // edx
  int v9; // esi
  unsigned __int8 v10; // al
  int v11; // edi
  int v12; // esi
  _DWORD *v13; // eax
  _DWORD *v14; // eax
  _DWORD *v15; // edx
  int v17; // [esp+0h] [ebp-4Ch]
  _DWORD *v18; // [esp+4h] [ebp-48h]
  _DWORD *v19; // [esp+8h] [ebp-44h]
  int v20; // [esp+Ch] [ebp-40h]
  char v21; // [esp+10h] [ebp-3Ch]
  int v22; // [esp+14h] [ebp-38h]
  unsigned int v23; // [esp+18h] [ebp-34h]
  unsigned int v24; // [esp+20h] [ebp-2Ch]
  int v25; // [esp+28h] [ebp-24h]
  unsigned int v26; // [esp+2Ch] [ebp-20h]
  char v27; // [esp+30h] [ebp-1Ch]
  int v28; // [esp+34h] [ebp-18h]
  int v29; // [esp+38h] [ebp-14h]

  v2 = a1;
  v3 = *(_DWORD *)(a1 + 4156);
  if ( (v3 & 0x3FFFFFFF) == 0 )
    return 0;
  v23 = *(_DWORD *)(a1 + 4168) - a2;
  v29 = a1 + a2 + 24;
  v18 = *(_DWORD **)(a1 + 4152);
  v4 = v18;
  while ( 1 )
  {
    v19 = v4;
    v5 = **(_DWORD **)(v2 + 12);
    v25 = *v4;
    v6 = *(_DWORD *)(v5 + 40 * *v4 + 4);
    v26 = v6;
    if ( v23 < v6 )
      v6 = v23;
    v20 = *(_DWORD *)(v5 + 40 * v25 + 16);
    if ( v20 )
      v20 = *(_DWORD *)(v5 + 40 * v25 + 12);
    v22 = v3;
    v24 = v6;
    if ( !v6 )
      break;
    v7 = *(_DWORD *)(v5 + 40 * v25);
    v8 = *(_DWORD *)(a1 + 16);
    v9 = 0;
    v28 = v7;
    v27 = v8;
    while ( 1 )
    {
      v10 = *(_BYTE *)(v7 + v9);
      if ( (v8 & 1) != 0 )
        break;
      v11 = v10;
      v21 = toupper(*(unsigned __int8 *)(v29 + v9));
      v17 = v11;
      v6 = v24;
      v10 = toupper(v17);
      LOBYTE(v8) = v27;
      v7 = v28;
      if ( v20 )
        goto LABEL_11;
LABEL_21:
      if ( v21 != v10 )
        goto LABEL_25;
LABEL_22:
      if ( ++v9 >= v6 )
        goto LABEL_23;
    }
    v21 = *(_BYTE *)(v29 + v9);
    if ( !v20 )
      goto LABEL_21;
LABEL_11:
    if ( (v8 & 0x20) != 0 )
    {
      if ( ((unsigned __int8)(v10 ^ v21) & *(_BYTE *)(v20 + v9)) != 0 )
        goto LABEL_25;
      goto LABEL_22;
    }
    if ( v20 == 255 )
    {
      if ( v10 == 0xFF )
        goto LABEL_22;
      goto LABEL_21;
    }
    if ( v21 == v10 || !*(_BYTE *)(v20 + v9) )
      goto LABEL_22;
LABEL_25:
    v2 = a1;
    v15 = v19;
    v3 = v22;
    v14 = v18;
LABEL_26:
    v4 = v15 + 1;
    v18 = v14;
    if ( v4 == &v14[v3] )
      return 0;
  }
LABEL_23:
  v12 = a2 + *(_DWORD *)(a1 + 4120);
  if ( v23 < v26 )
  {
    v13 = qalloc_or_throw(20);
    v13[2] = v12;
    v13[3] = v25;
    v13[4] = v24;
    *v13 = a1 + 4124;
    v13[1] = *(_DWORD *)(a1 + 4128);
    **(_DWORD **)(a1 + 4128) = v13;
    *(_DWORD *)(a1 + 4128) = v13;
    ++*(_DWORD *)(a1 + 4132);
    v14 = *(_DWORD **)(a1 + 4152);
    v3 = *(_DWORD *)(a1 + 4156);
    v2 = a1;
    v15 = v19;
    goto LABEL_26;
  }
  **(_DWORD **)(a1 + 4) = v12;
  return 1;
}
