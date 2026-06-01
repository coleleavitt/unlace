/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_52590
// Address: 0x00052590

//----- (00052590) --------------------------------------------------------
char __cdecl sub_52590(int *a1, unsigned int a2, unsigned int *a3)
{
  int v3; // ecx
  int v4; // edx
  unsigned int v5; // esi
  unsigned int v6; // edx
  unsigned int v7; // edi
  int v8; // eax
  unsigned int v9; // esi
  unsigned int v10; // esi
  unsigned int v11; // edi
  int v12; // eax
  unsigned int v14; // [esp-Ch] [ebp-38h]
  unsigned int v15; // [esp+0h] [ebp-2Ch]
  unsigned int v16; // [esp+4h] [ebp-28h]
  int v17; // [esp+4h] [ebp-28h]
  unsigned int v18; // [esp+8h] [ebp-24h]
  int v19; // [esp+Ch] [ebp-20h]
  int v20; // [esp+10h] [ebp-1Ch]
  unsigned int v21[6]; // [esp+14h] [ebp-18h] BYREF

  v21[1] = __readgsdword(0x14u);
  v3 = *a1;
  v4 = a1[1];
  if ( *(__int16 *)(*a1 + v4 - 2) <= 0 )
    return 0;
  v5 = v3 + v4 - 2;
  v21[0] = a1[3] + v3;
  v19 = unpack_dd(v21, v5);
  if ( v19 <= 0 )
    return 0;
  v6 = v5;
  if ( v21[0] >= v5 )
    return 0;
  v7 = 0;
  v8 = 1;
  v9 = 0;
  v18 = v6;
  while ( 1 )
  {
    v20 = v8;
    v16 = v9;
    v10 = v6;
    v15 = v7 + unpack_dd(v21, v6);
    v11 = v16 + unpack_dd(v21, v10);
    v17 = unpack_dd(v21, v10);
    v14 = v10;
    v9 = v11;
    v7 = v15;
    v12 = unpack_dd(v21, v14);
    if ( v15 <= a2 && v9 > a2 )
      break;
    v6 = v18;
    if ( v20 < v19 )
    {
      v8 = v20 + 1;
      if ( v21[0] < v18 )
        continue;
    }
    return 0;
  }
  *a3 = v15;
  a3[1] = v9;
  a3[2] = v17;
  a3[3] = v12;
  return 1;
}
