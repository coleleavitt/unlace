unsigned __int64 __fastcall sub_2A8A20(__int64 *a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v5; // rsi
  __int64 v6; // rdx
  int v7; // ecx
  int v8; // r8d
  int v9; // r9d
  int v10; // ecx
  int v11; // r8d
  int v12; // r9d
  unsigned int v14[2]; // [rsp+0h] [rbp-78h] BYREF
  __int64 v15; // [rsp+8h] [rbp-70h]
  _QWORD v16[2]; // [rsp+10h] [rbp-68h] BYREF
  _DWORD v17[4]; // [rsp+20h] [rbp-58h] BYREF
  _DWORD v18[4]; // [rsp+30h] [rbp-48h] BYREF
  int v19; // [rsp+40h] [rbp-38h]
  unsigned __int64 v20; // [rsp+48h] [rbp-30h]

  v20 = __readfsqword(0x28u);
  v14[1] = a4;
  v14[0] = 1;
  v15 = 0;
  copy_tinfo_t();
  v5 = *a1;
  v16[1] = a2;
  v16[0] = 6;
  sub_2A0060((__int64)v16, v5, v6, v7, v8, v9);
  v17[0] = 0;
  sub_29F770((__int64)v17, (unsigned int *)v16);
  v18[0] = 0;
  sub_29F770((__int64)v18, v14);
  v19 = 2;
  sub_2A8310((__int64)a1, (__int64)v17, 0, v10, v11, v12);
  v19 = -1;
  sub_29EC30((__int64)v18);
  sub_29EC30((__int64)v17);
  sub_29EC30((__int64)v16);
  sub_29EC30((__int64)v14);
  return v20 - __readfsqword(0x28u);
}
