bool __fastcall sub_2A8900(
        __int64 a1,
        _QWORD *a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // ebp
  __int64 v14; // r8
  __int64 v15; // r9
  __m128 v16; // xmm4
  __m128 v17; // xmm5
  __int64 v18; // rax
  __int64 v19; // rdi
  int v20; // eax
  char v22; // [rsp+0h] [rbp-18h]

  v13 = (*(__int64 (__fastcall **)(_QWORD *))(*a2 + 504LL))(a2);
  v18 = a2[55];
  if ( v18 && (v19 = *(_QWORD *)(v18 + 8)) != 0 )
  {
    v20 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v19 + 288LL))(v19, a1);
  }
  else
  {
    sub_169700(
      (int)"Coherency check failed: g != nullptr\n",
      (__int64)a2,
      v11,
      v12,
      v14,
      v15,
      a3,
      a4,
      a5,
      a6,
      v16,
      v17,
      a9,
      a10,
      v22);
    v20 = -1;
  }
  return v13 != v20;
}
