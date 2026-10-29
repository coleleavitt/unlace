_DWORD *__fastcall sub_1BB3140(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  __int64 v9; // rbp
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r13
  __int64 v14; // rdi
  unsigned int v15; // r14d
  __int64 v16; // rbx
  __int64 v17; // rbp

  v9 = *a1;
  if ( (*(_QWORD *)a2 & 0x100000LL) != 0 || !sub_15F2610(*a1, 0, a3, a4, a5, a6) )
    v13 = sub_19A27D0(v9);
  else
    v13 = (__int64)sub_1BB2C30(a1, *(_QWORD *)(a2 + 8), a7, a8);
  v14 = *a1;
  if ( !*(_DWORD *)(*a1 + 12632) && *(_QWORD *)(a2 + 8) == v13 )
  {
    sub_19B4EA0(v14, (_DWORD *)a2, v10, v11, v12);
    return (_DWORD *)a2;
  }
  else
  {
    v15 = *(_DWORD *)(a2 + 4);
    v16 = 1;
    v17 = *(_QWORD *)a2 >> 16;
    if ( !(unsigned __int8)sub_19A92A0(v14, v15, v13) )
      return sub_19B4F00(*a1, v15, v13, (v17 & 8) != 0);
    return (_DWORD *)v16;
  }
}
