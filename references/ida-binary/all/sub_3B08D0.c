__int64 __fastcall sub_3B08D0(
        __int64 *a1,
        __int64 a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  unsigned int v10; // ebp
  __int64 v12; // rdx
  __int64 udm_by_tid; // rax
  double v14; // xmm4_8
  double v15; // xmm5_8
  _QWORD v16[5]; // [rsp+0h] [rbp-28h] BYREF

  v10 = 0;
  v16[1] = __readfsqword(0x28u);
  if ( *(_DWORD *)a2 == 1 )
  {
    v12 = *(_QWORD *)(a2 + 16);
    v16[0] = 0;
    udm_by_tid = get_udm_by_tid(v16, 0, v12);
    if ( udm_by_tid == -1 )
      v10 = 0;
    else
      v10 = sub_3AF960(a1, (__int64)v16, udm_by_tid, a3, a4, a5, a6, v14, v15, a9, a10);
    clear_tinfo_t(v16);
  }
  return v10;
}
