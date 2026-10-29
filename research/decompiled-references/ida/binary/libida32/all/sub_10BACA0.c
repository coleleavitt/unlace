__int64 __fastcall sub_10BACA0(__int64 a1, const void *a2, size_t a3, _BYTE *a4, __int64 a5, unsigned int a6)
{
  __int64 v9; // rax
  __int64 v10; // rbp
  char *v12; // rdi
  char *v13; // rbp
  __int64 v15; // [rsp+8h] [rbp-1A0h]
  __int64 v16; // [rsp+8h] [rbp-1A0h]
  _QWORD v17[4]; // [rsp+10h] [rbp-198h] BYREF
  __int16 v18; // [rsp+30h] [rbp-178h]
  _BYTE v19[32]; // [rsp+40h] [rbp-168h] BYREF
  __int16 v20; // [rsp+60h] [rbp-148h]
  _BYTE v21[32]; // [rsp+70h] [rbp-138h] BYREF
  __int16 v22; // [rsp+90h] [rbp-118h]
  _QWORD v23[4]; // [rsp+A0h] [rbp-108h] BYREF
  __int16 v24; // [rsp+C0h] [rbp-E8h]
  void *ptr; // [rsp+D0h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+D8h] [rbp-D0h]
  _BYTE v27[192]; // [rsp+E8h] [rbp-C0h] BYREF

  si128 = _mm_load_si128((const __m128i *)&xmmword_2384D00);
  ptr = v27;
  if ( a3 > 0x80 )
  {
    v16 = a5;
    sub_22130D0(&ptr, v27, a3, 1);
    a5 = v16;
    v12 = (char *)ptr + si128.m128i_i64[0];
  }
  else
  {
    if ( !a3 )
    {
      sub_9FC110(&ptr, a4, &a4[a5]);
      goto LABEL_4;
    }
    v12 = v27;
  }
  v15 = a5;
  memcpy(v12, a2, a3);
  si128.m128i_i64[0] += a3;
  if ( (unsigned __int8)sub_2266F60((unsigned int)*((char *)ptr + si128.m128i_i64[0] - 1), 0) )
  {
    v17[1] = v15;
    v24 = 257;
    v22 = 257;
    v20 = 257;
    v18 = 261;
    v17[0] = a4;
    sub_2266670(&ptr, v17, v19, v21, v23);
  }
LABEL_4:
  v23[0] = a2;
  v24 = 261;
  v23[1] = a3;
  if ( (unsigned __int8)sub_22671F0(v23, 0) )
    goto LABEL_5;
  v13 = (char *)sub_12A8C00(a6, 1);
  if ( a6 == 60 && sub_10BA920(a1, 0x88Fu, 0x88Eu) )
  {
    HIBYTE(v24) = 1;
    v13 = "dll";
  }
  else
  {
    v24 = 257;
    if ( !*v13 )
    {
      sub_22669F0(&ptr, v23, 0);
      goto LABEL_5;
    }
  }
  v23[0] = v13;
  LOBYTE(v24) = 3;
  sub_22669F0(&ptr, v23, 0);
LABEL_5:
  v9 = si128.m128i_i64[0];
  if ( (unsigned __int64)(si128.m128i_i64[0] + 1) > si128.m128i_i64[1] )
  {
    sub_22130D0(&ptr, v27, si128.m128i_i64[0] + 1, 1);
    v9 = si128.m128i_i64[0];
  }
  *((_BYTE *)ptr + v9) = 0;
  v24 = 257;
  if ( *(_BYTE *)ptr )
  {
    v23[0] = ptr;
    LOBYTE(v24) = 3;
  }
  v10 = sub_10B6980(a1, (__int64)v23);
  if ( ptr != v27 )
    free(ptr);
  return v10;
}

