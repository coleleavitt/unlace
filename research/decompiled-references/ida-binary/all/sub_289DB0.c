unsigned __int64 __fastcall sub_289DB0(
        __int64 a1,
        __int64 a2,
        __m128i a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // ebx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  double v18; // xmm4_8
  double v19; // xmm5_8
  __int64 v20; // [rsp+0h] [rbp-38h] BYREF
  int v21; // [rsp+8h] [rbp-30h]
  unsigned __int64 v22; // [rsp+18h] [rbp-20h]

  v22 = __readfsqword(0x28u);
  sub_1764F0(a1, a2, a3, (__m128i)a4);
  if ( *(_DWORD *)(a2 + 64) == 1 && sub_1EAD70(*(_QWORD *)(a1 + 16) + 216LL) )
  {
    v13 = *(__int16 *)(sub_1EA6A0(*(_QWORD *)(a1 + 16) + 384LL, a2, v11, v12, *(double *)a3.m128i_i64) + 28);
    v16 = sub_1F3B50(*(_QWORD *)(a1 + 16), 0, v14, v15, *(double *)a3.m128i_i64);
    v17 = *(_QWORD *)(a1 + 16);
    v20 = v16;
    v21 = v13;
    if ( (unsigned __int8)sub_1921E0((__int64 *)(v17 + 224), &v20, v17) )
      sub_1FDA50(
        *(_QWORD *)(a1 + 16) + 216LL,
        (const char *)&v20,
        *(double *)a3.m128i_i64,
        a4,
        a5,
        a6,
        v18,
        v19,
        a9,
        a10);
  }
  return v22 - __readfsqword(0x28u);
}
