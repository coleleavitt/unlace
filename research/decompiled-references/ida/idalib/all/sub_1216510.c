void __fastcall sub_1216510(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  _BYTE *v5; // rsi
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r15
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v19; // [rsp+8h] [rbp-1C0h]
  void *v20[2]; // [rsp+20h] [rbp-1A8h] BYREF
  _BYTE v21[16]; // [rsp+30h] [rbp-198h] BYREF
  __m128i v22[2]; // [rsp+40h] [rbp-188h] BYREF
  __int16 v23; // [rsp+60h] [rbp-168h]
  __m128i v24[2]; // [rsp+70h] [rbp-158h] BYREF
  __int16 v25; // [rsp+90h] [rbp-138h]
  __m128i v26[3]; // [rsp+A0h] [rbp-128h] BYREF
  __m128i v27[2]; // [rsp+D0h] [rbp-F8h] BYREF
  __int16 v28; // [rsp+F0h] [rbp-D8h]
  __m128i v29[2]; // [rsp+100h] [rbp-C8h] BYREF
  __int16 v30; // [rsp+120h] [rbp-A8h]
  __m128i v31[2]; // [rsp+130h] [rbp-98h] BYREF
  __int16 v32; // [rsp+150h] [rbp-78h]
  __m128i v33[6]; // [rsp+160h] [rbp-68h] BYREF

  if ( *(_BYTE *)(a1 + 2384) )
  {
    v4 = *(_QWORD *)(a1 + 2496);
    v5 = *(_BYTE **)(a1 + 2488);
    v20[0] = v21;
    sub_1213C40(v20, v5, (__int64)&v5[v4]);
    v22[0].m128i_i64[0] = (__int64)v20;
    v31[0].m128i_i64[0] = (__int64)"/include";
    v32 = 259;
    v28 = 260;
    v27[0].m128i_i64[0] = a1 + 2392;
    v24[0].m128i_i64[0] = (__int64)"/../";
    v25 = 259;
    v23 = 260;
    sub_A41580(v26, v22, v24, v6, 259, 260);
    sub_A41580(v29, v26, v27, v7, v8, v9);
    sub_A41580(v33, v29, v31, v10, v11, v12);
    sub_112FA80(a2, a3, (__int64)v33);
    if ( *(_QWORD *)(a1 + 2128) )
    {
      (*(void (__fastcall **)(__m128i *, __int64, __int64))(a1 + 2136))(v27, a1 + 2112, a1 + 2520);
      v19 = v27[0].m128i_i64[1];
      if ( v27[0].m128i_i64[1] != v27[0].m128i_i64[0] )
      {
        v15 = v27[0].m128i_i64[0];
        do
        {
          v16 = *(_QWORD *)(a1 + 2456);
          v17 = *(_QWORD *)(a1 + 2464);
          v32 = 260;
          v29[0].m128i_i64[0] = v16;
          v29[0].m128i_i64[1] = v17;
          v31[0].m128i_i64[0] = v15;
          v15 += 32;
          v30 = 261;
          sub_A41580(v33, v29, v31, 261, v13, v14);
          sub_112FB90(a2, a3, (__int64)v33);
        }
        while ( v19 != v15 );
      }
      sub_9B4A30((void ***)v27);
    }
    if ( v20[0] != v21 )
      operator delete(v20[0]);
  }
}
