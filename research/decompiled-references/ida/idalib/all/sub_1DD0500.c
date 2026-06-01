__int64 __fastcall sub_1DD0500(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __m128 a5, __m128 a6)
{
  __int64 v6; // r14
  __int64 v8; // rbx
  unsigned int v9; // eax
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v14; // rbx
  unsigned __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // r15
  unsigned __int16 *v20; // rax
  unsigned __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // [rsp+0h] [rbp-48h]
  unsigned __int64 v28; // [rsp+8h] [rbp-40h]

  v6 = a3;
  v8 = a4 + 16;
  v9 = sub_F6C520(*(_QWORD *)(a3 + 32));
  v12 = sub_1DCE820(
          a1,
          a2,
          *(_QWORD *)(v6 + 32),
          (const __m128i *)(v9 * ((v8 - (unsigned __int64)(v8 != 0)) / v9 + (v8 != 0))),
          a5,
          a6,
          v10,
          v11);
  if ( (v12 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 0;
  v14 = v12;
  v27 = *a1;
  sub_18C74E0(*a1, 4, 0, 4);
  v18 = *a1;
  *(_BYTE *)(*(_QWORD *)(*a1 + 4616) + 640LL * *(unsigned int *)(*a1 + 4624) - 40) = 1;
  v19 = *(_QWORD *)(a4 + 8);
  if ( !v19 )
    v19 = *(_QWORD *)(v6 + 40);
  v20 = sub_1DC71F0(a1, v19, v18, v15, v16, v17, a5, a6);
  v25 = sub_19146D0(*a1, (unsigned __int64)v20, v21, v22, v23, v24, a5, a6);
  if ( v25 != 1
    && ((v28 = v25 & 0xFFFFFFFFFFFFFFFELL, !*(_DWORD *)(*a1 + 12632)) && v14 == *(_QWORD *)(v6 + 32) && v19 == v28
     || (v6 = sub_1DB7A20(
                a1,
                v14,
                (*(_WORD *)(v6 + 18) >> 6) & 7,
                0,
                v28,
                (*(_BYTE *)(v6 + 18) >> 3) & 7,
                *(_QWORD *)a4),
         (v6 & 0xFFFFFFFFFFFFFFF0LL) != 0)) )
  {
    sub_1EA6140(a2, v6, 16, 8);
    *(_DWORD *)v26 = *(_DWORD *)a4;
    *(_DWORD *)(v26 + 4) = *(_DWORD *)(a4 + 4);
    *(_QWORD *)(v26 + 8) = v28;
  }
  else
  {
    v6 = 0;
  }
  sub_190D5E0(v27, a5);
  return v6;
}
