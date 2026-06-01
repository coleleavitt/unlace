__int64 __fastcall sub_1131310(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  _BYTE *v4; // rsi
  __int64 v5; // rdx
  char *v7; // [rsp+0h] [rbp-188h] BYREF
  __int16 v8; // [rsp+20h] [rbp-168h]
  char *v9; // [rsp+30h] [rbp-158h] BYREF
  __int16 v10; // [rsp+50h] [rbp-138h]
  _BYTE v11[32]; // [rsp+60h] [rbp-128h] BYREF
  __int16 v12; // [rsp+80h] [rbp-108h]
  _BYTE v13[32]; // [rsp+90h] [rbp-F8h] BYREF
  __int16 v14; // [rsp+B0h] [rbp-D8h]
  void *ptr; // [rsp+C0h] [rbp-C8h] BYREF
  __m128i si128; // [rsp+C8h] [rbp-C0h]
  _BYTE v17[176]; // [rsp+D8h] [rbp-B0h] BYREF

  v3 = *(_QWORD *)(a2 + 8);
  v4 = *(_BYTE **)(v3 + 104);
  v5 = *(_QWORD *)(v3 + 112);
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  ptr = v17;
  sub_A1FE50(&ptr, v4, &v4[v5]);
  v14 = 257;
  v12 = 257;
  v9 = "lib";
  v10 = 259;
  v8 = 259;
  v7 = "..";
  sub_228A3B0(&ptr, &v7, &v9, v11, v13);
  sub_1130D20(a1, (_DWORD *)a2, ptr, si128.m128i_i64[0]);
  if ( ptr != v17 )
    free(ptr);
  return a1;
}
