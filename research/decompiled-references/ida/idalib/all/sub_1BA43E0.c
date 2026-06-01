__int64 __fastcall sub_1BA43E0(
        __int64 *a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  __int64 v11; // r8
  __int64 result; // rax
  __int64 v13; // r12
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r13
  __int64 v18; // r14

  v8 = sub_1B7AA40(a1, *(_WORD **)(a2 + 8), 1, a3, a4, a6, a7, a8);
  if ( v8 == 1 )
    return 1;
  v13 = v8;
  v17 = sub_1B7CAD0(a1, *(unsigned __int16 **)(a2 + 16), a3, a4, v9, v10, v11);
  if ( v17 == 1 )
    return 1;
  v18 = sub_1B7AA40(a1, *(_WORD **)(a2 + 24), 0, a3, a4, v14, v15, v16);
  if ( v18 == 1 )
    return 1;
  result = sub_1A89A90(
             *(__int64 **)(*a1 + 736),
             *(unsigned int *)(a2 + 32),
             v13 & 0xFFFFFFFFFFFFFFFELL,
             (_QWORD *)(v17 & 0xFFFFFFFFFFFFFFFELL),
             *(_DWORD *)(a2 + 36),
             a3,
             a4);
  if ( result != 1 )
    return sub_1A86060(*(_QWORD *)(*a1 + 736), result & 0xFFFFFFFFFFFFFFFELL, v18 & 0xFFFFFFFFFFFFFFFELL);
  return result;
}
