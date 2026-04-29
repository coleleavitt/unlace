__int64 __fastcall sub_105A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r12
  __int64 v7; // rax
  unsigned __int16 v8; // ax
  char v9; // al
  __int64 v10; // r9
  int v11; // eax
  __int8 v12; // al
  char v14; // al
  int v15; // eax
  __int64 v16; // rax
  int v17; // eax
  __m128i v18; // [rsp+10h] [rbp-48h] BYREF
  __m128i v19; // [rsp+20h] [rbp-38h]
  __int64 v20; // [rsp+30h] [rbp-28h]
  unsigned __int64 v21; // [rsp+38h] [rbp-20h]

  v6 = a1 + 56;
  v7 = *(_QWORD *)(a1 + 128);
  v21 = __readfsqword(0x28u);
  v20 = v7;
  v8 = *(_WORD *)(a1 + 40);
  v18 = _mm_loadu_si128((const __m128i *)(a1 + 96));
  v19 = _mm_loadu_si128((const __m128i *)(a1 + 112));
  if ( v8 == 50 )
  {
    v15 = *(_DWORD *)(a1 + 88);
    v10 = 0;
    v18 = _mm_loadu_si128((const __m128i *)(a1 + 56));
    LODWORD(v20) = v15;
    v19 = _mm_loadu_si128((const __m128i *)(a1 + 72));
  }
  else if ( v8 > 0x32u )
  {
    if ( v8 != 125 )
      return 0;
    LODWORD(v20) = *(_DWORD *)(a1 + 128);
    sub_103B0(a1, &v18, a3, a4, a5, a6);
    v10 = 10;
  }
  else
  {
    if ( v8 != 8 )
    {
      if ( v8 == 49 )
      {
        v9 = *(_BYTE *)(a1 + 61);
        if ( v9 == 1 )
        {
          v10 = 0;
LABEL_8:
          v11 = *(_DWORD *)(a1 + 88);
          v18 = _mm_loadu_si128((const __m128i *)(a1 + 56));
          LODWORD(v20) = v11;
          v12 = v18.m128i_i8[1];
          v19 = _mm_loadu_si128((const __m128i *)(a1 + 72));
          if ( v18.m128i_i8[1] == 1 )
            goto LABEL_9;
LABEL_14:
          if ( v12 != 4 )
            return 0;
          goto LABEL_15;
        }
        if ( v9 == 2 )
        {
          v10 = 1;
          goto LABEL_8;
        }
      }
      return 0;
    }
    if ( *(_BYTE *)(a1 + 57) != 5 )
      return 0;
    v16 = *(_QWORD *)(a1 + 64);
    if ( v16 == 255 )
    {
      v10 = 0;
    }
    else
    {
      v10 = 1;
      if ( v16 != 0xFFFF )
        return 0;
    }
    v17 = *(_DWORD *)(a1 + 128);
    v6 = a1 + 96;
    v18 = _mm_loadu_si128((const __m128i *)(a1 + 96));
    LODWORD(v20) = v17;
    v19 = _mm_loadu_si128((const __m128i *)(a1 + 112));
  }
  v12 = v18.m128i_i8[1];
  if ( v18.m128i_i8[1] != 1 )
    goto LABEL_14;
LABEL_9:
  if ( v18.m128i_i16[3] > 0xFu )
    return 0;
LABEL_15:
  if ( *(_BYTE *)v6 != v18.m128i_i8[0] )
  {
    v14 = *(_BYTE *)(v6 + 1);
    if ( v14 == 1 )
    {
      if ( *(_WORD *)(v6 + 6) > 0xFu )
        return 0;
    }
    else if ( v14 != 4 )
    {
      return 0;
    }
  }
  return set_moved_jpt(a1, &v18, v6, a2, 10, v10);
}
