_QWORD *__fastcall sub_1839770(_QWORD *a1, const __m128i *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // r13
  __int64 v7; // rbx
  unsigned int v8; // r12d
  __int64 v9; // r13
  unsigned __int8 v10; // al
  __int64 v11; // rdi
  __int64 v12; // r8
  _BYTE *v13; // rsi
  void *v14; // rdx
  __m128i v17; // [rsp+10h] [rbp-118h] BYREF
  __int128 v18; // [rsp+20h] [rbp-108h]
  _WORD *v19; // [rsp+30h] [rbp-F8h]
  char v20; // [rsp+38h] [rbp-F0h]
  int v21; // [rsp+3Ch] [rbp-ECh]
  void **p_ptr; // [rsp+40h] [rbp-E8h]
  void *ptr; // [rsp+50h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+58h] [rbp-D0h]
  _BYTE v25[192]; // [rsp+68h] [rbp-C0h] BYREF

  ptr = v25;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  p_ptr = &ptr;
  v17.m128i_i32[2] = 2;
  v20 = 0;
  v21 = 1;
  v19 = nullptr;
  v18 = 0;
  v17.m128i_i64[0] = (__int64)&off_2BEBEE0;
  sub_227B8B0(&v17, 0, 0, 0);
  v6 = *(unsigned int *)(a3 + 8);
  v7 = *(_QWORD *)a3;
  v8 = 0;
  v9 = v7 + 32 * v6;
  if ( v9 != v7 )
  {
    while ( 1 )
    {
      v10 = sub_BBDA50((__int64)a2, a4, v8);
      v11 = v7;
      v7 += 32;
      sub_F1E030(v11, a2, &v17, v10, v12, 0.0);
      if ( v9 == v7 )
        break;
      if ( *((_QWORD *)&v18 + 1) - (_QWORD)v19 > 1u )
        *v19++ = 8236;
      else
        sub_227BF10(&v17, ", ", 2);
      ++v8;
    }
  }
  v13 = *p_ptr;
  v14 = p_ptr[1];
  *a1 = a1 + 2;
  sub_18390F0(a1, v13, (__int64)v14 + (_QWORD)v13);
  v17.m128i_i64[0] = (__int64)&unk_2C76288;
  sub_227B7A0(&v17);
  if ( ptr != v25 )
    free(ptr);
  return a1;
}
