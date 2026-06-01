void __fastcall sub_2099CC0(__int64 a1, __int64 *a2, double a3)
{
  __int64 v3; // rax
  size_t v4; // rax
  _QWORD v5[2]; // [rsp+0h] [rbp-D8h] BYREF
  _QWORD v6[10]; // [rsp+10h] [rbp-C8h] BYREF
  _QWORD v7[4]; // [rsp+60h] [rbp-78h] BYREF
  __int64 v8; // [rsp+80h] [rbp-58h] BYREF
  _QWORD v9[2]; // [rsp+90h] [rbp-48h] BYREF
  char v10; // [rsp+A0h] [rbp-38h] BYREF

  v10 = 0;
  v9[1] = 0;
  v5[0] = v6;
  v5[1] = 0x800000000LL;
  v6[8] = v7;
  v6[9] = 0x200000000LL;
  v7[3] = 0x200000000LL;
  v9[0] = &v10;
  v3 = *a2;
  v7[2] = &v8;
  (*(void (__fastcall **)(__int64 *, _QWORD *))(v3 + 80))(a2, v5);
  v4 = j__strlen("Used");
  sub_2099AF0(a1, "Used", v4, (__int64)a2, (__int64)v9, a3);
  sub_20954A0((__int64)v5);
}
