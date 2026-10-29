_QWORD *__fastcall sub_12EB690(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rax
  _BYTE *v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rdx
  _BYTE *v11; // rsi
  _QWORD v13[4]; // [rsp+0h] [rbp-208h] BYREF
  __int16 v14; // [rsp+20h] [rbp-1E8h]
  _BYTE v15[32]; // [rsp+30h] [rbp-1D8h] BYREF
  __int16 v16; // [rsp+50h] [rbp-1B8h]
  _BYTE v17[32]; // [rsp+60h] [rbp-1A8h] BYREF
  __int16 v18; // [rsp+80h] [rbp-188h]
  _BYTE v19[32]; // [rsp+90h] [rbp-178h] BYREF
  __int16 v20; // [rsp+B0h] [rbp-158h]
  void *ptr; // [rsp+C0h] [rbp-148h] BYREF
  __m128i si128; // [rsp+C8h] [rbp-140h]
  _BYTE v23[304]; // [rsp+D8h] [rbp-130h] BYREF

  v7 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 48LL);
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
  v8 = *(_BYTE **)(v7 + 112);
  v9 = *(_QWORD *)(v7 + 120);
  ptr = v23;
  sub_A1FE50(&ptr, v8, &v8[v9]);
  v10 = si128.m128i_i64[0];
  if ( si128.m128i_i64[0] && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 16) + 48LL) + 280LL) & 1) == 0 )
  {
    v18 = 257;
    v16 = 257;
    v14 = 261;
    v20 = 257;
    v13[0] = a3;
    v13[1] = a4;
    sub_228A3B0(&ptr, v13, v15, v17, v19);
    v10 = si128.m128i_i64[0];
  }
  v11 = ptr;
  *a1 = a1 + 2;
  sub_12E9400(a1, v11, (__int64)&v11[v10]);
  if ( ptr != v23 )
    free(ptr);
  return a1;
}
