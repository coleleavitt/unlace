/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_77C50
// Address: 0x00077C50

//----- (00077C50) --------------------------------------------------------
char __cdecl sub_77C50(int a1, int a2)
{
  int v2; // eax
  int v3; // edx
  size_t v4; // edi
  _DWORD *v5; // esi
  size_t v6; // ecx
  int v7; // eax
  int v8; // esi
  size_t v9; // edi
  size_t v10; // ecx
  int v11; // esi
  _DWORD *v12; // eax
  int *v14; // [esp+0h] [ebp-3Ch]
  size_t v15; // [esp+8h] [ebp-34h]
  int v16; // [esp+Ch] [ebp-30h]
  size_t v17; // [esp+18h] [ebp-24h]
  int v18; // [esp+1Ch] [ebp-20h]
  _DWORD *v19; // [esp+20h] [ebp-1Ch]
  int v20; // [esp+24h] [ebp-18h]
  size_t v21; // [esp+28h] [ebp-14h]

  if ( (*(_DWORD *)(a1 + 4144) & 0x3FFFFFFF) != 0 )
  {
    v2 = *(_DWORD *)(a1 + 4168);
    v3 = a1 + v2 + 24;
    v14 = *(int **)(a1 + 4140);
    v16 = v3;
    while ( 1 )
    {
      v4 = a2 - v2;
      if ( a2 != v2 )
      {
        v5 = (_DWORD *)(**(_DWORD **)(a1 + 12) + 40 * *v14);
        v6 = v5[1];
        v19 = v5;
        v20 = *(unsigned __int8 *)(*v5 + v6 - 1);
        v15 = v6;
        v17 = v6 + a1 + 24;
        do
        {
          v7 = memrchr(v3, v20, v4);
          v3 = v16;
          if ( !v7 )
            break;
          v8 = v7 + 1;
          v9 = v7 + 1 - v16;
          v10 = v15;
          if ( v9 < v15 )
            v10 = v7 + 1 - v16;
          v21 = v10;
          if ( !memcmp((const void *)(v8 - v10), (const void *)(*v19 + v15 - v10), v10) )
          {
            v11 = *(_DWORD *)(a1 + 4120) + v8 - v17;
            if ( v9 >= v15 )
            {
              **(_DWORD **)(a1 + 4) = v11;
              return 1;
            }
            v18 = *v14;
            v12 = qalloc_or_throw(20);
            v12[2] = v11;
            v12[3] = v18;
            v12[4] = v21;
            *v12 = a1 + 4124;
            v12[1] = *(_DWORD *)(a1 + 4128);
            **(_DWORD **)(a1 + 4128) = v12;
            *(_DWORD *)(a1 + 4128) = v12;
            ++*(_DWORD *)(a1 + 4132);
          }
          v4 = v9 - 1;
          v3 = v16;
        }
        while ( v4 );
      }
      if ( ++v14 == (int *)(*(_DWORD *)(a1 + 4140) + 4 * *(_DWORD *)(a1 + 4144)) )
        break;
      v2 = *(_DWORD *)(a1 + 4168);
    }
  }
  return 0;
}
// 17D40: using guessed type int __cdecl memrchr(_DWORD, _DWORD, _DWORD);
