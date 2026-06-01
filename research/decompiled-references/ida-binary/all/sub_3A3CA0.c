bool __fastcall sub_3A3CA0(const __m128i *a1, __int64 a2)
{
  bool v2; // zf
  const char *v5; // rsi
  bool v6; // bl
  __int64 *v7; // [rsp+0h] [rbp-A8h] BYREF
  int v8; // [rsp+8h] [rbp-A0h]
  __int64 v9; // [rsp+10h] [rbp-98h]
  __int128 v10; // [rsp+20h] [rbp-88h] BYREF
  __int64 v11; // [rsp+30h] [rbp-78h]
  __int64 v12; // [rsp+38h] [rbp-70h]
  __int64 v13; // [rsp+40h] [rbp-68h]
  __int64 **v14; // [rsp+48h] [rbp-60h]
  __int128 v15; // [rsp+50h] [rbp-58h] BYREF
  __int64 v16; // [rsp+60h] [rbp-48h]
  __int64 v17; // [rsp+68h] [rbp-40h]
  __int64 v18; // [rsp+70h] [rbp-38h]
  const char *v19; // [rsp+78h] [rbp-30h]
  unsigned __int64 v20; // [rsp+88h] [rbp-20h]

  v2 = a1[64].m128i_i32[2] == 1;
  v20 = __readfsqword(0x28u);
  if ( !v2 )
    return sub_27D370((__int64)a1, a2);
  v7 = &idaplace_t___vtable;
  v10 = 0;
  v8 = 0;
  v9 = sub_2373A0(-1);
  v11 = 0;
  v12 = -1;
  v13 = 0;
  v14 = &v7;
  v5 = (const char *)&v15;
  v14 = (__int64 **)idaplace_t__clone(&v7);
  v16 = 0;
  v17 = -1;
  v18 = 0;
  v19 = nullptr;
  v15 = 0;
  if ( (unsigned int)sub_1EB7C0(a1, (__int64)&v15, (__int64)&v10, 1, (__m128i)0LL) == 1 )
  {
    v5 = v19;
    v6 = (*(unsigned int (__fastcall **)(const __m128i *, const char *, __int64))(a1->m128i_i64[0] + 464))(a1, v19, a2) != -1;
  }
  else
  {
    v6 = 0;
  }
  if ( v19 )
    qfree(v19, v5);
  if ( v14 )
    qfree(v14, v5);
  return v6;
}
