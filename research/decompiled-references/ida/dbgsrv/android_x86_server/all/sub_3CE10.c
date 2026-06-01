/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3CE10
// Address: 0x0003CE10

//----- (0003CE10) --------------------------------------------------------
unsigned int __cdecl sub_3CE10(int a1, int a2, unsigned __int32 *a3)
{
  unsigned int *v3; // eax
  unsigned int v4; // eax
  unsigned __int32 v5; // edx
  int v6; // esi
  void *v7; // eax
  void *v8; // eax
  int v9; // ecx
  int v10; // edi
  char v12; // [esp+7h] [ebp-35h]
  unsigned int v13; // [esp+Ch] [ebp-30h]
  unsigned int v14; // [esp+10h] [ebp-2Ch]
  char *v15; // [esp+18h] [ebp-24h] BYREF
  unsigned int v16; // [esp+1Ch] [ebp-20h]
  int v17; // [esp+20h] [ebp-1Ch]
  unsigned int v18; // [esp+28h] [ebp-14h]

  v18 = __readgsdword(0x14u);
  v3 = sub_3C460(a1, 1, ".gnu_debuglink");
  if ( !v3 )
    return 0;
  v15 = nullptr;
  v16 = 0;
  v17 = 0;
  v4 = sub_366F0(a1, (int)&v15, v3);
  LOBYTE(v4) = v16 > 4;
  v14 = v4;
  if ( v16 < 5 )
    goto LABEL_19;
  if ( a3 )
  {
    v13 = v16 - 4;
    v5 = _byteswap_ulong(*(_DWORD *)&v15[v16 - 4]);
    if ( *(_BYTE *)(*(_DWORD *)(a1 + 132) + 389) != 2 )
      v5 = *(_DWORD *)&v15[v16 - 4];
    *a3 = v5;
    if ( !a2 )
      goto LABEL_19;
LABEL_10:
    if ( *(_DWORD *)(a2 + 8) < v13 )
      *(_DWORD *)a2 = qvector_reserve(a2, *(void **)a2, v13, 1u);
    v6 = 0;
    while ( 1 )
    {
      v7 = v15;
      if ( !v15[v6] )
        goto LABEL_20;
      v12 = v15[v6];
      v8 = *(void **)a2;
      v9 = *(_DWORD *)(a2 + 4);
      v10 = v9 - 1;
      if ( !v9 )
        v10 = 0;
      if ( *(_DWORD *)(a2 + 8) < (unsigned int)(v10 + 2) )
      {
        v8 = qvector_reserve(a2, v8, v10 + 2, 1u);
        *(_DWORD *)a2 = v8;
      }
      *(_DWORD *)(a2 + 4) = v10 + 2;
      *((_BYTE *)v8 + v10) = v12;
      *(_BYTE *)(*(_DWORD *)a2 + v10 + 1) = 0;
      if ( ++v6 >= v13 )
        goto LABEL_19;
    }
  }
  v13 = v16 - 4;
  if ( a2 )
    goto LABEL_10;
LABEL_19:
  v7 = v15;
LABEL_20:
  if ( v7 )
  {
    v16 = 0;
    qfree(v7);
    v15 = nullptr;
    v17 = 0;
  }
  return v14;
}
