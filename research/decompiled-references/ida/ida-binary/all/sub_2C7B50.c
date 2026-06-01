unsigned __int64 __fastcall sub_2C7B50(__int64 a1, __int64 a2, __int64 a3, __int64 a4, double a5)
{
  __int64 v5; // rax
  __int64 v6; // rbp
  __m128i v7; // xmm0
  void (__fastcall *v8)(__int64, __int64, double); // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __m128i v14; // [rsp+0h] [rbp-48h] BYREF
  __m128i v15; // [rsp+10h] [rbp-38h]
  __int64 v16; // [rsp+20h] [rbp-28h]
  unsigned __int64 v17; // [rsp+28h] [rbp-20h]

  v5 = *(_QWORD *)(a1 + 16);
  v17 = __readfsqword(0x28u);
  v6 = sub_1EA6A0(v5 + 384, a2, a3, a4, a5);
  v14 = _mm_loadu_si128((const __m128i *)v6);
  v7 = _mm_loadu_si128((const __m128i *)(v6 + 16));
  v15 = v7;
  v16 = *(_QWORD *)(v6 + 32);
  v8 = *(void (__fastcall **)(__int64, __int64, double))(*(_QWORD *)a1 + 280LL);
  if ( v8 == sub_2BC140 )
    sub_2BC080(a1, (__int64)&v14, *(_QWORD **)(a1 + 440), *(double *)v7.m128i_i64);
  else
    ((void (__fastcall *)(__int64, __m128i *))v8)(a1, &v14);
  if ( (_DWORD)v16 != *(_DWORD *)(v6 + 32)
    || v15.m128i_i64[1] != *(_QWORD *)(v6 + 24)
    || *(double *)v14.m128i_i64 != *(double *)v6
    || *(double *)&v14.m128i_i64[1] != *(double *)(v6 + 8)
    || *(double *)v15.m128i_i64 != *(double *)(v6 + 16) )
  {
    sub_1F14A0((const __m128i *)(*(_QWORD *)(a1 + 16) + 384LL), &v14, v9, v10, v11, v12);
  }
  sub_175030(a1, (__int64)&v14);
  return v17 - __readfsqword(0x28u);
}
