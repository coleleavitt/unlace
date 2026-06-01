__int64 __fastcall sub_1D09F50(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __m128 a5, __m128 a6)
{
  __int64 v6; // r14
  __int64 v8; // rbx
  unsigned int v9; // eax
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int64 v12; // rax
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rdx
  unsigned __int16 *v18; // r15
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // [rsp+0h] [rbp-48h]
  unsigned __int64 v27; // [rsp+8h] [rbp-40h]

  v6 = a3;
  v8 = a4 + 16;
  v9 = sub_F6C520(*(_QWORD *)(a3 + 32));
  v12 = sub_1CF4B60(
          a1,
          a2,
          *(_QWORD *)(v6 + 32),
          (__m128i *)(v9 * ((v8 - (unsigned __int64)(v8 != 0)) / v9 + (v8 != 0))),
          v10,
          v11,
          a5,
          a6);
  if ( (v12 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 0;
  v14 = v12;
  v26 = *a1;
  sub_18C74E0(*a1, 4, 0, 4);
  v17 = *a1;
  *(_BYTE *)(*(_QWORD *)(*a1 + 4616) + 640LL * *(unsigned int *)(*a1 + 4624) - 40) = 1;
  v18 = *(unsigned __int16 **)(a4 + 8);
  if ( !v18 )
    v18 = *(unsigned __int16 **)(v6 + 40);
  v19 = sub_1CE88F0(a1, v18, a5, a6, v17, v15, v16);
  v24 = sub_19146D0(*a1, v19, v20, v21, v22, v23, a5, a6);
  if ( v24 != 1
    && ((v27 = v24 & 0xFFFFFFFFFFFFFFFELL, !*(_DWORD *)(*a1 + 12632))
     && v14 == *(_QWORD *)(v6 + 32)
     && v18 == (unsigned __int16 *)v27
     || (v6 = sub_1CAEE80(
                a1,
                v14,
                (*(_WORD *)(v6 + 18) >> 6) & 7,
                0,
                v27,
                (*(_BYTE *)(v6 + 18) >> 3) & 7,
                *(_QWORD *)a4),
         (v6 & 0xFFFFFFFFFFFFFFF0LL) != 0)) )
  {
    sub_1EA6140(a2, v6, 16, 8);
    *(_DWORD *)v25 = *(_DWORD *)a4;
    *(_DWORD *)(v25 + 4) = *(_DWORD *)(a4 + 4);
    *(_QWORD *)(v25 + 8) = v27;
  }
  else
  {
    v6 = 0;
  }
  sub_190D5E0(v26, a5);
  return v6;
}
