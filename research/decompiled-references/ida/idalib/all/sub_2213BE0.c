void __fastcall sub_2213BE0(unsigned __int8 *a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  unsigned __int8 *v5; // rbp
  unsigned __int8 *v6; // rbx
  __int64 v8; // r12
  unsigned __int64 v9; // rax
  unsigned __int8 *v10; // rsi
  unsigned __int8 *v11; // r15
  unsigned __int8 v12; // al
  unsigned __int64 v13; // rax
  void *ptr; // [rsp+10h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+18h] [rbp-D0h]
  _BYTE v18[192]; // [rsp+28h] [rbp-C0h] BYREF

  v5 = &a1[a2];
  if ( a1 == &a1[a2] )
    return;
  v6 = a1;
  v8 = 0x100002600LL;
  do
  {
    while ( 1 )
    {
      ptr = v18;
      v9 = *v6;
      si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
      if ( (unsigned __int8)v9 > 0x20u )
      {
        if ( (_BYTE)v9 == 35 )
        {
          do
            ++v6;
          while ( v6 != v5 && *v6 != 10 );
          goto LABEL_17;
        }
        break;
      }
      if ( !_bittest64(&v8, v9) )
        break;
      while ( 1 )
      {
        v13 = *v6;
        if ( (unsigned __int8)v13 > 0x20u )
          break;
        if ( _bittest64(&v8, v13) )
        {
          if ( ++v6 != v5 )
            continue;
        }
        goto LABEL_17;
      }
      if ( v6 == v5 )
        return;
    }
    v10 = v6;
    while ( 1 )
    {
      if ( (_BYTE)v9 != 92 )
      {
        if ( (_BYTE)v9 == 10 )
          goto LABEL_27;
        v11 = v6++;
        goto LABEL_8;
      }
      v11 = v6 + 1;
      if ( v6 + 1 == v5 )
        break;
      v12 = v6[1];
      if ( v12 != 10 )
      {
        if ( v12 != 13 )
        {
          v6 += 2;
          goto LABEL_8;
        }
        if ( v5 == v6 + 2 )
        {
          v6 = v5;
          goto LABEL_8;
        }
        if ( v6[2] != 10 )
        {
          v6 += 2;
          goto LABEL_8;
        }
      }
      sub_A1FE50(&ptr, v10, v6);
      if ( v6[1] == 13 )
        v11 = v6 + 2;
      v6 = v11 + 1;
      v10 = v11 + 1;
LABEL_8:
      if ( v5 == v6 )
        goto LABEL_27;
      LOBYTE(v9) = v11[1];
    }
    v6 = v5;
LABEL_27:
    sub_A1FE50(&ptr, v10, v6);
    sub_2211220((__int64)ptr, si128.m128i_u64[0], a3, a4, a5);
    if ( ptr != v18 )
      free(ptr);
LABEL_17:
    ;
  }
  while ( v6 != v5 );
}
