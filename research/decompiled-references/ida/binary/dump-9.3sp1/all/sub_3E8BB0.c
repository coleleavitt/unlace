__int64 __fastcall sub_3E8BB0(__m128i *a1, __m128i *a2, unsigned __int8 a3, __m128 a4)
{
  _DWORD *exception; // rax
  __m128i *v6; // r12
  __int64 v7; // rdx
  __int64 v8; // rcx
  __m128i *v9; // rax
  __m128i *v10; // rbp
  __int64 v11; // rcx
  __int16 v12; // ax
  int v13; // edx
  __int64 v14; // rcx

  v6 = a2;
  sub_3E65E0(a1);
  if ( a1[67].m128i_i16[2] != 40 )
LABEL_17:
    sub_5C092(a1, a2, *(double *)a4.m128_u64);
  sub_3E65E0(a1);
  v9 = (__m128i *)sub_3E66C0((__int64)a1, 0, v7, v8);
  a2->m128i_i8[0] = 4;
  a2->m128i_i64[1] = (__int64)v9;
  v10 = v9;
  sub_3E7E50(a1, v9 + 2, 1, v11, a4);
  v12 = a1[67].m128i_i16[2];
  if ( a3 )
  {
    if ( v12 == 15420 )
    {
      v13 = 27;
      goto LABEL_5;
    }
    if ( (unsigned __int16)v12 <= 0x3C3Cu )
    {
      if ( v12 == 43 )
      {
LABEL_12:
        v13 = 26 - a3;
        goto LABEL_5;
      }
      v13 = 35;
      if ( v12 == 45 )
        goto LABEL_5;
    }
    else if ( v12 == 15934 )
    {
      v13 = 28;
      goto LABEL_5;
    }
    exception = __cxa_allocate_exception(4u);
    *exception = 47;
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'int, nullptr);
  }
  if ( ((v12 - 43) & 0xFFFD) != 0 )
    JUMPOUT(0x5CB5A);
  v13 = 30;
  if ( v12 == 43 )
    goto LABEL_12;
LABEL_5:
  v10->m128i_i32[0] = v13;
  sub_3E65E0(a1);
  a2 = v10 + 3;
  sub_3E7E50(a1, v10 + 3, 1, v14, a4);
  v10[4].m128i_i32[1] = 1;
  v6->m128i_i32[1] = 1;
  if ( a1[67].m128i_i16[2] != 41 )
    goto LABEL_17;
  return sub_3E65E0(a1);
}
