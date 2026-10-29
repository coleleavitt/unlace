__m128i *__fastcall sub_15863E0(__m128i *a1, __int64 a2, int a3, _BYTE *a4, __int64 a5)
{
  __int64 v9; // rax
  __int64 v10; // r13
  size_t v11; // rax
  size_t v12; // rax
  char *v13; // r14
  size_t v14; // rdx
  size_t v15; // rbp
  size_t v16; // r8
  size_t v17; // rdx
  _BYTE *v18; // rcx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rdi
  unsigned __int64 v21; // rdi
  __m128i *v22; // rax
  _QWORD *v23; // rdi
  void *v25; // [rsp+0h] [rbp-E8h] BYREF
  size_t v26; // [rsp+8h] [rbp-E0h]
  _QWORD v27[2]; // [rsp+10h] [rbp-D8h] BYREF
  void *v28; // [rsp+20h] [rbp-C8h] BYREF
  size_t v29; // [rsp+28h] [rbp-C0h]
  _QWORD v30[2]; // [rsp+30h] [rbp-B8h] BYREF
  __int16 v31; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v32; // [rsp+48h] [rbp-A0h]
  __int16 v33; // [rsp+50h] [rbp-98h]
  __int64 v34; // [rsp+58h] [rbp-90h]
  __int16 v35; // [rsp+60h] [rbp-88h]
  __int64 v36; // [rsp+68h] [rbp-80h]
  __int16 v37; // [rsp+70h] [rbp-78h]
  __int64 v38; // [rsp+78h] [rbp-70h]
  __int16 v39; // [rsp+80h] [rbp-68h]
  __int64 v40; // [rsp+88h] [rbp-60h]
  __int16 v41; // [rsp+90h] [rbp-58h]
  __int64 v42; // [rsp+98h] [rbp-50h]
  __int16 v43; // [rsp+A0h] [rbp-48h]
  __int64 v44; // [rsp+A8h] [rbp-40h]

  v9 = *(_QWORD *)(a2 + 8);
  v33 = 20;
  v32 = 0;
  v10 = *(_QWORD *)(v9 + 240);
  v31 = 20;
  v34 = 0;
  v11 = j__strlen("clang");
  v35 = 5;
  v37 = 72;
  v36 = sub_6F3470(v10 + 552, "clang", v11);
  v38 = 0;
  v12 = j__strlen("unsafe_buffer_usage");
  v39 = 5;
  v40 = sub_6F3470(v10 + 552, "unsafe_buffer_usage", v12);
  v41 = 21;
  v42 = 0;
  v43 = 21;
  v44 = 0;
  v13 = (char *)sub_145F790(v10, a3, &v31, 7);
  v15 = v14;
  if ( !v14 )
  {
    v13 = "[[clang::unsafe_buffer_usage]]";
    v15 = j__strlen("[[clang::unsafe_buffer_usage]]");
  }
  v28 = v30;
  if ( a4 )
  {
    sub_1580B80(&v28, a4, (__int64)&a4[a5]);
  }
  else
  {
    v29 = 0;
    LOBYTE(v30[0]) = 0;
  }
  if ( v13 )
  {
    v25 = v27;
    sub_1580B80(&v25, v13, (__int64)&v13[v15]);
    v16 = v26;
    v17 = v29;
    v18 = v25;
    v19 = v26 + v29;
    if ( v25 == v27 )
      v20 = 15;
    else
      v20 = v27[0];
  }
  else
  {
    v17 = v29;
    v18 = v27;
    LOBYTE(v27[0]) = 0;
    v16 = 0;
    v25 = v27;
    v20 = 15;
    v26 = 0;
    v19 = v29;
  }
  if ( v20 < v19 && (v28 == v30 ? (v21 = 15) : (v21 = v30[0]), v21 >= v19) )
    v22 = (__m128i *)sub_99BDC0(&v28, 0, 0, v18, v16);
  else
    v22 = (__m128i *)sub_9EE560(&v25, v28, v17);
  a1->m128i_i64[0] = (__int64)a1[1].m128i_i64;
  if ( (__m128i *)v22->m128i_i64[0] == &v22[1] )
  {
    a1[1] = _mm_loadu_si128(v22 + 1);
  }
  else
  {
    a1->m128i_i64[0] = v22->m128i_i64[0];
    a1[1].m128i_i64[0] = v22[1].m128i_i64[0];
  }
  a1->m128i_i64[1] = v22->m128i_i64[1];
  v22->m128i_i64[0] = (__int64)v22[1].m128i_i64;
  v23 = v25;
  v22->m128i_i64[1] = 0;
  v22[1].m128i_i8[0] = 0;
  if ( v23 != v27 )
    operator delete(v23);
  if ( v28 != v30 )
    operator delete(v28);
  return a1;
}
