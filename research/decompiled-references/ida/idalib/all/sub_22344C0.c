_QWORD *__fastcall sub_22344C0(_QWORD *a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // r13
  char v5; // al
  char *v6; // rcx
  _QWORD *v7; // rdx
  __m128i *v8; // rax
  size_t v9; // r8
  _BYTE *v10; // rdi
  size_t v11; // r12
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rax
  __m128i *v14; // rax
  __int64 v15; // rcx
  unsigned __int64 v17; // rcx
  char *v18; // rsi
  char *v19; // r12
  _QWORD *v20; // rax
  _BYTE *v21; // rdi
  char *src; // [rsp+10h] [rbp-C8h]
  __m128i *v25; // [rsp+20h] [rbp-B8h]
  __int64 v26; // [rsp+28h] [rbp-B0h]
  __m128i v27; // [rsp+30h] [rbp-A8h] BYREF
  void *v28[2]; // [rsp+40h] [rbp-98h] BYREF
  _QWORD v29[2]; // [rsp+50h] [rbp-88h] BYREF
  void *v30; // [rsp+60h] [rbp-78h] BYREF
  size_t v31; // [rsp+68h] [rbp-70h]
  __m128i v32; // [rsp+70h] [rbp-68h] BYREF
  void *v33; // [rsp+80h] [rbp-58h] BYREF
  size_t n; // [rsp+88h] [rbp-50h]
  char v35[72]; // [rsp+90h] [rbp-48h] BYREF

  strcpy(v35, "-bytes");
  n = 6;
  v4 = sub_2219FE0((char *)(a2 + 160), (char *)(a2 + 184), (_QWORD *)(a2 + 192));
  v33 = v35;
  if ( !v4 )
  {
    v28[0] = v29;
    v5 = 48;
LABEL_3:
    LOBYTE(v29[0]) = v5;
    v6 = (_BYTE *)(&dword_0 + 1);
    v7 = v29;
    goto LABEL_4;
  }
  v17 = v4;
  v18 = &v32.m128i_i8[5];
  while ( 1 )
  {
    --v18;
    v5 = v17 % 0xA + 48;
    *v18 = v5;
    if ( v17 <= 9 )
      break;
    v17 /= 0xAu;
  }
  v19 = (char *)(&v32.m128i_u8[5] - (unsigned __int8 *)v18);
  v7 = v29;
  v6 = (char *)(&v32.m128i_u8[5] - (unsigned __int8 *)v18);
  v28[0] = v29;
  if ( (unsigned __int64)(&v32.m128i_u8[5] - (unsigned __int8 *)v18) > 0xF )
  {
    if ( (__int64)v19 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    v20 = (_QWORD *)operator new((unsigned __int64)(v19 + 1));
    v29[0] = &v32.m128i_u8[5] - (unsigned __int8 *)v18;
    v28[0] = v20;
    v6 = (char *)(&v32.m128i_u8[5] - (unsigned __int8 *)v18);
    goto LABEL_31;
  }
  if ( v19 == (_BYTE *)&dword_0 + 1 )
    goto LABEL_3;
  if ( v19 )
  {
    v20 = v29;
LABEL_31:
    src = v6;
    memcpy(v20, v18, (size_t)v19);
    v7 = v28[0];
    v6 = src;
  }
LABEL_4:
  v28[1] = v6;
  v6[(_QWORD)v7] = 0;
  v8 = (__m128i *)sub_99BDC0(v28, 0, 0, "Stack alignment is ", 0x13u);
  v30 = &v32;
  if ( (__m128i *)v8->m128i_i64[0] == &v8[1] )
  {
    v32 = _mm_loadu_si128(v8 + 1);
  }
  else
  {
    v30 = (void *)v8->m128i_i64[0];
    v32.m128i_i64[0] = v8[1].m128i_i64[0];
  }
  v31 = v8->m128i_u64[1];
  v8->m128i_i64[0] = (__int64)v8[1].m128i_i64;
  v8->m128i_i64[1] = 0;
  v9 = n;
  v8[1].m128i_i8[0] = 0;
  v10 = v30;
  v11 = v31 + v9;
  if ( v30 == &v32 )
    v12 = 15;
  else
    v12 = v32.m128i_i64[0];
  if ( v11 <= v12 )
  {
    if ( v9 )
    {
      v21 = (char *)v30 + v31;
      if ( v9 == 1 )
        *v21 = *(_BYTE *)v33;
      else
        memcpy(v21, v33, v9);
      v10 = v30;
    }
    goto LABEL_13;
  }
  if ( v33 == v35 )
    v13 = 15;
  else
    v13 = *(_QWORD *)v35;
  if ( v11 > v13 )
  {
    sub_998B30((__int64)&v30, v31, 0, v33, v9);
    v10 = v30;
LABEL_13:
    v31 = v11;
    v14 = (__m128i *)&v30;
    v10[v11] = 0;
    goto LABEL_14;
  }
  v14 = (__m128i *)sub_99BDC0(&v33, 0, 0, v30, v31);
LABEL_14:
  v25 = &v27;
  if ( (__m128i *)v14->m128i_i64[0] == &v14[1] )
  {
    v27 = _mm_loadu_si128(v14 + 1);
  }
  else
  {
    v25 = (__m128i *)v14->m128i_i64[0];
    v27.m128i_i64[0] = v14[1].m128i_i64[0];
  }
  v15 = v14->m128i_i64[1];
  v14[1].m128i_i8[0] = 0;
  v26 = v15;
  v14->m128i_i64[0] = (__int64)v14[1].m128i_i64;
  v14->m128i_i64[1] = 0;
  if ( v30 != &v32 )
    operator delete(v30);
  if ( v28[0] != v29 )
    operator delete(v28[0]);
  if ( v33 != v35 )
    operator delete(v33);
  sub_221F830(a2, a3, v4, (__int64)v25, v26);
  *a1 = 0;
  if ( v25 != &v27 )
    operator delete(v25);
  return a1;
}
