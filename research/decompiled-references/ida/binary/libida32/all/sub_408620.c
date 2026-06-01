_BOOL8 __fastcall sub_408620(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rdi
  __int64 v5; // rdi
  char v6; // al
  __int16 v7; // bp
  __int32 v8; // r12d
  char v9; // r15
  __int32 v10; // r13d
  __int64 v11; // rdi
  char v12; // dl
  _BOOL8 result; // rax
  __int64 v14; // [rsp+4h] [rbp-84h]
  int v15; // [rsp+Ch] [rbp-7Ch]
  __int16 v16; // [rsp+10h] [rbp-78h] BYREF
  __m128i si128; // [rsp+14h] [rbp-74h]
  int v18; // [rsp+24h] [rbp-64h]
  __int16 v19; // [rsp+30h] [rbp-58h] BYREF
  __m128i v20; // [rsp+34h] [rbp-54h]
  int v21; // [rsp+44h] [rbp-44h]
  unsigned __int64 v22; // [rsp+48h] [rbp-40h]

  v4 = *(int *)(a1 + 8);
  v22 = __readfsqword(0x28u);
  v5 = *(_QWORD *)(switch_dbctx(v4) + 1480);
  v18 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23836A0);
  v16 = 0;
  v6 = sub_408580(v5, (__m128i *)&v16, a3);
  v7 = v16;
  v8 = si128.m128i_i32[0];
  v9 = v6;
  v10 = si128.m128i_i32[1];
  v14 = si128.m128i_i64[1];
  v15 = v18;
  v11 = *(_QWORD *)(switch_dbctx(*(int *)(a2 + 8)) + 1480);
  v19 = 0;
  v21 = 0;
  v20 = _mm_load_si128((const __m128i *)&xmmword_23836A0);
  v12 = sub_408580(v11, (__m128i *)&v19, a3);
  result = 1;
  if ( v9 == v12 )
  {
    result = 0;
    if ( v9 )
    {
      result = 1;
      if ( v7 == v19
        && v8 == v20.m128i_i32[0]
        && __PAIR64__(v14, v10) == *(__int64 *)((char *)v20.m128i_i64 + 4)
        && HIDWORD(v14) == v20.m128i_i32[3] )
      {
        return v21 != v15;
      }
    }
  }
  return result;
}

