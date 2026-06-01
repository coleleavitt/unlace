__int64 __fastcall sub_B1A120(__int64 a1, int a2, int a3)
{
  _DWORD *v4; // rbx
  unsigned int v5; // ebp
  __int64 v7[6]; // [rsp+8h] [rbp-30h] BYREF

  v4 = (_DWORD *)sub_186B270(0x10u);
  v4[2] = a2;
  v4[3] = a3;
  *(_QWORD *)v4 = 0x200000002LL;
  v7[0] = (__int64)(v4 + 2);
  v5 = sub_B19E50(a1, v7);
  sub_186B220(v4);
  return v5;
}

