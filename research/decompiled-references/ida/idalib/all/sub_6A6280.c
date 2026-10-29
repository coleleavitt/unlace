unsigned __int64 __fastcall sub_6A6280(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r12
  __int64 i; // rdx
  __int64 v6; // rbp
  __int64 v7; // rbx
  __int64 v8; // r15
  __m128i v9; // xmm0
  unsigned __int16 epi16; // dx
  __int64 v11; // r12
  __int64 v12; // r15
  __int64 v14; // rbp
  __int64 v15; // r12
  __int64 v16; // rbp
  __int16 v17; // ax
  _DWORD v20[4]; // [rsp+10h] [rbp-58h] BYREF
  int v21; // [rsp+20h] [rbp-48h]
  unsigned __int64 v22; // [rsp+28h] [rbp-40h]

  v22 = __readfsqword(0x28u);
  v4 = (a3 - 1) / 2;
  if ( a2 >= v4 )
  {
    v6 = a2;
    v7 = a1 + 24 * a2;
  }
  else
  {
    for ( i = a2; ; i = v6 )
    {
      v6 = 2 * (i + 1);
      v7 = a1 + 48 * (i + 1);
      if ( *(_WORD *)(v7 + 16) < *(_WORD *)(v7 - 8) )
      {
        --v6;
        v7 = a1 + 24 * v6;
      }
      v8 = a1 + 24 * i;
      copy_argloc(v8, v7);
      *(_WORD *)(v8 + 16) = *(_WORD *)(v7 + 16);
      *(_WORD *)(v8 + 18) = *(_WORD *)(v7 + 18);
      if ( v6 >= v4 )
        break;
    }
  }
  if ( (a3 & 1) == 0 && (a3 - 2) / 2 == v6 )
  {
    v14 = v6 + 1;
    v15 = 2 * v14;
    v16 = a1 + 48 * v14 - 24;
    copy_argloc(v7, v16);
    *(_WORD *)(v7 + 16) = *(_WORD *)(v16 + 16);
    v17 = *(_WORD *)(v16 + 18);
    v6 = v15 - 1;
    *(_WORD *)(v7 + 18) = v17;
    v7 = a1 + 24 * (v15 - 1);
  }
  v20[0] = 0;
  copy_argloc(v20, a4);
  v9 = _mm_cvtsi32_si128(*(_DWORD *)(a4 + 16));
  epi16 = _mm_extract_epi16(v9, 0);
  v21 = _mm_cvtsi128_si32(v9);
  v11 = (v6 - 1) / 2;
  if ( v6 > a2 )
  {
    while ( 1 )
    {
      v12 = a1 + 24 * v11;
      v7 = a1 + 24 * v6;
      if ( *(_WORD *)(v12 + 16) >= epi16 )
        break;
      copy_argloc(a1 + 24 * v6, a1 + 24 * v11);
      *(_WORD *)(v7 + 16) = *(_WORD *)(v12 + 16);
      *(_WORD *)(v7 + 18) = *(_WORD *)(v12 + 18);
      if ( a2 >= v11 )
      {
        v7 = a1 + 24 * v11;
        break;
      }
      epi16 = v21;
      v6 = v11;
      v11 = (v11 - 1) / 2;
    }
  }
  copy_argloc(v7, v20);
  *(_DWORD *)(v7 + 16) = v21;
  cleanup_argloc(v20);
  return v22 - __readfsqword(0x28u);
}
