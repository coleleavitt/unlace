__int64 __fastcall sub_DC8F90(_QWORD *a1, __int64 *a2, unsigned __int8 a3, unsigned int a4)
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
  void *v19; // rax
  void *v21; // [rsp+0h] [rbp-E8h]
  unsigned __int8 v22; // [rsp+1Fh] [rbp-C9h] BYREF
  __m128i v23; // [rsp+20h] [rbp-C8h] BYREF
  void *v24; // [rsp+30h] [rbp-B8h] BYREF
  unsigned int v25; // [rsp+38h] [rbp-B0h]
  _BYTE v26[48]; // [rsp+40h] [rbp-A8h] BYREF
  void *ptr; // [rsp+70h] [rbp-78h] BYREF
  __m128i si128; // [rsp+78h] [rbp-70h]
  _BYTE v29[96]; // [rsp+88h] [rbp-60h] BYREF

  v7 = a1[22];
  sub_DFDA20(v7, 48);
  sub_DFF520(v26);
  sub_DFDA50(v7, 48);
  v8 = sub_DA8420((__int64)a1, a2, (__int64)v26, 0);
  if ( !(_BYTE)v8 )
    goto LABEL_11;
  v9 = v29;
  v10 = a4 >> 3;
  ptr = v29;
  si128 = _mm_load_si128((const __m128i *)&xmmword_2384CB0);
  if ( a4 >> 3 )
  {
    v11 = v29;
    if ( v10 > 0x28 )
    {
      sub_22130D0(&ptr, v29, a4 >> 3, 1);
      v9 = ptr;
      v12 = (char *)ptr + v10;
      v11 = (char *)ptr + si128.m128i_i64[0];
      if ( (char *)ptr + v10 == (char *)ptr + si128.m128i_i64[0] )
        goto LABEL_6;
    }
    else
    {
      v12 = &v29[v10];
      if ( &v29[v10] == v29 )
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
  v22 = 0;
  if ( (unsigned __int8)sub_D856A0((__int64)a1, (void **)a2, (__int64)v26, v9, a4, a4, &v22)
    && (v8 = sub_DA9650((__int64)a1, a2, v22, a3), (_BYTE)v8) )
  {
    v18.m128i_i64[0] = sub_D21CE0(a1, a4, v14, v15, v16, v17);
    v25 = a4;
    v23 = v18;
    v19 = ptr;
    if ( a4 > 0x40 )
    {
      v21 = ptr;
      sub_21E1730(&v24, 0, 0);
      v19 = v21;
    }
    else
    {
      v24 = nullptr;
    }
    sub_21E7D40(&v24, v19, a4 >> 3);
    sub_D8C910((void **)&v23, (__int64)&v24);
    if ( v25 > 0x40 && v24 )
      operator delete[](v24);
    *(__m128i *)sub_DFD980(a1[22], 16) = _mm_load_si128(&v23);
  }
  else
  {
    v8 = 0;
  }
  if ( ptr != v29 )
    free(ptr);
LABEL_11:
  sub_DFF560(v26);
  return v8;
}

