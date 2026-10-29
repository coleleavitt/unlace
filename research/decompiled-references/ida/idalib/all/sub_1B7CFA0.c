unsigned __int64 __fastcall sub_1B7CFA0(
        _QWORD *a1,
        __int64 a2,
        unsigned __int16 *a3,
        const void *a4,
        size_t a5,
        __m128 a6,
        __m128 a7)
{
  unsigned __int64 v10; // r13
  _WORD *v11; // r9
  unsigned __int64 v12; // r14
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // r12
  __int64 v18; // rax
  _QWORD *v20; // [rsp+0h] [rbp-58h] BYREF
  __int64 v21; // [rsp+8h] [rbp-50h]
  __int64 v22; // [rsp+10h] [rbp-48h]
  unsigned int v23; // [rsp+18h] [rbp-40h]

  v20 = a1;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  v10 = sub_1B7CAD0((__int64 *)&v20, a3, a6, a7, (__int64)a3, (unsigned __int64)a4, a5) & 0xFFFFFFFFFFFFFFFELL;
  operator delete(v21, 16LL * v23, 8);
  v11 = (_WORD *)sub_BFB900((unsigned __int64)a3);
  if ( (*v11 & 0x1FF) != 0x47 )
    v11 = nullptr;
  v12 = sub_1AFE760(a1, 0, *(_QWORD *)(v10 + 8), a4, a5, (__int64)v11);
  v16 = sub_17A2530((__int64)a1, v12, 0, v13, v14, v15);
  v17 = sub_1C36280(a1, v16, 0, 0) & 0xFFFFFFFFFFFFFFFELL;
  sub_17ED4C0((__int64)a1, *(_QWORD *)(v17 + 8), v10, 0, *(double *)a6.m128_u64, *(double *)a7.m128_u64);
  v18 = *(unsigned int *)(a2 + 8);
  if ( v18 + 1 > (unsigned __int64)*(unsigned int *)(a2 + 12) )
  {
    sub_2237220(a2, a2 + 16, v18 + 1, 8);
    v18 = *(unsigned int *)(a2 + 8);
  }
  *(_QWORD *)(*(_QWORD *)a2 + 8 * v18) = v17;
  ++*(_DWORD *)(a2 + 8);
  return v12;
}
