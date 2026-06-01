unsigned __int64 __fastcall sub_1D0B140(__int64 *a1, __int64 a2, unsigned __int64 a3, __int64 a4, __m128 a5, __m128 a6)
{
  unsigned __int64 v7; // r13
  __int64 v9; // rbx
  unsigned int v10; // eax
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int64 v13; // rax
  __int64 v14; // rbx
  unsigned __int64 v15; // rdx
  _QWORD *v16; // rsi
  unsigned __int64 *v17; // rax

  v7 = a3;
  v9 = a4 + 16;
  v10 = sub_F6C520(*(_QWORD *)(a3 + 32));
  v13 = sub_1CF4B60(
          a1,
          a2,
          *(_QWORD *)(v7 + 32),
          (__m128i *)(v10 * ((v9 - (unsigned __int64)(v9 != 0)) / v10 + (v9 != 0))),
          v11,
          v12,
          a5,
          a6);
  if ( (v13 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 0;
  v14 = v13;
  v15 = *(_QWORD *)(v7 + 40) & 0xFFFFFFFFFFFFFFF0LL;
  if ( !v15 )
    goto LABEL_7;
  v16 = *(_QWORD **)(a4 + 8);
  if ( !v16 )
    v16 = sub_A81910(*(_QWORD **)(*a1 + 248), *(_QWORD *)(v7 + 40), 0);
  v17 = sub_1CF6590((__int64)a1, (__int64)v16, a5, a6);
  if ( !v17 )
    return 0;
  v15 = *v17;
LABEL_7:
  if ( *(_DWORD *)(*a1 + 12632) || v14 != *(_QWORD *)(v7 + 32) || v15 != *(_QWORD *)(v7 + 40) )
    v7 = sub_A77770(*(_QWORD *)(*a1 + 248), v14, v15, (unsigned __int8 *)(v7 + 48));
  sub_1EA6140(a2, v7, 16, 8);
  return v7;
}
