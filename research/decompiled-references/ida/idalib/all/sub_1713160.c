void __fastcall sub_1713160(unsigned __int64 a1, char a2, __m128i *a3, char ***a4)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  char *v10; // rax
  char **v11; // rdi
  char *v12; // rax
  unsigned __int64 v13; // [rsp+8h] [rbp-80h] BYREF
  void *v14[2]; // [rsp+10h] [rbp-78h] BYREF
  __int64 v15; // [rsp+20h] [rbp-68h] BYREF
  void **v16; // [rsp+30h] [rbp-58h] BYREF
  __int16 v17; // [rsp+50h] [rbp-38h]

  v13 = a1;
  sub_15A3210((__int64)a4, 7, (char *)&byte_22F0C30);
  sub_1713010((__int64)v14, a2, &v13);
  if ( v14[1] )
  {
    v11 = *a4;
    v16 = v14;
    v17 = 260;
    v12 = sub_15A4EB0(v11, (const void ***)&v16, v6, v7, v8, v9);
    sub_15A2FD0((__int64)a4, (__int64)v12);
  }
  v10 = sub_16FEFA0(v13, a3, *a4, v7, v8, v9);
  sub_15A2FD0((__int64)a4, (__int64)v10);
  sub_15A3210((__int64)a4, 8, (char *)&byte_22F0C30);
  if ( v14[0] != &v15 )
    operator delete(v14[0]);
}
