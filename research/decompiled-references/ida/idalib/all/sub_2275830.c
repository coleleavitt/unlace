__int64 __fastcall sub_2275830(__int64 a1, char *a2, __int64 a3, char a4)
{
  char *v4; // rbp
  char *v5; // r15
  char v6; // r13
  __int64 v7; // r14
  __int64 v8; // rax
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // rdx
  __int64 v11; // rax
  unsigned __int64 v13; // rax
  unsigned int v14; // r13d
  unsigned __int64 v15; // rax
  _BYTE *v16; // rsi
  unsigned __int64 v17; // rax
  char v18; // dl
  char *v19; // rsi
  size_t v20; // rax
  __m128i *v21; // rax
  __m128i *v22; // rax
  __int64 v23; // rdx
  char *v24; // rsi
  unsigned __int64 v26; // [rsp+28h] [rbp-C0h]
  void *v27; // [rsp+30h] [rbp-B8h] BYREF
  size_t v28; // [rsp+38h] [rbp-B0h]
  _BYTE v29[16]; // [rsp+40h] [rbp-A8h] BYREF
  void *v30[2]; // [rsp+50h] [rbp-98h] BYREF
  _BYTE v31[16]; // [rsp+60h] [rbp-88h] BYREF
  __m128i v32; // [rsp+70h] [rbp-78h] BYREF
  __m128i v33; // [rsp+80h] [rbp-68h] BYREF
  void *ptr; // [rsp+90h] [rbp-58h] BYREF
  _BYTE v35[72]; // [rsp+98h] [rbp-50h] BYREF

  v4 = &a2[a3];
  *(_QWORD *)a1 = a1 + 16;
  *(_QWORD *)(a1 + 8) = 0;
  *(_BYTE *)(a1 + 16) = 0;
  if ( &a2[a3] != a2 )
  {
    v5 = a2;
    while ( 1 )
    {
      v6 = *v5;
      if ( *v5 == 92 )
      {
        while ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - *(_QWORD *)(a1 + 8)) > 1 )
        {
          sub_9EE560((_QWORD *)a1, "\\\\", 2u);
LABEL_24:
          if ( v4 == ++v5 )
            return a1;
          v6 = *v5;
          if ( *v5 != 92 )
            goto LABEL_4;
        }
        goto LABEL_90;
      }
LABEL_4:
      switch ( v6 )
      {
        case 34:
          if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - *(_QWORD *)(a1 + 8)) > 1 )
          {
            sub_9EE560((_QWORD *)a1, "\\\"", 2u);
            goto LABEL_24;
          }
          goto LABEL_90;
        case 0:
          if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - *(_QWORD *)(a1 + 8)) > 1 )
          {
            sub_9EE560((_QWORD *)a1, "\\0", 2u);
            goto LABEL_24;
          }
          goto LABEL_90;
        case 7:
          sub_9EE7C0((_QWORD *)a1, "\\a");
          goto LABEL_24;
        case 8:
          sub_9EE7C0((_QWORD *)a1, "\\b");
          goto LABEL_24;
        case 9:
          sub_9EE7C0((_QWORD *)a1, "\\t");
          goto LABEL_24;
        case 10:
          sub_9EE7C0((_QWORD *)a1, "\\n");
          goto LABEL_24;
        case 11:
          sub_9EE7C0((_QWORD *)a1, "\\v");
          goto LABEL_24;
        case 12:
          sub_9EE7C0((_QWORD *)a1, "\\f");
          goto LABEL_24;
        case 13:
          sub_9EE7C0((_QWORD *)a1, "\\r");
          goto LABEL_24;
        case 27:
          sub_9EE7C0((_QWORD *)a1, "\\e");
          goto LABEL_24;
      }
      if ( (unsigned __int8)v6 <= 0x1Fu )
      {
        v17 = v6;
        v18 = a0123456789abcd_3[v6 & 0xF];
        v19 = &v35[9];
        do
        {
          --v19;
          v17 >>= 4;
          *v19 = v18;
          v18 = 49;
        }
        while ( v17 );
        v27 = v29;
        sub_226E090(&v27, v19, (__int64)&v35[9]);
        v30[0] = v31;
        sub_2096AC0(v30, 2 - v28, 48);
        v20 = j__strlen("\\x");
        v21 = (__m128i *)sub_99BDC0(v30, 0, 0, "\\x", v20);
        v32.m128i_i64[0] = (__int64)&v33;
        if ( (__m128i *)v21->m128i_i64[0] == &v21[1] )
        {
          v33 = _mm_loadu_si128(v21 + 1);
        }
        else
        {
          v32.m128i_i64[0] = v21->m128i_i64[0];
          v33.m128i_i64[0] = v21[1].m128i_i64[0];
        }
        v32.m128i_i64[1] = v21->m128i_i64[1];
        v21->m128i_i64[0] = (__int64)v21[1].m128i_i64;
        v21->m128i_i64[1] = 0;
        v21[1].m128i_i8[0] = 0;
        v22 = (__m128i *)sub_9EE560(&v32, v27, v28);
        ptr = &v35[8];
        if ( (__m128i *)v22->m128i_i64[0] == &v22[1] )
        {
          *(__m128i *)&v35[8] = _mm_loadu_si128(v22 + 1);
        }
        else
        {
          ptr = (void *)v22->m128i_i64[0];
          *(_QWORD *)&v35[8] = v22[1].m128i_i64[0];
        }
        *(_QWORD *)v35 = v22->m128i_i64[1];
        v22->m128i_i64[0] = (__int64)v22[1].m128i_i64;
        v22->m128i_i64[1] = 0;
        v22[1].m128i_i8[0] = 0;
        sub_9EE560((_QWORD *)a1, ptr, *(size_t *)v35);
        if ( ptr != &v35[8] )
          operator delete(ptr);
        if ( (__m128i *)v32.m128i_i64[0] != &v33 )
          operator delete((void *)v32.m128i_i64[0]);
        if ( v30[0] != v31 )
          operator delete(v30[0]);
        if ( v27 != v29 )
          operator delete(v27);
        goto LABEL_24;
      }
      if ( v6 < 0 )
        break;
      v7 = *(_QWORD *)(a1 + 8);
      v8 = *(_QWORD *)a1;
      v9 = v7 + 1;
      if ( a1 + 16 == *(_QWORD *)a1 )
        v10 = 15;
      else
        v10 = *(_QWORD *)(a1 + 16);
      if ( v9 > v10 )
      {
        sub_998B30(a1, *(_QWORD *)(a1 + 8), 0, nullptr, 1u);
        v8 = *(_QWORD *)a1;
        v9 = v7 + 1;
      }
      *(_BYTE *)(v8 + v7) = v6;
      v11 = *(_QWORD *)a1;
      ++v5;
      *(_QWORD *)(a1 + 8) = v9;
      *(_BYTE *)(v11 + v7 + 1) = 0;
      if ( v4 == v5 )
        return a1;
    }
    v13 = sub_226DDA0(v5, v4 - v5);
    v14 = v13;
    v26 = HIDWORD(v13);
    if ( HIDWORD(v13) )
    {
      switch ( (_DWORD)v13 )
      {
        case 0x85:
          sub_9EE7C0((_QWORD *)a1, "\\N");
          goto LABEL_70;
        case 0xA0:
          sub_9EE7C0((_QWORD *)a1, "\\_");
          goto LABEL_70;
        case 0x2028:
          sub_9EE7C0((_QWORD *)a1, "\\L");
          goto LABEL_70;
        case 0x2029:
          sub_9EE7C0((_QWORD *)a1, "\\P");
          goto LABEL_70;
      }
      if ( a4 || !sub_2254860(v13) )
      {
        v15 = v14;
        if ( v14 )
        {
          v16 = &v35[9];
          do
          {
            --v16;
            v23 = v15 & 0xF;
            v15 >>= 4;
            *v16 = a0123456789abcd_3[v23];
          }
          while ( v15 );
        }
        else
        {
          v35[8] = 48;
          v16 = &v35[8];
        }
        v27 = v29;
        sub_226E090(&v27, v16, (__int64)&v35[9]);
        if ( v28 <= 2 )
        {
          v30[0] = v31;
          sub_2096AC0(v30, 2 - v28, 48);
          v24 = "\\x";
        }
        else if ( v28 <= 4 )
        {
          v30[0] = v31;
          sub_2096AC0(v30, 4 - v28, 48);
          v24 = "\\u";
        }
        else
        {
          if ( v28 > 8 )
            goto LABEL_47;
          v30[0] = v31;
          sub_2096AC0(v30, 8 - v28, 48);
          v24 = "\\U";
        }
        sub_E7ED70(&v32, v24, v30);
        sub_12182E0((__m128i *)&ptr, &v32, (__int64)&v27);
        sub_9EE560((_QWORD *)a1, ptr, *(size_t *)v35);
        if ( ptr != &v35[8] )
          operator delete(ptr);
        if ( (__m128i *)v32.m128i_i64[0] != &v33 )
          operator delete((void *)v32.m128i_i64[0]);
        if ( v30[0] != v31 )
          operator delete(v30[0]);
LABEL_47:
        if ( v27 != v29 )
          operator delete(v27);
LABEL_70:
        v5 += (unsigned int)(v26 - 1);
        goto LABEL_24;
      }
      if ( (unsigned int)v26 <= (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - *(_QWORD *)(a1 + 8)) )
      {
        sub_9EE560((_QWORD *)a1, v5, (unsigned int)v26);
        goto LABEL_70;
      }
LABEL_90:
      std::__throw_length_error("basic_string::append");
    }
    ptr = &v35[16];
    *(__m128i *)v35 = _mm_load_si128((const __m128i *)&xmmword_23A8870);
    sub_FC8050(&ptr, -17);
    sub_FC8050(&ptr, -65);
    sub_FC8050(&ptr, -67);
    sub_99BDC0((_QWORD *)a1, *(_QWORD *)(a1 + 8), 0, ptr, *(size_t *)v35);
    if ( ptr != &v35[16] )
      free(ptr);
  }
  return a1;
}
