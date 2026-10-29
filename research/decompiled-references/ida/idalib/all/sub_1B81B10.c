unsigned __int64 __fastcall sub_1B81B10(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __m128 a6,
        __m128 a7)
{
  __int64 v7; // rax
  unsigned int v8; // r13d
  int v9; // r12d
  int v10; // ebp
  __int64 *v11; // r14
  _DWORD *v12; // rax
  unsigned __int64 v13; // rbx
  _QWORD *v14; // rax
  __int64 v15; // r9
  __int64 v17; // rax

  v7 = sub_1B7CAD0(a1, *(unsigned __int16 **)(a2 + 16), a6, a7, a3, a4, a5);
  if ( v7 != 1 )
  {
    v8 = *(_DWORD *)(a2 + 4);
    v9 = *(_DWORD *)(a2 + 12);
    v10 = *(_DWORD *)a2;
    v11 = *(__int64 **)(*a1 + 760);
    v12 = (_DWORD *)(v7 & 0xFFFFFFFFFFFFFFFELL);
    if ( v12 )
    {
      v13 = (unsigned __int64)v12;
      if ( (*v12 & 0x3C000) != 0 )
      {
LABEL_4:
        v14 = (_QWORD *)sub_168B6C0((__int64)v11);
        return sub_EBF9F0(v14, v13, v10, v9, v8, v15);
      }
      v17 = sub_1B10FC0(v11, (unsigned __int64)v12, 5u, 1, 0, a6, a7);
      if ( v17 != 1 )
      {
        v13 = v17 & 0xFFFFFFFFFFFFFFFELL;
        goto LABEL_4;
      }
    }
  }
  return 0;
}
