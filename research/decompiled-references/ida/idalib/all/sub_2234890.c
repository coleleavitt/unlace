_QWORD *__fastcall sub_2234890(_QWORD *a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rax
  unsigned int v5; // r13d
  char v6; // al
  char *v7; // rcx
  _QWORD *v8; // rdx
  __m128i *v9; // rax
  unsigned __int64 v11; // rcx
  char *v12; // rsi
  char *v13; // rbx
  _QWORD *v14; // rax
  char *v16; // [rsp+10h] [rbp-88h]
  void *v17[2]; // [rsp+20h] [rbp-78h] BYREF
  _QWORD v18[2]; // [rsp+30h] [rbp-68h] BYREF
  void *v19; // [rsp+40h] [rbp-58h]
  __int64 v20; // [rsp+48h] [rbp-50h]
  __m128i v21; // [rsp+50h] [rbp-48h] BYREF

  v4 = sub_2219FE0((char *)(a2 + 160), (char *)(a2 + 184), (_QWORD *)(a2 + 192));
  v5 = v4;
  if ( !v4 )
  {
    v17[0] = v18;
    v6 = 48;
LABEL_3:
    LOBYTE(v18[0]) = v6;
    v7 = (_BYTE *)(&dword_0 + 1);
    v8 = v18;
    goto LABEL_4;
  }
  v11 = v4;
  v12 = &v21.m128i_i8[5];
  while ( 1 )
  {
    --v12;
    v6 = v11 % 0xA + 48;
    *v12 = v6;
    if ( v11 <= 9 )
      break;
    v11 /= 0xAu;
  }
  v13 = (char *)(&v21.m128i_u8[5] - (unsigned __int8 *)v12);
  v8 = v18;
  v7 = (char *)(&v21.m128i_u8[5] - (unsigned __int8 *)v12);
  v17[0] = v18;
  if ( (unsigned __int64)(&v21.m128i_u8[5] - (unsigned __int8 *)v12) > 0xF )
  {
    if ( (__int64)v13 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    v14 = (_QWORD *)operator new((unsigned __int64)(v13 + 1));
    v18[0] = &v21.m128i_u8[5] - (unsigned __int8 *)v12;
    v7 = (char *)(&v21.m128i_u8[5] - (unsigned __int8 *)v12);
    v17[0] = v14;
    goto LABEL_17;
  }
  if ( v13 == (_BYTE *)&dword_0 + 1 )
    goto LABEL_3;
  if ( v13 )
  {
    v14 = v18;
LABEL_17:
    v16 = v7;
    memcpy(v14, v12, (size_t)v13);
    v8 = v17[0];
    v7 = v16;
  }
LABEL_4:
  v17[1] = v7;
  v7[(_QWORD)v8] = 0;
  v9 = (__m128i *)sub_99BDC0(v17, 0, 0, "Atomic ABI is ", 0xEu);
  v19 = &v21;
  if ( (__m128i *)v9->m128i_i64[0] == &v9[1] )
  {
    v21 = _mm_loadu_si128(v9 + 1);
  }
  else
  {
    v19 = (void *)v9->m128i_i64[0];
    v21.m128i_i64[0] = v9[1].m128i_i64[0];
  }
  v20 = v9->m128i_i64[1];
  v9->m128i_i64[0] = (__int64)v9[1].m128i_i64;
  v9->m128i_i64[1] = 0;
  v9[1].m128i_i8[0] = 0;
  sub_221F830(a2, a3, v5, (__int64)v19, v20);
  if ( v19 != &v21 )
    operator delete(v19);
  if ( v17[0] != v18 )
    operator delete(v17[0]);
  *a1 = 0;
  return a1;
}
