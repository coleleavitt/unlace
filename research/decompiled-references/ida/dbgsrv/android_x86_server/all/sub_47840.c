/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47840
// Address: 0x00047840

//----- (00047840) --------------------------------------------------------
unsigned int __cdecl sub_47840(int a1, unsigned int a2)
{
  char *v2; // eax
  unsigned int v3; // edx
  int v4; // ecx
  char *v5; // eax
  int v6; // ecx
  char *v8; // [esp+20h] [ebp-3Ch]
  char *v9; // [esp+20h] [ebp-3Ch]
  int v10; // [esp+28h] [ebp-34h]
  int v11; // [esp+2Ch] [ebp-30h]
  int v12; // [esp+30h] [ebp-2Ch]
  char v13[4]; // [esp+34h] [ebp-28h] BYREF
  int v14; // [esp+38h] [ebp-24h]
  int v15; // [esp+3Ch] [ebp-20h]
  int v16; // [esp+40h] [ebp-1Ch]
  int v17; // [esp+44h] [ebp-18h]
  unsigned int v18; // [esp+48h] [ebp-14h]

  v18 = __readgsdword(0x14u);
  v2 = *(char **)a1;
  v3 = *(_DWORD *)(a1 + 8);
  if ( *(_DWORD *)a1 > a2 || (unsigned int)&v2[32 * v3] <= a2 )
  {
    v6 = *(_DWORD *)(a1 + 4);
    if ( v3 < v6 + 1 )
    {
      v2 = (char *)qvector_reserve(a1, v2, v6 + 1, 0x20u);
      *(_DWORD *)a1 = v2;
      v6 = *(_DWORD *)(a1 + 4);
    }
    v8 = &v2[32 * v6];
    *(_DWORD *)v8 = *(_DWORD *)a2;
    *(_DWORD *)a2 = 0;
    *((_DWORD *)v8 + 1) = *(_DWORD *)(a2 + 4);
    *(_DWORD *)(a2 + 4) = 0;
    *((_DWORD *)v8 + 2) = *(_DWORD *)(a2 + 8);
    *(_DWORD *)(a2 + 8) = 0;
    v8[12] = 2;
    *((_DWORD *)v8 + 5) = 0;
    *((_DWORD *)v8 + 4) = 0;
    *((_DWORD *)v8 + 7) = 0;
    *((_DWORD *)v8 + 6) = 0;
    copy_idcv(v8 + 12, (char *)(a2 + 12));
  }
  else
  {
    v10 = *(_DWORD *)a2;
    *(_DWORD *)a2 = 0;
    v11 = *(_DWORD *)(a2 + 4);
    *(_DWORD *)(a2 + 4) = 0;
    v12 = *(_DWORD *)(a2 + 8);
    *(_DWORD *)(a2 + 8) = 0;
    v13[0] = 2;
    v15 = 0;
    v14 = 0;
    v17 = 0;
    v16 = 0;
    copy_idcv(v13, (char *)(a2 + 12));
    v4 = *(_DWORD *)(a1 + 4);
    if ( *(_DWORD *)(a1 + 8) >= (unsigned int)(v4 + 1) )
    {
      v5 = *(char **)a1;
    }
    else
    {
      v5 = (char *)qvector_reserve(a1, *(void **)a1, v4 + 1, 0x20u);
      *(_DWORD *)a1 = v5;
      v4 = *(_DWORD *)(a1 + 4);
    }
    v9 = &v5[32 * v4];
    *(_DWORD *)v9 = v10;
    *((_DWORD *)v9 + 1) = v11;
    *((_DWORD *)v9 + 2) = v12;
    v9[12] = 2;
    *((_DWORD *)v9 + 5) = 0;
    *((_DWORD *)v9 + 4) = 0;
    *((_DWORD *)v9 + 7) = 0;
    *((_DWORD *)v9 + 6) = 0;
    copy_idcv(v9 + 12, v13);
    free_idcv(v13);
  }
  ++*(_DWORD *)(a1 + 4);
  return __readgsdword(0x14u);
}
// 47A5C: conditional instruction was optimized away because %0x2C.4==0
