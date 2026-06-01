unsigned __int64 __fastcall sub_2108710(__int64 a1, __int64 a2, char a3, int a4, __int64 a5, int a6)
{
  _QWORD *v8; // rbp
  __int64 v9; // rax
  const char *v10; // rbp
  __int64 v11; // rax
  __m128i v12; // xmm0
  __m128i *v13; // r15
  char v14; // dl
  unsigned __int64 v15; // rbp
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rbx
  size_t *v21; // rsi
  size_t v22; // rdx
  const void *v23; // rsi
  unsigned __int64 v24; // rax
  __int64 v25; // [rsp+8h] [rbp-F0h]
  char v26; // [rsp+8h] [rbp-F0h]
  int v27; // [rsp+8h] [rbp-F0h]
  int v28; // [rsp+10h] [rbp-E8h]
  void *v31[2]; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v32; // [rsp+30h] [rbp-C8h] BYREF
  void *v33; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v34; // [rsp+48h] [rbp-B0h]
  __m128i v35; // [rsp+50h] [rbp-A8h] BYREF
  __m128i v36; // [rsp+60h] [rbp-98h] BYREF
  int v37; // [rsp+70h] [rbp-88h]
  __m128i v38; // [rsp+80h] [rbp-78h] BYREF
  __m128i v39; // [rsp+90h] [rbp-68h] BYREF
  __m128i v40; // [rsp+A0h] [rbp-58h]
  int v41; // [rsp+B0h] [rbp-48h]
  __int64 v42; // [rsp+B8h] [rbp-40h]

  if ( a5 )
  {
    if ( (*(_BYTE *)(a5 + 8) & 1) != 0 )
    {
      v8 = *(_QWORD **)(a5 - 8);
      v9 = *v8;
      v10 = (const char *)(v8 + 3);
    }
    else
    {
      v9 = 0;
      v10 = nullptr;
    }
  }
  else
  {
    v9 = 0;
    v10 = &byte_22F0C30;
  }
  v25 = v9;
  sub_2253560(v31, a2);
  v33 = &v35;
  sub_2100260(&v33, (_BYTE *)v31[0], (__int64)v31[0] + (unsigned __int64)v31[1]);
  v36.m128i_i64[0] = (__int64)v10;
  v37 = a6;
  v36.m128i_i64[1] = v25;
  v38.m128i_i64[0] = (__int64)&v39;
  if ( v33 == &v35 )
  {
    v39 = _mm_load_si128(&v35);
  }
  else
  {
    v38.m128i_i64[0] = (__int64)v33;
    v39.m128i_i64[0] = v35.m128i_i64[0];
  }
  v11 = v34;
  v12 = _mm_load_si128(&v36);
  v35.m128i_i8[0] = 0;
  v34 = 0;
  v38.m128i_i64[1] = v11;
  v33 = &v35;
  v40 = v12;
  v41 = a6;
  v42 = 0;
  v13 = sub_2106F00(a1 + 2096, &v38);
  v26 = v14;
  if ( (__m128i *)v38.m128i_i64[0] != &v39 )
    operator delete((void *)v38.m128i_i64[0]);
  if ( v33 != &v35 )
    operator delete(v33);
  if ( v31[0] != &v32 )
    operator delete(v31[0]);
  if ( !v26 )
    return v13[5].m128i_u64[1];
  v17 = v13[2].m128i_i64[1];
  v18 = v13[2].m128i_i64[0];
  v40.m128i_i16[0] = 261;
  v28 = v17;
  v38.m128i_i64[1] = v17;
  v27 = v18;
  v38.m128i_i64[0] = v18;
  v19 = sub_21083D0((_DWORD *)a1, (__int64)&v38, 1, 0);
  v20 = v19;
  if ( (*(_BYTE *)(v19 + 8) & 1) != 0 )
  {
    v21 = *(size_t **)(v19 - 8);
    v22 = *v21;
    v23 = v21 + 3;
  }
  else
  {
    v22 = 0;
    v23 = nullptr;
  }
  *(_QWORD *)(sub_2107740(a1, v23, v22) + 8) = v19;
  *(_DWORD *)(v20 + 32) = 3;
  *(_BYTE *)(v20 + 36) = 1;
  v15 = sub_2105F40((__int64 *)(a1 + 960), 208, 3u);
  sub_2113B00(v15, 4, v27, v28, (unsigned __int8)(a3 - 2) <= 1u, 0, v20);
  *(_DWORD *)(v15 + 172) = a6;
  *(_QWORD *)(v15 + 176) = a5;
  *(_BYTE *)(v15 + 196) = 0;
  *(_QWORD *)v15 = off_2C730F0;
  *(_QWORD *)(v15 + 184) = 0;
  *(_DWORD *)(v15 + 192) = 0;
  *(_BYTE *)(v15 + 197) = (unsigned __int8)(a3 - 4) <= 0x10u;
  *(_BYTE *)(v15 + 198) = a3 == 0;
  *(_DWORD *)(v15 + 200) = a4;
  v13[5].m128i_i64[1] = v15;
  v24 = sub_2105F80(a1);
  *(_QWORD *)(v24 + 8) = v15;
  **(_QWORD **)(v15 + 8) = v24;
  *(_QWORD *)(*(_QWORD *)(v15 + 8) + 8LL) = v24;
  *(_QWORD *)v20 = v24;
  return v15;
}
