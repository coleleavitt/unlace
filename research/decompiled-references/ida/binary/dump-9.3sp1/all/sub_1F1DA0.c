unsigned __int64 __fastcall sub_1F1DA0(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, int a5, int a6)
{
  __int64 v9; // rdi
  __int64 v10; // r13
  __m128i v11; // xmm0
  __m128i v12; // xmm0
  __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  int v17; // r9d
  __m128i v18; // [rsp+0h] [rbp-68h] BYREF
  __int64 v19[2]; // [rsp+10h] [rbp-58h] BYREF
  __int64 v20; // [rsp+20h] [rbp-48h]
  __m128i v21; // [rsp+28h] [rbp-40h] BYREF
  unsigned __int64 v22; // [rsp+38h] [rbp-30h]

  v22 = __readfsqword(0x28u);
  if ( a3 != a2[1] )
    sub_1ECB60();
  if ( !*(_BYTE *)(a1 + 88) )
  {
    if ( *(_QWORD *)(a1 + 64) != a3 )
      return v22 - __readfsqword(0x28u);
    if ( *(_BYTE *)(a1 + 84) )
      goto LABEL_10;
  }
  sub_127A20((__int64)v19, *a2, a3, 129, a5, a6);
  sub_648D0(a2 + 2, v19);
  v9 = a2[4];
  v10 = v20;
  v20 = 0;
  v11 = _mm_loadu_si128(&v21);
  v21 = 0;
  if ( v9 )
  {
    a2[5] = 0;
    v18 = v11;
    qfree(v9);
    v12 = _mm_load_si128(&v18);
    v13 = v20;
    a2[4] = v10;
    *(__m128i *)(a2 + 5) = v12;
    if ( v13 )
    {
      v21.m128i_i64[0] = 0;
      qfree(v13);
    }
  }
  else
  {
    a2[4] = v10;
    *(__m128i *)(a2 + 5) = v11;
  }
  qfree(v19[0]);
  sub_64640((__int64 *)a1, a2 + 2, v14, v15, v16, v17);
  sub_317C60(a1 + 16, a2 + 4);
  if ( *(_QWORD *)(a1 + 64) == a3 )
LABEL_10:
    *(_BYTE *)(a1 + 88) = 1;
  return v22 - __readfsqword(0x28u);
}
