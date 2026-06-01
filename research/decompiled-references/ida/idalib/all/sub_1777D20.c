__int64 __fastcall sub_1777D20(_QWORD *a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 v4; // r14
  _DWORD *v7; // rbx
  unsigned int v8; // eax
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // r14
  unsigned int v17; // eax
  void *v18; // rsi
  __int64 v19; // rax
  _DWORD *v21; // rdx
  void *v22; // [rsp+0h] [rbp-48h] BYREF
  unsigned int v23; // [rsp+8h] [rbp-40h]

  v4 = a3;
  v7 = a4 + 1;
  v8 = sub_F6C520(*(_QWORD *)(a3 + 32));
  v11 = sub_17687F0(
          a1,
          a2,
          *(_QWORD *)(v4 + 32),
          (const __m128i *)(v8 * (((unsigned __int64)v7 - (v7 != nullptr)) / v8 + (v7 != nullptr))),
          v9,
          v10);
  if ( (v11 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 0;
  v14 = v11;
  v15 = *(unsigned int *)(*a1 + 12632LL);
  if ( (_DWORD)v15 || v11 != *(_QWORD *)(v4 + 32) )
  {
    v16 = *(unsigned int *)(v4 + 20);
    v17 = sub_AAC1F0(*(_QWORD *)(*a1 + 248LL), *(_QWORD *)(*(_QWORD *)(*a1 + 248LL) + 18720LL), v15, v12, v13);
    v23 = v17;
    if ( v17 > 0x40 )
    {
      sub_2205470(&v22, v16, 1);
    }
    else
    {
      v18 = (void *)(v16 & (0xFFFFFFFFFFFFFFFFLL >> -(char)v17));
      if ( !v17 )
        v18 = nullptr;
      v22 = v18;
    }
    v19 = sub_C0C5D0(*(_QWORD **)(*a1 + 248LL), (__int64)&v22, *(_QWORD *)(*(_QWORD *)(*a1 + 248LL) + 18720LL), 0);
    v4 = sub_1E716E0(*a1, v14, v19, 0);
    if ( v23 > 0x40 )
    {
      if ( v22 )
        operator delete[](v22);
    }
    if ( (v4 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
      return 0;
  }
  sub_1EA6140(a2, v4, 4, 4);
  *v21 = *a4;
  return v4;
}
