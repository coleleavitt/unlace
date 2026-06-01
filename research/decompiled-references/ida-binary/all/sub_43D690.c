__int64 __fastcall file_history_chooser_t__::vfunc_13(
        __int64 a1,
        const char *a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 v10; // r12
  size_t v11; // r13
  int v12; // ebp
  void *v14; // rax
  const void *v15; // rsi
  void *v16; // rbx
  double v17; // xmm4_8
  double v18; // xmm5_8
  void *v19; // [rsp+0h] [rbp-58h] BYREF
  __int128 v20; // [rsp+8h] [rbp-50h]
  int v21; // [rsp+18h] [rbp-40h]
  unsigned __int64 v22; // [rsp+28h] [rbp-30h]

  v22 = __readfsqword(0x28u);
  v20 = 0;
  v10 = *(_QWORD *)(a1 + 232) + 152LL * (_QWORD)a2;
  v11 = *(_QWORD *)(v10 + 8);
  v12 = *(_DWORD *)(v10 + 144);
  if ( v11 )
  {
    v14 = (void *)qalloc_or_throw(*(_QWORD *)(v10 + 8));
    v15 = *(const void **)v10;
    *((_QWORD *)&v20 + 1) = v11;
    v16 = v14;
    memcpy(v14, v15, v11);
    *(_QWORD *)&v20 = v11;
    v21 = v12;
    v19 = v16;
    sub_43D3B0((__int64)&v19, (const char *)v15, 0.0, a4, a5, a6, v17, v18, a9, a10);
    if ( v16 )
      qfree(v16, (const char *)v15);
  }
  else
  {
    v21 = *(_DWORD *)(v10 + 144);
    v19 = nullptr;
    sub_43D3B0((__int64)&v19, a2, 0.0, a4, a5, a6, a7, a8, a9, a10);
  }
  return -1;
}
