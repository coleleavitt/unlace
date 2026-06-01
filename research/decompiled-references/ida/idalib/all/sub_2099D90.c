void __fastcall sub_2099D90(__int64 a1, __int64 *a2, double a3)
{
  __int64 v3; // rax
  size_t v4; // rax
  _QWORD v5[2]; // [rsp+0h] [rbp-D8h] BYREF
  _QWORD v6[10]; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v7; // [rsp+60h] [rbp-78h] BYREF
  _QWORD v8[2]; // [rsp+70h] [rbp-68h] BYREF
  _QWORD v9[4]; // [rsp+80h] [rbp-58h] BYREF
  char v10; // [rsp+A0h] [rbp-38h] BYREF

  v10 = 0;
  v9[3] = 0;
  v5[0] = v6;
  v5[1] = 0x800000000LL;
  v6[8] = &v7;
  v6[9] = 0x200000000LL;
  v8[1] = 0x200000000LL;
  v9[2] = &v10;
  v3 = *a2;
  v8[0] = v9;
  (*(void (__fastcall **)(__int64 *, _QWORD *))(v3 + 80))(a2, v5);
  v4 = j__strlen("Preserved");
  sub_2099AF0(a1, "Preserved", v4, (__int64)a2, (__int64)v8, a3);
  sub_20954A0((__int64)v5);
}
