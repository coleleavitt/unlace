unsigned __int64 __fastcall sub_19179E0(
        __int64 a1,
        unsigned int a2,
        unsigned __int64 a3,
        unsigned __int8 a4,
        __m128 a5,
        __m128 a6)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int64 result; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  _QWORD *v17; // rbx
  unsigned __int64 v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rbp
  __int64 v24; // [rsp+0h] [rbp-C8h] BYREF
  __int64 v25; // [rsp+8h] [rbp-C0h] BYREF
  _BYTE v26[184]; // [rsp+10h] [rbp-B8h] BYREF

  sub_18D0120(a1, a3, (__m128i)a5, *(double *)a6.m128_u64);
  if ( (*(_WORD *)a3 & 0x1FF) == 0x14 && *(int *)(a3 + 16) > 0 && (*(_DWORD *)a3 & 0x10000) == 0 )
    sub_18D04C0(a1, a3, *(double *)a5.m128_u64);
  result = sub_1907C70(a1, (_QWORD *)a3, (__m128i)a5, a6, v9, v10, v11, v12);
  if ( result != 1 )
  {
    v17 = (_QWORD *)(result & 0xFFFFFFFFFFFFFFFELL);
    if ( (*(_DWORD *)(result & 0xFFFFFFFFFFFFFFFELL) & 0x10000) != 0 )
      return (unsigned __int64)v17;
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 8) != 0 )
      return sub_19B4CE0(a1, v17, a4);
    v18 = result & 0xFFFFFFFFFFFFFFFELL;
    result = sub_19179A0(a1, v17, 1u, v14, v15, v16, a5, a6);
    if ( result != 1 )
    {
      v17 = (_QWORD *)(result & 0xFFFFFFFFFFFFFFFELL);
      v24 = *(_QWORD *)((result & 0xFFFFFFFFFFFFFFFELL) + 8);
      if ( !sub_F61140(*(_QWORD *)(v24 & 0xFFFFFFFFFFFFFFF0LL), v18, v19, v20, v21, v22) )
      {
        sub_168B9F0((__int64)v26, (__int64 *)(a1 + 8), a2, 0x14BFu, 0);
        v23 = sub_1605D30((__int64)v26, &v24);
        v25 = sub_EEC8C0((unsigned __int64)v17, (__int64)&v24, *(double *)a5.m128_u64);
        sub_1587DB0(v23, &v25);
        sub_15F7200(v26);
        return 1;
      }
      sub_16F7C90(a1, (unsigned __int64)v17, a2, (__m128i)a5, *(double *)a6.m128_u64);
      return (unsigned __int64)v17;
    }
  }
  return result;
}
