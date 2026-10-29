__int64 __fastcall sub_3DE2D0(_QWORD *a1, __int64 a2, __int64 a3, char a4)
{
  unsigned int v4; // ebp
  char v6; // al
  char v7; // al
  __m128i v8; // xmm1
  __int64 v10; // [rsp+8h] [rbp-40h] BYREF
  unsigned int v11; // [rsp+10h] [rbp-38h] BYREF
  char v12; // [rsp+14h] [rbp-34h]
  unsigned __int64 v13; // [rsp+18h] [rbp-30h]

  v4 = a3;
  v13 = __readfsqword(0x28u);
  v11 = -1;
  v12 = 0;
  if ( (a4 & 2) != 0
    || ((a4 & 1) != 0 ? (v6 = sub_3DC190(a1, (__int64)&v11, a3)) : (v6 = sub_3DD450(a1, (__int64)&v11, a3)), !v6) )
  {
    if ( (a4 & 4) != 0 || !(unsigned __int8)sub_3FC530(a1, &v11) )
    {
      *(_DWORD *)a2 = -1;
      return 0;
    }
    v6 = 0;
  }
  *(_BYTE *)(a2 + 8) = v6;
  v7 = v12;
  v8 = _mm_cvtsi32_si128(v11);
  *(_BYTE *)(a2 + 11) = a4;
  *(_BYTE *)(a2 + 9) = v7 & 0x1F;
  *(_BYTE *)(a2 + 10) = (v7 & 0x20) != 0;
  *(_QWORD *)a2 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v4), v8).m128i_u64[0];
  if ( (a4 & 0x18) == 0 )
    return 1;
  v10 = 0;
  getinf_buf(26, &v10, 8);
  if ( (v11 >= (unsigned int)v10 && v11 < HIDWORD(v10)) == ((a4 & 0x10) != 0) )
    return 1;
  else
    return sub_3DE1B0(a1, (unsigned int *)a2);
}

