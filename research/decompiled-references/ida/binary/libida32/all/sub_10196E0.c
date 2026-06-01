_BYTE *__fastcall sub_10196E0(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v5; // rdi
  __int64 (__fastcall *v6)(__int64, __int64, __int64, __int64); // rax
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  __int64 v10; // r9
  _QWORD v12[4]; // [rsp+0h] [rbp-B8h] BYREF
  __int16 v13; // [rsp+20h] [rbp-98h]
  _QWORD v14[4]; // [rsp+30h] [rbp-88h] BYREF
  __int16 v15; // [rsp+50h] [rbp-68h]
  __int64 v16; // [rsp+60h] [rbp-58h]
  __int64 v17; // [rsp+68h] [rbp-50h]
  __int64 v18; // [rsp+70h] [rbp-48h]
  __int64 v19; // [rsp+78h] [rbp-40h]
  __int64 v20; // [rsp+80h] [rbp-38h]

  sub_109D620();
  v5 = a1 + 216;
  v6 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a1 + 992LL);
  if ( v6 == sub_1011E50 )
    sub_1074800(v5, a2, a3);
  else
    v6(a1, a2, a1 + 216, (__int64)a3);
  LOWORD(v20) = 257;
  v14[0] = "100";
  v15 = 259;
  v12[0] = "_M_X64";
  v13 = 259;
  sub_10160F0(a3, (__int64)v12, (__int64)v14, 259, v7, v8, v16, v17, v18, v19, 1u);
  v14[0] = "100";
  LOWORD(v20) = 257;
  v15 = 259;
  v12[0] = "_M_AMD64";
  v13 = 259;
  return sub_10160F0(a3, (__int64)v12, (__int64)v14, v9, 259, v10, v16, v17, v18, v19, 1u);
}

