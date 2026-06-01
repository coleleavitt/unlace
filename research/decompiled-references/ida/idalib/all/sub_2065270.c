_QWORD *__fastcall sub_2065270(_QWORD *a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  unsigned int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // r13
  unsigned int v8; // r14d
  __m128i *v9; // rax
  __m128i si128; // xmm0
  __m128i v11; // xmm0
  void *v12; // rdi
  unsigned int v15; // eax
  unsigned int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // r13
  unsigned int v19; // r14d
  __m128i *v20; // rax
  __m128i v21; // xmm0
  void *v22; // [rsp+0h] [rbp-48h] BYREF
  __int64 v23; // [rsp+8h] [rbp-40h]
  _QWORD v24[7]; // [rsp+10h] [rbp-38h] BYREF

  if ( !a3 )
  {
    v5 = sub_2220490(a1);
    v7 = v6;
    v8 = v5;
    v9 = (__m128i *)operator new(0x28u);
    si128 = _mm_load_si128((const __m128i *)&xmmword_23AB000);
    v9[2].m128i_i16[2] = 29808;
    v9[2].m128i_i32[0] = 1835343973;
    *v9 = si128;
    v11 = _mm_load_si128((const __m128i *)&xmmword_23AB010);
    v9[2].m128i_i8[6] = 121;
    v9[2].m128i_i8[7] = 0;
    v9[1] = v11;
    v22 = v9;
    v24[0] = 39;
    v23 = 39;
    sub_22205D0(a1, &v22, v8, v7);
    v12 = v22;
    if ( v22 == v24 )
      return a1;
LABEL_3:
    operator delete(v12);
    return a1;
  }
  if ( (unsigned __int8)sub_2247970(a2, a3, 10, &v22)
    || (v15 = (unsigned int)v22, v22 != (void *)(unsigned int)v22)
    || (*a4 = (_DWORD)v22, v15 > 0xFFFFFF) )
  {
    v16 = sub_2220490(a2);
    v18 = v17;
    v19 = v16;
    v22 = v24;
    v20 = (__m128i *)operator new(0x27u);
    v21 = _mm_load_si128((const __m128i *)&xmmword_23AB020);
    strcpy(v20[2].m128i_i8, "nteger");
    *v20 = v21;
    v20[1] = _mm_load_si128((const __m128i *)&xmmword_23AB030);
    v22 = v20;
    v24[0] = 38;
    v23 = 38;
    sub_22205D0(a1, &v22, v19, v18);
    v12 = v22;
    if ( v22 == v24 )
      return a1;
    goto LABEL_3;
  }
  *a1 = 0;
  return a1;
}
