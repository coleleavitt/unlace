/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_39738
// Address: 0x00039738

//----- (00039738) --------------------------------------------------------
int __fastcall sub_39738(int a1, unsigned int a2)
{
  unsigned int v4; // r0
  char *v5; // r1
  int v6; // r1
  char *v7; // r0
  int v8; // r3
  char *v9; // r4
  char *v10; // r7
  _DWORD *v12; // [sp+14h] [bp-34h]
  int v13; // [sp+1Ch] [bp-2Ch]
  int v14; // [sp+20h] [bp-28h]
  int v15; // [sp+24h] [bp-24h]
  unsigned __int8 v16[8]; // [sp+2Ch] [bp-1Ch] BYREF
  int v17; // [sp+34h] [bp-14h]
  int v18; // [sp+38h] [bp-10h]
  int v19; // [sp+3Ch] [bp-Ch]
  int v20; // [sp+40h] [bp-8h]
  int v21; // [sp+44h] [bp-4h]

  v4 = *(_DWORD *)(a1 + 8);
  v5 = *(char **)a1;
  if ( *(_DWORD *)a1 > a2 || *(_DWORD *)a1 + 40 * v4 <= a2 )
  {
    v12 = (_DWORD *)(a1 + 4);
    v8 = *(_DWORD *)(a1 + 4);
    if ( v4 < v8 + 1 )
    {
      v5 = (char *)qvector_reserve(a1, v5, v8 + 1, 0x28u);
      *(_DWORD *)a1 = v5;
      v8 = *(_DWORD *)(a1 + 4);
    }
    v9 = &v5[40 * v8];
    *(_DWORD *)v9 = *(_DWORD *)a2;
    *(_DWORD *)a2 = 0;
    *((_DWORD *)v9 + 1) = *(_DWORD *)(a2 + 4);
    *(_DWORD *)(a2 + 4) = 0;
    *((_DWORD *)v9 + 2) = *(_DWORD *)(a2 + 8);
    *(_DWORD *)(a2 + 8) = 0;
    v9[16] = 2;
    memset(v9 + 24, 0, 0x10u);
    copy_idcv((unsigned __int8 *)v9 + 16, (unsigned __int8 *)(a2 + 16));
  }
  else
  {
    v13 = *(_DWORD *)a2;
    *(_DWORD *)a2 = 0;
    v14 = *(_DWORD *)(a2 + 4);
    *(_DWORD *)(a2 + 4) = 0;
    v15 = *(_DWORD *)(a2 + 8);
    *(_DWORD *)(a2 + 8) = 0;
    v16[0] = 2;
    v20 = 0;
    v19 = 0;
    v18 = 0;
    v17 = 0;
    copy_idcv(v16, (unsigned __int8 *)(a2 + 16));
    v12 = (_DWORD *)(a1 + 4);
    v6 = *(_DWORD *)(a1 + 4);
    if ( *(_DWORD *)(a1 + 8) >= (unsigned int)(v6 + 1) )
    {
      v7 = *(char **)a1;
    }
    else
    {
      v7 = (char *)qvector_reserve(a1, *(void **)a1, v6 + 1, 0x28u);
      *(_DWORD *)a1 = v7;
      v6 = *(_DWORD *)(a1 + 4);
    }
    v10 = &v7[40 * v6];
    *(_DWORD *)v10 = v13;
    *((_DWORD *)v10 + 1) = v14;
    *((_DWORD *)v10 + 2) = v15;
    v10[16] = 2;
    memset(v10 + 24, 0, 0x10u);
    copy_idcv((unsigned __int8 *)v10 + 16, v16);
    free_idcv(v16);
  }
  ++*v12;
  return _stack_chk_guard - v21;
}
// 3984E: conditional instruction was optimized away because %var_2C.4==0
