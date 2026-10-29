__int64 __fastcall sub_DEA9D0(_QWORD *a1, __int64 *a2, unsigned __int8 a3, unsigned int a4, __int64 a5)
{
  __int64 v8; // r12
  unsigned int v9; // r12d
  char *v10; // rdi
  unsigned __int64 v11; // r12
  char *v12; // rdx
  unsigned int v13; // eax
  __m128i v15; // rax
  void *v16; // r13
  unsigned int v17; // eax
  unsigned __int64 v18; // rcx
  __int64 v19; // rdx
  unsigned __int64 v21; // [rsp+8h] [rbp-100h]
  unsigned __int8 v22; // [rsp+1Fh] [rbp-E9h] BYREF
  __m128i v23; // [rsp+20h] [rbp-E8h] BYREF
  void *v24; // [rsp+30h] [rbp-D8h] BYREF
  unsigned int v25; // [rsp+38h] [rbp-D0h]
  _QWORD v26[4]; // [rsp+40h] [rbp-C8h] BYREF
  _BYTE v27[48]; // [rsp+60h] [rbp-A8h] BYREF
  void *ptr; // [rsp+90h] [rbp-78h] BYREF
  __m128i si128; // [rsp+98h] [rbp-70h]
  _BYTE s[96]; // [rsp+A8h] [rbp-60h] BYREF

  v8 = a1[22];
  sub_E21760(v8, 48);
  sub_E23260(v27);
  sub_E21790(v8, 48);
  v9 = sub_DCC160((__int64)a1, a2, (__int64)v27, 0);
  if ( !(_BYTE)v9 )
    goto LABEL_11;
  v10 = s;
  v11 = a4 >> 3;
  ptr = s;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8CF0);
  if ( a4 >> 3 )
  {
    if ( v11 > 0x28 )
    {
      sub_2236E10(&ptr, s, a4 >> 3, 1);
      v10 = (char *)ptr + si128.m128i_i64[0];
      v12 = (char *)ptr + v11;
      if ( (char *)ptr + v11 == (char *)ptr + si128.m128i_i64[0] )
        goto LABEL_6;
    }
    else
    {
      v12 = &s[v11];
      if ( &s[v11] == s )
      {
LABEL_6:
        si128.m128i_i64[0] = a4 >> 3;
        goto LABEL_7;
      }
    }
    memset(v10, 0, v12 - v10);
    goto LABEL_6;
  }
LABEL_7:
  v22 = 0;
  v13 = sub_21F9130(a5);
  if ( (unsigned __int8)sub_DA93E0((__int64)a1, (void **)a2, (__int64)v27, ptr, v13, a4, &v22)
    && (v9 = sub_DCD390((__int64)a1, a2, v22, a3), (_BYTE)v9) )
  {
    v15.m128i_i64[0] = sub_D421E0(a1, a5);
    v16 = ptr;
    v23 = v15;
    v17 = sub_21F9120(a5);
    v18 = v17;
    v25 = v17;
    if ( v17 > 0x40 )
    {
      v21 = v17;
      sub_2205470(&v24, 1, 0);
      v18 = v21;
    }
    else
    {
      v24 = &dword_0 + 1;
    }
    sub_220BA80(&v24, v16, v18 >> 3);
    if ( a5 == sub_21F90D0(&v24, v16, v19) )
      sub_21FFDA0(v26, a5, &v24);
    else
      sub_21FF7D0(v26, a5, &v24);
    sub_CFED10((__int64)&v23, v26);
    sub_9955A0(v26);
    if ( v25 > 0x40 && v24 )
      operator delete[](v24);
    *(__m128i *)sub_E216C0(a1[22], 16) = _mm_load_si128(&v23);
  }
  else
  {
    v9 = 0;
  }
  if ( ptr != s )
    free(ptr);
LABEL_11:
  sub_E232A0(v27);
  return v9;
}
