unsigned __int64 __fastcall sub_190ABA0(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128i a7,
        __m128 a8)
{
  unsigned __int8 v8; // bp
  unsigned __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // r13
  int v12; // edx
  unsigned __int16 *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // r14
  unsigned int v18; // eax
  unsigned __int64 v19; // rax
  unsigned __int64 v21; // rax
  _BYTE *v22; // rax
  unsigned __int64 v23; // rax
  __int64 v24; // rax

  v8 = a3;
  v9 = (unsigned __int64)a2;
  v10 = *(_QWORD *)(a2[1] & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v10 + 16) == 13 && ((*(_WORD *)(v10 + 18) >> 3) & 0x1FFu) > 0x1F1 )
  {
    v21 = sub_1907C70(a1, a2, a7, a8, a3, a4, a5, a6);
    v9 = v21 & 0xFFFFFFFFFFFFFFFELL;
    if ( v21 == 1 )
      return 1;
  }
  v11 = *(_QWORD *)(v9 + 8);
  v12 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                       & 0xFFFFFFFFFFFFFFF0LL)
                           + 16LL);
  if ( (unsigned int)(v12 - 25) <= 1 )
  {
    v13 = (unsigned __int16 *)sub_BFD550(v9);
    v16 = *v13;
    LOWORD(v16) = v16 & 0x1FF;
    if ( (_WORD)v16 != 71
      || (v17 = *((_QWORD *)v13 + 2), (*(_BYTE *)(v17 + 28) & 0x7Fu) - 34 > 5)
      || (v18 = sub_C00A40(v9, (__int64)a2, v16, v14, v15), (unsigned __int8)sub_1BE0140(a1, v17, v8, v18)) )
    {
      v19 = sub_A70010(*(_QWORD *)(a1 + 248), v11);
      return sub_160A600(a1, v9, v19, 0xCu, 0, 0, *(double *)a7.m128i_i64, *(double *)a8.m128_u64, 0)
           & 0xFFFFFFFFFFFFFFFELL;
    }
    return 1;
  }
  if ( (unsigned __int8)(v12 - 2) > 4u )
    return v9;
  v22 = *(_BYTE **)(a1 + 232);
  if ( (*v22 & 1) == 0 && (v22[1] & 8) == 0 && ((*(_BYTE *)(v9 + 1) >> 1) & 3) != 1 )
    return v9;
  v23 = sub_A72210(*(_QWORD **)(a1 + 248), *(_QWORD *)(v9 + 8));
  v24 = sub_160A600(a1, v9, v23, 0xBu, 0, 0, *(double *)a7.m128i_i64, *(double *)a8.m128_u64, 0);
  if ( v24 == 1 )
    return 1;
  return v24 & 0xFFFFFFFFFFFFFFFELL;
}
