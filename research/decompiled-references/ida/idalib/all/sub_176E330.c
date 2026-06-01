__int64 __fastcall sub_176E330(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r14
  __int64 v7; // rbx
  unsigned int v8; // eax
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int64 v11; // rax
  unsigned __int64 v13; // r15
  unsigned __int16 *v14; // rsi
  __int64 v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r10
  __int64 v19; // rdx
  unsigned __int64 v20; // rbx
  unsigned int v21; // eax
  __int64 v22; // rax
  unsigned __int64 v23; // rbx
  __int64 v24; // rdx
  int v25; // eax
  __int64 v26; // [rsp+8h] [rbp-40h]
  __int64 v27; // [rsp+8h] [rbp-40h]

  v4 = a3;
  v7 = a4 + 16;
  v8 = sub_F6C520(*(_QWORD *)(a3 + 32));
  v11 = sub_17687F0(
          a1,
          a2,
          *(_QWORD *)(v4 + 32),
          (const __m128i *)(v8 * ((v7 - (unsigned __int64)(v7 != 0)) / v8 + (v7 != 0))),
          v9,
          v10);
  if ( (v11 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 0;
  v13 = v11;
  v26 = *a1;
  sub_18C74E0(*a1, 6, 0, 4);
  v14 = *(unsigned __int16 **)(v4 + 40);
  v15 = sub_175B800(a1, v14);
  sub_190D5E0(v26);
  if ( v15 == 1 )
    return 0;
  v18 = *a1;
  v19 = 0;
  v20 = v15 & 0xFFFFFFFFFFFFFFFELL;
  if ( v20 )
  {
    v27 = *a1;
    v21 = sub_C00A40(v20, (__int64)v14, 0, v16, v17);
    v18 = v27;
    v19 = v21;
  }
  v22 = sub_19B4A30(v18, v20, v19, 0, 0, 0);
  if ( v22 == 1 )
    return 0;
  v23 = v22 & 0xFFFFFFFFFFFFFFFELL;
  if ( *(_DWORD *)(*a1 + 12632) || v13 != *(_QWORD *)(v4 + 32) || *(_QWORD *)(v4 + 40) != v23 )
  {
    v4 = sub_1741030(a1, v13, (*(_WORD *)(v4 + 18) >> 6) & 7, 0, v23, (*(_BYTE *)(v4 + 18) >> 3) & 7, *(_QWORD *)a4);
    if ( (v4 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
      return 0;
  }
  sub_1EA6140(a2, v4, 16, 8);
  *(_DWORD *)v24 = *(_DWORD *)a4;
  v25 = *(_DWORD *)(a4 + 4);
  *(_QWORD *)(v24 + 8) = v23;
  *(_DWORD *)(v24 + 4) = v25;
  return v4;
}
