__int64 __fastcall sub_3FA0C0(__int64 a1, int a2, int a3)
{
  __int64 v3; // r12
  __int64 v4; // r13
  int dtype_size; // eax
  __int64 v6; // r13
  int v7; // eax
  __int64 v8; // r13
  int v9; // eax

  v3 = a3;
  v4 = *(int *)(*(_QWORD *)(a1 + 832) + 688LL);
  dtype_size = get_dtype_size();
  sub_1D6310(a1, 0x23u, dtype_size, a2, v3, v4, -1);
  v6 = *(int *)(*(_QWORD *)(a1 + 832) + 692LL);
  v7 = get_dtype_size();
  sub_1D6310(a1, 0x1Fu, v7, a2, v3, v6, -1);
  v8 = *(int *)(*(_QWORD *)(a1 + 832) + 696LL);
  v9 = get_dtype_size();
  return sub_1D6310(a1, 0x21u, v9, a2, v3, v8, -1);
}
