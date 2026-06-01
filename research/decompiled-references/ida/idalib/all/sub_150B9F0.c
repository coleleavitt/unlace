__int64 __fastcall sub_150B9F0(const __m128i *a1, __int64 a2, __m128i a3)
{
  __int8 v5; // al
  unsigned int v6; // eax
  __int16 v7; // ax
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 *v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int v15; // ebp
  __m128i *v17; // [rsp+0h] [rbp-B8h] BYREF
  __int8 v18; // [rsp+8h] [rbp-B0h]
  const __m128i *v19; // [rsp+10h] [rbp-A8h]
  int v20; // [rsp+18h] [rbp-A0h]
  __int16 v21; // [rsp+1Ch] [rbp-9Ch]
  __int64 (__fastcall *v22)(__int64); // [rsp+20h] [rbp-98h]
  __int64 v23; // [rsp+28h] [rbp-90h]
  __int64 v24; // [rsp+30h] [rbp-88h]
  __m128i v25; // [rsp+40h] [rbp-78h] BYREF
  __int64 v26[13]; // [rsp+50h] [rbp-68h] BYREF

  v17 = (__m128i *)&a1[122];
  v5 = a1[122].m128i_i8[0];
  a1[122].m128i_i8[0] = 1;
  v18 = v5;
  v19 = a1;
  v21 = 62;
  v20 = 1507350;
  v22 = sub_146A990;
  v23 = 0;
  v24 = 0;
  v6 = sub_156A040(&v17, 1625, "mapper", 0);
  if ( (_BYTE)v6 )
  {
    v15 = v6;
    v25.m128i_i16[2] = 449;
    v25.m128i_i32[0] = 1507390;
    sub_15680D0(a1, &v25, 3, 2);
  }
  else
  {
    if ( (*(_BYTE *)(*(_QWORD *)(a1->m128i_i64[1] + 56) + 1LL) & 8) != 0 )
      sub_14D0170(a1, a2 + 24, 0, 0, 0, nullptr, a3, 0, nullptr, 0, 0, 0);
    v7 = a1[2].m128i_i16[0];
    if ( v7 == 5 || v7 == 82 )
    {
      v8 = a1[1].m128i_i64[1];
      v25.m128i_i32[2] = a1[1].m128i_i32[0];
      v25.m128i_i64[0] = v8;
      sub_B85890(v26, v8);
      v9 = v26[0];
      *(__m128i *)(a2 + 72) = _mm_load_si128(&v25);
      *(_QWORD *)(a2 + 88) = v9;
      v10 = (__int64 *)a1->m128i_i64[1];
      a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
      sub_14634E0(v10, a1[1].m128i_i32);
      v15 = sub_14808E0((__int64)&v17, a1[1].m128i_i64, v11, v12, v13, v14);
    }
    else
    {
      sub_1564820(&v25, a1, a1[1].m128i_u32[0], 1813);
      sub_AEA040((__int64)&v25);
      v25.m128i_i16[2] = 449;
      v15 = 1;
      v25.m128i_i32[0] = 1507390;
      sub_15680D0(a1, &v25, 3, 2);
    }
  }
  v17->m128i_i8[0] = v18;
  return v15;
}
