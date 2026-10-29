bool __fastcall sub_379BD0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  __int64 *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  double v16; // xmm4_8
  double v17; // xmm5_8
  __int64 v18; // rax
  __int64 v19; // rbx
  __int64 (__fastcall *v20)(__int64); // rax
  int v21; // eax
  __int64 *v23; // [rsp+0h] [rbp-38h] BYREF
  int v24; // [rsp+8h] [rbp-30h]
  __int64 v25; // [rsp+10h] [rbp-28h]
  unsigned __int64 v26; // [rsp+18h] [rbp-20h]

  v26 = __readfsqword(0x28u);
  v23 = &idaplace_t___vtable;
  v12 = (__int64 *)sub_2A9B20(a1, a2, *(_QWORD *)(*(_QWORD *)(a1 + 16) + 728LL));
  if ( v12 )
    v18 = *v12;
  else
    v18 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 128LL))(a2);
  v25 = v18;
  v24 = 0;
  if ( v18 != -1 )
    return sub_2AAC00(a4, a5, a6, a7, v16, v17, a10, a11, a1, (__int64)&v23, a3);
  v19 = *(_QWORD *)(a3 + 8);
  v20 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 56LL);
  if ( v20 == interactive_graph_t__::vfunc_7 )
    v21 = *(_DWORD *)(v19 + 184);
  else
    v21 = ((__int64 (__fastcall *)(_QWORD, __int64, __int64 (__fastcall *)(__int64), __int64, __int64, __int64, __int64 *, int, __int64, unsigned __int64))v20)(
            *(_QWORD *)(a3 + 8),
            a2,
            interactive_graph_t__::vfunc_7,
            v13,
            v14,
            v15,
            v23,
            v24,
            v25,
            v26);
  return *(_QWORD *)(v19 + 280) < (unsigned __int64)v21;
}
