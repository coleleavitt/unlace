__int64 __fastcall sub_1C98E00(__int64 *a1, __int64 a2, __int64 a3, _DWORD *a4, __m128 a5, __m128 a6)
{
  _DWORD *v9; // rbx
  unsigned int v10; // eax
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  unsigned __int64 v18; // rbx
  __int64 v19; // r14
  unsigned int v20; // eax
  void *v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rbx
  _DWORD *v24; // rdx
  void *v25; // [rsp+0h] [rbp-48h] BYREF
  unsigned int v26; // [rsp+8h] [rbp-40h]

  v9 = a4 + 1;
  v10 = sub_F6C520(*(_QWORD *)(a3 + 32));
  v13 = sub_1C892C0(
          a1,
          a2,
          *(_QWORD *)(a3 + 32),
          (const __m128i *)(v10 * (((unsigned __int64)v9 - (v9 != nullptr)) / v10 + (v9 != nullptr))),
          v11,
          v12,
          a5,
          a6);
  if ( (v13 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 0;
  v18 = v13;
  v19 = *(unsigned int *)(a3 + 20);
  v20 = sub_AAC1F0(*(_QWORD *)(*a1 + 248), *(_QWORD *)(*(_QWORD *)(*a1 + 248) + 18720LL), v14, v15, v16);
  v26 = v20;
  if ( v20 > 0x40 )
  {
    sub_2205470(&v25, v19, 1);
  }
  else
  {
    v21 = (void *)(v19 & (0xFFFFFFFFFFFFFFFFLL >> -(char)v20));
    if ( !v20 )
      v21 = nullptr;
    v25 = v21;
  }
  v22 = sub_C0C5D0(*(_QWORD **)(*a1 + 248), (__int64)&v25, *(_QWORD *)(*(_QWORD *)(*a1 + 248) + 18720LL), 0);
  v23 = sub_1E716E0(*a1, v18, v22, 0);
  if ( v26 > 0x40 )
  {
    if ( v25 )
      operator delete[](v25);
  }
  if ( (v23 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 0;
  sub_1EA6140(a2, v23, 4, 4);
  *v24 = *a4;
  return v23;
}
