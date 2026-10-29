__int64 __fastcall sub_118EFC0(__int64 a1, __int64 *a2)
{
  __int64 v3; // rax
  const char **v4; // rax
  const char *v5; // r13
  size_t v6; // rax
  size_t v7; // r12
  _BYTE *v8; // rdi
  __int64 result; // rax
  char *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // [rsp+8h] [rbp-130h]
  __m128i v15[2]; // [rsp+10h] [rbp-128h] BYREF
  __int16 v16; // [rsp+30h] [rbp-108h]
  __m128i v17[2]; // [rsp+40h] [rbp-F8h] BYREF
  __int16 v18; // [rsp+60h] [rbp-D8h]
  _BYTE ptr[24]; // [rsp+70h] [rbp-C8h] BYREF
  _BYTE v20[176]; // [rsp+88h] [rbp-B0h] BYREF

  v3 = sub_10DCD30(a1, 0xC2Cu);
  if ( v3 )
  {
    v4 = *(const char ***)(v3 + 48);
    v5 = *v4;
    if ( *v4 )
    {
      v6 = strlen(*v4);
      v7 = v6;
      *(_QWORD *)ptr = v20;
      *(__m128i *)&ptr[8] = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
      if ( v6 > 0x80 )
      {
        sub_2236E10(ptr, v20, v6, 1);
        v8 = (_BYTE *)(*(_QWORD *)ptr + *(_QWORD *)&ptr[8]);
LABEL_5:
        memcpy(v8, v5, v7);
        v6 = v7 + *(_QWORD *)&ptr[8];
        goto LABEL_6;
      }
      if ( v6 )
      {
        v8 = v20;
        goto LABEL_5;
      }
    }
    else
    {
      *(_QWORD *)ptr = v20;
      v6 = 0;
      *(__m128i *)&ptr[8] = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
    }
LABEL_6:
    *(_QWORD *)&ptr[8] = v6;
    v18 = 264;
    v17[0].m128i_i8[0] = 100;
    sub_228A730(ptr, v17, 0);
    v18 = 261;
    v17[0] = *(__m128i *)ptr;
    result = sub_10DA6C0(a1, (__int64)v17);
    if ( *(_BYTE **)ptr != v20 )
    {
      v14 = result;
      free(*(void **)ptr);
      return v14;
    }
    return result;
  }
  v17[0].m128i_i64[0] = (__int64)".d";
  v18 = 259;
  v10 = sub_118A5A0(a1, a2);
  v16 = 257;
  if ( *v10 )
  {
    v15[0].m128i_i64[0] = (__int64)v10;
    LOBYTE(v16) = 3;
  }
  sub_A41580((__m128i *)ptr, v15, v17, v11, v12, v13);
  return sub_10DA6C0(a1, (__int64)ptr);
}
