__int64 __fastcall sub_2262BE0(__int64 a1, char a2)
{
  unsigned __int64 v4; // rbx
  __m128i *v5; // rax
  __m128i *v6; // rdi
  size_t v7; // rsi
  __m128i *v8; // rbx
  _BYTE *v9; // rax
  __int64 v10; // rdx
  size_t v11; // rax
  __m128i v12; // xmm0
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  _QWORD *v18; // [rsp+0h] [rbp-B8h] BYREF
  __int16 v19; // [rsp+20h] [rbp-98h]
  __m128i *v20; // [rsp+30h] [rbp-88h] BYREF
  size_t v21; // [rsp+38h] [rbp-80h]
  __m128i v22; // [rsp+40h] [rbp-78h] BYREF
  __m128i v23; // [rsp+50h] [rbp-68h] BYREF
  __int64 v24; // [rsp+60h] [rbp-58h]
  __int64 v25; // [rsp+68h] [rbp-50h]
  __int64 v26; // [rsp+70h] [rbp-48h]
  __int64 v27; // [rsp+78h] [rbp-40h]
  char v28; // [rsp+80h] [rbp-38h]

  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = &off_2C76038;
  v20 = (__m128i *)&byte_22F0C30;
  v21 = j__strlen(&byte_22F0C30);
  v4 = sub_22621E0(0, (__int64)&v20);
  v19 = 257;
  sub_2253560(&v20, &v18);
  v23.m128i_i64[1] = v4;
  v23.m128i_i64[0] = -1;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0x1FF00000003LL;
  v28 = 0;
  v5 = (__m128i *)operator new(0xB8u);
  v6 = v20;
  v7 = v21;
  v8 = v5;
  v5->m128i_i32[2] = 1;
  v5->m128i_i64[0] = (__int64)&unk_2C76008;
  v9 = (_BYTE *)sub_228AA60(v6, v7, 0);
  v8[1].m128i_i64[0] = (__int64)v8[2].m128i_i64;
  sub_2259A00((__m128i *)v8[1].m128i_i64, v9, (__int64)&v9[v10]);
  v8->m128i_i64[0] = (__int64)&off_2BEB998;
  v8[3].m128i_i64[0] = (__int64)v8[4].m128i_i64;
  if ( v20 == &v22 )
  {
    v8[4] = _mm_load_si128(&v22);
  }
  else
  {
    v8[3].m128i_i64[0] = (__int64)v20;
    v8[4].m128i_i64[0] = v22.m128i_i64[0];
  }
  v11 = v21;
  *(_QWORD *)(a1 + 16) = v8;
  v12 = _mm_load_si128(&v23);
  *(_BYTE *)(a1 + 56) = a2;
  v8[3].m128i_i64[1] = v11;
  v13 = v24;
  v8[5] = v12;
  v8[6].m128i_i64[0] = v13;
  v14 = v25;
  v8[9].m128i_i32[0] = 0;
  v8[6].m128i_i64[1] = v14;
  v15 = v26;
  v8[9].m128i_i64[1] = 0;
  v8[7].m128i_i64[0] = v15;
  v16 = v27;
  v8[11].m128i_i64[0] = 0;
  v8[7].m128i_i64[1] = v16;
  LOBYTE(v16) = v28;
  *(_QWORD *)(a1 + 32) = 0;
  v8[8].m128i_i8[0] = v16;
  v8[10].m128i_i64[0] = (__int64)v8[9].m128i_i64;
  v8[10].m128i_i64[1] = (__int64)v8[9].m128i_i64;
  *(_QWORD *)(a1 + 24) = a1 + 40;
  *(_BYTE *)(a1 + 40) = 0;
  return a1 + 40;
}
