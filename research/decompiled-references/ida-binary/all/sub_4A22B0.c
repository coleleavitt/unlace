unsigned __int64 __fastcall sub_4A22B0(
        __int64 a1,
        char *a2,
        __int64 a3,
        char *a4,
        __int64 a5,
        __int64 a6,
        double a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        double a11,
        double a12,
        __m128 a13,
        __m128 a14,
        unsigned __int64 a15,
        __int64 a16,
        unsigned int a17)
{
  char *v18; // rax
  __int64 v22; // rdx
  void (*v23)(void); // rdx
  __int64 v24; // rsi
  _QWORD *v25; // rdi
  int v26; // eax
  __m128 v27; // xmm4
  __m128 v28; // xmm5
  int v29; // r14d
  unsigned __int64 (__fastcall *v30)(__int64, double); // rax
  unsigned __int64 v32; // r14
  void *v33; // r15
  const char *v34; // rsi
  __int64 v36; // [rsp+8h] [rbp-70h]
  void *v37; // [rsp+10h] [rbp-68h] BYREF
  __m128i v38; // [rsp+18h] [rbp-60h]
  __int64 v39; // [rsp+28h] [rbp-50h]
  unsigned __int64 v40; // [rsp+38h] [rbp-40h]

  v18 = a4;
  v22 = *(_QWORD *)a1;
  v40 = __readfsqword(0x28u);
  v23 = *(void (**)(void))(v22 + 672);
  if ( v23 != nullsub_263 )
  {
    v36 = a5;
    v23();
    a5 = v36;
    v18 = a4;
  }
  v24 = *(_QWORD *)(a1 + 2392);
  *(_DWORD *)(a1 + 1784) |= 0x200u;
  if ( (*(_BYTE *)(v24 + 12) & 4) != 0 )
  {
    v25 = (_QWORD *)(v24 + a5);
    if ( ((unsigned __int8)v18 & 1) != 0 )
      v18 = *(char **)&v18[*v25 - 1];
    v26 = ((__int64 (__fastcall *)(_QWORD *, __int64))v18)(v25, a6);
  }
  else
  {
    v26 = sub_49DDB0(a6, v24, a2, a3);
  }
  v29 = v26;
  if ( a16 )
  {
    v30 = **(unsigned __int64 (__fastcall ***)(__int64, double))a16;
    if ( v30 == chooser_widget_t::remove )
      sub_48EC20(*(QT::QAbstractItemView **)(a16 + 32), (const char ***)(a16 + 8), a7);
    else
      ((void (__fastcall *)(__int64, __int64))v30)(a16, a6);
  }
  if ( (a17 & 0x10) != 0 )
    *(_BYTE *)(a1 + 2024) = 0;
  if ( v29 == 1 )
  {
    v32 = *(_QWORD *)(a6 + 8);
    v33 = nullptr;
    v39 = -1;
    v38 = 0;
    if ( v32 )
    {
      v33 = (void *)qalloc_or_throw(8 * v32);
      memcpy(v33, *(const void **)a6, 8 * v32);
    }
    v37 = v33;
    v38 = _mm_unpacklo_epi64((__m128i)v32, (__m128i)v32);
    sub_4A15E0(a1, a15, (unsigned __int64 *)&v37, a17, *(double *)v38.m128i_i64, a8, a9, a10, v27, v28, a13, a14);
    v34 = (const char *)(*(__int64 (__fastcall **)(__int64, unsigned __int64, _QWORD))(*(_QWORD *)a1 + 704LL))(
                          a1,
                          a15,
                          a17);
    sub_4E0B20(a1 + 104, v34, 1);
    if ( v33 )
      qfree(v33, v34);
  }
  *(_DWORD *)(a1 + 1784) &= ~0x200u;
  return v40 - __readfsqword(0x28u);
}
