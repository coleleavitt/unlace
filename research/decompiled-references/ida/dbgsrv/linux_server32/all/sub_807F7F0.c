/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_807F7F0
// Address: 0x0807F7F0

//----- (0807F7F0) --------------------------------------------------------
unsigned int __cdecl sub_807F7F0(int a1)
{
  _DWORD *v1; // esi
  __m128i si128; // xmm0
  _WORD *v3; // eax
  int v4; // eax
  unsigned int v5; // edi
  char *v6; // ecx
  char *v7; // edi
  _WORD *v8; // eax
  _WORD *v9; // eax
  char *v11; // ecx
  int v12; // edx
  int v13; // eax
  void *v14; // edi
  int v15; // edx
  char *v16; // eax
  int v17; // ecx
  int v18; // edi
  char *v19; // esi
  void *v20; // ebx
  __int64 v21; // xmm1_8
  int v22; // ebx
  __int64 v23; // xmm2_8
  void *v24; // ebx
  char *v26; // [esp+0h] [ebp-28h]
  int v27; // [esp+4h] [ebp-24h]
  int v28; // [esp+8h] [ebp-20h]
  char *v29; // [esp+8h] [ebp-20h]

  v1 = (_DWORD *)a1;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_80DE210);
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 4) = sub_8083D50;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  *(_DWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 36) = 0;
  *(_DWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 44) = 0;
  *(_DWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 52) = 0;
  *(_DWORD *)(a1 + 76) = 0;
  *(_DWORD *)(a1 + 80) = 0;
  *(_DWORD *)(a1 + 84) = 0;
  *(_DWORD *)(a1 + 96) = 0;
  *(__m128i *)(a1 + 60) = si128;
  *(_DWORD *)a1 = &off_811BD7C;
  *(_DWORD *)(a1 + 100) = 656876066;
  *(_WORD *)(a1 + 104) = 9052;
  *(_BYTE *)(a1 + 56) = 0;
  v3 = sub_80CF920(a1 + 32, nullptr, 3u, 1u);
  *(_DWORD *)(a1 + 32) = v3;
  *(_DWORD *)(a1 + 36) = 3;
  *v3 = 12079;
  *(_BYTE *)(*(_DWORD *)(a1 + 32) + 2) = 0;
  v4 = *(_DWORD *)(a1 + 48);
  v5 = *(_DWORD *)(a1 + 52);
  if ( v5 < v4 + 1 )
  {
    v11 = (char *)sub_80CF920(a1 + 44, nullptr, v4 + 1, 0x18u);
    v12 = *(_DWORD *)(a1 + 48);
    v13 = *(_DWORD *)(a1 + 52);
    *(_DWORD *)(a1 + 52) = v5;
    v14 = *(void **)(a1 + 44);
    v27 = v13;
    v15 = v12 - 1;
    if ( v15 >= 0 )
    {
      v16 = v11;
      v26 = v11;
      v17 = *(_DWORD *)(a1 + 44);
      v18 = v15;
      v19 = v16;
      do
      {
        v20 = *(void **)v17;
        v21 = *(_QWORD *)(v17 + 4);
        *(_DWORD *)v17 = 0;
        *(_DWORD *)(v17 + 4) = 0;
        *(_DWORD *)v19 = v20;
        *(_QWORD *)(v19 + 4) = v21;
        v22 = *(_DWORD *)(v17 + 12);
        v23 = *(_QWORD *)(v17 + 16);
        *(_DWORD *)(v17 + 8) = 0;
        *((_DWORD *)v19 + 3) = v22;
        *((_QWORD *)v19 + 2) = v23;
        v24 = *(void **)v17;
        *(_DWORD *)(v17 + 12) = 0;
        *(_DWORD *)(v17 + 20) = 0;
        if ( v24 )
        {
          *(_DWORD *)(v17 + 4) = 0;
          v28 = v17;
          sub_80CF780(v24);
          v17 = v28;
        }
        v17 += 24;
        v19 += 24;
      }
      while ( v18-- != 0 );
      v1 = (_DWORD *)a1;
      v11 = v26;
      v14 = *(void **)(a1 + 44);
    }
    v29 = v11;
    sub_80CF780(v14);
    v6 = v29;
    v1[13] = v27;
    v4 = v1[12];
    v1[11] = v29;
  }
  else
  {
    v6 = *(char **)(a1 + 44);
  }
  v7 = &v6[24 * v4];
  *(_DWORD *)v7 = 0;
  *((_DWORD *)v7 + 2) = 0;
  *((_DWORD *)v7 + 1) = 0;
  *((_DWORD *)v7 + 3) = 0;
  *((_DWORD *)v7 + 4) = 0;
  *((_DWORD *)v7 + 5) = 0;
  ++v1[12];
  v8 = *(_WORD **)v7;
  if ( *((_DWORD *)v7 + 2) <= 2u )
  {
    v8 = sub_80CF920((int)v7, v8, 3u, 1u);
    *(_DWORD *)v7 = v8;
  }
  *((_DWORD *)v7 + 1) = 3;
  *v8 = 10799;
  *(_BYTE *)(*(_DWORD *)v7 + 2) = 0;
  v9 = *((_WORD **)v7 + 3);
  if ( *((_DWORD *)v7 + 5) <= 2u )
  {
    v9 = sub_80CF920((int)(v7 + 12), v9, 3u, 1u);
    *((_DWORD *)v7 + 3) = v9;
  }
  *((_DWORD *)v7 + 4) = 3;
  *v9 = 12074;
  *(_BYTE *)(*((_DWORD *)v7 + 3) + 2) = 0;
  sub_807ECE0(v1, &qword_811CFF4 - 33327, 1);
  sub_807ECE0(v1, &qword_811CFF4 - 33317, 2);
  return sub_807ECE0(v1, (char *)&qword_811CFF4 - 279147, 3);
}
// 8083D50: using guessed type int __cdecl sub_8083D50(int, int, int);
// 80DE210: using guessed type __int128 xmmword_80DE210;
// 811BD7C: using guessed type int (__cdecl *off_811BD7C)(int);
// 811CFF4: using guessed type __int64 qword_811CFF4;
