_BYTE *__fastcall sub_10191B0(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rcx
  __int64 v7; // r9
  _QWORD v9[4]; // [rsp+0h] [rbp-B8h] BYREF
  __int16 v10; // [rsp+20h] [rbp-98h]
  _QWORD v11[4]; // [rsp+30h] [rbp-88h] BYREF
  __int16 v12; // [rsp+50h] [rbp-68h]
  __int64 v13; // [rsp+60h] [rbp-58h]
  __int64 v14; // [rsp+68h] [rbp-50h]
  __int64 v15; // [rsp+70h] [rbp-48h]
  __int64 v16; // [rsp+78h] [rbp-40h]
  __int64 v17; // [rsp+80h] [rbp-38h]

  sub_109D620();
  v11[0] = "1";
  LOWORD(v17) = 257;
  v12 = 259;
  v9[0] = "__iamcu";
  v10 = 259;
  sub_10160F0(a3, (__int64)v9, (__int64)v11, 259, v4, v5, v13, v14, v15, v16, 1u);
  v11[0] = "1";
  LOWORD(v17) = 257;
  v12 = 259;
  v9[0] = "__iamcu__";
  v10 = 259;
  return sub_10160F0(a3, (__int64)v9, (__int64)v11, v6, 259, v7, v13, v14, v15, v16, 1u);
}

