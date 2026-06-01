__int64 __fastcall sub_1D0A0E0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __m128 a5, __m128 a6)
{
  __int64 v6; // r14
  __int64 v9; // rbx
  unsigned int v10; // eax
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int64 v13; // rax
  unsigned __int64 v15; // r15
  unsigned __int16 *v16; // rsi
  __int64 v17; // rdx
  unsigned __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rbx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r10
  __int64 v24; // rdx
  unsigned __int64 v25; // rbx
  unsigned int v26; // eax
  __int64 v27; // rax
  unsigned __int64 v28; // rbx
  __int64 v29; // rdx
  int v30; // eax
  __int64 v31; // [rsp+8h] [rbp-40h]
  __int64 v32; // [rsp+8h] [rbp-40h]

  v6 = a3;
  v9 = a4 + 16;
  v10 = sub_F6C520(*(_QWORD *)(a3 + 32));
  v13 = sub_1CF4B60(
          a1,
          a2,
          *(_QWORD *)(v6 + 32),
          (__m128i *)(v10 * ((v9 - (unsigned __int64)(v9 != 0)) / v10 + (v9 != 0))),
          v11,
          v12,
          a5,
          a6);
  if ( (v13 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 0;
  v15 = v13;
  v31 = *a1;
  sub_18C74E0(*a1, 6, 0, 4);
  v16 = *(unsigned __int16 **)(v6 + 40);
  v20 = sub_1CE88F0(a1, v16, a5, a6, v17, v18, v19);
  sub_190D5E0(v31, a5);
  if ( v20 == 1 )
    return 0;
  v23 = *a1;
  v24 = 0;
  v25 = v20 & 0xFFFFFFFFFFFFFFFELL;
  if ( v25 )
  {
    v32 = *a1;
    v26 = sub_C00A40(v25, (__int64)v16, 0, v21, v22);
    v23 = v32;
    v24 = v26;
  }
  v27 = sub_19B4A30(v23, v25, v24, 0, 0, 0, a5, a6);
  if ( v27 == 1 )
    return 0;
  v28 = v27 & 0xFFFFFFFFFFFFFFFELL;
  if ( *(_DWORD *)(*a1 + 12632) || v15 != *(_QWORD *)(v6 + 32) || *(_QWORD *)(v6 + 40) != v28 )
  {
    v6 = sub_1CAEE80(a1, v15, (*(_WORD *)(v6 + 18) >> 6) & 7, 0, v28, (*(_BYTE *)(v6 + 18) >> 3) & 7, *(_QWORD *)a4);
    if ( (v6 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
      return 0;
  }
  sub_1EA6140(a2, v6, 16, 8);
  *(_DWORD *)v29 = *(_DWORD *)a4;
  v30 = *(_DWORD *)(a4 + 4);
  *(_QWORD *)(v29 + 8) = v28;
  *(_DWORD *)(v29 + 4) = v30;
  return v6;
}
