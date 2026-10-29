__int64 __fastcall sub_16685F0(__int64 a1, int a2, __int64 a3, const void *a4, size_t a5, __int64 a6)
{
  int v8; // r12d
  __int64 v10; // rsi
  _QWORD *v11; // rax
  __int64 v12; // rbp
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  _QWORD *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9

  v8 = a3;
  v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 248) + 2264LL) + 80LL);
  v11 = sub_704780((__int64 *)(v10 + 72), v10, a3, (__int64)a4, a5, a6);
  v12 = sub_B791B0(*(_QWORD *)(a1 + 248), (__int64)v11, a2, v8, a4, a5);
  v13 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 248) + 2264LL) + 80LL);
  v18 = sub_704780((__int64 *)(v13 + 72), v13, v14, v15, v16, v17);
  sub_B94AD0((__m128i *)(v18 + 5), v12, v19, v20, v21, v22);
  return (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 256) + 24LL))(*(_QWORD *)(a1 + 256), v12);
}
