/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_578FC
// Address: 0x000578FC

//----- (000578FC) --------------------------------------------------------
int __fastcall sub_578FC(int a1, int a2)
{
  int v2; // r3
  int v3; // r5
  int v4; // r4
  size_t v5; // r6
  int v6; // r0
  int v7; // r7
  size_t v8; // r4
  size_t v9; // r5
  int v10; // r7
  _DWORD *v11; // r0
  int v13; // [sp+4h] [bp-40h]
  int *v14; // [sp+8h] [bp-3Ch]
  int v15; // [sp+Ch] [bp-38h]
  _DWORD *v16; // [sp+10h] [bp-34h]
  _DWORD *v17; // [sp+14h] [bp-30h]
  _DWORD *v19; // [sp+1Ch] [bp-28h]
  int v20; // [sp+20h] [bp-24h]
  _DWORD *v21; // [sp+24h] [bp-20h]
  _DWORD *v22; // [sp+28h] [bp-1Ch]
  int *v23; // [sp+30h] [bp-14h]
  int v24; // [sp+34h] [bp-10h]
  int v25; // [sp+38h] [bp-Ch]
  int v26; // [sp+3Ch] [bp-8h]
  _DWORD *v27; // [sp+40h] [bp-4h]

  v17 = (_DWORD *)(a1 + 4144);
  v16 = (_DWORD *)(a1 + 4140);
  v14 = (int *)(a1 + 4168);
  v2 = *(_DWORD *)(a1 + 4168);
  v3 = a1 + v2 + 24;
  v4 = 0;
  if ( 4 * *(_DWORD *)(a1 + 4144) )
  {
    v23 = *(int **)(a1 + 4140);
    v21 = (_DWORD *)(a1 + 4132);
    v20 = a1 + 4124;
    v22 = (_DWORD *)(a1 + 4120);
    v19 = (_DWORD *)(a1 + 4128);
    v13 = a1 + 24;
    v15 = a1;
    v25 = a1 + v2 + 24;
    while ( 1 )
    {
      v27 = (_DWORD *)(**(_DWORD **)(a1 + 12) + 40 * *v23);
      if ( a2 != v2 )
      {
        v5 = v27[1];
        v26 = *(unsigned __int8 *)(*v27 + v5 - 1);
        do
        {
          v6 = memrchr(v3, v26);
          if ( !v6 )
            break;
          v7 = v6 + 1;
          v9 = v6 + 1 - v3;
          v8 = v9;
          if ( v9 >= v5 )
            v9 = v5;
          if ( !memcmp((const void *)(v7 - v9), (const void *)(*v27 + v5 - v9), v9) )
          {
            v10 = v7 - (v5 + v13) + *v22;
            if ( v8 >= v5 )
            {
              **(_DWORD **)(v15 + 4) = v10;
              return 1;
            }
            v24 = *v23;
            v11 = qalloc_or_throw(20);
            v11[2] = v10;
            v11[3] = v24;
            v11[4] = v9;
            *v11 = v20;
            v11[1] = *v19;
            *(_DWORD *)*v19 = v11;
            *v19 = v11;
            ++*v21;
          }
          v3 = v25;
        }
        while ( v8 != 1 );
      }
      if ( ++v23 == (int *)(*v16 + 4 * *v17) )
        break;
      v2 = *v14;
      a1 = v15;
    }
    return 0;
  }
  return v4;
}
// 19520: using guessed type int __fastcall memrchr(_DWORD, _DWORD);
