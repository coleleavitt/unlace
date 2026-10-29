__int64 __fastcall sub_1948930(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __m128 a5, __m128 a6)
{
  __int64 v9; // rbx
  unsigned int v10; // eax
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  int v15; // ebx
  unsigned __int16 *v16; // rsi
  __int64 v17; // r15
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r10
  __int64 v21; // rdx
  unsigned __int64 v22; // r15
  unsigned int v23; // eax
  __int64 v24; // rax
  unsigned __int64 v25; // r15
  __int64 v26; // rbx
  __int64 v27; // rdx
  int v28; // eax
  __int64 v29; // [rsp+8h] [rbp-40h]
  __int64 v30; // [rsp+8h] [rbp-40h]

  v9 = a4 + 16;
  v10 = sub_F6C520(*(_QWORD *)(a3 + 32));
  v13 = sub_1946010(
          a1,
          a2,
          *(_QWORD *)(a3 + 32),
          v10 * ((v9 - (unsigned __int64)(v9 != 0)) / v10 + (v9 != 0)),
          v11,
          v12,
          a5,
          a6);
  if ( (v13 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 0;
  v15 = v13;
  v29 = *a1;
  sub_18C79E0(*a1, 6, 4);
  v16 = *(unsigned __int16 **)(a3 + 40);
  v17 = sub_1944E10(a1, v16, a5, a6);
  sub_190D5E0(v29, a5);
  if ( v17 == 1 )
    return 0;
  v20 = *a1;
  v21 = 0;
  v22 = v17 & 0xFFFFFFFFFFFFFFFELL;
  if ( v22 )
  {
    v30 = *a1;
    v23 = sub_C00A40(v22, (__int64)v16, 0, v18, v19);
    v20 = v30;
    v21 = v23;
  }
  v24 = sub_19B4A30(v20, v22, v21, 0, 0, 0);
  if ( v24 == 1 )
    return 0;
  v25 = v24 & 0xFFFFFFFFFFFFFFFELL;
  v26 = sub_1901270(
          a1,
          v15,
          (*(_WORD *)(a3 + 18) >> 6) & 7,
          0,
          v24 & 0xFFFFFFFFFFFFFFFELL,
          (*(_BYTE *)(a3 + 18) >> 3) & 7,
          *(_QWORD *)a4);
  if ( (v26 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 0;
  sub_1EA6140(a2, v26, 16, 8);
  *(_DWORD *)v27 = *(_DWORD *)a4;
  v28 = *(_DWORD *)(a4 + 4);
  *(_QWORD *)(v27 + 8) = v25;
  *(_DWORD *)(v27 + 4) = v28;
  return v26;
}
