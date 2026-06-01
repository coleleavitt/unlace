void __fastcall sub_1B2FD60(unsigned int *a1)
{
  __int64 *v1; // r13
  __int64 *v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  _QWORD *v9; // rax
  __int64 v10; // [rsp+8h] [rbp-E0h] BYREF
  __m128i v11; // [rsp+10h] [rbp-D8h] BYREF
  __int64 v12; // [rsp+20h] [rbp-C8h] BYREF
  _QWORD v13[2]; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v14; // [rsp+40h] [rbp-A8h]
  unsigned __int8 *v15; // [rsp+50h] [rbp-98h] BYREF
  char v16; // [rsp+A8h] [rbp-40h]
  unsigned int v17; // [rsp+B0h] [rbp-38h]
  char v18; // [rsp+B4h] [rbp-34h]

  v1 = (__int64 *)(a1 + 12);
  v2 = (__int64 *)(*(_QWORD *)a1 + 8LL);
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 232LL) + 64LL) > 0x31u )
  {
    sub_168B9F0((__int64)v13, v2, a1[11], 0x11CEu, 0);
    sub_1AF81E0(&v11, a1[2]);
    if ( v16 )
    {
      sub_AEC220(&v15, v11.m128i_i64[0], v11.m128i_i64[1]);
    }
    else if ( v18 )
    {
      v5 = sub_168B9E0(v13);
      v8 = v14;
      if ( v14 )
        v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 32LL))(v14);
      v10 = v8;
      v9 = sub_1587BC0(v5, &v10, v3, v4, v6, v7);
      sub_AEC220((unsigned __int8 **)(*v9 + 32LL * v17 + 8), v11.m128i_i64[0], v11.m128i_i64[1]);
    }
    sub_15884C0((__int64)v13, v1);
    if ( (__int64 *)v11.m128i_i64[0] != &v12 )
      operator delete((void *)v11.m128i_i64[0]);
    sub_15F7200(v13);
  }
  else
  {
    sub_168B9F0((__int64)v13, v2, a1[11], 0x1187u, 0);
    sub_15884C0((__int64)v13, v1);
    sub_15F7200(v13);
  }
}
