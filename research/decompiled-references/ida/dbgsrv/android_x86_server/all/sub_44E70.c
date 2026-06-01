/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44E70
// Address: 0x00044E70

//----- (00044E70) --------------------------------------------------------
int __cdecl sub_44E70(_DWORD *a1, int a2)
{
  int v2; // eax
  int v3; // esi
  unsigned int v4; // ecx
  int v5; // edi
  signed int v6; // edi
  int v7; // edx
  int v8; // ecx
  int v9; // eax
  int v10; // ebx
  const void *v11; // esi
  int v12; // eax
  int v13; // eax
  int v15; // [esp+8h] [ebp-24h] BYREF
  int v16; // [esp+Ch] [ebp-20h]
  int v17; // [esp+10h] [ebp-1Ch]
  unsigned int v18; // [esp+18h] [ebp-14h]

  v18 = __readgsdword(0x14u);
  v2 = a1[2];
  v3 = a1[6];
  v4 = v2 - 1;
  if ( !v2 )
    v4 = 0;
  v5 = a1[11];
  if ( v3 >= 0 )
  {
    if ( v5 >= 0 )
      goto LABEL_5;
    goto LABEL_15;
  }
  v12 = v4 + v3 + 1;
  v3 = 0;
  if ( v12 >= 0 )
    v3 = v12;
  if ( v3 > v4 )
    v3 = v4;
  if ( v5 < 0 )
  {
LABEL_15:
    v13 = v4 + v5 + 1;
    v5 = 0;
    if ( v13 >= 0 )
      v5 = v13;
    if ( v5 > v4 )
      v5 = v4;
  }
LABEL_5:
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v6 = v5 - v3;
  v7 = 0;
  if ( v6 <= 0 )
  {
    v9 = 0;
    v10 = 0;
  }
  else
  {
    v8 = v4 - v3;
    v9 = 0;
    v10 = 0;
    if ( v8 > 0 )
    {
      if ( v6 > v8 )
        v6 = v8;
      v11 = (const void *)(a1[1] + v3);
      v15 = (int)qvector_reserve((int)&v15, nullptr, v6 + 1, 1u);
      v16 = v6 + 1;
      *(_BYTE *)(v15 + v6) = 0;
      memmove((void *)v15, v11, v6);
      v10 = v15;
      v9 = v16;
      v7 = v17;
    }
  }
  *(_BYTE *)a2 = 7;
  *(_DWORD *)(a2 + 4) = v10;
  *(_DWORD *)(a2 + 8) = v9;
  *(_DWORD *)(a2 + 12) = v7;
  return 0;
}
// 44EF3: conditional instruction was optimized away because edi.4>=1
