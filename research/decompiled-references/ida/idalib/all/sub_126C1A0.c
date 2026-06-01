__m128i *__fastcall sub_126C1A0(__m128i *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __m128i *v4; // r12
  int v5; // eax
  _BYTE *v7; // rax
  __int64 v8; // rdx
  __m128i *v9; // rax
  __int64 v10; // rcx
  __m128i *v11; // rdx
  _BYTE *v12; // rax
  __int64 v13; // rdx
  _BYTE *v14; // rax
  __int64 v15; // rdx
  void *v16; // [rsp+0h] [rbp-38h] BYREF
  __int64 v17; // [rsp+8h] [rbp-30h]
  _BYTE v18[40]; // [rsp+10h] [rbp-28h] BYREF

  v4 = a1 + 1;
  v5 = *(_DWORD *)(a4 + 32);
  if ( v5 == 28 )
  {
    v7 = (_BYTE *)sub_22B76B0(a4);
    if ( v7 )
    {
      v16 = v18;
      sub_126BEE0(&v16, v7, (__int64)&v7[v8]);
    }
    else
    {
      v18[0] = 0;
      v16 = v18;
      v17 = 0;
    }
    v9 = (__m128i *)sub_99BDC0(&v16, 0, 0, "riscv64-managarm-", 0x11u);
    a1->m128i_i64[0] = (__int64)v4;
    v10 = v9->m128i_i64[0];
    v11 = v9 + 1;
    if ( (__m128i *)v9->m128i_i64[0] != &v9[1] )
      goto LABEL_17;
    goto LABEL_9;
  }
  if ( v5 == 38 )
  {
    v14 = (_BYTE *)sub_22B76B0(a4);
    if ( v14 )
    {
      v16 = v18;
      sub_126BEE0(&v16, v14, (__int64)&v14[v15]);
    }
    else
    {
      v18[0] = 0;
      v16 = v18;
      v17 = 0;
    }
    v9 = (__m128i *)sub_99BDC0(&v16, 0, 0, "x86_64-managarm-", 0x10u);
    a1->m128i_i64[0] = (__int64)v4;
    v10 = v9->m128i_i64[0];
    v11 = v9 + 1;
    if ( (__m128i *)v9->m128i_i64[0] != &v9[1] )
      goto LABEL_17;
LABEL_9:
    a1[1] = _mm_loadu_si128(v9 + 1);
    goto LABEL_18;
  }
  if ( v5 != 3 )
  {
    a1->m128i_i64[0] = (__int64)v4;
    sub_126BE20(a1, *(_BYTE **)a4, *(_QWORD *)a4 + *(_QWORD *)(a4 + 8));
    return a1;
  }
  v12 = (_BYTE *)sub_22B76B0(a4);
  if ( v12 )
  {
    v16 = v18;
    sub_126BEE0(&v16, v12, (__int64)&v12[v13]);
  }
  else
  {
    v18[0] = 0;
    v16 = v18;
    v17 = 0;
  }
  v9 = (__m128i *)sub_99BDC0(&v16, 0, 0, "aarch64-managarm-", 0x11u);
  a1->m128i_i64[0] = (__int64)v4;
  v10 = v9->m128i_i64[0];
  v11 = v9 + 1;
  if ( (__m128i *)v9->m128i_i64[0] == &v9[1] )
    goto LABEL_9;
LABEL_17:
  a1->m128i_i64[0] = v10;
  a1[1].m128i_i64[0] = v9[1].m128i_i64[0];
LABEL_18:
  a1->m128i_i64[1] = v9->m128i_i64[1];
  v9->m128i_i64[0] = (__int64)v11;
  v9->m128i_i64[1] = 0;
  v9[1].m128i_i8[0] = 0;
  if ( v16 == v18 )
    return a1;
  operator delete(v16);
  return a1;
}
