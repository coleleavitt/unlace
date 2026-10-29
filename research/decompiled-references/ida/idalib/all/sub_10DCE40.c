_QWORD *__fastcall sub_10DCE40(_QWORD *a1, __int64 a2, __int64 a3, _BYTE *a4, __int64 a5)
{
  __int64 v9; // rdi
  __int64 v10; // rax
  const char **v11; // rax
  char *v12; // rdx
  char *v13; // r12
  _BYTE *v14; // rsi
  __int64 v15; // rdx
  size_t v17; // rax
  __int64 v18; // rax
  const char **v19; // rax
  char *v20; // rdx
  char *v21; // r12
  _QWORD v22[4]; // [rsp+0h] [rbp-F8h] BYREF
  __int16 v23; // [rsp+20h] [rbp-D8h]
  void *ptr; // [rsp+30h] [rbp-C8h] BYREF
  __m128i si128; // [rsp+38h] [rbp-C0h]
  _BYTE v26[176]; // [rsp+48h] [rbp-B0h] BYREF

  v9 = *(_QWORD *)(a3 + 80);
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  ptr = v26;
  v10 = sub_10DCD30(v9, 0x688u);
  if ( v10 )
  {
    v11 = *(const char ***)(v10 + 48);
    v12 = nullptr;
    v13 = (char *)*v11;
    if ( *v11 )
      v12 = &v13[j__strlen(*v11)];
    si128.m128i_i64[0] = 0;
    sub_A1FE50(&ptr, v13, v12);
    v22[0] = ptr;
    v23 = 261;
    v22[1] = si128.m128i_i64[0];
    if ( !(unsigned __int8)sub_228AF30(v22, 0) )
    {
      v17 = j__strlen(".pch");
      sub_A1FE50(&ptr, ".pch", &aPch[v17]);
    }
  }
  else
  {
    v18 = sub_10DCD30(*(_QWORD *)(a3 + 80), 0xDB8u);
    if ( v18 )
    {
      v19 = *(const char ***)(v18 + 48);
      v20 = nullptr;
      v21 = (char *)*v19;
      if ( *v19 )
        v20 = &v21[j__strlen(*v19)];
      si128.m128i_i64[0] = 0;
      sub_A1FE50(&ptr, v21, v20);
    }
    if ( !si128.m128i_i64[0] )
      sub_A1FE50(&ptr, a4, &a4[a5]);
    v22[0] = ".pch";
    v23 = 259;
    sub_228A730(&ptr, v22, 0);
  }
  v14 = ptr;
  v15 = si128.m128i_i64[0];
  *a1 = a1 + 2;
  sub_10D8DB0(a1, v14, (__int64)&v14[v15]);
  if ( ptr != v26 )
    free(ptr);
  return a1;
}
