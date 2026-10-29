__int64 __fastcall sub_1195A20(__int64 a1, __int64 a2, char *a3)
{
  void *v4; // rbp
  __int64 v5; // rax
  const char **v6; // rax
  const char *v7; // r13
  size_t v8; // rax
  __m128i si128; // xmm0
  size_t v10; // r12
  __m128i v12; // xmm0
  __int64 v13; // r15
  const char **v14; // rax
  char *v15; // rdx
  char *v16; // r12
  _BYTE *v17; // rax
  __m128i v18; // xmm2
  bool v19; // zf
  char *v20; // rdx
  _BYTE *v21; // [rsp+0h] [rbp-188h] BYREF
  __int16 v22; // [rsp+20h] [rbp-168h]
  void *ptr; // [rsp+30h] [rbp-158h] BYREF
  __m128i v24; // [rsp+38h] [rbp-150h]
  _BYTE v25[320]; // [rsp+48h] [rbp-140h] BYREF

  v4 = (void *)(a1 + 24);
  v5 = sub_10DCD30(a2, 0x3B0u);
  if ( v5 )
  {
    v6 = *(const char ***)(v5 + 48);
    v7 = *v6;
    if ( *v6 )
    {
      v8 = strlen(*v6);
      si128 = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
      *(_QWORD *)a1 = v4;
      v10 = v8;
      *(__m128i *)(a1 + 8) = si128;
      if ( v8 <= 0x100 )
      {
        if ( !v8 )
          goto LABEL_6;
      }
      else
      {
        sub_2236E10(a1, a1 + 24, v8, 1);
        v4 = (void *)(*(_QWORD *)a1 + *(_QWORD *)(a1 + 8));
      }
      memcpy(v4, v7, v10);
      v8 = v10 + *(_QWORD *)(a1 + 8);
    }
    else
    {
      v12 = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
      *(_QWORD *)a1 = v4;
      v8 = 0;
      *(__m128i *)(a1 + 8) = v12;
    }
LABEL_6:
    *(_QWORD *)(a1 + 8) = v8;
    return a1;
  }
  ptr = v25;
  v24 = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
  v13 = sub_10DCD30(a2, 0xC2Cu);
  if ( v13 && sub_10DCD30(a2, 0xF9u) )
  {
    v14 = *(const char ***)(v13 + 48);
    v15 = nullptr;
    v16 = (char *)*v14;
    if ( *v14 )
      v15 = &v16[j__strlen(*v14)];
    v24.m128i_i64[0] = 0;
    sub_A1FE50(&ptr, v16, v15);
  }
  else
  {
    v20 = nullptr;
    if ( a3 )
      v20 = &a3[j__strlen(a3)];
    v24.m128i_i64[0] = 0;
    sub_A1FE50(&ptr, a3, v20);
  }
  v17 = (_BYTE *)sub_12CC940(51, 0);
  v22 = 257;
  if ( *v17 )
  {
    v21 = v17;
    LOBYTE(v22) = 3;
  }
  sub_228A730(&ptr, &v21, 0);
  v18 = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
  v19 = v24.m128i_i64[0] == 0;
  *(_QWORD *)a1 = v4;
  *(__m128i *)(a1 + 8) = v18;
  if ( !v19 )
    sub_9C3C90((char **)a1, (char **)&ptr);
  if ( ptr != v25 )
    free(ptr);
  return a1;
}
