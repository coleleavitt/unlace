__m128i *__fastcall sub_126C3D0(__m128i *a1, __int64 a2)
{
  __m128i *v2; // r12
  int v3; // eax
  _BYTE *v5; // rax
  __int64 v6; // rdx
  __m128i *v7; // rax
  __int64 v8; // rcx
  __m128i *v9; // rdx
  _BYTE *v10; // rax
  __int64 v11; // rdx
  _BYTE *v12; // rax
  __int64 v13; // rdx
  void *v14; // [rsp+0h] [rbp-38h] BYREF
  __int64 v15; // [rsp+8h] [rbp-30h]
  _BYTE v16[40]; // [rsp+10h] [rbp-28h] BYREF

  v2 = a1 + 1;
  v3 = *(_DWORD *)(a2 + 32);
  if ( v3 == 28 )
  {
    v5 = (_BYTE *)sub_22B76B0(a2);
    if ( v5 )
    {
      v14 = v16;
      sub_126BEE0(&v14, v5, (__int64)&v5[v6]);
    }
    else
    {
      v16[0] = 0;
      v14 = v16;
      v15 = 0;
    }
    v7 = (__m128i *)sub_99BDC0(&v14, 0, 0, "riscv64-managarm-", 0x11u);
    a1->m128i_i64[0] = (__int64)v2;
    v8 = v7->m128i_i64[0];
    v9 = v7 + 1;
    if ( (__m128i *)v7->m128i_i64[0] != &v7[1] )
      goto LABEL_17;
    goto LABEL_9;
  }
  if ( v3 == 38 )
  {
    v12 = (_BYTE *)sub_22B76B0(a2);
    if ( v12 )
    {
      v14 = v16;
      sub_126BEE0(&v14, v12, (__int64)&v12[v13]);
    }
    else
    {
      v16[0] = 0;
      v14 = v16;
      v15 = 0;
    }
    v7 = (__m128i *)sub_99BDC0(&v14, 0, 0, "x86_64-managarm-", 0x10u);
    a1->m128i_i64[0] = (__int64)v2;
    v8 = v7->m128i_i64[0];
    v9 = v7 + 1;
    if ( (__m128i *)v7->m128i_i64[0] != &v7[1] )
      goto LABEL_17;
LABEL_9:
    a1[1] = _mm_loadu_si128(v7 + 1);
    goto LABEL_18;
  }
  if ( v3 != 3 )
  {
    a1->m128i_i64[0] = (__int64)v2;
    sub_126BE20(a1, *(_BYTE **)a2, *(_QWORD *)a2 + *(_QWORD *)(a2 + 8));
    return a1;
  }
  v10 = (_BYTE *)sub_22B76B0(a2);
  if ( v10 )
  {
    v14 = v16;
    sub_126BEE0(&v14, v10, (__int64)&v10[v11]);
  }
  else
  {
    v16[0] = 0;
    v14 = v16;
    v15 = 0;
  }
  v7 = (__m128i *)sub_99BDC0(&v14, 0, 0, "aarch64-managarm-", 0x11u);
  a1->m128i_i64[0] = (__int64)v2;
  v8 = v7->m128i_i64[0];
  v9 = v7 + 1;
  if ( (__m128i *)v7->m128i_i64[0] == &v7[1] )
    goto LABEL_9;
LABEL_17:
  a1->m128i_i64[0] = v8;
  a1[1].m128i_i64[0] = v7[1].m128i_i64[0];
LABEL_18:
  a1->m128i_i64[1] = v7->m128i_i64[1];
  v7->m128i_i64[0] = (__int64)v9;
  v7->m128i_i64[1] = 0;
  v7[1].m128i_i8[0] = 0;
  if ( v14 == v16 )
    return a1;
  operator delete(v14);
  return a1;
}
