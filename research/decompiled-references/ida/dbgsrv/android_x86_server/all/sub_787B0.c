/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_787B0
// Address: 0x000787B0

//----- (000787B0) --------------------------------------------------------
char __cdecl sub_787B0(int a1, int a2)
{
  int v2; // ecx
  const void **v3; // edx
  size_t v4; // eax
  const void *v5; // esi
  char *v6; // edi
  size_t v7; // esi
  size_t v8; // eax
  size_t v9; // ecx
  int v10; // esi
  _DWORD *v11; // eax
  bool v12; // zf
  size_t v13; // esi
  int *v15; // [esp+4h] [ebp-38h]
  size_t v16; // [esp+8h] [ebp-34h]
  size_t v17; // [esp+8h] [ebp-34h]
  unsigned __int8 *v18; // [esp+Ch] [ebp-30h]
  int v19; // [esp+1Ch] [ebp-20h]
  size_t v20; // [esp+20h] [ebp-1Ch]
  const void **v21; // [esp+24h] [ebp-18h]
  int v22; // [esp+28h] [ebp-14h]

  v2 = a1;
  if ( (*(_DWORD *)(a1 + 4144) & 0x3FFFFFFF) != 0 )
  {
    v15 = *(int **)(a1 + 4140);
    do
    {
      if ( *(_DWORD *)(v2 + 4168) != a2 )
      {
        v3 = (const void **)(**(_DWORD **)(a1 + 12) + 40 * *v15);
        v18 = (unsigned __int8 *)v3[1];
        v21 = v3;
        v22 = *(unsigned __int8 *)*v3;
        v4 = *(_DWORD *)(v2 + 4168) - a2;
        v5 = (const void *)(a1 + a2 + 24);
        do
        {
          v16 = v4;
          v6 = (char *)memchr(v5, v22, v4);
          if ( !v6 )
            break;
          v7 = v16 + (_BYTE *)v5 - v6;
          v8 = (size_t)v18;
          if ( v7 < (unsigned int)v18 )
            v8 = v7;
          v17 = v8;
          if ( !memcmp(v6, *v21, v8) )
          {
            v9 = v7;
            v10 = (int)&v6[*(_DWORD *)(a1 + 4120) - 24 - a1];
            v20 = v9;
            if ( v9 >= (unsigned int)v18 )
            {
              **(_DWORD **)(a1 + 4) = v10;
              return 1;
            }
            v19 = *v15;
            v11 = qalloc_or_throw(20);
            v11[2] = v10;
            v11[3] = v19;
            v11[4] = v17;
            *v11 = a1 + 4124;
            v11[1] = *(_DWORD *)(a1 + 4128);
            **(_DWORD **)(a1 + 4128) = v11;
            *(_DWORD *)(a1 + 4128) = v11;
            ++*(_DWORD *)(a1 + 4132);
            v7 = v20;
          }
          v13 = v7 - 1;
          v12 = v13 == 0;
          v4 = v13;
          v5 = v6 + 1;
        }
        while ( !v12 );
      }
      v2 = a1;
      ++v15;
    }
    while ( v15 != (int *)(*(_DWORD *)(a1 + 4140) + 4 * *(_DWORD *)(a1 + 4144)) );
  }
  return 0;
}
