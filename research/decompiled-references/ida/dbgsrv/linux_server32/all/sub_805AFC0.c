/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_805AFC0
// Address: 0x0805AFC0

//----- (0805AFC0) --------------------------------------------------------
unsigned int __cdecl sub_805AFC0(int *a1)
{
  int v1; // edi
  _DWORD *v2; // ebp
  void *v3; // eax
  void *v4; // eax
  _DWORD *v5; // edi
  void *v6; // eax
  void *v7; // eax
  int v8; // ebp
  _DWORD *v9; // eax
  void *v10; // ecx
  void *v11; // eax
  void *v12; // eax
  int v13; // edi
  void *v14; // eax
  __m128i v15; // xmm1
  __m128i v16; // xmm0
  unsigned int v17; // ebp
  unsigned int v18; // edi
  FILE *v19; // eax
  int v20; // edi
  void *v21; // eax
  td_thragent_t *v22; // eax
  int v23; // edi
  _DWORD *v24; // ebp
  void *v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  void *v29; // eax
  int v30; // eax
  unsigned int v31; // edi
  void *v32; // eax
  void *v33; // eax
  unsigned int result; // eax
  void *v35; // [esp-10h] [ebp-7Ch]
  __m128i v36; // [esp+0h] [ebp-6Ch] BYREF
  void *v37; // [esp+1Ch] [ebp-50h]
  __m128i v38; // [esp+20h] [ebp-4Ch] BYREF
  __m128i v39; // [esp+30h] [ebp-3Ch] BYREF
  unsigned int v40; // [esp+4Ch] [ebp-20h]

  v40 = __readgsdword(0x14u);
  if ( a1[181] != -1 )
    (*(void (__cdecl **)(int *, _DWORD))(*a1 + 80))(a1, 0);
  *((_BYTE *)a1 + 732) = 0;
  *(_WORD *)((char *)a1 + 769) = 0;
  v1 = a1[166];
  a1[181] = -1;
  a1[182] = -1;
  *((_BYTE *)a1 + 453) = 0;
  while ( v1 )
  {
    v2 = (_DWORD *)v1;
    sub_8056DB0(*(_DWORD **)(v1 + 12));
    v3 = *(void **)(v1 + 52);
    v1 = *(_DWORD *)(v1 + 8);
    if ( v3 )
    {
      v2[14] = 0;
      sub_80CF780(v3);
    }
    operator delete(v2, 0x40u);
  }
  a1[166] = 0;
  a1[167] = (int)(a1 + 165);
  a1[168] = (int)(a1 + 165);
  v4 = (void *)a1[160];
  a1[169] = 0;
  v37 = v4;
  while ( v37 )
  {
    v5 = v37;
    sub_8057A30(*((_DWORD **)v37 + 3));
    v37 = *((void **)v37 + 2);
    v6 = (void *)v5[22];
    if ( v6 )
    {
      v5[23] = 0;
      sub_80CF780(v6);
    }
    v7 = (void *)v5[19];
    if ( v7 )
    {
      v5[20] = 0;
      sub_80CF780(v7);
    }
    v8 = v5[15];
    while ( v8 )
    {
      sub_8057050(*(_DWORD **)(v8 + 12));
      v9 = (_DWORD *)v8;
      v8 = *(_DWORD *)(v8 + 8);
      v10 = (void *)v9[5];
      if ( v10 )
      {
        v36.m128i_i32[0] = (__int32)v9;
        v9[6] = 0;
        sub_80CF780(v10);
        v9 = (_DWORD *)v36.m128i_i32[0];
      }
      operator delete(v9, 0x20u);
    }
    v11 = (void *)v5[10];
    if ( v11 )
    {
      v5[11] = 0;
      sub_80CF780(v11);
    }
    v12 = (void *)v5[7];
    if ( v12 )
    {
      v5[8] = 0;
      sub_80CF780(v12);
    }
    operator delete(v5, 0x68u);
  }
  v13 = a1[154];
  a1[160] = 0;
  a1[161] = (int)(a1 + 159);
  a1[162] = (int)(a1 + 159);
  a1[163] = 0;
  while ( v13 )
  {
    sub_8057480(*(_DWORD **)(v13 + 12));
    v14 = (void *)v13;
    v13 = *(_DWORD *)(v13 + 8);
    operator delete(v14, 0x14u);
  }
  v15 = _mm_loadu_si128((const __m128i *)a1 + 4);
  v16 = _mm_loadu_si128((const __m128i *)a1 + 5);
  a1[154] = 0;
  a1[155] = (int)(a1 + 153);
  a1[156] = (int)(a1 + 153);
  a1[157] = 0;
  v38 = v16;
  v36 = v15;
  v39 = v15;
  sub_80552C0(&v39, &v38);
  v17 = _mm_cvtsi128_si32(_mm_shuffle_epi32(v15, 255)) + 4;
  v18 = a1[23] + 4;
  while ( v17 < v18 )
  {
    v17 += 4;
    operator delete(*(void **)(v17 - 4), 0x1E4u);
  }
  v19 = (FILE *)a1[190];
  *((__m128i *)a1 + 5) = _mm_load_si128(&v36);
  if ( v19 )
  {
    sub_80CF060(v19);
    a1[190] = 0;
  }
  v20 = a1[68];
  *((_BYTE *)a1 + 556) = 0;
  while ( v20 )
  {
    sub_80566C0(*(_DWORD **)(v20 + 12));
    v21 = (void *)v20;
    v20 = *(_DWORD *)(v20 + 8);
    operator delete(v21, 0x28u);
  }
  a1[68] = 0;
  a1[69] = (int)(a1 + 67);
  a1[70] = (int)(a1 + 67);
  v22 = (td_thragent_t *)a1[132];
  a1[71] = 0;
  *((_WORD *)a1 + 367) = 0;
  if ( v22 )
  {
    td_ta_delete(v22);
    v23 = dword_811E5EC;
    a1[132] = 0;
    while ( v23 )
    {
      v24 = (_DWORD *)v23;
      sub_8056920(*(_DWORD **)(v23 + 12));
      v25 = *(void **)(v23 + 16);
      v23 = *(_DWORD *)(v23 + 8);
      if ( v25 )
      {
        v24[5] = 0;
        sub_80CF780(v25);
      }
      operator delete(v24, 0x20u);
    }
    dword_811E5EC = 0;
    dword_811E5F0 = (int)&dword_811E5E8;
    dword_811E5F4 = (int)&dword_811E5E8;
    dword_811E5F8 = 0;
  }
  v26 = a1[133];
  if ( v26 )
    (*(void (__cdecl **)(int *, int, int, int *, _DWORD))(*a1 + 160))(
      a1,
      4,
      v26,
      a1 + 134,
      *((unsigned __int8 *)a1 + 537));
  v27 = a1[135];
  *((_BYTE *)a1 + 537) = 0;
  a1[133] = 0;
  if ( v27 )
    (*(void (__cdecl **)(int *, int, int, int *, _DWORD))(*a1 + 160))(
      a1,
      4,
      v27,
      a1 + 136,
      *((unsigned __int8 *)a1 + 545));
  v28 = a1[137];
  *((_BYTE *)a1 + 545) = 0;
  a1[135] = 0;
  if ( v28 )
    (*(void (__cdecl **)(int *, int, int, int *, _DWORD))(*a1 + 160))(
      a1,
      4,
      v28,
      a1 + 138,
      *((unsigned __int8 *)a1 + 553));
  v29 = (void *)a1[193];
  a1[137] = 0;
  *((_BYTE *)a1 + 553) = 0;
  a1[191] = 0;
  if ( v29 )
  {
    a1[194] = 0;
    sub_80CF780(v29);
    a1[193] = 0;
    a1[195] = 0;
  }
  v30 = a1[150];
  *((_BYTE *)a1 + 733) = 0;
  a1[197] = 0;
  if ( v30 )
  {
    v31 = 0;
    do
    {
      v35 = *(void **)(a1[149] + 4 * v31++);
      sub_80CF780(v35);
    }
    while ( v31 < a1[150] );
  }
  v32 = (void *)a1[146];
  if ( v32 )
  {
    a1[147] = 0;
    sub_80CF780(v32);
    a1[146] = 0;
    a1[148] = 0;
  }
  v33 = (void *)a1[149];
  if ( v33 )
  {
    a1[150] = 0;
    sub_80CF780(v33);
    a1[149] = 0;
    a1[151] = 0;
  }
  sub_80A08F0(a1);
  result = v40 - __readgsdword(0x14u);
  if ( result )
    sub_80D7AB0();
  return result;
}
// 811E5E8: using guessed type int dword_811E5E8;
// 811E5EC: using guessed type int dword_811E5EC;
// 811E5F0: using guessed type int dword_811E5F0;
// 811E5F4: using guessed type int dword_811E5F4;
// 811E5F8: using guessed type int dword_811E5F8;
