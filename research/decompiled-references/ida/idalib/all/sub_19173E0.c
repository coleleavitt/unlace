__int64 __fastcall sub_19173E0(
        __int64 a1,
        unsigned __int64 *a2,
        __int64 a3,
        __int64 a4,
        __m128 a5,
        __m128 a6,
        __int64 a7,
        __int64 a8)
{
  unsigned __int64 v8; // r8
  unsigned int v10; // r12d
  unsigned __int8 v11; // bp
  unsigned __int64 *v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned __int64 v19; // rax
  __int64 v20; // rax
  const char *v21; // rsi
  unsigned __int64 v22; // rax
  __int64 v23; // [rsp+0h] [rbp-C0h] BYREF
  _BYTE v24[184]; // [rsp+8h] [rbp-B8h] BYREF

  v8 = *a2 & 0xFFFFFFFFFFFFFFFELL;
  if ( (*(_DWORD *)v8 & 0x10000) != 0 )
    return *(_QWORD *)(*(_QWORD *)(a1 + 248) + 19072LL);
  v10 = a3;
  v11 = a4;
  v12 = a2;
  if ( (*(_BYTE *)(v8 + 1) & 0x38) != 0 )
  {
    a2 = (unsigned __int64 *)(*a2 & 0xFFFFFFFFFFFFFFFELL);
    v19 = sub_19146F0(a1, (_QWORD *)v8, a3, a4, v8, a8, a5, a6);
    *v12 = v19;
    if ( v19 == 1 )
      return 0;
    v8 = v19 & 0xFFFFFFFFFFFFFFFELL;
  }
  v13 = *(_QWORD *)(*(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v13 + 16) == 14 )
    return *(_QWORD *)(v13 + 32);
  v14 = *(_QWORD *)(*(_QWORD *)(v13 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v14 + 16) == 14 )
  {
    v13 = sub_F63050(*(_QWORD *)(*(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF0LL), a2, v14, a4);
    if ( v13 )
      return *(_QWORD *)(v13 + 32);
    v8 = *v12 & 0xFFFFFFFFFFFFFFFELL;
  }
  if ( sub_F610C0(*(_QWORD *)(*(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF0LL), (__int64)a2, v14, a4, v8, a8) )
    return *(_QWORD *)((*v12 & 0xFFFFFFFFFFFFFFFELL) + 8);
  v22 = sub_1907C70(a1, (_QWORD *)(*v12 & 0xFFFFFFFFFFFFFFFELL), (__m128i)a5, a6, v15, v16, v17, v18);
  if ( v22 == 1 )
    return 0;
  if ( (*v12 & 0xFFFFFFFFFFFFFFFELL) == (v22 & 0xFFFFFFFFFFFFFFFELL) )
  {
    sub_168B9F0((__int64)v24, (__int64 *)(a1 + 8), v10, 0x131Fu, 0);
    v23 = *(_QWORD *)((*v12 & 0xFFFFFFFFFFFFFFFELL) + 8);
    v20 = sub_162B6D0((__int64)v24, &v23);
    v21 = "__imag";
    if ( v11 )
      v21 = "__real";
    if ( *(_BYTE *)(v20 + 120) )
    {
      sub_AE9DF0((unsigned __int8 **)(v20 + 32), (__int64)v21, 1u);
    }
    else if ( *(_BYTE *)(v20 + 132) )
    {
      sub_18D7E40(v20, (__int64)v21);
    }
    sub_15F7200(v24);
    return 0;
  }
  *v12 = v22;
  return sub_19173E0(a1, v12, v10, v11);
}
