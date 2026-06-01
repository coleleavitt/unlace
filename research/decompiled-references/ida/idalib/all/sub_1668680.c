__int64 __fastcall sub_1668680(__int64 a1, int a2, const void *a3, size_t a4, const void *a5, size_t a6)
{
  __int64 v11; // rsi
  _QWORD *v12; // rax
  __int64 v13; // r9
  _QWORD *v14; // rbp
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  _QWORD *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9

  v11 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 248) + 2264LL) + 80LL);
  v12 = sub_704780((__int64 *)(v11 + 72), v11, (__int64)a3, a4, (__int64)a5, a6);
  v14 = sub_B79310(*(_QWORD *)(a1 + 248), (__int64)v12, a2, a3, a4, v13, a5, a6);
  v15 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 248) + 2264LL) + 80LL);
  v20 = sub_704780((__int64 *)(v15 + 72), v15, v16, v17, v18, v19);
  sub_B94AD0((__m128i *)(v20 + 5), (__int64)v14, v21, v22, v23, v24);
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(**(_QWORD **)(a1 + 256) + 24LL))(*(_QWORD *)(a1 + 256), v14);
}
