unsigned __int64 __fastcall sub_1B83DD0(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __m128 a6,
        __m128 a7)
{
  __int64 v7; // rax
  int v8; // r12d
  int v9; // ebp
  int v10; // ebx
  __int64 v11; // r14
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // r13
  _QWORD *v14; // rax
  __int64 v15; // r9

  v7 = sub_1B7CAD0(a1, *(unsigned __int16 **)(a2 + 16), a6, a7, a3, a4, a5);
  if ( v7 != 1 )
  {
    v8 = *(_DWORD *)(a2 + 4);
    v9 = *(_DWORD *)(a2 + 12);
    v10 = *(_DWORD *)a2;
    v11 = *(_QWORD *)(*a1 + 760);
    if ( (v7 & 0xFFFFFFFFFFFFFFFELL) == 0 )
    {
      v13 = 0;
      goto LABEL_5;
    }
    v12 = sub_1B11600(*(__int64 **)(*a1 + 760), v7 & 0xFFFFFFFFFFFFFFFELL, 0x4Fu, 1, 0, a6, a7);
    if ( v12 != 1 )
    {
      v13 = v12 & 0xFFFFFFFFFFFFFFFELL;
LABEL_5:
      v14 = (_QWORD *)sub_168B6C0(v11);
      return sub_EBFCB0(v14, v10, v9, v8, v13, v15);
    }
  }
  return 0;
}
