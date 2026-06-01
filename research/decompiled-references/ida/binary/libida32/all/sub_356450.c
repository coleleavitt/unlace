bool __fastcall sub_356450(__int64 a1, __m128i *a2, const __m128i *a3)
{
  __int64 v4; // r15
  int v5; // eax
  bool (__fastcall *v6)(const __m128i *); // rax
  __m128i v7; // xmm0
  __int8 v8; // al
  unsigned __int32 v9; // eax
  int v10; // eax
  int v12; // [rsp+1Ch] [rbp-6Ch] BYREF
  __m128i v13; // [rsp+20h] [rbp-68h] BYREF
  __int64 v14; // [rsp+30h] [rbp-58h]
  _BYTE v15[8]; // [rsp+40h] [rbp-48h] BYREF
  unsigned __int64 v16; // [rsp+48h] [rbp-40h]

  v16 = __readfsqword(0x28u);
  v4 = a3->m128i_i64[1];
  v14 = a3[3].m128i_i64[0];
  v13 = _mm_loadu_si128(a3 + 2);
  while ( 1 )
  {
    v12 = 0;
    v5 = sub_894330(a1, v15, &v12);
    if ( v12 || v5 == 1 )
      break;
    v6 = *(bool (__fastcall **)(const __m128i *))(a3->m128i_i64[0] + 16);
    if ( (char *)v6 == (char *)sub_356050 )
    {
      if ( a3[2].m128i_i32[2] >= (unsigned __int32)a3[1].m128i_i32[3] && a3[2].m128i_i32[3] <= 0 )
        break;
    }
    else if ( v6(a3) )
    {
      break;
    }
  }
  *a2 = _mm_loadu_si128(a3 + 2);
  v7 = _mm_load_si128(&v13);
  a2[1].m128i_i8[0] = a3[3].m128i_i8[0];
  v8 = v14;
  a3[2] = v7;
  a3[3].m128i_i8[0] = v8;
  v9 = a3[2].m128i_u32[2];
  if ( v9 < a3[1].m128i_i32[2] || a3[1].m128i_i32[3] < v9 || a3[2].m128i_i32[3] < 0 )
  {
    if ( !under_debugger )
      interr(1435);
    BUG();
  }
  v10 = v12;
  a3->m128i_i64[1] = v4;
  *(_QWORD *)(a1 + 16) = v4;
  return v10 != 0;
}

