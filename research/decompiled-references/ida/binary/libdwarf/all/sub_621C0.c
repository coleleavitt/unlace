__m128i *__fastcall sub_621C0(__m128i *a1, char *a2, unsigned __int64 a3, int a4)
{
  unsigned __int64 FrameHeader_advanced; // rax
  __int64 v6; // r14
  char *v7; // r15
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rax
  unsigned int v11; // edx
  unsigned __int64 v12; // rax
  __m128i v13; // xmm1
  __int64 v14; // rax
  __m128i v15; // xmm2
  char v16[4]; // [rsp+0h] [rbp-A4h] BYREF
  int v17; // [rsp+4h] [rbp-A0h]
  __m128i v18; // [rsp+Ch] [rbp-98h] BYREF
  __int64 v19; // [rsp+1Ch] [rbp-88h]
  __int64 v20; // [rsp+2Ch] [rbp-78h]
  unsigned int v21; // [rsp+3Ch] [rbp-68h]
  unsigned int v22; // [rsp+44h] [rbp-60h]
  int v23; // [rsp+4Ch] [rbp-58h]
  unsigned __int64 v24; // [rsp+64h] [rbp-40h]

  v24 = __readfsqword(0x28u);
  v18 = 0;
  v19 = 0;
  if ( !a4 && a3 > 7 && (*(_DWORD *)a2 & 0xFFFFFFF0) == 0x184D2A50 )
  {
    v11 = *((_DWORD *)a2 + 1);
    v12 = -14;
    if ( v11 <= 0xFFFFFFF7 )
    {
      v12 = v11 + 8LL;
      if ( a3 < v12 )
        v12 = -72;
    }
    v18.m128i_i64[1] = v12;
    v13 = _mm_load_si128(&v18);
    a1[1].m128i_i64[0] = v19;
    *a1 = v13;
  }
  else
  {
    FrameHeader_advanced = ZSTD_getFrameHeader_advanced();
    v6 = FrameHeader_advanced;
    if ( FrameHeader_advanced > 0xFFFFFFFFFFFFFF88LL )
    {
      a1->m128i_i64[0] = 0;
      a1->m128i_i64[1] = FrameHeader_advanced;
      a1[1].m128i_i64[0] = -2;
      return a1;
    }
    if ( FrameHeader_advanced )
      goto LABEL_13;
    v7 = &a2[v22];
    v8 = a3 - v22;
    do
    {
      v9 = sub_6C4D0(v7, v8, v16);
      if ( v9 > 0xFFFFFFFFFFFFFF88LL )
      {
        a1->m128i_i64[0] = 0;
        a1->m128i_i64[1] = v9;
        a1[1].m128i_i64[0] = -2;
        return a1;
      }
      if ( v9 + 3 > v8 )
        goto LABEL_13;
      v7 += v9 + 3;
      ++v6;
      v8 += -3LL - v9;
    }
    while ( !v17 );
    if ( v23 )
    {
      if ( v8 <= 3 )
      {
LABEL_13:
        a1->m128i_i64[0] = 0;
        a1->m128i_i64[1] = -72;
        a1[1].m128i_i64[0] = -2;
        return a1;
      }
      v7 += 4;
    }
    v14 = v20;
    v18.m128i_i64[0] = v6;
    v18.m128i_i64[1] = v7 - a2;
    if ( v20 == -1 )
      v14 = v6 * v21;
    v15 = _mm_load_si128(&v18);
    v19 = v14;
    a1[1].m128i_i64[0] = v14;
    *a1 = v15;
  }
  return a1;
}

