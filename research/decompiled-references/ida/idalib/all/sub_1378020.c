_BYTE *__fastcall sub_1378020(__int64 a1, __int64 a2, unsigned int a3, __int64 *a4)
{
  _QWORD v5[4]; // [rsp+8h] [rbp-98h] BYREF
  __int16 v6; // [rsp+28h] [rbp-78h]
  _DWORD v7[8]; // [rsp+38h] [rbp-68h] BYREF
  __int16 v8; // [rsp+58h] [rbp-48h]
  __int64 v9; // [rsp+68h] [rbp-38h]
  __int64 v10; // [rsp+70h] [rbp-30h]
  __int64 v11; // [rsp+78h] [rbp-28h]
  __int64 v12; // [rsp+80h] [rbp-20h]
  __int64 v13; // [rsp+88h] [rbp-18h]

  v7[0] = a3 >> 3;
  v5[0] = a1;
  v5[1] = a2;
  LOWORD(v13) = 257;
  v8 = 265;
  v6 = 261;
  return sub_1039E30(a4, (__int64)v5, (__int64)v7, (__int64)a4, 265, 261, v9, v10, v11, v12, 1u);
}
