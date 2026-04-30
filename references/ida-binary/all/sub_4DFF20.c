unsigned __int64 __fastcall sub_4DFF20(
        __int64 a1,
        const char *a2,
        _BYTE *a3,
        __int64 *a4,
        __int64 a5,
        __int64 a6,
        double a7,
        double a8,
        double a9,
        double a10,
        int a11)
{
  __int64 v11; // rbx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rdx
  double v18; // xmm4_8
  unsigned __int64 v19; // rdx
  void *v20; // r13
  __m128i v21; // xmm0
  __int64 v22; // rdi
  size_t v23; // r12
  void *v24; // rax
  __m128i v25; // [rsp+0h] [rbp-58h] BYREF
  _QWORD v26[3]; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v27; // [rsp+28h] [rbp-30h]

  v11 = (__int64)a2;
  v27 = __readfsqword(0x28u);
  if ( (a2[44] & 0x10) == 0
    || (~*a3 & 3) == 0
    && (v14 = *((int *)a2 + 12),
        v15 = *a4,
        v25.m128i_i64[0] = a6,
        v16 = sub_4D89F0(a1 + 1128, *(_DWORD *)(v15 + 24 * v14), 0),
        a2 = (const char *)v26,
        v26[1] = v17,
        v26[0] = v16,
        sub_4D9280(v11, (__int64)v26, a5, (unsigned __int64 *)v25.m128i_i64[0], a7, a8, a9, a10, v18)) )
  {
    v19 = *(_QWORD *)(a5 + 8);
    v20 = nullptr;
    v21 = _mm_unpacklo_epi64((__m128i)v19, (__m128i)v19);
    if ( v19 )
    {
      v23 = 2 * v19;
      v25 = v21;
      v24 = (void *)qalloc_or_throw(2 * v19);
      a2 = *(const char **)a5;
      v20 = v24;
      memcpy(v24, *(const void **)a5, v23);
      v21 = _mm_load_si128(&v25);
    }
    v22 = *(_QWORD *)v11;
    if ( *(_QWORD *)v11 )
    {
      *(_QWORD *)(v11 + 8) = 0;
      v25 = v21;
      qfree(v22, a2);
      v21 = _mm_load_si128(&v25);
    }
    *(_QWORD *)v11 = v20;
    *(__m128i *)(v11 + 8) = v21;
    *(_QWORD *)(v11 + 24) = *(_QWORD *)(a5 + 24);
    *(_QWORD *)(v11 + 32) = *(_QWORD *)(a5 + 32);
    *(_DWORD *)(v11 + 40) = *(_DWORD *)(a5 + 40);
    *(_DWORD *)(v11 + 44) = *(_DWORD *)(a5 + 44);
    *(_DWORD *)(v11 + 48) = a11;
  }
  return v27 - __readfsqword(0x28u);
}
