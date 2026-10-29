void __fastcall sub_E5C780(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // r13
  __int64 v7; // rsi
  unsigned __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // r15
  __int64 v11; // r12
  __int64 v12; // rsi
  __int64 v13; // r15
  __m128i v14; // [rsp+0h] [rbp-B8h] BYREF
  _BYTE v15[16]; // [rsp+10h] [rbp-A8h] BYREF
  void *ptr; // [rsp+20h] [rbp-98h] BYREF
  __m128i si128; // [rsp+28h] [rbp-90h]
  _BYTE v18[24]; // [rsp+38h] [rbp-80h] BYREF
  __int64 v19; // [rsp+50h] [rbp-68h] BYREF
  __int64 v20; // [rsp+58h] [rbp-60h]

  LOBYTE(v3) = *(_BYTE *)(a2 + 2) >> 3;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8E00);
  v3 = (unsigned __int8)v3;
  ptr = v18;
  v4 = sub_21F8CF0((unsigned __int8)v3);
  v5 = *(_QWORD *)(a2 + 16);
  v6 = v4;
  v7 = *(unsigned int *)(a2 + 24);
  v8 = (unsigned __int64)(v7 + 63) >> 6;
  if ( v8 > 1 )
  {
    v3 = (unsigned __int64)&v14;
    sub_2205610(&v14, v7, v8, v5);
  }
  else
  {
    v14.m128i_i32[2] = v7;
    if ( (unsigned int)v7 > 0x40 )
    {
      v7 = v5;
      v3 = (unsigned __int64)&v14;
      sub_2205470(&v14, v5, 0);
    }
    else
    {
      v14.m128i_i64[0] = v5;
    }
  }
  v9 = sub_21F90D0(v3, v7, v8);
  v10 = v9;
  if ( v6 == v9 )
    sub_21FFDA0(&v19, v9, &v14);
  else
    sub_21FF7D0(&v19, v6, &v14);
  if ( v14.m128i_i32[2] > 0x40u && v14.m128i_i64[0] )
    operator delete[]((void *)v14.m128i_i64[0]);
  if ( v19 == v10 )
    sub_2204E00(&v19, &ptr, 0, 3, 1);
  else
    sub_2203EA0(&v19, &ptr, 0, 3, 1);
  if ( v19 == v10 )
  {
    if ( v20 )
    {
      v12 = 24LL * *(_QWORD *)(v20 - 8);
      v13 = v20 + v12;
      if ( v20 == v20 + v12 )
      {
        operator delete[]((void *)(v20 - 8), v12 + 8);
      }
      else
      {
        while ( 1 )
        {
          sub_9955A0((_QWORD *)(v13 - 24));
          if ( v20 == v13 - 24 )
            break;
          v13 -= 24;
        }
        operator delete[]((void *)(v13 - 32), 24LL * *(_QWORD *)(v13 - 32) + 8);
      }
    }
  }
  else
  {
    sub_21F9830(&v19);
  }
  v14.m128i_i64[0] = (__int64)v15;
  v11 = a1 + 1048;
  sub_E58600(&v14, ptr, (__int64)ptr + si128.m128i_i64[0]);
  sub_E59390((__int64)&v19, &v14);
  if ( (_BYTE *)v14.m128i_i64[0] != v15 )
    operator delete((void *)v14.m128i_i64[0]);
  sub_222AB70(v11, "value", 5);
  sub_222CAC0(v11, &v19);
  sub_2229BF0(v11);
  sub_222B2A0(&v19);
  if ( ptr != v18 )
    free(ptr);
}
