__int64 __fastcall sub_224A710(__int64 *a1)
{
  _QWORD *v2; // [rsp+0h] [rbp-78h] BYREF
  __int16 v3; // [rsp+20h] [rbp-58h]
  _QWORD v4[4]; // [rsp+30h] [rbp-48h] BYREF
  char v5; // [rsp+50h] [rbp-28h]
  _QWORD v6[2]; // [rsp+58h] [rbp-20h] BYREF
  _QWORD *v7; // [rsp+68h] [rbp-10h] BYREF

  v4[0] = "llvm-worker-{0}";
  v4[2] = &v7;
  v2 = v4;
  v5 = 1;
  v6[0] = off_2C75DF8;
  v6[1] = a1 + 1;
  v7 = v6;
  v3 = 263;
  v4[1] = 15;
  v4[3] = 1;
  sub_2297060(&v2);
  nullsub_1527(*a1 + 348, *((unsigned int *)a1 + 2));
  sub_2249A50(*a1, 0);
  operator delete(a1, 0x10u);
  return 0;
}
