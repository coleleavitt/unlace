unsigned __int16 *__fastcall sub_19E2060(
        __int64 *a1,
        __m128 a2,
        __m128 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned int a7,
        unsigned int a8,
        unsigned int *a9,
        unsigned __int64 a10,
        __int64 *a11,
        __int64 a12)
{
  _QWORD *v16; // r14
  __int64 v17; // rax
  __int64 *v19; // rsi
  unsigned __int64 v20; // rbx
  __int64 *v21; // [rsp+8h] [rbp-40h] BYREF

  v16 = (_QWORD *)sub_168B6C0((__int64)a1);
  v17 = sub_1E5F010(a5, &v21);
  if ( (v17 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return (_WORD *)(&dword_0 + 1);
  v19 = v21;
  v20 = v17;
  if ( !v21 )
  {
    v19 = sub_A81910(v16, v17, a7);
    v21 = v19;
  }
  return sub_19E15D0(a1, v19, v20, 0, a6, 0, a2, a3, a7, a9, a10, a8, a11, a12, 0);
}
