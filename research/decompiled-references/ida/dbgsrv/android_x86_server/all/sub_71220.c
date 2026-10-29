/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_71220
// Address: 0x00071220

//----- (00071220) --------------------------------------------------------
char __cdecl sub_71220(int a1, char *a2)
{
  int v2; // eax
  int v3; // edi
  unsigned int v4; // esi
  int v5; // ebx
  unsigned int v6; // edx
  int v7; // ecx
  int v8; // edi
  int v9; // edx
  int v10; // esi
  char result; // al
  bool v12; // zf
  unsigned int v13; // [esp+Ch] [ebp-1Ch]
  int v14; // [esp+14h] [ebp-14h]
  unsigned int v15; // [esp+18h] [ebp-10h]

  v2 = 64 - 8 * *((_DWORD *)a2 + 1);
  v3 = 0xFFFFFFFFFFFFFFFFLL >> v2;
  v4 = 0xFFFFFFFF >> ((64 - 8 * a2[4]) & 0x18);
  v5 = 0x8000000000000000LL >> (64 - 8 * a2[4]);
  v6 = 0x80000000 >> ((64 - 8 * a2[4]) & 0x18);
  if ( (v2 & 0x20) != 0 )
  {
    v3 = 0xFFFFFFFF >> ((64 - 8 * a2[4]) & 0x18);
    v4 = 0;
    v5 = 0x80000000 >> ((64 - 8 * a2[4]) & 0x18);
    v6 = 0;
  }
  v13 = v6;
  v7 = *(_DWORD *)(a1 + 4);
  v14 = v3;
  v8 = v7 & v3;
  v9 = *(_DWORD *)(a1 + 8);
  v15 = v4;
  v10 = v9 & v4;
  *(_DWORD *)(a1 + 8) = v10;
  *(_DWORD *)(a1 + 4) = v8;
  result = *a2;
  v12 = *a2 == 0;
  *(_BYTE *)a1 = *a2;
  if ( v12 )
  {
    if ( v5 & v8 | v13 & v10 )
    {
      *(_DWORD *)(a1 + 4) = v5 | ~v14 | v7;
      *(_DWORD *)(a1 + 8) = v13 | ~v15 | v9;
      return a1;
    }
  }
  return result;
}
