char *__fastcall sub_57C200(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // ecx
  __int64 v14; // rdx
  int v15; // eax
  void *v16; // rdi
  char *v18; // [rsp+28h] [rbp-D0h] BYREF
  _QWORD v19[2]; // [rsp+30h] [rbp-C8h] BYREF
  __m128i v20; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v21; // [rsp+50h] [rbp-A8h]
  __int16 v22; // [rsp+58h] [rbp-A0h]
  __m128i v23; // [rsp+60h] [rbp-98h] BYREF
  __int64 v24; // [rsp+70h] [rbp-88h]
  __int16 v25; // [rsp+78h] [rbp-80h]
  __m128i v26; // [rsp+80h] [rbp-78h] BYREF
  __m128i v27; // [rsp+A0h] [rbp-58h] BYREF

  v22 = 0;
  v20 = 0;
  v23 = 0;
  v25 = 0;
  v21 = 0;
  v24 = 0;
  sub_57A940((__int64)&v26, (__int64 *)a1);
  sub_575640((__int64)&v20, a1, v5, v6, v7, v8, (const __m128i)0LL, (__int128)_mm_load_si128(&v26));
  sub_57A940((__int64)&v27, (__int64 *)a2);
  sub_575640((__int64)&v23, a2, v9, v10, v11, v12, (const __m128i)0LL, (__int128)_mm_load_si128(&v27));
  v13 = *(_DWORD *)(a2 + 24);
  v14 = *(_QWORD *)(a2 + 16);
  v19[0] = 0;
  v19[1] = 0;
  sub_562760(*(_QWORD *)(a1 + 16), *(_DWORD *)(a1 + 24), v14, v13, (__int64)v19);
  v15 = sub_571680((unsigned __int64 *)a1, (unsigned __int64 *)a2, &v20, &v23, *(_QWORD *)(a1 + 8), (__int64)v19, &v18);
  v16 = (void *)v19[0];
  *a3 = v15;
  if ( v16 )
    off_8C52A0(v16);
  if ( v20.m128i_i64[1] )
    off_8C52A0((void *)v20.m128i_i64[1]);
  if ( v23.m128i_i64[1] )
    off_8C52A0((void *)v23.m128i_i64[1]);
  return v18;
}
