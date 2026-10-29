unsigned __int64 __fastcall sub_1F1DA0(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v6; // rdi
  __int64 v7; // r13
  __m128i v8; // xmm0
  __m128i v9; // xmm0
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  int v14; // r9d
  __m128i v15; // [rsp+0h] [rbp-68h] BYREF
  __int64 v16[2]; // [rsp+10h] [rbp-58h] BYREF
  __int64 v17; // [rsp+20h] [rbp-48h]
  __m128i v18; // [rsp+28h] [rbp-40h] BYREF
  unsigned __int64 v19; // [rsp+38h] [rbp-30h]

  v19 = __readfsqword(0x28u);
  if ( a3 != a2[1] )
    sub_1ECB60();
  if ( !*(_BYTE *)(a1 + 88) )
  {
    if ( *(_QWORD *)(a1 + 64) != a3 )
      return v19 - __readfsqword(0x28u);
    if ( *(_BYTE *)(a1 + 84) )
      goto LABEL_10;
  }
  sub_127A20((__int64)v16, *a2, a3, 129);
  sub_648D0(a2 + 2, v16);
  v6 = a2[4];
  v7 = v17;
  v17 = 0;
  v8 = _mm_loadu_si128(&v18);
  v18 = 0;
  if ( v6 )
  {
    a2[5] = 0;
    v15 = v8;
    qfree();
    v9 = _mm_load_si128(&v15);
    v10 = v17;
    a2[4] = v7;
    *(__m128i *)(a2 + 5) = v9;
    if ( v10 )
    {
      v18.m128i_i64[0] = 0;
      qfree();
    }
  }
  else
  {
    a2[4] = v7;
    *(__m128i *)(a2 + 5) = v8;
  }
  qfree();
  sub_64640((__int64 *)a1, a2 + 2, v11, v12, v13, v14);
  sub_317C60(a1 + 16, a2 + 4);
  if ( *(_QWORD *)(a1 + 64) == a3 )
LABEL_10:
    *(_BYTE *)(a1 + 88) = 1;
  return v19 - __readfsqword(0x28u);
}
