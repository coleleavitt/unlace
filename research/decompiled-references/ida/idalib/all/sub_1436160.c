void __fastcall sub_1436160(__int64 a1, __int64 *a2, __int64 a3, unsigned __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v7; // r12
  __int64 *i; // rbx
  __int64 v9; // rdi
  _BYTE *v10; // rsi
  __int64 v11; // rdx
  _BYTE *v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rax
  __m128i *v16; // [rsp+0h] [rbp-C8h] BYREF
  __int64 v17; // [rsp+8h] [rbp-C0h]
  __m128i v18; // [rsp+10h] [rbp-B8h] BYREF
  void *v19[2]; // [rsp+20h] [rbp-A8h] BYREF
  _QWORD v20[2]; // [rsp+30h] [rbp-98h] BYREF
  __int64 v21; // [rsp+40h] [rbp-88h]
  void *v22; // [rsp+50h] [rbp-78h]
  __int64 v23; // [rsp+58h] [rbp-70h]
  __m128i v24; // [rsp+60h] [rbp-68h] BYREF
  _QWORD *v25; // [rsp+70h] [rbp-58h]
  void *v26; // [rsp+78h] [rbp-50h]
  _QWORD v27[2]; // [rsp+80h] [rbp-48h] BYREF
  __int64 v28; // [rsp+90h] [rbp-38h]
  char v29; // [rsp+98h] [rbp-30h]

  if ( *(_BYTE *)(a1 + 96) == 1 )
  {
    v10 = *(_BYTE **)(a1 + 128);
    v11 = *(_QWORD *)(a1 + 136);
    v16 = &v18;
    sub_14360A0(&v16, v10, (__int64)&v10[v11]);
    v12 = *(_BYTE **)(a1 + 160);
    v13 = *(_QWORD *)(a1 + 168);
    v19[0] = v20;
    sub_14360A0(v19, v12, (__int64)&v12[v13]);
    v21 = *(_QWORD *)(a1 + 88);
    v22 = &v24;
    if ( v16 == &v18 )
    {
      v24 = _mm_load_si128(&v18);
    }
    else
    {
      v22 = v16;
      v24.m128i_i64[0] = v18.m128i_i64[0];
    }
    v14 = v17;
    v18.m128i_i8[0] = 0;
    v17 = 0;
    v23 = v14;
    v16 = &v18;
    v25 = v27;
    if ( v19[0] == v20 )
    {
      v29 = 1;
      v28 = v21;
    }
    else
    {
      v25 = v19[0];
      v29 = 1;
      v27[0] = v20[0];
      v26 = v19[1];
      v28 = v21;
      if ( v19[0] != v27 )
        operator delete(v19[0]);
    }
    if ( v22 != &v24 )
      operator delete(v22);
    v15 = *((unsigned int *)a2 + 2);
    a4 = *((unsigned int *)a2 + 3);
    if ( v15 + 1 > a4 )
    {
      sub_2237220(a2, a2 + 2, v15 + 1, 8);
      v15 = *((unsigned int *)a2 + 2);
    }
    a3 = *a2;
    *(_QWORD *)(*a2 + 8 * v15) = a1;
    ++*((_DWORD *)a2 + 2);
  }
  v7 = *(__int64 **)(a1 + 264);
  for ( i = *(__int64 **)(a1 + 256); v7 != i; ++i )
  {
    v9 = *i;
    sub_1436160(v9, a2, a3, a4, a5, a6, v16, v17, v18.m128i_i32[0]);
  }
}
