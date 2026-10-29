__int64 __fastcall sub_379A20(
        __int64 a1,
        __m128i *a2,
        const __m128i *a3,
        _QWORD *a4,
        double a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  const char *v13; // r14
  __int64 *v15; // rax
  __int64 (__fastcall *v16)(__int64); // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  __m128i v21; // xmm0
  __int64 v22; // rax
  __m128 v23; // xmm0
  double v24; // xmm4_8
  double v25; // xmm5_8
  __int64 v26; // rdx
  __int64 v27; // rcx
  unsigned int v28; // ebx
  __int64 v29; // r8
  __int64 v30; // r9
  int v32; // ebp
  _DWORD *v33; // rdi
  __int64 (__fastcall *v34)(__int64); // rax
  int v35; // eax
  __int64 v36; // rdi
  __int64 v37; // rdi
  __int64 *v38; // [rsp+0h] [rbp-88h] BYREF
  __int64 v39; // [rsp+8h] [rbp-80h]
  __int64 v40; // [rsp+10h] [rbp-78h]
  _OWORD v41[2]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v42; // [rsp+40h] [rbp-48h]
  __int64 **v43; // [rsp+48h] [rbp-40h]
  unsigned __int64 v44; // [rsp+58h] [rbp-30h]

  v13 = (const char *)a3[2].m128i_i64[1];
  v44 = __readfsqword(0x28u);
  v38 = &idaplace_t___vtable;
  v15 = (__int64 *)sub_2A9B20(a1, (__int64)v13, *(_QWORD *)(*(_QWORD *)(a1 + 16) + 728LL));
  if ( v15 )
    v20 = *v15;
  else
    v20 = (*(__int64 (__fastcall **)(const char *))(*(_QWORD *)v13 + 128LL))(v13);
  v40 = v20;
  LODWORD(v39) = 0;
  if ( v20 == -1 )
  {
    v32 = a3[1].m128i_i32[2];
    if ( v32 == -1
      || v32 >= 0
      && ((v33 = (_DWORD *)a4[1],
           v16 = interactive_graph_t__::vfunc_7,
           v34 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v33 + 56LL),
           v34 != interactive_graph_t__::vfunc_7)
        ? (v35 = ((__int64 (__fastcall *)(_DWORD *, const char *, __int64 (__fastcall *)(__int64)))v34)(
                   v33,
                   v13,
                   interactive_graph_t__::vfunc_7))
        : (v35 = v33[46]),
          v32 < v35) )
    {
      if ( a3 != a2 )
      {
        v36 = a2[2].m128i_i64[1];
        if ( v36 )
        {
          qfree(v36, v13, v16, v17, v18, v19, v38, v39, v40);
          a2[2].m128i_i64[1] = 0;
        }
        *a2 = _mm_loadu_si128(a3);
        a2[1] = _mm_loadu_si128(a3 + 1);
        a2[2].m128i_i32[0] = a3[2].m128i_i32[0];
        v37 = a3[2].m128i_i64[1];
        if ( v37 )
          a2[2].m128i_i64[1] = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
      }
      return 1;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    v21 = _mm_loadu_si128(a3);
    v22 = a3[2].m128i_i64[0];
    v43 = &v38;
    v41[0] = v21;
    v23 = (__m128)_mm_loadu_si128(a3 + 1);
    v42 = v22;
    v41[1] = v23;
    v43 = (__int64 **)idaplace_t__clone(&v38);
    v28 = sub_2AA7F0(a1, (__int64)a2, (__int64)v41, a4, v23, a6, a7, a8, v24, v25, a11, a12);
    if ( v43 )
      qfree(v43, a2->m128i_i8, v26, v27, v29, v30, v38, v39, v40);
  }
  return v28;
}
