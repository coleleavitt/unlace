/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1C690
// Address: 0x0001C690

//----- (0001C690) --------------------------------------------------------
char __cdecl sub_1C690(int a1, int *a2, char a3)
{
  int v3; // esi
  int v4; // edi
  const char *v5; // eax
  int v7; // eax
  unsigned int v8; // edi
  unsigned int v9; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // edx
  int v13; // esi
  unsigned int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // edi
  unsigned int v17; // edi
  unsigned int v18; // [esp+0h] [ebp-202Ch]
  int v19; // [esp+4h] [ebp-2028h]
  unsigned int v20; // [esp+8h] [ebp-2024h]
  unsigned int v21; // [esp+Ch] [ebp-2020h]
  __int16 v22; // [esp+16h] [ebp-2016h] BYREF
  _DWORD v23[2053]; // [esp+18h] [ebp-2014h] BYREF

  v23[2048] = __readgsdword(0x14u);
  v3 = 40 * a2[1];
  if ( !v3 )
    goto LABEL_10;
  v4 = *a2;
  v18 = -1;
  while ( 1 )
  {
    v5 = byte_EF875;
    if ( *(_DWORD *)(v4 + 12) )
      v5 = *(const char **)(v4 + 8);
    if ( !strcmp(v5, "/system/bin/linker") )
    {
      if ( v18 == -1 )
        v18 = *(_DWORD *)v4;
      if ( (*(_BYTE *)(v4 + 37) & 6) == 6 )
        break;
    }
    v4 += 40;
    v3 -= 40;
    if ( !v3 )
      goto LABEL_10;
  }
  v7 = *(_DWORD *)(v4 + 4);
  v8 = *(_DWORD *)v4;
  v9 = v7 - v8;
  v10 = 0x2000;
  if ( v9 < 0x2000 )
    v10 = v9;
  v11 = (*(int (__cdecl **)(int, unsigned int, _DWORD *, int, _DWORD))(*(_DWORD *)a1 + 144))(a1, v8, v23, v10, 0);
  if ( v11 < 24 )
  {
LABEL_10:
    sub_1C900();
    return 0;
  }
  v12 = v11 / 4 - 5;
  v13 = 0;
  v20 = v8;
  v19 = v12;
  while ( 1 )
  {
    if ( v23[v13] != 1 || !a3 && v23[v13 + 1] )
      goto LABEL_30;
    v14 = v23[v13 + 2];
    if ( v14 >= v8 || (v14 & 1) == 0 || !a3 && v23[v13 + 3] )
      goto LABEL_30;
    if ( v23[v13 + 4] )
      goto LABEL_30;
    v15 = v14 & 0xFFFFFFFE;
    v16 = 0;
    if ( v15 < v18 )
      v16 = v18;
    v17 = v15 + v16;
    if ( (*(int (__cdecl **)(int, unsigned int, __int16 *, int, _DWORD))(*(_DWORD *)a1 + 144))(a1, v17, &v22, 2, 0) == 2
      && v22 == 18288 )
    {
      v21 = v17 + 1;
      if ( sub_21300(a1, -1, v17 + 1, (unsigned int *)(a1 + 488), 1u, 0) == 1 )
      {
        if ( (*(int (__cdecl **)(int, _DWORD, int, unsigned int, int))(*(_DWORD *)a1 + 156))(a1, 0, 4, v21, -1) )
          break;
      }
    }
    v8 = v20;
    v12 = v19;
LABEL_30:
    if ( ++v13 >= v12 )
      goto LABEL_10;
  }
  *(_DWORD *)(a1 + 484) = v21;
  *(_BYTE *)(a1 + 489) = 1;
  sub_1C9D0(a1, "found r_debug (r_brk=%a)\n", v17);
  return 1;
}
