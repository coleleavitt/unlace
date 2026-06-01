__int64 __fastcall sub_17BD4A0(__int64 a1, __int64 a2, __int64 a3, char a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v7; // rax
  unsigned int v8; // r15d
  __int64 v10; // rdx
  unsigned int v11; // r12d
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 *v14; // r14
  unsigned int v15; // eax
  __m128i v16; // xmm0
  unsigned int v17; // eax
  __m128i v18; // xmm1
  unsigned __int64 v19; // [rsp+10h] [rbp-188h] BYREF
  unsigned __int64 v20; // [rsp+18h] [rbp-180h]
  __m128i v21; // [rsp+30h] [rbp-168h] BYREF
  int v22; // [rsp+40h] [rbp-158h]
  _BYTE *v23; // [rsp+50h] [rbp-148h] BYREF
  unsigned __int64 v24; // [rsp+58h] [rbp-140h]
  __m128i v25; // [rsp+70h] [rbp-128h] BYREF
  int v26; // [rsp+80h] [rbp-118h]
  unsigned int v27; // [rsp+90h] [rbp-108h] BYREF
  __m128i v28; // [rsp+98h] [rbp-100h]
  int v29; // [rsp+A8h] [rbp-F0h]
  unsigned int v30; // [rsp+B0h] [rbp-E8h] BYREF
  unsigned __int64 v31; // [rsp+B8h] [rbp-E0h] BYREF
  unsigned __int64 v32; // [rsp+C0h] [rbp-D8h]
  unsigned int v33; // [rsp+D0h] [rbp-C8h] BYREF
  __m128i v34; // [rsp+D8h] [rbp-C0h]
  int v35; // [rsp+E8h] [rbp-B0h]

  v7 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 248) + 17448LL) + 248LL);
  if ( (unsigned int)v7 > 0x26 || (v10 = 0x6018000038LL, !_bittest64(&v10, v7)) )
  {
    sub_168B9F0((__int64)&v33, (__int64 *)(a1 + 8), *(_DWORD *)(a3 + 24), 0x108Bu, 0);
    sub_15F7200(&v33);
    if ( a2 )
    {
      sub_168B9F0((__int64)&v33, (__int64 *)(a1 + 8), *(_DWORD *)(a2 + 24), 0x70u, 0);
      sub_15F7200(&v33);
    }
    return 1;
  }
  v11 = a5;
  if ( a2 && a4 )
  {
    if ( !(unsigned __int8)sub_17BD210(a1, a2, a3, (unsigned int)a5, a5, a6)
      && !(unsigned __int8)sub_17BD210(a1, a3, 0, v11, v12, v13) )
    {
      v14 = (__int64 *)(a1 + 8);
      v8 = sub_B8C400(a2, 0);
      if ( (_BYTE)v8 )
      {
        sub_168B9F0((__int64)&v33, (__int64 *)(a1 + 8), *(_DWORD *)(a3 + 24), 0x1084u, 0);
        sub_15F7200(&v33);
        sub_168B9F0((__int64)&v33, v14, *(_DWORD *)(a2 + 24), 0x70u, 0);
        sub_15F7200(&v33);
        return v8;
      }
      goto LABEL_12;
    }
    return 1;
  }
  v14 = (__int64 *)(a1 + 8);
  if ( (unsigned __int8)sub_17BD210(a1, a3, 0, (unsigned int)a5, a5, a6) )
    return 1;
LABEL_12:
  sub_168B9B0((__int64)&v25, (__int64)v14, 4229);
  v15 = *(_DWORD *)(a3 + 24);
  v16 = _mm_load_si128(&v25);
  v25.m128i_i64[0] = 0;
  v33 = v15;
  v34 = v16;
  v35 = v26;
  sub_168B9B0((__int64)&v23, (__int64)v14, 4231);
  sub_AE9DF0(&v23, v11, 3u);
  v30 = *(_DWORD *)(a3 + 24);
  sub_1582CA0((__int64)&v31, &v23);
  sub_168B9B0((__int64)&v21, (__int64)v14, 6096);
  v17 = *(_DWORD *)(a3 + 24);
  v18 = _mm_load_si128(&v21);
  v21.m128i_i64[0] = 0;
  v27 = v17;
  v28 = v18;
  v29 = v22;
  sub_168B9B0((__int64)&v19, (__int64)v14, 4233);
  v8 = sub_17B4990(a1, a2, a3, (__int64)&v19, &v27, &v30, &v33, 0, v11 - 2 > 1, 0);
  if ( v19 && v20 )
    sub_1580C40(v20, v19);
  if ( v28.m128i_i64[0] && v28.m128i_i64[1] )
    sub_1580C40(v28.m128i_u64[1], v28.m128i_u64[0]);
  if ( v21.m128i_i64[0] && v21.m128i_i64[1] )
    sub_1580C40(v21.m128i_u64[1], v21.m128i_u64[0]);
  if ( v31 && v32 )
    sub_1580C40(v32, v31);
  if ( v23 && v24 )
    sub_1580C40(v24, (unsigned __int64)v23);
  if ( v34.m128i_i64[0] && v34.m128i_i64[1] )
    sub_1580C40(v34.m128i_u64[1], v34.m128i_u64[0]);
  if ( v25.m128i_i64[0] && v25.m128i_i64[1] )
    sub_1580C40(v25.m128i_u64[1], v25.m128i_u64[0]);
  return v8;
}
