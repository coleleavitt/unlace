__int64 __fastcall sub_BC5860(__int64 a1, _DWORD *a2, int a3, unsigned int *a4, unsigned int *a5, char a6)
{
  _DWORD *v9; // rbx
  unsigned int v10; // ebp
  int *v13; // [rsp+18h] [rbp-40h] BYREF

  v9 = (_DWORD *)sub_186B270(0x10u);
  v9[2] = a3;
  *(_QWORD *)v9 = 0x100000002LL;
  v13 = v9 + 2;
  v10 = sub_BC5010(a1, a2, &v13, a4, a5, a6);
  sub_186B220(v9);
  return v10;
}

