unsigned __int64 __fastcall sub_2994B0(__int64 a1)
{
  __m128i v1; // xmm0
  __int64 v2; // rbx
  int i; // eax
  char v4; // al
  char tinfo_property; // al
  int v6; // eax
  int v7; // eax
  int v8; // r14d
  int v9; // eax
  unsigned int v11[4]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v12; // [rsp+10h] [rbp-48h] BYREF
  __int64 v13; // [rsp+18h] [rbp-40h]
  unsigned __int64 v14; // [rsp+28h] [rbp-30h]

  v14 = __readfsqword(0x28u);
  v11[0] = 0;
  sub_2983F0((__int64)v11, (unsigned int *)a1);
  v12 = 0;
  copy_tinfo_t(&v12, a1 + 16);
  v1 = _mm_loadl_epi64((const __m128i *)(a1 + 24));
  v2 = a1 - 32;
  v13 = v1.m128i_i64[0];
  for ( i = _mm_cvtsi128_si32(_mm_shuffle_epi32(v1, 229)); ; i = HIDWORD(v13) )
  {
    if ( *(_DWORD *)(v2 + 28) <= i )
    {
      if ( *(_DWORD *)(v2 + 28) < i )
        break;
      if ( (v4 = get_tinfo_property(v12, 2), (v4 & 0x3E) == 0)
        || (v4 & 0xFu) > 8 && (v4 & 0x3F) != 0x2D
        || (get_tinfo_property(*(_QWORD *)(v2 + 16), 2) & 0x3F) != 0x2D )
      {
        tinfo_property = get_tinfo_property(*(_QWORD *)(v2 + 16), 2);
        if ( (tinfo_property & 0x3E) == 0 || (tinfo_property & 0xFu) > 8 && (tinfo_property & 0x3F) != 0x2D )
          goto LABEL_23;
        if ( (get_tinfo_property(v12, 2) & 0x3F) != 0x2D )
          goto LABEL_23;
      }
      v8 = score_tinfo(&v12);
      v9 = score_tinfo(v2 + 16);
      if ( v8 > v9 )
        break;
      if ( v8 >= v9 )
      {
LABEL_23:
        v6 = *(_DWORD *)(v2 + 24);
        if ( (int)v13 >= v6 && ((int)v13 > v6 || (int)sub_297370((__int64)v11, v2) >= 0) )
          break;
      }
    }
    sub_2983F0(v2 + 32, (unsigned int *)v2);
    copy_tinfo_t(v2 + 48, v2 + 16);
    v7 = *(_DWORD *)(v2 + 24);
    v2 -= 32;
    *(_DWORD *)(v2 + 88) = v7;
    *(_DWORD *)(v2 + 92) = *(_DWORD *)(v2 + 60);
  }
  sub_2983F0(v2 + 32, v11);
  copy_tinfo_t(v2 + 48, &v12);
  *(_QWORD *)(v2 + 56) = v13;
  clear_tinfo_t(&v12);
  sub_2978B0((__int64)v11);
  return v14 - __readfsqword(0x28u);
}
