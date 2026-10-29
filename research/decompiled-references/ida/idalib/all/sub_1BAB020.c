unsigned __int64 __fastcall sub_1BAB020(
        __int64 *a1,
        __int64 *a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        __m128 a6,
        __m128 a7)
{
  __int64 v7; // rax
  __int64 v8; // r12
  int v9; // ebp
  unsigned __int64 v10; // rbx
  _QWORD *v11; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  unsigned __int64 result; // rax

  v7 = sub_1B73BE0(a1, a2[2], a3, a6, a7, a4, a5);
  if ( v7 == 1 )
    return 0;
  v8 = *a2;
  v9 = *((_DWORD *)a2 + 3);
  v10 = v7 & 0xFFFFFFFFFFFFFFFELL;
  v11 = (_QWORD *)sub_168B6C0(*(_QWORD *)(*a1 + 760));
  v14 = v11[294];
  v11[304] += 24LL;
  v15 = (v14 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( v11[295] >= v15 + 24 && v14 )
  {
    v11[294] = v15 + 24;
    result = (v14 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  }
  else
  {
    result = sub_986170((__int64)(v11 + 294), 24, 24, 3, v12, v13);
  }
  *(_QWORD *)result = v8;
  *(_DWORD *)(result + 8) = 43;
  *(_DWORD *)(result + 12) = v9;
  *(_QWORD *)(result + 16) = v10;
  return result;
}
