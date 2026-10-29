void __fastcall __noreturn sub_1FD0840(_QWORD **a1, __int64 *a2)
{
  __int64 v2; // rax
  _QWORD *v3; // rax
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // [rsp+8h] [rbp-130h] BYREF
  _BYTE v12[32]; // [rsp+10h] [rbp-128h] BYREF
  __m128i v13; // [rsp+30h] [rbp-108h] BYREF
  __int64 v14; // [rsp+40h] [rbp-F8h]
  __int64 v15; // [rsp+48h] [rbp-F0h]
  __int16 v16; // [rsp+50h] [rbp-E8h]
  __m128i v17[2]; // [rsp+60h] [rbp-D8h] BYREF
  __int16 v18; // [rsp+80h] [rbp-B8h]
  __m128i v19[3]; // [rsp+90h] [rbp-A8h] BYREF
  __m128i v20[2]; // [rsp+C0h] [rbp-78h] BYREF
  __int16 v21; // [rsp+E0h] [rbp-58h]
  __m128i v22[4]; // [rsp+F0h] [rbp-48h] BYREF

  v2 = *a2;
  *a2 = 0;
  v11 = v2;
  sub_2221210(v12, &v11);
  v20[0].m128i_i64[0] = (__int64)v12;
  v21 = 260;
  v17[0].m128i_i64[0] = (__int64)"' failed: ";
  v3 = *a1;
  v18 = 259;
  v4 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v3 + 16LL))(*v3);
  v16 = 1283;
  v15 = v5;
  v13.m128i_i64[0] = (__int64)"Module index '";
  v14 = v4;
  sub_A41580(v19, &v13, v17, (__int64)"Module index '", v6, v7);
  sub_A41580(v22, v19, v20, v8, v9, v10);
  sub_2221AD0(v22, 1);
}
