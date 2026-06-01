__int64 __fastcall sub_1DD0690(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __m128 a5, __m128 a6)
{
  __int64 v6; // r14
  __int64 v9; // rbx
  unsigned int v10; // eax
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v15; // r15
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned __int16 *v21; // rbx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r10
  __int64 v25; // rdx
  unsigned __int64 v26; // rbx
  unsigned int v27; // eax
  __int64 v28; // rax
  unsigned __int64 v29; // rbx
  __int64 v30; // rdx
  int v31; // eax
  __int64 v32; // [rsp+8h] [rbp-40h]
  __int64 v33; // [rsp+8h] [rbp-40h]

  v6 = a3;
  v9 = a4 + 16;
  v10 = sub_F6C520(*(_QWORD *)(a3 + 32));
  v13 = sub_1DCE820(
          a1,
          a2,
          *(_QWORD *)(v6 + 32),
          (const __m128i *)(v10 * ((v9 - (unsigned __int64)(v9 != 0)) / v10 + (v9 != 0))),
          a5,
          a6,
          v11,
          v12);
  if ( (v13 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 0;
  v15 = v13;
  v32 = *a1;
  sub_18C74E0(*a1, 6, 0, 4);
  v16 = *(_QWORD *)(v6 + 40);
  v21 = sub_1DC71F0(a1, v16, v17, v18, v19, v20, a5, a6);
  sub_190D5E0(v32, a5);
  if ( v21 == (unsigned __int16 *)((char *)&dword_0 + 1) )
    return 0;
  v24 = *a1;
  v25 = 0;
  v26 = (unsigned __int64)v21 & 0xFFFFFFFFFFFFFFFELL;
  if ( v26 )
  {
    v33 = *a1;
    v27 = sub_C00A40(v26, v16, 0, v22, v23);
    v24 = v33;
    v25 = v27;
  }
  v28 = sub_19B4A30(v24, v26, v25, 0, 0, 0, a5, a6);
  if ( v28 == 1 )
    return 0;
  v29 = v28 & 0xFFFFFFFFFFFFFFFELL;
  if ( *(_DWORD *)(*a1 + 12632) || v15 != *(_QWORD *)(v6 + 32) || *(_QWORD *)(v6 + 40) != v29 )
  {
    v6 = sub_1DB7A20(a1, v15, (*(_WORD *)(v6 + 18) >> 6) & 7, 0, v29, (*(_BYTE *)(v6 + 18) >> 3) & 7, *(_QWORD *)a4);
    if ( (v6 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
      return 0;
  }
  sub_1EA6140(a2, v6, 16, 8);
  *(_DWORD *)v30 = *(_DWORD *)a4;
  v31 = *(_DWORD *)(a4 + 4);
  *(_QWORD *)(v30 + 8) = v29;
  *(_DWORD *)(v30 + 4) = v31;
  return v6;
}
