__int64 *__fastcall sub_6B7C50(__int64 *a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rax
  __m128i v7; // xmm0
  void *v8; // rdi
  void *v9; // r12
  unsigned __int64 v10; // rbx
  __m128i v11; // xmm0
  void *v12; // rdi
  unsigned __int64 v13; // r12
  unsigned __int64 v14; // r13
  __int64 v15; // rsi
  unsigned __int64 v16; // rbx
  __int64 v18; // rax
  __m128i v19; // [rsp+0h] [rbp-58h] BYREF
  void *ptr; // [rsp+10h] [rbp-48h] BYREF
  __m128i v21; // [rsp+18h] [rbp-40h] BYREF
  unsigned __int64 v22; // [rsp+28h] [rbp-30h]

  v22 = __readfsqword(0x28u);
  *a1 = 0;
  *(_OWORD *)(a1 + 1) = 0;
  if ( a3 )
  {
    v4 = a3;
    while ( 1 )
    {
      if ( (*(_BYTE *)(v4 + 8) & 0x7Fu) - 18 <= 0x3F )
      {
        v6 = sub_B68470(v4);
        if ( v6 )
          break;
      }
      v5 = *(_QWORD *)(sub_B68470(v4) + 16);
      v4 = v5 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v5 & 4) != 0 )
        v4 = *(_QWORD *)v4;
      if ( !v4 )
      {
        v10 = a1[1];
        goto LABEL_11;
      }
    }
    sub_6B7B10((__int64)&ptr, a2, v6, 1);
    v7 = _mm_loadu_si128(&v21);
    v8 = (void *)*a1;
    v9 = ptr;
    v21 = 0;
    ptr = nullptr;
    v10 = v7.m128i_i64[0];
    if ( v8 )
    {
      a1[1] = 0;
      v19 = v7;
      qfree(v8);
      v11 = _mm_load_si128(&v19);
      v12 = ptr;
      *a1 = (__int64)v9;
      *(__m128i *)(a1 + 1) = v11;
      if ( v12 )
      {
        v21.m128i_i64[0] = 0;
        qfree(v12);
        v10 = a1[1];
      }
    }
    else
    {
      *a1 = (__int64)v9;
      *(__m128i *)(a1 + 1) = v7;
    }
LABEL_11:
    if ( v10 > 1 )
    {
      v13 = v10 - 1;
      v14 = v10 + 1;
      v15 = *a1;
      v16 = v10 + 2;
      if ( a1[2] < v16 )
      {
        v18 = qvector_reserve(a1, v15, v16, 1);
        *a1 = v18;
        v15 = v18;
      }
      a1[1] = v16;
      *(_BYTE *)(v15 + v14) = 0;
      *(_WORD *)(*a1 + v13) = 14906;
    }
  }
  return a1;
}

