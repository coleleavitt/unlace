_BYTE *__fastcall sub_1050E00(__int64 a1, __int64 a2, __int64 *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdi
  __int64 (__fastcall *v12)(__int64, __int64, __int64, __int64); // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  char v16; // [rsp+0h] [rbp-A8h]
  int v17; // [rsp+8h] [rbp-A0h]
  int v18; // [rsp+10h] [rbp-98h]
  int v19; // [rsp+18h] [rbp-90h]
  char *v20; // [rsp+30h] [rbp-78h] BYREF
  __int16 v21; // [rsp+50h] [rbp-58h]
  const char *v22; // [rsp+60h] [rbp-48h] BYREF
  __int16 v23; // [rsp+80h] [rbp-28h]

  v20 = "1";
  v22 = "__ARMEL__";
  v21 = 259;
  v23 = 259;
  sub_10160F0(a3, (__int64)&v22, (__int64)&v20, 259, a5, a6, v16, v17, v18, v19, 1u);
  sub_104DA00(a1, a2, a3, v8, v9, v10);
  v11 = a1 + 216;
  v12 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a1 + 984LL);
  if ( v12 == sub_104B8C0 )
    sub_1074800(v11, a2, a3);
  else
    v12(a1, a2, a1 + 216, (__int64)a3);
  return sub_104CA70(a1, a3, v13, v14);
}

