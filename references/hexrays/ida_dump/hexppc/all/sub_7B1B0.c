unsigned __int64 __fastcall sub_7B1B0(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rbp
  __m128i v5; // xmm1
  __m128i v6; // xmm1
  __int64 v7; // rdi
  __m128i v9; // [rsp+0h] [rbp-48h] BYREF
  __int64 v10; // [rsp+10h] [rbp-38h] BYREF
  __m128i v11; // [rsp+18h] [rbp-30h] BYREF
  unsigned __int64 v12; // [rsp+28h] [rbp-20h]

  v12 = __readfsqword(0x28u);
  *(_QWORD *)a1 = sub_79580((__int64)a2, 0);
  if ( *a2 >= a2[1] )
    sub_76AD0(a2);
  *(_DWORD *)(a1 + 8) = unpack_dd(a2);
  sub_79710((__int64)&v10, a2);
  v3 = *(_QWORD *)(a1 + 16);
  v4 = v10;
  v10 = 0;
  v5 = _mm_loadu_si128(&v11);
  v11 = 0;
  if ( v3 )
  {
    *(_QWORD *)(a1 + 24) = 0;
    v9 = v5;
    qfree(v3);
    v6 = _mm_load_si128(&v9);
    v7 = v10;
    *(_QWORD *)(a1 + 16) = v4;
    *(__m128i *)(a1 + 24) = v6;
    if ( v7 )
    {
      v11.m128i_i64[0] = 0;
      qfree(v7);
    }
  }
  else
  {
    *(_QWORD *)(a1 + 16) = v4;
    *(__m128i *)(a1 + 24) = v5;
  }
  return v12 - __readfsqword(0x28u);
}
