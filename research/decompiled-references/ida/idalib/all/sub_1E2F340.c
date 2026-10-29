__int64 __fastcall sub_1E2F340(__int64 *a1, _QWORD *a2, __int64 a3, _DWORD *a4, __m128 a5, __m128 a6)
{
  __int64 v6; // r14
  _DWORD *v9; // rbx
  unsigned int v10; // eax
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  unsigned __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // r14
  unsigned int v19; // eax
  void *v20; // rsi
  __int64 v21; // rax
  _DWORD *v23; // rdx
  void *v24; // [rsp+0h] [rbp-48h] BYREF
  unsigned int v25; // [rsp+8h] [rbp-40h]

  v6 = a3;
  v9 = a4 + 1;
  v10 = sub_F6C520(*(_QWORD *)(a3 + 32));
  v13 = sub_1E1DA60(
          a1,
          a2,
          *(_QWORD *)(v6 + 32),
          (const __m128i *)(v10 * (((unsigned __int64)v9 - (v9 != nullptr)) / v10 + (v9 != nullptr))),
          v11,
          v12,
          a5,
          a6);
  if ( (v13 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 0;
  v16 = v13;
  v17 = *(unsigned int *)(*a1 + 12632);
  if ( (_DWORD)v17 || v13 != *(_QWORD *)(v6 + 32) )
  {
    v18 = *(unsigned int *)(v6 + 20);
    v19 = sub_AAC1F0(*(_QWORD *)(*a1 + 248), *(_QWORD *)(*(_QWORD *)(*a1 + 248) + 18720LL), v17, v14, v15);
    v25 = v19;
    if ( v19 > 0x40 )
    {
      sub_2205470(&v24, v18, 1);
    }
    else
    {
      v20 = (void *)(v18 & (0xFFFFFFFFFFFFFFFFLL >> -(char)v19));
      if ( !v19 )
        v20 = nullptr;
      v24 = v20;
    }
    v21 = sub_C0C5D0(*(_QWORD **)(*a1 + 248), (__int64)&v24, *(_QWORD *)(*(_QWORD *)(*a1 + 248) + 18720LL), 0);
    v6 = sub_1E716E0(*a1, v16, v21, 0);
    if ( v25 > 0x40 )
    {
      if ( v24 )
        operator delete[](v24);
    }
    if ( (v6 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
      return 0;
  }
  sub_1EA6140(a2, v6, 4, 4);
  *v23 = *a4;
  return v6;
}
