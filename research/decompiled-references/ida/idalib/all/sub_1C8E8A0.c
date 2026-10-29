__int64 __fastcall sub_1C8E8A0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __m128 a5, __m128 a6)
{
  __int64 v9; // rbx
  unsigned int v10; // eax
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int64 v13; // rax
  int v15; // ebx
  unsigned __int64 v16; // rsi
  __int64 v17; // rdx
  unsigned __int64 v18; // rcx
  __int64 v19; // r8
  unsigned __int16 *v20; // r15
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r10
  __int64 v24; // rdx
  unsigned __int64 v25; // r15
  unsigned int v26; // eax
  __int64 v27; // rax
  unsigned __int64 v28; // r15
  __int64 v29; // rbx
  __int64 v30; // rdx
  int v31; // eax
  __int64 v32; // [rsp+8h] [rbp-40h]
  __int64 v33; // [rsp+8h] [rbp-40h]

  v9 = a4 + 16;
  v10 = sub_F6C520(*(_QWORD *)(a3 + 32));
  v13 = sub_1C892C0(
          a1,
          a2,
          *(_QWORD *)(a3 + 32),
          (const __m128i *)(v10 * ((v9 - (unsigned __int64)(v9 != 0)) / v10 + (v9 != 0))),
          v11,
          v12,
          a5,
          a6);
  if ( (v13 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 0;
  v15 = v13;
  v32 = *a1;
  sub_18C74E0(*a1, 6, 0, 4);
  v16 = *(_QWORD *)(a3 + 40);
  v20 = sub_1C7CFE0(a1, v16, a5, a6, v17, v18, v19);
  sub_190D5E0(v32, a5);
  if ( v20 == (unsigned __int16 *)((char *)&dword_0 + 1) )
    return 0;
  v23 = *a1;
  v24 = 0;
  v25 = (unsigned __int64)v20 & 0xFFFFFFFFFFFFFFFELL;
  if ( v25 )
  {
    v33 = *a1;
    v26 = sub_C00A40(v25, v16, 0, v21, v22);
    v23 = v33;
    v24 = v26;
  }
  v27 = sub_19B4A30(v23, v25, v24, 0, 0, 0, a5, a6);
  if ( v27 == 1 )
    return 0;
  v28 = v27 & 0xFFFFFFFFFFFFFFFELL;
  v29 = sub_1C732F0(
          a1,
          v15,
          (*(_WORD *)(a3 + 18) >> 6) & 7,
          0,
          v27 & 0xFFFFFFFFFFFFFFFELL,
          (*(_BYTE *)(a3 + 18) >> 3) & 7,
          *(_QWORD *)a4);
  if ( (v29 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 0;
  sub_1EA6140(a2, v29, 16, 8);
  *(_DWORD *)v30 = *(_DWORD *)a4;
  v31 = *(_DWORD *)(a4 + 4);
  *(_QWORD *)(v30 + 8) = v28;
  *(_DWORD *)(v30 + 4) = v31;
  return v29;
}
