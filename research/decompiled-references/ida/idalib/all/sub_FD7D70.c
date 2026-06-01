__int64 __fastcall sub_FD7D70(__int64 a1, __int64 a2, void *a3, size_t a4, int a5, int a6, unsigned __int8 a7, char a8)
{
  const void *v8; // rax
  __int64 v11; // rsi
  size_t v13; // rdx
  __int64 v14; // rsi
  char *v15; // rdi
  int v17; // [rsp+14h] [rbp-114h]
  int v18; // [rsp+14h] [rbp-114h]
  int v19; // [rsp+14h] [rbp-114h]
  _QWORD v21[4]; // [rsp+20h] [rbp-108h] BYREF
  __int16 v22; // [rsp+40h] [rbp-E8h]
  void *ptr; // [rsp+50h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+58h] [rbp-D0h]
  _WORD v25[96]; // [rsp+68h] [rbp-C0h] BYREF

  v8 = a3;
  a6 = (unsigned __int8)a6;
  if ( !*(_QWORD *)(a2 + 24) )
  {
    ptr = a3;
    v11 = *(_QWORD *)(a2 + 8);
    v25[4] = 261;
    si128.m128i_i64[0] = a4;
    sub_225D6F0(a1, v11, (unsigned int)&ptr, a5, a7, (unsigned __int8)a6, a8);
    return a1;
  }
  ptr = v25;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  if ( a4 > 0x80 )
  {
    v18 = (unsigned __int8)a6;
    sub_2236E10(&ptr, v25, a4, 1);
    a6 = v18;
    v8 = a3;
    v15 = (char *)ptr + si128.m128i_i64[0];
  }
  else
  {
    v13 = a4;
    if ( !a4 )
      goto LABEL_6;
    v15 = (char *)v25;
  }
  v19 = a6;
  memcpy(v15, v8, a4);
  a6 = v19;
  v13 = si128.m128i_i64[0] + a4;
LABEL_6:
  si128.m128i_i64[0] = v13;
  v17 = a6;
  sub_FD7540(a2, (__int64)&ptr);
  v22 = 261;
  v14 = *(_QWORD *)(a2 + 8);
  v21[0] = ptr;
  v21[1] = si128.m128i_i64[0];
  sub_225D6F0(a1, v14, (unsigned int)v21, a5, a7, v17, a8);
  if ( ptr != v25 )
    free(ptr);
  return a1;
}
