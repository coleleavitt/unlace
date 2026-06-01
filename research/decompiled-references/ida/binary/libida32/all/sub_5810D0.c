unsigned __int64 __fastcall sub_5810D0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rax
  _QWORD *v5; // r14
  int v6; // r13d
  unsigned int v7; // eax
  __int64 v8; // r14
  _QWORD *v9; // rbx
  unsigned int v10; // eax
  _QWORD *v11; // rdi
  __int64 v12; // r14
  __int64 v14; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v15; // [rsp+8h] [rbp-30h]

  v15 = __readfsqword(0x28u);
  v4 = switch_dbctx(*(int *)(a2 + 8));
  v5 = *(_QWORD **)(v4 + 1480);
  v6 = sub_79B3A0(v5 + 289, v4, a3, 65);
  v7 = sub_3B9110(v5, a3);
  sub_3BA160(v5, &v14, v7);
  v8 = v14;
  v9 = *(_QWORD **)(switch_dbctx(*(int *)(a1 + 8)) + 1480);
  v10 = sub_3B9110(v9, a3);
  v11 = v9;
  v9 += 289;
  sub_580EF0(v11, v10, v8);
  v12 = *(v9 - 289);
  LOBYTE(v14) = 1;
  sub_79B440(v9, v12, a3, &v14, 1, 80);
  LODWORD(v14) = v6;
  sub_79B440(v9, v12, a3, &v14, 4, 65);
  return v15 - __readfsqword(0x28u);
}

