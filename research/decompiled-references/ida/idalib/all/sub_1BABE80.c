unsigned __int64 __fastcall sub_1BABE80(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        __m128 a6,
        __m128 a7)
{
  __int64 v8; // rax
  unsigned __int64 v9; // rsi
  __int64 v10; // rax
  int v11; // r12d
  int v12; // ebp
  __int64 v13; // r14
  int v14; // r13d
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rbx
  _QWORD *v17; // rax
  __int64 v18; // r9

  v8 = sub_1B73BE0(a1, *(_QWORD *)(a2 + 16), a3, a6, a7, a4, a5);
  if ( v8 != 1 )
  {
    v9 = v8 & 0xFFFFFFFFFFFFFFFELL;
    v10 = *a1;
    if ( *(_QWORD *)(a2 + 16) == v9 && !*(_DWORD *)(v10 + 12632) )
      return a2;
    v11 = *(_DWORD *)(a2 + 4);
    v12 = *(_DWORD *)(a2 + 12);
    v13 = *(_QWORD *)(v10 + 760);
    v14 = *(_DWORD *)a2;
    if ( !v9 )
    {
      v16 = 0;
      goto LABEL_6;
    }
    v15 = sub_1B11600(*(__int64 **)(v10 + 760), v9, 0x4Fu, 1, 0, a6, a7);
    if ( v15 != 1 )
    {
      v16 = v15 & 0xFFFFFFFFFFFFFFFELL;
LABEL_6:
      v17 = (_QWORD *)sub_168B6C0(v13);
      return sub_EBFCB0(v17, v14, v12, v11, v16, v18);
    }
  }
  return 0;
}
