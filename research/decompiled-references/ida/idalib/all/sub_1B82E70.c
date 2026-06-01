unsigned __int64 __fastcall sub_1B82E70(
        __int64 *a1,
        __int64 *a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __m128 a6,
        __m128 a7)
{
  __int64 v7; // rax
  _DWORD *v8; // rax
  __int64 v9; // r12
  int v10; // ebp
  unsigned __int64 v11; // rbx
  __int64 *v12; // r13
  _QWORD *v13; // rax
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  unsigned __int64 result; // rax
  __int64 v19; // rax

  v7 = sub_1B7CAD0(a1, (unsigned __int16 *)a2[2], a6, a7, a3, a4, a5);
  if ( v7 == 1 )
    return 0;
  v8 = (_DWORD *)(v7 & 0xFFFFFFFFFFFFFFFELL);
  if ( !v8 )
    return 0;
  v9 = *a2;
  v10 = *((_DWORD *)a2 + 3);
  v11 = (unsigned __int64)v8;
  v12 = *(__int64 **)(*a1 + 760);
  if ( (*v8 & 0x3C000) != 0 )
    goto LABEL_4;
  v19 = sub_1B10FC0(v12, (unsigned __int64)v8, 0x2Au, 0, 0, a6, a7);
  if ( v19 == 1 )
    return 0;
  v11 = v19 & 0xFFFFFFFFFFFFFFFELL;
LABEL_4:
  v13 = (_QWORD *)sub_168B6C0((__int64)v12);
  v16 = v13[294];
  v13[304] += 24LL;
  v17 = (v16 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( v13[295] >= v17 + 24 && v16 )
  {
    v13[294] = v17 + 24;
    result = (v16 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  }
  else
  {
    result = sub_986170((__int64)(v13 + 294), 24, 24, 3, v14, v15);
  }
  *(_QWORD *)result = v9;
  *(_DWORD *)(result + 8) = 42;
  *(_DWORD *)(result + 12) = v10;
  *(_QWORD *)(result + 16) = v11;
  return result;
}
