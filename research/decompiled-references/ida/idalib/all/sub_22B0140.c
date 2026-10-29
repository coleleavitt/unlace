void __fastcall sub_22B0140(__int64 a1, char *a2, char *a3)
{
  _BYTE *v4; // rdi
  char *v5; // r12
  __int8 *v6; // r14
  signed __int64 v7; // rbx
  char *v8; // r15
  __m128i *v9; // rax
  __m128i *v10; // rsi
  char *v11[2]; // [rsp+10h] [rbp-A8h] BYREF
  __m128i v12; // [rsp+20h] [rbp-98h] BYREF
  __m128i v13; // [rsp+30h] [rbp-88h] BYREF
  void *ptr; // [rsp+40h] [rbp-78h] BYREF
  __int64 v15; // [rsp+48h] [rbp-70h]
  _BYTE v16[104]; // [rsp+50h] [rbp-68h] BYREF

  v11[0] = a2;
  v11[1] = a3;
  ptr = v16;
  v15 = 0x300000000LL;
  sub_22476F0(v11, (__int64)&ptr, 44, -1, 0);
  sub_F95480((void ***)a1, (unsigned int)v15);
  v4 = ptr;
  v5 = (char *)ptr + 16 * (unsigned int)v15;
  if ( v5 != ptr )
  {
    v6 = *(__int8 **)ptr;
    v7 = *((_QWORD *)ptr + 1);
    v12.m128i_i64[0] = (__int64)&v13;
    if ( &v6[v7] && !v6 )
LABEL_15:
      std::__throw_logic_error("basic_string::_M_construct null not valid");
    v8 = (char *)ptr + 16;
    while ( (unsigned __int64)v7 <= 0xF )
    {
      if ( v7 == 1 )
      {
        v13.m128i_i8[0] = *v6;
        v9 = (__m128i *)v12.m128i_i64[0];
        goto LABEL_8;
      }
      v9 = &v13;
      if ( v7 )
        goto LABEL_26;
LABEL_8:
      v12.m128i_i64[1] = v7;
      v9->m128i_i8[v7] = 0;
      v10 = *(__m128i **)(a1 + 8);
      if ( v10 != *(__m128i **)(a1 + 16) )
      {
        v10->m128i_i64[0] = (__int64)v10[1].m128i_i64;
        if ( (__m128i *)v12.m128i_i64[0] == &v13 )
        {
          v10[1] = _mm_load_si128(&v13);
        }
        else
        {
          v10->m128i_i64[0] = v12.m128i_i64[0];
          v10[1].m128i_i64[0] = v13.m128i_i64[0];
        }
        v10->m128i_i64[1] = v12.m128i_i64[1];
        *(_QWORD *)(a1 + 8) += 32LL;
LABEL_12:
        if ( v8 == v5 )
          goto LABEL_18;
        goto LABEL_13;
      }
      sub_A82970((void ***)a1, v10, &v12);
      if ( (__m128i *)v12.m128i_i64[0] == &v13 )
        goto LABEL_12;
      operator delete((void *)v12.m128i_i64[0]);
      if ( v8 == v5 )
      {
LABEL_18:
        v4 = ptr;
        goto LABEL_19;
      }
LABEL_13:
      v6 = *(__int8 **)v8;
      v7 = *((_QWORD *)v8 + 1);
      v8 += 16;
      v12.m128i_i64[0] = (__int64)&v13;
      if ( &v6[v7] && !v6 )
        goto LABEL_15;
    }
    if ( v7 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    v9 = (__m128i *)operator new(v7 + 1);
    v13.m128i_i64[0] = v7;
    v12.m128i_i64[0] = (__int64)v9;
LABEL_26:
    memcpy(v9, v6, v7);
    v9 = (__m128i *)v12.m128i_i64[0];
    goto LABEL_8;
  }
LABEL_19:
  if ( v4 != v16 )
    free(v4);
}
