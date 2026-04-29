__int64 __fastcall sub_3E8BB0(__m128i *a1, __int64 a2, unsigned __int8 a3, __m128 a4)
{
  _DWORD *exception; // rax
  __int64 v6; // rax
  _DWORD *v7; // rbp
  __int16 v8; // ax
  int v9; // edx

  sub_3E65E0(a1);
  if ( a1[67].m128i_i16[2] != 40 )
LABEL_17:
    sub_5C092(*(double *)a4.m128_u64);
  sub_3E65E0(a1);
  v6 = sub_3E66C0((__int64)a1, 0);
  *(_BYTE *)a2 = 4;
  *(_QWORD *)(a2 + 8) = v6;
  v7 = (_DWORD *)v6;
  sub_3E7E50(a1, v6 + 32, 1, a4);
  v8 = a1[67].m128i_i16[2];
  if ( a3 )
  {
    if ( v8 == 15420 )
    {
      v9 = 27;
      goto LABEL_5;
    }
    if ( (unsigned __int16)v8 <= 0x3C3Cu )
    {
      if ( v8 == 43 )
      {
LABEL_12:
        v9 = 26 - a3;
        goto LABEL_5;
      }
      v9 = 35;
      if ( v8 == 45 )
        goto LABEL_5;
    }
    else if ( v8 == 15934 )
    {
      v9 = 28;
      goto LABEL_5;
    }
    exception = __cxa_allocate_exception(4u);
    *exception = 47;
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'int, nullptr);
  }
  if ( ((v8 - 43) & 0xFFFD) != 0 )
    JUMPOUT(0x5CB5A);
  v9 = 30;
  if ( v8 == 43 )
    goto LABEL_12;
LABEL_5:
  *v7 = v9;
  sub_3E65E0(a1);
  sub_3E7E50(a1, (__int64)(v7 + 12), 1, a4);
  v7[17] = 1;
  *(_DWORD *)(a2 + 4) = 1;
  if ( a1[67].m128i_i16[2] != 41 )
    goto LABEL_17;
  return sub_3E65E0(a1);
}
