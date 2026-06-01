_QWORD *__fastcall sub_F72100(_QWORD *a1, _BYTE *a2, __int64 a3, const void *a4, size_t a5, int a6)
{
  __int64 v7; // r13
  __m128i si128; // xmm0
  unsigned __int64 v11; // rax
  size_t v12; // rbp
  void *v13; // r14
  _BYTE *v14; // rdi
  void *v16; // rdi
  size_t v17; // rbp
  _QWORD v18[2]; // [rsp+0h] [rbp-68h] BYREF
  void *src; // [rsp+10h] [rbp-58h] BYREF
  size_t n; // [rsp+18h] [rbp-50h]
  _BYTE v21[72]; // [rsp+20h] [rbp-48h] BYREF

  v7 = a5;
  v18[0] = a2;
  v18[1] = a3;
  if ( a6 == 9 )
  {
    sub_2222710(&src, v18);
  }
  else
  {
    src = v21;
    if ( a2 )
    {
      sub_F72040(&src, a2, (__int64)&a2[a3]);
    }
    else
    {
      n = 0;
      v21[0] = 0;
    }
  }
  si128 = _mm_load_si128((const __m128i *)&xmmword_2384D30);
  *a1 = a1 + 3;
  *(__m128i *)(a1 + 1) = si128;
  if ( a5 > 0x40 )
  {
    sub_22130D0(a1, a1 + 3, a5, 1);
    v16 = (void *)(*a1 + a1[1]);
  }
  else
  {
    v11 = 64;
    if ( !a5 )
      goto LABEL_6;
    v16 = a1 + 3;
  }
  memcpy(v16, a4, a5);
  v17 = a1[1] + a5;
  a1[1] = v17;
  if ( v17 + 2 > a1[2] )
  {
    sub_22130D0(a1, a1 + 3, v17 + 2, 1);
    v17 = a1[1];
  }
  *(_WORD *)(*a1 + v17) = 14906;
  v7 = a1[1] + 2LL;
  v11 = a1[2];
  a1[1] = v7;
LABEL_6:
  v12 = n;
  v13 = src;
  if ( n + v7 > v11 )
  {
    sub_22130D0(a1, a1 + 3, n + v7, 1);
    v7 = a1[1];
  }
  if ( v12 )
  {
    memcpy((void *)(v7 + *a1), v13, v12);
    v7 = a1[1];
  }
  v14 = src;
  a1[1] = v12 + v7;
  if ( v14 != v21 )
    operator delete(v14);
  return a1;
}

