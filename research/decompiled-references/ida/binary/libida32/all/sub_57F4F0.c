__int64 __fastcall sub_57F4F0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rdi
  __int64 v5; // rax
  _QWORD *v6; // r13
  int v7; // r12d
  unsigned int v8; // eax
  __int64 v9; // r15
  __int64 v10; // rax
  _QWORD *v11; // rbp
  int v12; // r13d
  unsigned int v13; // eax
  __int64 result; // rax
  __int64 v15[9]; // [rsp+0h] [rbp-48h] BYREF

  v4 = *(int *)(a1 + 8);
  v15[1] = __readfsqword(0x28u);
  v5 = switch_dbctx(v4);
  v6 = *(_QWORD **)(v5 + 1480);
  v7 = sub_79B3A0(v6 + 289, v5, a3, 65);
  v8 = sub_3B9110(v6, a3);
  sub_3BA160(v6, v15, v8);
  v9 = v15[0];
  v10 = switch_dbctx(*(int *)(a2 + 8));
  v11 = *(_QWORD **)(v10 + 1480);
  v12 = sub_79B3A0(v11 + 289, v10, a3, 65);
  v13 = sub_3B9110(v11, a3);
  sub_3BA160(v11, v15, v13);
  result = 1;
  if ( v15[0] == v9 )
    return 2LL * (v12 != v7);
  return result;
}

