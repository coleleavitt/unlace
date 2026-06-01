__int64 __fastcall sub_DED920(_QWORD *a1, __int64 *a2, unsigned __int8 a3, unsigned int a4)
{
  __int64 v7; // r12
  unsigned int v8; // r15d
  _BYTE *v9; // rsi
  unsigned __int64 v10; // r15
  char *v11; // rdi
  char *v12; // rdx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __m128i v18; // rax
  void *v19; // r13
  unsigned __int8 v21; // [rsp+1Fh] [rbp-C9h] BYREF
  __m128i v22; // [rsp+20h] [rbp-C8h] BYREF
  void *v23; // [rsp+30h] [rbp-B8h] BYREF
  unsigned int v24; // [rsp+38h] [rbp-B0h]
  _BYTE v25[48]; // [rsp+40h] [rbp-A8h] BYREF
  void *ptr; // [rsp+70h] [rbp-78h] BYREF
  __m128i si128; // [rsp+78h] [rbp-70h]
  _BYTE v28[96]; // [rsp+88h] [rbp-60h] BYREF

  v7 = a1[22];
  sub_E21760(v7, 48);
  sub_E23260(v25);
  sub_E21790(v7, 48);
  v8 = sub_DCC160((__int64)a1, a2, (__int64)v25, 0);
  if ( !(_BYTE)v8 )
    goto LABEL_11;
  v9 = v28;
  v10 = a4 >> 3;
  ptr = v28;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8CF0);
  if ( a4 >> 3 )
  {
    v11 = v28;
    if ( v10 > 0x28 )
    {
      sub_2236E10(&ptr, v28, a4 >> 3, 1);
      v9 = ptr;
      v12 = (char *)ptr + v10;
      v11 = (char *)ptr + si128.m128i_i64[0];
      if ( (char *)ptr + v10 == (char *)ptr + si128.m128i_i64[0] )
        goto LABEL_6;
    }
    else
    {
      v12 = &v28[v10];
      if ( &v28[v10] == v28 )
      {
LABEL_6:
        si128.m128i_i64[0] = a4 >> 3;
        goto LABEL_7;
      }
    }
    memset(v11, 0, v12 - v11);
    v9 = ptr;
    goto LABEL_6;
  }
LABEL_7:
  v21 = 0;
  if ( (unsigned __int8)sub_DA93E0((__int64)a1, (void **)a2, (__int64)v25, v9, a4, a4, &v21)
    && (v8 = sub_DCD390((__int64)a1, a2, v21, a3), (_BYTE)v8) )
  {
    v18.m128i_i64[0] = sub_D44EB0(a1, a4, v14, v15, v16, v17);
    v19 = ptr;
    v24 = a4;
    v22 = v18;
    if ( a4 > 0x40 )
    {
      sub_2205470(&v23, 0, 1);
    }
    else
    {
      v23 = nullptr;
      sub_CF8100((unsigned __int64 *)&v23);
    }
    sub_220BA80(&v23, v19, a4 >> 3);
    sub_D0C590((void **)&v22, (__int64)&v23);
    if ( v24 > 0x40 && v23 )
      operator delete[](v23);
    *(__m128i *)sub_E216C0(a1[22], 16) = _mm_load_si128(&v22);
  }
  else
  {
    v8 = 0;
  }
  if ( ptr != v28 )
    free(ptr);
LABEL_11:
  sub_E232A0(v25);
  return v8;
}
