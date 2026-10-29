__int64 __fastcall sub_D1FE0(unsigned int a1, unsigned __int16 *a2, int *a3)
{
  int v3; // r14d
  __int64 result; // rax
  size_t v6; // r12
  void *v7; // r15
  __m128i v8; // xmm0
  int v9; // eax
  int v10; // edx
  unsigned __int64 i; // rdx
  __m128i v12; // [rsp+0h] [rbp-78h] BYREF
  int v13; // [rsp+10h] [rbp-68h] BYREF
  __int64 v14; // [rsp+18h] [rbp-60h]
  __m128i v15; // [rsp+20h] [rbp-58h]
  unsigned __int64 v16; // [rsp+38h] [rbp-40h]

  v3 = dword_251408;
  v16 = __readfsqword(0x28u);
  v13 = -2;
  v14 = -1;
  v15 = 0;
  if ( dword_25159C )
    v3 = HIDWORD(qword_251320);
  if ( !a2[1] )
    goto LABEL_8;
  result = sub_CE8E0(v3, a1, (__int64)&v13);
  if ( !(_BYTE)result )
    goto LABEL_9;
  if ( v13 >= -1 )
  {
    v6 = *((_QWORD *)a3 + 2);
    v7 = nullptr;
    if ( v6 )
    {
      v7 = (void *)qalloc_or_throw();
      memcpy(v7, *((const void **)a3 + 1), v6);
    }
    v8 = _mm_unpacklo_epi64((__m128i)v6, (__m128i)v6);
    if ( v14 )
    {
      v12 = v8;
      v15.m128i_i64[0] = 0;
      qfree();
      v8 = _mm_load_si128(&v12);
    }
    v14 = (__int64)v7;
    v15 = v8;
    goto LABEL_7;
  }
  if ( v13 == -2 )
  {
    v9 = a2[1];
    if ( v9 + (unsigned int)*a2 <= 0x40 )
    {
      v10 = *a3;
      if ( *a3 < -1 )
        goto LABEL_25;
      for ( i = *((_QWORD *)a3 + 2); i >= (v9 + 7) >> 3; i = 0 )
      {
        do
        {
          getinf_flag();
          if ( (unsigned __int8)bitrange_t_inject_using_bitrange() )
            goto LABEL_7;
          if ( under_debugger )
            goto LABEL_31;
          v9 = interr();
LABEL_25:
          ;
        }
        while ( v10 == -2 );
      }
      if ( under_debugger )
LABEL_31:
        BUG();
      interr();
    }
    if ( !under_debugger )
      interr();
    goto LABEL_31;
  }
LABEL_7:
  a3 = &v13;
LABEL_8:
  result = sub_D1320(v3, a1, (__int64)a3);
LABEL_9:
  if ( v13 >= -1 )
  {
    if ( v14 )
    {
      v12.m128i_i8[0] = result;
      v15.m128i_i64[0] = 0;
      qfree();
      return v12.m128i_u8[0];
    }
  }
  return result;
}

