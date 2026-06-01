/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_48930
// Address: 0x00048930

//----- (00048930) --------------------------------------------------------
int __cdecl sub_48930(int a1)
{
  unsigned int v1; // edi
  int v2; // esi
  char *v3; // eax
  int v4; // eax
  int v5; // eax
  char *v6; // eax
  int v7; // eax
  int v8; // eax
  int v10; // [esp+Ch] [ebp-50h]
  char v11[4]; // [esp+18h] [ebp-44h] BYREF
  int v12; // [esp+1Ch] [ebp-40h]
  int v13; // [esp+20h] [ebp-3Ch]
  int v14; // [esp+24h] [ebp-38h]
  int v15; // [esp+28h] [ebp-34h]
  char v16[4]; // [esp+30h] [ebp-2Ch] BYREF
  int v17; // [esp+34h] [ebp-28h]
  int v18; // [esp+38h] [ebp-24h]
  int v19; // [esp+3Ch] [ebp-20h]
  int v20; // [esp+40h] [ebp-1Ch]
  unsigned int v21; // [esp+48h] [ebp-14h]

  v21 = __readgsdword(0x14u);
  v1 = *(_DWORD *)(a1 + 232);
  if ( v1 <= 2 )
  {
    if ( !(_BYTE)under_debugger )
      interr(1439);
    BUG();
  }
  v2 = *(_DWORD *)(a1 + 228);
  v10 = -1;
  if ( sub_63E00(v2 + 20 * (v1 - 3)) )
  {
    swap_idcvs(
      (__int64 *)(v2 + 20 * (v1 - 3)),
      (__int64 *)(v2 + 20 * ((*(_DWORD *)(v2 + 20 * (v1 - 3) + 4) == 0) + v1) - 40));
    v3 = (char *)(*(_DWORD *)(a1 + 228) + 20 * *(_DWORD *)(a1 + 232) - 20);
    v16[0] = 2;
    v18 = 0;
    v17 = 0;
    v20 = 0;
    v19 = 0;
    copy_idcv(v16, v3);
    v4 = *(_DWORD *)(a1 + 232);
    if ( v4 )
    {
      v5 = v4 - 1;
      *(_DWORD *)(a1 + 232) = v5;
      free_idcv((char *)(*(_DWORD *)(a1 + 228) + 20 * v5));
    }
    free_idcv(v16);
    v6 = (char *)(*(_DWORD *)(a1 + 228) + 20 * *(_DWORD *)(a1 + 232) - 20);
    v11[0] = 2;
    v13 = 0;
    v12 = 0;
    v15 = 0;
    v14 = 0;
    copy_idcv(v11, v6);
    v7 = *(_DWORD *)(a1 + 232);
    if ( v7 )
    {
      v8 = v7 - 1;
      *(_DWORD *)(a1 + 232) = v8;
      free_idcv((char *)(*(_DWORD *)(a1 + 228) + 20 * v8));
    }
    v10 = 0;
    free_idcv(v11);
  }
  return v10;
}
// 13E34C: using guessed type int under_debugger;
