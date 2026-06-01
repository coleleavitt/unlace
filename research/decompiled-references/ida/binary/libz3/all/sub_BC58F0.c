__int64 __fastcall sub_BC58F0(__int64 a1, int a2, unsigned int *a3, unsigned int *a4, char a5)
{
  _DWORD *v8; // rbx
  unsigned int v9; // ebp
  int *v11; // [rsp+8h] [rbp-40h] BYREF

  v8 = (_DWORD *)sub_186B270(0x10u);
  v8[2] = a2;
  *(_QWORD *)v8 = 0x100000002LL;
  v11 = v8 + 2;
  v9 = sub_BC5010(a1, nullptr, &v11, a3, a4, a5);
  sub_186B220(v8);
  return v9;
}

