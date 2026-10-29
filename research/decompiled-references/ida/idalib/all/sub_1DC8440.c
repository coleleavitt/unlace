__int64 __fastcall sub_1DC8440(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  unsigned __int64 v10; // rsi
  unsigned __int16 *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v16; // r13
  unsigned __int64 v17; // rbx
  unsigned int v18; // eax
  unsigned __int64 v19; // rax
  __int64 v20; // r9
  __m128 *v21; // rdi
  __int64 v22; // r8
  _QWORD *v23; // rsi
  __int64 v24; // rdx
  unsigned __int64 v25; // rax

  v10 = *(_QWORD *)(a2 + 40);
  v11 = sub_1DC71F0(a1, v10, a3, a4, a5, a6, a7, a8);
  if ( (unsigned __int64)v11 <= 1 )
    return a2;
  v16 = *a1;
  v17 = (unsigned __int64)v11 & 0xFFFFFFFFFFFFFFFELL;
  v18 = sub_C00A40((unsigned __int64)v11 & 0xFFFFFFFFFFFFFFFELL, v10, v12, v13, v14);
  v19 = sub_19B4A30(v16, v17, v18, 0, 0, 0, a7, a8);
  if ( v19 <= 1 )
    return a2;
  v21 = (__m128 *)*a1;
  v22 = *(unsigned int *)(a2 + 24);
  v23 = (_QWORD *)(v19 & 0xFFFFFFFFFFFFFFFELL);
  v24 = *(unsigned int *)(a2 + 28);
  if ( ((*(_DWORD *)(v19 & 0xFFFFFFFFFFFFFFFELL) >> 14) & 0xE) == 0 )
  {
    v25 = sub_1C63430(v21, v23, *(_QWORD *)a2, (v24 << 32) | (unsigned int)v22, v22, v20, a7, a8);
    if ( v25 > 1 )
    {
      v24 = *(unsigned int *)(a2 + 28);
      LODWORD(v22) = *(_DWORD *)(a2 + 24);
      v21 = (__m128 *)*a1;
      v23 = (_QWORD *)(v25 & 0xFFFFFFFFFFFFFFFELL);
      return sub_B31DF0(v21[15].m128_i64[1], (__int64)v23, (v24 << 32) | (unsigned int)v22, 0);
    }
    return a2;
  }
  return sub_B31DF0(v21[15].m128_i64[1], (__int64)v23, (v24 << 32) | (unsigned int)v22, 0);
}
