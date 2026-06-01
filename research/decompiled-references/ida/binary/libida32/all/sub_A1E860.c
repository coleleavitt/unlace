void __fastcall sub_A1E860(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  char v7; // al
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  _BYTE *v15; // rax
  __int64 v16; // rdx
  __m128i v17[2]; // [rsp+0h] [rbp-108h] BYREF
  __int16 v18; // [rsp+20h] [rbp-E8h]
  __m128i v19; // [rsp+30h] [rbp-D8h] BYREF
  __int16 v20; // [rsp+50h] [rbp-B8h]
  __m128i v21[3]; // [rsp+60h] [rbp-A8h] BYREF
  __m128i v22[2]; // [rsp+90h] [rbp-78h] BYREF
  __int16 v23; // [rsp+B0h] [rbp-58h]
  __m128i v24; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v25; // [rsp+D0h] [rbp-38h] BYREF

  v7 = (2 * (*(_DWORD *)a2 == 2)) | (*(_DWORD *)a2 == 1) | *(_BYTE *)(a3 + 32) & 0xFC;
  *(_BYTE *)(a3 + 32) = v7;
  if ( (v7 & 3) != 0 )
  {
    v15 = *(_BYTE **)(a2 + 8);
    v16 = *(_QWORD *)(a2 + 16);
    v24.m128i_i64[0] = (__int64)&v25;
    sub_A1D0B0(&v24, v15, (__int64)&v15[v16]);
    sub_9E6D90(a3, &v24);
    if ( (__int64 *)v24.m128i_i64[0] != &v25 )
      operator delete((void *)v24.m128i_i64[0]);
  }
  else if ( *(_QWORD *)(a2 + 16) )
  {
    v22[0].m128i_i64[0] = (__int64)"' will not be used";
    v23 = 259;
    v20 = 261;
    v19.m128i_i64[0] = a4;
    v19.m128i_i64[1] = a5;
    v17[0].m128i_i64[0] = (__int64)"availability message for available API '";
    v18 = 259;
    sub_A1D840(v21, v17, &v19, 259, a5, a6);
    sub_A1D840(&v24, v21, v22, v8, v9, v10);
    sub_A1D5F0(a1, (__int64)v21, v11, v12, v13, v14, v24.m128i_i8[0]);
  }
}

