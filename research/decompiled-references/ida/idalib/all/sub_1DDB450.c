__int64 __fastcall sub_1DDB450(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  unsigned __int64 v10; // rsi
  unsigned __int16 *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned __int64 v15; // rdx
  unsigned __int16 *v16; // rbp
  _QWORD *v17; // rdi
  _DWORD *v18; // r8
  __int64 v20; // rbp
  __int64 v21; // rsi
  __int64 *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  _QWORD *v27; // rax
  __int64 v28; // rbp
  unsigned __int64 v29; // rax
  __int64 v30; // r8
  __int64 v31; // r9

  v10 = *(_QWORD *)(a2 + 24);
  v11 = sub_1DC71F0(a1, v10, a3, a4, a5, a6, a7, a8);
  if ( v11 == (unsigned __int16 *)((char *)&dword_0 + 1) )
    return 1;
  v15 = *(_QWORD *)(a2 + 16);
  v16 = v11;
  if ( v15 )
  {
    v10 = *(unsigned int *)(a2 + 4);
    v15 = sub_1DD8310((__int64)a1, v10, v15, v12, v13, v14, a7, a8);
    if ( !v15 )
      return 1;
  }
  v17 = (_QWORD *)*a1;
  v18 = (_DWORD *)((unsigned __int64)v16 & 0xFFFFFFFFFFFFFFFELL);
  if ( *(_DWORD *)(*a1 + 12632) || *(_DWORD **)(a2 + 24) != v18 || v15 != *(_QWORD *)(a2 + 16) )
    return sub_19BD000(
             v17,
             *(_DWORD *)(a2 + 4),
             (*(_QWORD *)a2 & 0x80000LL) != 0,
             (*(_QWORD *)a2 & 0x100000LL) != 0,
             (__int64)v18,
             v14,
             a7,
             a8);
  if ( v15 )
  {
    v10 = *(unsigned int *)(a2 + 4);
    sub_1910D40((__int64)v17, v10, v15, 1, (__int64)v18, v14, a7, a8);
    v18 = *(_DWORD **)(a2 + 24);
  }
  if ( (*v18 & 0x10000) == 0 )
  {
    v20 = *(_QWORD *)(*a1 + 248);
    v21 = sub_C93F60(a2, v10, v15, v12);
    v22 = (__int64 *)(*(_QWORD *)(*(_QWORD *)(sub_A71450(v20, v21) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(*v22 + 16) == 48 )
    {
      v27 = sub_F60F10(*v22, v21, v23, v24, v25, v26);
      v28 = *a1;
      v29 = sub_1A69EF0((__int64 *)*a1, (__int64)v27);
      sub_1910D40(v28, *(unsigned int *)(a2 + 4), v29, 1, v30, v31, a7, a8);
    }
  }
  return a2;
}
