void __fastcall sub_13FB450(__int64 a1)
{
  size_t v2; // rbp
  _BYTE *v3; // r13
  size_t v4; // rax
  size_t v5; // r12
  _BYTE *v6; // rsi
  char *v7; // rdx
  __int64 v8; // rdx
  unsigned __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rcx
  __m128i *v12; // rax
  __m128i *v13; // rdx
  _BYTE *v14; // rdi
  unsigned __int64 v15; // r13
  __int64 v16; // rdi
  void *v17; // [rsp+0h] [rbp-78h] BYREF
  __int64 v18; // [rsp+8h] [rbp-70h]
  _BYTE v19[16]; // [rsp+10h] [rbp-68h] BYREF
  void *v20[2]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v21[72]; // [rsp+30h] [rbp-48h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  v3 = *(_BYTE **)a1;
  v4 = j__strlen("_Private");
  if ( v4 <= v2 )
  {
    v5 = v2 - v4;
    if ( (!v4 || !memcmp(&v3[v5], "_Private", v4)) && v2 > v5 )
      v2 = v5;
  }
  if ( v3 )
  {
    v17 = v19;
    sub_13F28B0(&v17, v3, (__int64)&v3[v2]);
    v6 = v17;
    v7 = (char *)v17 + v18;
  }
  else
  {
    v7 = v19;
    v19[0] = 0;
    v17 = v19;
    v6 = v19;
    v18 = 0;
  }
  v20[0] = v21;
  sub_13F27F0(v20, v6, (__int64)v7);
  v8 = *(unsigned int *)(a1 + 1608);
  v9 = *(unsigned int *)(a1 + 1612);
  v21[16] = 1;
  v10 = v8 + 1;
  if ( v8 + 1 > v9 )
  {
    v15 = *(_QWORD *)(a1 + 1600);
    v16 = a1 + 1600;
    if ( v15 > (unsigned __int64)v20 || (unsigned __int64)v20 >= v15 + 40 * v8 )
    {
      sub_13FB330(v16, v10);
      v11 = *(_QWORD *)(a1 + 1600);
      v8 = *(unsigned int *)(a1 + 1608);
      v12 = (__m128i *)v20;
    }
    else
    {
      sub_13FB330(v16, v10);
      v11 = *(_QWORD *)(a1 + 1600);
      v8 = *(unsigned int *)(a1 + 1608);
      v12 = (__m128i *)((char *)v20 + v11 - v15);
    }
  }
  else
  {
    v11 = *(_QWORD *)(a1 + 1600);
    v12 = (__m128i *)v20;
  }
  v13 = (__m128i *)(v11 + 40 * v8);
  v13->m128i_i64[0] = (__int64)v13[1].m128i_i64;
  if ( (__m128i *)v12->m128i_i64[0] == &v12[1] )
  {
    v13[1] = _mm_loadu_si128(v12 + 1);
  }
  else
  {
    v13->m128i_i64[0] = v12->m128i_i64[0];
    v13[1].m128i_i64[0] = v12[1].m128i_i64[0];
  }
  v13->m128i_i64[1] = v12->m128i_i64[1];
  v12->m128i_i64[0] = (__int64)v12[1].m128i_i64;
  v14 = v20[0];
  v12->m128i_i64[1] = 0;
  v12[1].m128i_i8[0] = 0;
  v13[2].m128i_i8[0] = v12[2].m128i_i8[0];
  ++*(_DWORD *)(a1 + 1608);
  if ( v14 != v21 )
    operator delete(v14);
  if ( v17 != v19 )
    operator delete(v17);
}
