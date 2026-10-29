__int64 __fastcall sub_21346B0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v5; // rbx
  unsigned int v6; // ebp
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r12
  __int64 v12; // r13
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // [rsp+8h] [rbp-140h]
  __int64 v17; // [rsp+18h] [rbp-130h] BYREF
  __m128i v18; // [rsp+20h] [rbp-128h] BYREF
  __int16 v19; // [rsp+40h] [rbp-108h]
  __m128i v20[2]; // [rsp+50h] [rbp-F8h] BYREF
  __int16 v21; // [rsp+70h] [rbp-D8h]
  __m128i v22[3]; // [rsp+80h] [rbp-C8h] BYREF
  __m128i v23[2]; // [rsp+B0h] [rbp-98h] BYREF
  __int16 v24; // [rsp+D0h] [rbp-78h]
  __m128i v25[6]; // [rsp+E0h] [rbp-68h] BYREF

  v5 = a4;
  v16 = *(_QWORD *)(a1 + 184);
  if ( !*(_BYTE *)(a1 + 861) && (unsigned __int8)sub_2129170(a1) )
    return 1;
  if ( (unsigned __int8)sub_21335C0(a1, &v17) )
    return 1;
  v6 = sub_21544B0(a1);
  if ( (_BYTE)v6 )
  {
    return 1;
  }
  else
  {
    v11 = v17;
    if ( v17 < 0 )
    {
      v18.m128i_i64[0] = a2;
      v19 = 261;
      v23[0].m128i_i64[0] = (__int64)"' directive with negative repeat count has no effect";
      v24 = 259;
      v21 = 259;
      v20[0].m128i_i64[0] = (__int64)"'";
      v18.m128i_i64[1] = a3;
      sub_A41580(v22, v20, &v18, 259, v9, v10);
      sub_A41580(v25, v22, v23, v13, v14, v15);
      sub_212CE20(a1, v16, (__int64)v25, nullptr, 0);
    }
    else
    {
      v12 = 0;
      if ( v17 )
      {
        do
        {
          ++v12;
          sub_211C720(*(_QWORD ***)(a1 + 24), v5, 0, v8, v9, v10);
        }
        while ( v11 != v12 );
      }
    }
  }
  return v6;
}
