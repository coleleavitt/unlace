unsigned __int64 __fastcall sub_1BAC9D0(
        __int64 *a1,
        __int64 *a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        __m128 a6,
        __m128 a7)
{
  __int64 v7; // rax
  __int64 v8; // r12
  unsigned __int64 v9; // rbx
  __int64 v10; // rbp
  __int64 *v11; // r14
  char v12; // al
  unsigned __int64 v13; // rdx
  _QWORD *v14; // rax
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx

  v7 = sub_1B73BE0(a1, a2[3], a3, a6, a7, a4, a5);
  if ( v7 == 1 )
    return 0;
  v8 = *a2;
  v9 = v7 & 0xFFFFFFFFFFFFFFFELL;
  v10 = *(__int64 *)((char *)a2 + 12);
  v11 = *(__int64 **)(*a1 + 760);
  v12 = sub_1B33C80(
          *v11,
          v7 & 0xFFFFFFFFFFFFFFFELL,
          *((_DWORD *)a2 + 4),
          109,
          *(double *)a6.m128_u64,
          *(double *)a7.m128_u64);
  v13 = 0;
  if ( v12 )
  {
    v14 = (_QWORD *)sub_168B6C0((__int64)v11);
    v17 = v14[294];
    v14[304] += 32LL;
    v13 = (v17 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( v14[295] >= v13 + 32 && v17 )
      v14[294] = v13 + 32;
    else
      v13 = sub_986170((__int64)(v14 + 294), 32, 32, 3, v15, v16);
    *(_QWORD *)v13 = v8;
    *(_DWORD *)(v13 + 8) = 109;
    *(_QWORD *)(v13 + 12) = v10;
    *(_QWORD *)(v13 + 24) = v9;
  }
  return v13;
}
