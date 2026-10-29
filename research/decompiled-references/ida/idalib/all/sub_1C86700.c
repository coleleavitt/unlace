__int64 __fastcall sub_1C86700(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __m128 a6,
        __m128 a7)
{
  unsigned __int16 *v7; // rax
  __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  __int64 v10; // r8
  unsigned __int16 *v12; // r12
  __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  __int64 v15; // r8
  unsigned __int16 *v16; // r13
  unsigned __int16 *v17; // rax
  __int64 v18; // r9

  v7 = sub_1C7CFE0(a1, *(_QWORD *)(a2 + 16), a6, a7, a3, a4, a5);
  if ( v7 == (unsigned __int16 *)((char *)&dword_0 + 1) )
    return 1;
  v12 = v7;
  v16 = sub_1C7CFE0(a1, *(_QWORD *)(a2 + 24), a6, a7, v8, v9, v10);
  if ( v16 == (unsigned __int16 *)((char *)&dword_0 + 1) )
    return 1;
  v17 = sub_1C7CFE0(a1, *(_QWORD *)(a2 + 32), a6, a7, v13, v14, v15);
  if ( v17 == (unsigned __int16 *)((char *)&dword_0 + 1) )
    return 1;
  else
    return sub_190A860(
             *a1,
             (_QWORD *)((unsigned __int64)v12 & 0xFFFFFFFFFFFFFFFELL),
             (_QWORD *)((unsigned __int64)v16 & 0xFFFFFFFFFFFFFFFELL),
             (_QWORD *)((unsigned __int64)v17 & 0xFFFFFFFFFFFFFFFELL),
             *(unsigned int *)(a2 + 4),
             v18,
             (__m128i)a6,
             a7);
}
