__int64 __fastcall sub_1B96F10(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __m128 a5, __m128 a6)
{
  __int64 v9; // rbx
  unsigned int v10; // eax
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int64 v13; // rax
  __int64 v14; // rbp
  __int64 v16; // r15
  int v17; // ebx
  unsigned __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rdx
  unsigned __int16 *v21; // rsi
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  __int64 v28; // rdx
  unsigned __int64 v29; // [rsp+8h] [rbp-40h]

  v9 = a4 + 16;
  v10 = sub_F6C520(*(_QWORD *)(a3 + 32));
  v13 = sub_1B8F630(
          a1,
          a2,
          *(_QWORD *)(a3 + 32),
          (__m128i *)(v10 * ((v9 - (unsigned __int64)(v9 != 0)) / v10 + (v9 != 0))),
          v11,
          v12,
          a5,
          a6);
  if ( (v13 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 0;
  v16 = *a1;
  v17 = v13;
  sub_18C74E0(*a1, 4, 0, 4);
  v20 = *a1;
  *(_BYTE *)(*(_QWORD *)(*a1 + 4616) + 640LL * *(unsigned int *)(*a1 + 4624) - 40) = 1;
  v21 = *(unsigned __int16 **)(a4 + 8);
  if ( !v21 )
    v21 = *(unsigned __int16 **)(a3 + 40);
  v22 = sub_1B7CAD0(a1, v21, a5, a6, v20, v18, v19);
  v27 = sub_19146D0(*a1, v22, v23, v24, v25, v26, a5, a6);
  if ( v27 == 1
    || (v29 = v27 & 0xFFFFFFFFFFFFFFFELL,
        v14 = sub_1AE7D30(
                a1,
                v17,
                (*(_WORD *)(a3 + 18) >> 6) & 7,
                0,
                v27 & 0xFFFFFFFFFFFFFFFELL,
                (*(_BYTE *)(a3 + 18) >> 3) & 7,
                *(_QWORD *)a4),
        (v14 & 0xFFFFFFFFFFFFFFF0LL) == 0) )
  {
    v14 = 0;
  }
  else
  {
    sub_1EA6140(a2, v14, 16, 8);
    *(_DWORD *)v28 = *(_DWORD *)a4;
    *(_DWORD *)(v28 + 4) = *(_DWORD *)(a4 + 4);
    *(_QWORD *)(v28 + 8) = v29;
  }
  sub_190D5E0(v16, a5);
  return v14;
}
