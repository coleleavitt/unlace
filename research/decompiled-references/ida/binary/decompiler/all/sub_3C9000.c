unsigned __int64 __fastcall sub_3C9000(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v6; // rbp
  unsigned __int64 v7; // rax
  __m128i v8; // xmm0
  __int64 v10; // rax
  __m128i v11; // [rsp+0h] [rbp-38h] BYREF
  __int64 v12; // [rsp+10h] [rbp-28h]
  unsigned __int64 v13; // [rsp+18h] [rbp-20h]

  v4 = *(_QWORD *)(a3 + 64);
  v13 = __readfsqword(0x28u);
  a1[3] = 0;
  a1[2] = v4;
  a1[6] = 0x7FFFFFFFFFFFFFFFLL;
  a1[7] = 0;
  *a1 = a2;
  a1[1] = a3;
  *((_OWORD *)a1 + 2) = 0;
  v6 = sub_3C8680(a3, *(_DWORD *)(a2 + 20), *(_DWORD *)(a2 + 24));
  if ( v6 )
  {
    v7 = *(_QWORD *)(a3 + 64);
    v8 = _mm_loadl_epi64((const __m128i *)(v7 + 1496));
    v12 = a3 + 160;
    v11 = _mm_unpacklo_epi64(v8, (__m128i)v7);
    sub_1B1AE0(v6, a1 + 3, &v11, 4);
  }
  if ( !(unsigned __int8)sub_3C8BD0(a1, v6, 0, 0) )
  {
    v10 = sub_3C86C0(a1[1], *(_DWORD *)(*a1 + 20), *(_DWORD *)(*a1 + 24));
    sub_3C8D50((__int64)a1, v10, 0, 0);
  }
  return v13 - __readfsqword(0x28u);
}
