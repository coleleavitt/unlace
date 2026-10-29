__int64 __fastcall sub_13C3EC0(__int64 *a1, _QWORD *a2, unsigned __int8 a3)
{
  __int64 result; // rax
  _BYTE *v5; // r14
  __int64 v6; // rax
  __int64 v7; // rax
  char v8; // dl
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // [rsp+0h] [rbp-1E0h]
  __int64 v13; // [rsp+20h] [rbp-1C0h]
  __int64 v14; // [rsp+20h] [rbp-1C0h]
  _QWORD v15[4]; // [rsp+28h] [rbp-1B8h] BYREF
  __int16 v16; // [rsp+48h] [rbp-198h]
  _QWORD v17[4]; // [rsp+58h] [rbp-188h] BYREF
  __int16 v18; // [rsp+78h] [rbp-168h]
  _BYTE v19[32]; // [rsp+88h] [rbp-158h] BYREF
  __int16 v20; // [rsp+A8h] [rbp-138h]
  unsigned __int8 *v21[4]; // [rsp+B8h] [rbp-128h] BYREF
  __int16 v22; // [rsp+D8h] [rbp-108h]
  void *ptr; // [rsp+108h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+110h] [rbp-D0h]
  _BYTE v25[192]; // [rsp+120h] [rbp-C0h] BYREF

  if ( (*(_BYTE *)(*a1 + 280) & 2) == 0 )
    return 0;
  v5 = a2 + 4;
  v6 = *a2;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  ptr = v25;
  sub_A1FE50(&ptr, v5, &v5[v6]);
  if ( a3 )
  {
    v15[0] = "Modules";
    v22 = 257;
    v16 = 259;
    v20 = 257;
    v18 = 257;
    sub_228A3B0(&ptr, v15, v17, v19, v21);
  }
  v20 = 257;
  v18 = 257;
  v15[0] = "module.modulemap";
  v22 = 257;
  v16 = 259;
  sub_228A3B0(&ptr, v15, v17, v19, v21);
  sub_FD9C70((__int64)v21, a1[5], ptr, si128.m128i_u64[0], 0, 1, 1);
  v7 = sub_A05DE0(v21);
  if ( !v8 )
  {
    sub_A04D90((__int64 *)v21);
LABEL_11:
    v9 = *a2;
    si128.m128i_i64[0] = 0;
    sub_A1FE50(&ptr, v5, &v5[v9]);
    v15[0] = "module.map";
    v22 = 257;
    v20 = 257;
    v18 = 257;
    v16 = 259;
    sub_228A3B0(&ptr, v15, v17, v19, v21);
    v14 = sub_12ED8B0(a1[5], ptr, si128.m128i_u64[0], 0, 1u);
    if ( v14 )
    {
      sub_FC70B0((__int64)v21, a1[4], 0, 1353);
      sub_AEC220(v21, ptr, si128.m128i_i64[0]);
      sub_AE9DF0(v21, 0, 2u);
      sub_AE9DF0(v21, a3, 2u);
      sub_AEA040((__int64)v21);
      result = v14;
    }
    else if ( a3 )
    {
      v10 = *a2;
      si128.m128i_i64[0] = 0;
      sub_A1FE50(&ptr, v5, &v5[v10]);
      v22 = 257;
      v20 = 257;
      v18 = 259;
      v16 = 259;
      v17[0] = "module.private.modulemap";
      v15[0] = "Modules";
      sub_228A3B0(&ptr, v15, v17, v19, v21);
      result = sub_12ED8B0(a1[5], ptr, si128.m128i_u64[0], 0, 1u);
      if ( !result )
        result = 0;
    }
    else
    {
      result = 0;
    }
    goto LABEL_7;
  }
  v13 = v7;
  sub_A04D90((__int64 *)v21);
  result = v13;
  if ( !v13 )
    goto LABEL_11;
LABEL_7:
  if ( ptr != v25 )
  {
    v11 = result;
    free(ptr);
    return v11;
  }
  return result;
}
