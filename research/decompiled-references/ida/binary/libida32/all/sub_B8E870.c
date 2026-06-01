unsigned __int64 __fastcall sub_B8E870(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  unsigned __int64 v8; // rbx
  _QWORD *v10; // [rsp+8h] [rbp-40h]

  v10 = sub_A5DBD0(a1, a4, 0);
  v8 = sub_B6C590(104, a1, a2, 0);
  sub_B4F3E0(v8, 0x2Cu, (__int64)a1, a2, a5, a5, a3, a4, (__int64)v10, 0);
  *(_BYTE *)(v8 + 29) |= 2u;
  *(_QWORD *)v8 = &off_2BDA2E0;
  return v8;
}

