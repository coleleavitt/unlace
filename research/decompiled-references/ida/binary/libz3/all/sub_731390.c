__int64 __fastcall sub_731390(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  int v3; // r8d
  int v4; // r9d
  __int64 v6; // [rsp-8h] [rbp-48h]
  void *v7[8]; // [rsp+0h] [rbp-40h] BYREF

  v2 = sub_186B270(0x2C78u);
  *(_DWORD *)(v2 + 8) = 0;
  *(_QWORD *)v2 = &off_1C53C00;
  *(_QWORD *)(v2 + 16) = a2;
  sub_1858590(v2 + 24, a1 + 24);
  v7[0] = nullptr;
  sub_2527E0(v2 + 32, (__int64)v7);
  sub_18572D0(v7);
  sub_8FBD90(
    v2 + 792,
    a2,
    v2 + 32,
    a1 + 24,
    v3,
    v4,
    v6,
    v7[0],
    (__int64)v7[1],
    (__int64)v7[2],
    (__int64)v7[3],
    (__int64)v7[4],
    (__int64)v7[5],
    (__int64)v7[6],
    (__int64)v7[7]);
  *(_QWORD *)(v2 + 11336) = a2;
  *(_QWORD *)(v2 + 11344) = 0;
  *(_QWORD *)(v2 + 11360) = 0;
  *(_OWORD *)(v2 + 11368) = 0;
  return v2;
}

