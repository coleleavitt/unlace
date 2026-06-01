/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47D40
// Address: 0x00047D40

//----- (00047D40) --------------------------------------------------------
int __cdecl sub_47D40(int a1)
{
  int v1; // edi
  int v2; // ecx
  unsigned int v3; // eax
  _BYTE *v5; // eax
  int v6; // ecx
  char *v7; // eax
  int v8; // eax
  int v9; // eax
  char v10[4]; // [esp+10h] [ebp-2Ch] BYREF
  int v11; // [esp+14h] [ebp-28h]
  int v12; // [esp+18h] [ebp-24h]
  int v13; // [esp+1Ch] [ebp-20h]
  int v14; // [esp+20h] [ebp-1Ch]
  unsigned int v15; // [esp+28h] [ebp-14h]

  v15 = __readgsdword(0x14u);
  v1 = *(_DWORD *)(a1 + 104);
  v2 = *(_DWORD *)(v1 + 36);
  if ( v2 )
  {
    v3 = v2 + 1;
    if ( v2 + 1 + *(_DWORD *)(a1 + 240) != *(_DWORD *)(a1 + 80) )
      return set_qerrno(1268);
  }
  else
  {
    *(_DWORD *)(a1 + 240) = *(_DWORD *)(a1 + 80) - 1;
    v2 = *(_DWORD *)(v1 + 36);
    v3 = v2 + 1;
  }
  if ( *(_DWORD *)(v1 + 40) >= v3 )
  {
    v5 = *(_BYTE **)(v1 + 32);
  }
  else
  {
    v5 = qvector_reserve(v1 + 32, *(void **)(v1 + 32), v3, 0x14u);
    *(_DWORD *)(v1 + 32) = v5;
    v2 = *(_DWORD *)(v1 + 36);
  }
  v6 = 5 * v2;
  v5[4 * v6] = 2;
  *(_DWORD *)&v5[4 * v6 + 16] = 0;
  *(_DWORD *)&v5[4 * v6 + 12] = 0;
  *(_DWORD *)&v5[4 * v6 + 8] = 0;
  *(_DWORD *)&v5[4 * v6 + 4] = 0;
  ++*(_DWORD *)(v1 + 36);
  if ( *(_DWORD *)(a1 + 232) != 1 )
  {
    if ( !(_BYTE)under_debugger )
      interr(1437);
    BUG();
  }
  swap_idcvs((__int64 *)&v5[4 * v6], *(__int64 **)(a1 + 228));
  v7 = (char *)(*(_DWORD *)(a1 + 228) + 20 * *(_DWORD *)(a1 + 232) - 20);
  v10[0] = 2;
  v12 = 0;
  v11 = 0;
  v14 = 0;
  v13 = 0;
  copy_idcv(v10, v7);
  v8 = *(_DWORD *)(a1 + 232);
  if ( v8 )
  {
    v9 = v8 - 1;
    *(_DWORD *)(a1 + 232) = v9;
    free_idcv((char *)(*(_DWORD *)(a1 + 228) + 20 * v9));
  }
  free_idcv(v10);
  return 0;
}
// 13E34C: using guessed type int under_debugger;
