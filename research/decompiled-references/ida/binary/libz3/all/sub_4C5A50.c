_QWORD *__fastcall sub_4C5A50(__int64 a1, __int64 a2, __int64 *a3, unsigned int a4)
{
  __int64 v6; // rdi
  _QWORD *result; // rax
  unsigned int v8; // r14d
  __m128i *v9; // r13
  __int64 v10; // rbx
  __int64 v11; // rax
  __m128i v12; // xmm0
  __int64 v13; // rax
  unsigned int v14[11]; // [rsp+Ch] [rbp-2Ch] BYREF

  v6 = *(_QWORD *)(a2 + 8);
  v14[0] = a4;
  result = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 168LL))(v6);
  if ( !result )
  {
    v8 = v14[0];
    v9 = (__m128i *)(*(__int64 (__fastcall **)(_QWORD, __int64, __int64 *, _QWORD))(**(_QWORD **)(a2 + 8) + 144LL))(
                      *(_QWORD *)(a2 + 8),
                      a2,
                      a3,
                      v14[0]);
    if ( !v9 )
    {
      v11 = sub_186B270(0x30u);
      *(_OWORD *)(v11 + 16) = 0;
      v9 = (__m128i *)v11;
      v12 = _mm_loadl_epi64((const __m128i *)off_1C4F2D0);
      v13 = *a3;
      v9[2].m128i_i32[2] = v8;
      v9[2].m128i_i64[0] = v13;
      *v9 = _mm_unpacklo_epi64(v12, (__m128i)(unsigned __int64)off_1C4F0D0);
    }
    v10 = sub_4C5900(a1, a2, 1u, v14);
    result = (_QWORD *)sub_186B270(0x18u);
    *result = &off_1C4F248;
    result[1] = v9;
    result[2] = v10;
  }
  return result;
}

