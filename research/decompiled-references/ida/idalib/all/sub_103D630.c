_BYTE *__fastcall sub_103D630(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v5; // rdi
  __int64 (__fastcall *v6)(__int64, __int64, __int64, __int64); // rax
  __int64 v7; // r8
  __int64 v8; // r9
  const char *v10; // [rsp+0h] [rbp-A8h] BYREF
  __int16 v11; // [rsp+20h] [rbp-88h]
  char *v12; // [rsp+30h] [rbp-78h] BYREF
  __int16 v13; // [rsp+50h] [rbp-58h]
  __int64 v14; // [rsp+60h] [rbp-48h]
  __int64 v15; // [rsp+68h] [rbp-40h]
  __int64 v16; // [rsp+70h] [rbp-38h]
  __int64 v17; // [rsp+78h] [rbp-30h]
  __int64 v18; // [rsp+80h] [rbp-28h]

  sub_10C1360();
  v5 = a1 + 216;
  v6 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a1 + 992LL);
  if ( v6 == sub_1035BA0 )
    sub_1098540(v5, a2, a3);
  else
    v6(a1, a2, a1 + 216, (__int64)a3);
  LOWORD(v18) = 257;
  v12 = "1";
  v13 = 259;
  v10 = "_X86_";
  v11 = 259;
  return sub_1039E30(a3, (__int64)&v10, (__int64)&v12, 259, v7, v8, v14, v15, v16, v17, 1u);
}
