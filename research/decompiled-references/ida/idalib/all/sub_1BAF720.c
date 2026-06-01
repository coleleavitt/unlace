__int64 __fastcall sub_1BAF720(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        __m128 a6,
        __m128 a7)
{
  unsigned __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r9
  __int64 v13; // rbp
  __int64 v14; // rax
  _QWORD *v15; // rdi
  _DWORD *v16; // r8
  __int64 v17; // rdx
  __int64 v19; // rbp
  __int64 v20; // rsi
  __int64 *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  _QWORD *v26; // rax
  __int64 v27; // rbp
  unsigned __int64 v28; // rax
  __int64 v29; // r8
  __int64 v30; // r9

  v9 = *(_QWORD *)(a2 + 24);
  v10 = sub_1B73BE0(a1, v9, a3, a6, a7, a4, a5);
  if ( v10 == 1 )
    return 1;
  v13 = v10;
  v14 = *(_QWORD *)(a2 + 16);
  if ( v14 )
  {
    v9 = *(_QWORD *)(a2 + 16);
    v14 = sub_1B03C10((__int64)a1, v9);
    if ( !v14 )
      return 1;
  }
  v15 = (_QWORD *)*a1;
  v16 = (_DWORD *)(v13 & 0xFFFFFFFFFFFFFFFELL);
  v17 = *(unsigned int *)(*a1 + 12632);
  if ( (_DWORD)v17 || *(_DWORD **)(a2 + 24) != v16 || v14 != *(_QWORD *)(a2 + 16) )
    return sub_19BD000(
             v15,
             *(_DWORD *)(a2 + 4),
             (*(_QWORD *)a2 & 0x80000LL) != 0,
             (*(_QWORD *)a2 & 0x100000LL) != 0,
             (__int64)v16,
             v12,
             a6,
             a7);
  if ( v14 )
  {
    v9 = *(unsigned int *)(a2 + 4);
    sub_1910D40((__int64)v15, v9, v14, 1, (__int64)v16, v12, a6, a7);
    v16 = *(_DWORD **)(a2 + 24);
  }
  if ( (*v16 & 0x10000) == 0 )
  {
    v19 = *(_QWORD *)(*a1 + 248);
    v20 = sub_C93F60(a2, v9, v17, v11);
    v21 = (__int64 *)(*(_QWORD *)(*(_QWORD *)(sub_A71450(v19, v20) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(*v21 + 16) == 48 )
    {
      v26 = sub_F60F10(*v21, v20, v22, v23, v24, v25);
      v27 = *a1;
      v28 = sub_1A69EF0((__int64 *)*a1, (__int64)v26);
      sub_1910D40(v27, *(unsigned int *)(a2 + 4), v28, 1, v29, v30, a6, a7);
    }
  }
  return a2;
}
