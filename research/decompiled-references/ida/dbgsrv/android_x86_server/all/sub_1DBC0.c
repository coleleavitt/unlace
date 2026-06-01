/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1DBC0
// Address: 0x0001DBC0

//----- (0001DBC0) --------------------------------------------------------
unsigned int __cdecl sub_1DBC0(int a1, int a2, int a3)
{
  int v3; // ecx
  int v4; // eax
  int v6; // eax
  int v7; // edx
  unsigned int v8; // ecx
  int v9; // eax
  int v10; // [esp+14h] [ebp-48h]
  int v11; // [esp+18h] [ebp-44h] BYREF
  int v12; // [esp+1Ch] [ebp-40h]
  int v13; // [esp+20h] [ebp-3Ch]
  char v14; // [esp+24h] [ebp-38h]
  int v15; // [esp+28h] [ebp-34h]
  int v16; // [esp+2Ch] [ebp-30h]
  int v17; // [esp+30h] [ebp-2Ch]
  int v18; // [esp+34h] [ebp-28h]
  int v19; // [esp+38h] [ebp-24h]
  int v20; // [esp+3Ch] [ebp-20h]
  int v21; // [esp+40h] [ebp-1Ch]
  unsigned int v22; // [esp+48h] [ebp-14h]

  v22 = __readgsdword(0x14u);
  v3 = *(_DWORD *)(a1 + 572);
  if ( !v3 )
    goto LABEL_8;
  v4 = a1 + 572;
  do
  {
    if ( *(_DWORD *)(v3 + 16) >= a2 )
      v4 = v3;
    v3 = *(_DWORD *)(v3 + 4 * (*(_DWORD *)(v3 + 16) < a2));
  }
  while ( v3 );
  if ( v4 != a1 + 572 && *(_DWORD *)(v4 + 16) <= a2 )
  {
    *(_DWORD *)(v4 + 40) = a3;
    v11 = -1;
    v12 = 0;
    v13 = -1;
    v14 = 0;
    v16 = 0;
    v15 = 0;
    v18 = 0;
    v17 = 0;
    v21 = 0;
    v20 = 0;
    v19 = 0;
    set_debug_event_code(&v11, 4);
    if ( (v15 & 0xFFFFFFF) != 2 && (v15 & 0xFFFFFFF) != 4 )
    {
      if ( !(_BYTE)under_debugger )
        interr(3296);
      BUG();
    }
    v16 = 0;
    v11 = *(_DWORD *)(a1 + 624);
    v12 = a2;
    v13 = -1;
    v14 = 1;
    if ( (v15 & 0xFFFFFFF) != 0 )
    {
      v6 = *(_DWORD *)(a1 + 64);
      v10 = *(_DWORD *)(a1 + 60);
      v7 = 93 * ((v6 - v10) >> 2) - 1;
      if ( v6 == v10 )
        v7 = 0;
      v8 = *(_DWORD *)(a1 + 72) + *(_DWORD *)(a1 + 76);
      if ( v7 == v8 )
      {
        sub_2C600((_DWORD *)(a1 + 56));
        v10 = *(_DWORD *)(a1 + 60);
        v6 = *(_DWORD *)(a1 + 64);
        v8 = *(_DWORD *)(a1 + 76) + *(_DWORD *)(a1 + 72);
      }
      if ( v6 == v10 )
        v9 = 0;
      else
        v9 = *(_DWORD *)(v10 + 4 * (v8 / 0x5D)) + 44 * (v8 % 0x5D);
      *(_DWORD *)v9 = -1;
      *(_DWORD *)(v9 + 4) = 0;
      *(_DWORD *)(v9 + 8) = -1;
      *(_BYTE *)(v9 + 12) = 0;
      *(_DWORD *)(v9 + 16) = 0;
      copy_debug_event(v9, &v11);
      ++*(_DWORD *)(a1 + 76);
      *(_BYTE *)(a1 + 676) = 0;
    }
    if ( a3 == 3 )
      sub_1FEB0(a1, a2);
    free_debug_event(&v11);
  }
  else
  {
LABEL_8:
    sub_1C900();
  }
  return __readgsdword(0x14u);
}
// 13E34C: using guessed type int under_debugger;
