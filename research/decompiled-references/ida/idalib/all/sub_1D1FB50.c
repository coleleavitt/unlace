__int64 __fastcall sub_1D1FB50(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __m128 a6,
        __m128 a7)
{
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rbp
  __int64 v16; // rax
  _QWORD *v17; // rdi
  _DWORD *v18; // r8
  __int64 v19; // rdx
  __int64 v21; // rbp
  __int64 v22; // rsi
  __int64 *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  _QWORD *v28; // rax
  __int64 v29; // rbp
  unsigned __int64 v30; // rax
  __int64 v31; // r8
  __int64 v32; // r9

  v9 = *(_QWORD *)(a2 + 24);
  v10 = sub_1D11200(a1, (unsigned __int16 *)v9, a6, a7, a3, a4, a5);
  if ( v10 == 1 )
    return 1;
  v15 = v10;
  v16 = *(_QWORD *)(a2 + 16);
  if ( v16 )
  {
    v9 = *(_QWORD *)(a2 + 16);
    v16 = sub_1D1B120((__int64)a1, v9, a6, a7, v11, v12, v13, v14);
    if ( !v16 )
      return 1;
  }
  v17 = (_QWORD *)*a1;
  v18 = (_DWORD *)(v15 & 0xFFFFFFFFFFFFFFFELL);
  v19 = *(unsigned int *)(*a1 + 12632);
  if ( (_DWORD)v19 || *(_DWORD **)(a2 + 24) != v18 || v16 != *(_QWORD *)(a2 + 16) )
    return sub_19BD000(
             v17,
             *(_DWORD *)(a2 + 4),
             (*(_QWORD *)a2 & 0x80000LL) != 0,
             (*(_QWORD *)a2 & 0x100000LL) != 0,
             (__int64)v18,
             v14,
             a6,
             a7);
  if ( v16 )
  {
    v9 = *(unsigned int *)(a2 + 4);
    sub_1910D40((__int64)v17, v9, v16, 1, (__int64)v18, v14, a6, a7);
    v18 = *(_DWORD **)(a2 + 24);
  }
  if ( (*v18 & 0x10000) == 0 )
  {
    v21 = *(_QWORD *)(*a1 + 248);
    v22 = sub_C93F60(a2, v9, v19, v12);
    v23 = (__int64 *)(*(_QWORD *)(*(_QWORD *)(sub_A71450(v21, v22) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(*v23 + 16) == 48 )
    {
      v28 = sub_F60F10(*v23, v22, v24, v25, v26, v27);
      v29 = *a1;
      v30 = sub_1A69EF0((__int64 *)*a1, (__int64)v28);
      sub_1910D40(v29, *(unsigned int *)(a2 + 4), v30, 1, v31, v32, a6, a7);
    }
  }
  return a2;
}
