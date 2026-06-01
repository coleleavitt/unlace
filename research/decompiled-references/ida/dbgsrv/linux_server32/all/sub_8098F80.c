/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8098F80
// Address: 0x08098F80

//----- (08098F80) --------------------------------------------------------
unsigned int __cdecl sub_8098F80(int a1, int a2, char a3)
{
  int v3; // eax
  __int16 v4; // ax
  unsigned int result; // eax
  unsigned __int64 v6; // xmm0_8
  unsigned int v7; // edi
  unsigned int v8; // edi
  unsigned int v9; // edi
  unsigned int v10; // edi
  unsigned int v11; // [esp+0h] [ebp-30h]
  unsigned int v12; // [esp+0h] [ebp-30h]
  unsigned int v13; // [esp+0h] [ebp-30h]
  unsigned int v14; // [esp+0h] [ebp-30h]
  int v15; // [esp+4h] [ebp-2Ch] BYREF
  unsigned __int64 v16; // [esp+8h] [ebp-28h]
  unsigned int v17; // [esp+10h] [ebp-20h]

  v17 = __readgsdword(0x14u);
  sub_8098E70(a1, a2, a3);
  while ( 1 )
  {
    while ( 1 )
    {
      v3 = *(_DWORD *)(a1 + 352);
      v15 = 1;
      v4 = *(_WORD *)(v3 + 12);
      v16 = 0;
      if ( v4 == 15933 )
      {
        sub_8098E70(a1, (int)&v15, 1);
        if ( *(_BYTE *)a2 )
        {
          v6 = _mm_load_si128((const __m128i *)((char *)&qword_811CFF4 - 257524)).m128i_u64[0];
          if ( *(_QWORD *)(a2 + 4) < v16 )
            goto LABEL_13;
          goto LABEL_10;
        }
        v6 = _mm_load_si128((const __m128i *)((char *)&qword_811CFF4 - 257524)).m128i_u64[0];
        v11 = *(_DWORD *)(a2 + 4);
        v7 = *(_DWORD *)(a2 + 8);
        if ( (_BYTE)v15 )
        {
          if ( __PAIR64__(v7, v11) >= v16 )
            goto LABEL_10;
        }
        else if ( __SPAIR64__(v7, v11) >= (__int64)v16 )
        {
          goto LABEL_10;
        }
        goto LABEL_13;
      }
      if ( v4 == 15421 )
      {
        sub_8098E70(a1, (int)&v15, 1);
        if ( *(_BYTE *)a2 )
        {
          v6 = _mm_load_si128((const __m128i *)((char *)&qword_811CFF4 - 257524)).m128i_u64[0];
          if ( v16 < *(_QWORD *)(a2 + 4) )
            goto LABEL_13;
          goto LABEL_10;
        }
        v6 = _mm_load_si128((const __m128i *)((char *)&qword_811CFF4 - 257524)).m128i_u64[0];
        v12 = *(_DWORD *)(a2 + 4);
        v8 = *(_DWORD *)(a2 + 8);
        if ( (_BYTE)v15 )
        {
          if ( v16 >= __PAIR64__(v8, v12) )
            goto LABEL_10;
        }
        else if ( (__int64)v16 >= __SPAIR64__(v8, v12) )
        {
          goto LABEL_10;
        }
        goto LABEL_13;
      }
      if ( v4 != 60 )
        break;
      sub_8098E70(a1, (int)&v15, 1);
      if ( *(_BYTE *)a2 )
      {
        v6 = _mm_load_si128((const __m128i *)((char *)&qword_811CFF4 - 257524)).m128i_u64[0];
        if ( *(_QWORD *)(a2 + 4) >= v16 )
          goto LABEL_13;
        goto LABEL_10;
      }
      v6 = _mm_load_si128((const __m128i *)((char *)&qword_811CFF4 - 257524)).m128i_u64[0];
      v13 = *(_DWORD *)(a2 + 4);
      v9 = *(_DWORD *)(a2 + 8);
      if ( (_BYTE)v15 )
      {
        if ( __PAIR64__(v9, v13) < v16 )
          goto LABEL_10;
      }
      else if ( __SPAIR64__(v9, v13) < (__int64)v16 )
      {
        goto LABEL_10;
      }
LABEL_13:
      *(_BYTE *)a2 = 0;
      *(_QWORD *)(a2 + 4) = 0;
    }
    if ( v4 != 62 )
      break;
    sub_8098E70(a1, (int)&v15, 1);
    if ( !*(_BYTE *)a2 )
    {
      v6 = _mm_load_si128((const __m128i *)((char *)&qword_811CFF4 - 257524)).m128i_u64[0];
      v14 = *(_DWORD *)(a2 + 4);
      v10 = *(_DWORD *)(a2 + 8);
      if ( (_BYTE)v15 )
      {
        if ( v16 < __PAIR64__(v10, v14) )
          goto LABEL_10;
      }
      else if ( (__int64)v16 < __SPAIR64__(v10, v14) )
      {
        goto LABEL_10;
      }
      goto LABEL_13;
    }
    v6 = _mm_load_si128((const __m128i *)((char *)&qword_811CFF4 - 257524)).m128i_u64[0];
    if ( v16 >= *(_QWORD *)(a2 + 4) )
      goto LABEL_13;
LABEL_10:
    *(_BYTE *)a2 = 0;
    *(_QWORD *)(a2 + 4) = v6;
  }
  result = v17 - __readgsdword(0x14u);
  if ( result )
    sub_80D7AB0();
  return result;
}
// 811CFF4: using guessed type __int64 qword_811CFF4;
