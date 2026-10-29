__int64 __fastcall sub_18C6490(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v9; // rdi
  __int64 v10; // rax
  _QWORD *v11; // rbx
  int v12; // ebp
  __int64 v13; // r14
  __int64 v15; // rax
  __int64 v16; // [rsp+8h] [rbp-30h]

  v9 = *(_QWORD **)(a1 + 248);
  v10 = v9[294];
  v9[304] += 24LL;
  v11 = (_QWORD *)((v10 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  if ( v9[295] >= (unsigned __int64)(v11 + 3) && v10 )
  {
    v9[294] = v11 + 3;
  }
  else
  {
    v16 = a5;
    v15 = sub_986170((__int64)(v9 + 294), 24, 24, 3, a5, a6);
    a5 = v16;
    v11 = (_QWORD *)v15;
  }
  *v11 = a3;
  v11[2] = a5;
  v11[1] = a4;
  v12 = *(_DWORD *)(a3 + 16) * ((*(_WORD *)(a3 + 2) >> 6) & 7);
  v13 = sub_EEE9A0(56, *(_QWORD **)(a1 + 248), 8u);
  sub_C0D8F0(v13, *(_QWORD **)(a1 + 248), a2, (__int64)v11, 0, v12);
  return v13;
}
