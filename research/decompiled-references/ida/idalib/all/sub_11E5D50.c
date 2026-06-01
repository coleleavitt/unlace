__int64 __fastcall sub_11E5D50(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __m128i v12; // [rsp+0h] [rbp-108h] BYREF
  __int16 v13; // [rsp+20h] [rbp-E8h]
  __m128i v14[2]; // [rsp+30h] [rbp-D8h] BYREF
  __int16 v15; // [rsp+50h] [rbp-B8h]
  __m128i v16[3]; // [rsp+60h] [rbp-A8h] BYREF
  __m128i v17[2]; // [rsp+90h] [rbp-78h] BYREF
  __int16 v18; // [rsp+B0h] [rbp-58h]
  __m128i v19[4]; // [rsp+C0h] [rbp-48h] BYREF

  if ( *(_DWORD *)a2 > 2u )
  {
    v18 = 260;
    v17[0].m128i_i64[0] = a2 + 64;
    v14[0].m128i_i64[0] = (__int64)"=";
    v7 = *(_QWORD *)(a2 + 96);
    v15 = 259;
    v12.m128i_i64[0] = v7;
    v8 = *(_QWORD *)(a2 + 104);
    v13 = 261;
    v12.m128i_i64[1] = v8;
    sub_A41580(v16, &v12, v14, 261, a5, a6);
    sub_A41580(v19, v16, v17, v9, v10, v11);
    sub_2253560(a1, v19);
  }
  else
  {
    sub_21B5FF0(a1, *(_QWORD *)(a2 + 56), a3);
  }
  return a1;
}
