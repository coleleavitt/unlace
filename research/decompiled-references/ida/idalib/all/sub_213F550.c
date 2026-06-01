__int64 __fastcall sub_213F550(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // r13
  unsigned int v7; // ebp
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v14; // r14
  __int64 v15; // r12
  __int64 v16; // rsi
  __int64 v17; // r8
  void (__fastcall *v18)(__int64, __int64); // r15
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int32 v23; // [rsp+0h] [rbp-148h]
  __int64 v24; // [rsp+8h] [rbp-140h]
  __int64 v25; // [rsp+18h] [rbp-130h] BYREF
  __m128i v26; // [rsp+20h] [rbp-128h] BYREF
  __int16 v27; // [rsp+40h] [rbp-108h]
  __m128i v28[2]; // [rsp+50h] [rbp-F8h] BYREF
  __int16 v29; // [rsp+70h] [rbp-D8h]
  __m128i v30[3]; // [rsp+80h] [rbp-C8h] BYREF
  __m128i v31[2]; // [rsp+B0h] [rbp-98h] BYREF
  __int16 v32; // [rsp+D0h] [rbp-78h]
  __m128i v33[2]; // [rsp+E0h] [rbp-68h] BYREF
  __int16 v34; // [rsp+100h] [rbp-48h]

  v6 = *(_QWORD *)(a1 + 184);
  if ( !*(_BYTE *)(a1 + 861) && (unsigned __int8)sub_2129170(a1) )
    return 1;
  v7 = sub_21335C0(a1, &v25);
  if ( (_BYTE)v7 )
    return 1;
  if ( v25 < 0 )
  {
    v26.m128i_i64[1] = a3;
    v31[0].m128i_i64[0] = (__int64)"' directive with negative repeat count has no effect";
    v32 = 259;
    v29 = 259;
    v27 = 261;
    v28[0].m128i_i64[0] = (__int64)"'";
    v26.m128i_i64[0] = a2;
    sub_A41580(v30, v28, &v26, 261, v8, v9);
    sub_A41580(v33, v30, v31, v20, v21, v22);
    sub_212CE20(a1, v6, (__int64)v33, nullptr, 0);
    return v7;
  }
  v33[0].m128i_i64[0] = (__int64)"expected comma";
  v34 = 259;
  if ( (unsigned __int8)sub_2154510(a1, 26, v33) )
  {
    return 1;
  }
  else
  {
    v33[0].m128i_i32[2] = 1;
    v33[0].m128i_i64[0] = 0;
    if ( (unsigned __int8)sub_213ECC0(a1, a4, (__int64)v33, v10, v11, v12) || (v7 = sub_21544B0(a1), (_BYTE)v7) )
    {
      v7 = 1;
    }
    else
    {
      v14 = v25;
      v15 = 0;
      if ( v25 )
      {
        do
        {
          v17 = *(_QWORD *)(a1 + 24);
          v23 = v33[0].m128i_i32[2];
          v18 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v17 + 536LL);
          if ( v33[0].m128i_i32[2] <= 0x40u )
          {
            v16 = v33[0].m128i_i64[0];
          }
          else
          {
            v24 = *(_QWORD *)(a1 + 24);
            v19 = sub_2206780(v33);
            v16 = -1;
            v17 = v24;
            if ( (unsigned int)(v23 - v19) <= 0x40 )
              v16 = *(_QWORD *)v33[0].m128i_i64[0];
          }
          ++v15;
          v18(v17, v16);
        }
        while ( v14 != v15 );
      }
    }
    if ( v33[0].m128i_i32[2] > 0x40u && v33[0].m128i_i64[0] )
      operator delete[]((void *)v33[0].m128i_i64[0]);
  }
  return v7;
}
