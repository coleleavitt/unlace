unsigned __int64 __fastcall sub_1B13F10(
        __int64 *a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __m128 a6,
        __m128 a7)
{
  int v7; // r13d
  int v8; // r12d
  int v9; // ebp
  __int64 v10; // r15
  unsigned int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned __int64 v16; // rax
  __int64 v17; // rax
  unsigned __int64 v18; // rbx
  _QWORD *v19; // rax
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rcx
  unsigned __int64 v23; // rdx
  unsigned __int64 result; // rax

  v7 = a3;
  v8 = a5;
  v9 = a4;
  v10 = a1[1];
  v11 = sub_C00A40((unsigned __int64)a2, (__int64)a2, a3, a4, a5);
  if ( !(unsigned __int8)sub_1B13CD0(*a1, v11, v10, *(double *)a6.m128_u64, a7) )
    return 0;
  v16 = sub_19146F0(*a1, a2, v12, v13, v14, v15, a6, a7);
  if ( v16 == 1 )
    return 0;
  v17 = sub_1BFA490(*a1, v16 & 0xFFFFFFFFFFFFFFFELL, *(_QWORD *)(a1[1] + 27544), 4, 1);
  if ( v17 == 1 )
    return 0;
  v18 = v17 & 0xFFFFFFFFFFFFFFFELL;
  v19 = (_QWORD *)sub_168B6C0((__int64)a1);
  v22 = v19[294];
  v19[304] += 24LL;
  v23 = (v22 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( v19[295] >= v23 + 24 && v22 )
  {
    v19[294] = v23 + 24;
    result = (v22 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  }
  else
  {
    result = sub_986170((__int64)(v19 + 294), 24, 24, 3, v20, v21);
  }
  *(_DWORD *)result = v7;
  *(_DWORD *)(result + 4) = v8;
  *(_DWORD *)(result + 8) = 8;
  *(_DWORD *)(result + 12) = v9;
  *(_QWORD *)(result + 16) = v18;
  return result;
}
