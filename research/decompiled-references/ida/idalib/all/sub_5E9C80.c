__int64 __fastcall sub_5E9C80(__m128i *a1)
{
  void *v2; // rax
  __m128i v3; // xmm1
  void *v4; // rdx
  __m128i v5; // xmm0
  __m128i v6; // xmm1
  void *v7; // rax
  unsigned int v8; // ebp
  const char *v10; // rbp
  __int64 v11; // rdx
  __int64 v12; // rax
  size_t v13; // r12
  __int64 v14; // rbp
  unsigned __int64 v15; // r14
  __int64 v16; // rdi
  void *ptr; // [rsp+0h] [rbp-88h] BYREF
  __m128i v18; // [rsp+8h] [rbp-80h] BYREF
  void *v19; // [rsp+20h] [rbp-68h] BYREF
  __m128i v20; // [rsp+28h] [rbp-60h]
  void *v21; // [rsp+38h] [rbp-50h]
  __m128i v22; // [rsp+40h] [rbp-48h] BYREF
  _BYTE src[5]; // [rsp+53h] [rbp-35h] BYREF
  unsigned __int64 v24[6]; // [rsp+58h] [rbp-30h] BYREF

  v24[0] = __readfsqword(0x28u);
  ptr = nullptr;
  v21 = nullptr;
  v22 = 0;
  v18 = 0;
  v2 = (void *)a1[2].m128i_i64[1];
  a1[2].m128i_i64[1] = 0;
  v3 = _mm_loadu_si128(a1 + 3);
  a1[3] = 0;
  v19 = v2;
  v20 = v3;
  if ( (unsigned int)sub_5E8BB0((__int64)a1)
    || a1[4].m128i_i16[0] != 40
    || (unsigned int)sub_5E8BB0((__int64)a1)
    || a1[4].m128i_i16[0] != 2
    || !a1[3].m128i_i64[0] )
  {
    goto LABEL_3;
  }
  v10 = (const char *)a1[2].m128i_i64[1];
  if ( !strcmp(v10, "printf") )
  {
    v11 = 0;
  }
  else if ( !strcmp(v10, "scanf") )
  {
    v11 = 1;
  }
  else if ( !strcmp(v10, "strftime") )
  {
    v11 = 2;
  }
  else
  {
    if ( strcmp(v10, "strfmon") )
    {
LABEL_3:
      v4 = ptr;
      v5 = _mm_load_si128(&v22);
      v6 = _mm_loadu_si128(&v18);
      v7 = v21;
      goto LABEL_4;
    }
    v11 = 3;
  }
  v12 = pack_dd(src, v24, v11) - (_QWORD)src;
  v13 = v12;
  if ( v12 )
  {
    v14 = v18.m128i_i64[0];
    v15 = v18.m128i_i64[0] + v12;
    if ( __CFADD__(v18.m128i_i64[0], v12) )
    {
      if ( v18.m128i_i64[0] > 0x7FFFFFFFFFFFFFFEuLL )
      {
        if ( v18.m128i_i64[0] != 0x7FFFFFFFFFFFFFFFLL )
          v18.m128i_i64[0] = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_27;
      }
      v15 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v16 = v18.m128i_i64[0];
    if ( v18.m128i_i64[1] < v15 )
    {
      ptr = (void *)qvector_reserve(&ptr, ptr, v15, 1);
      v16 = v18.m128i_i64[0];
    }
    memset((char *)ptr + v16, 0, v15 - v16);
    v18.m128i_i64[0] = v15;
LABEL_27:
    memcpy((char *)ptr + v14, src, v13);
  }
  if ( (unsigned int)sub_5E8BB0((__int64)a1) )
    goto LABEL_3;
  if ( a1[4].m128i_i16[0] != 44 )
    goto LABEL_3;
  if ( (unsigned int)sub_5E8BB0((__int64)a1) )
    goto LABEL_3;
  if ( a1[4].m128i_i16[0] != 3 )
    goto LABEL_3;
  sub_3A0970((__int64 *)&ptr, a1[4].m128i_u32[2]);
  if ( (unsigned int)sub_5E8BB0((__int64)a1)
    || a1[4].m128i_i16[0] != 44
    || (unsigned int)sub_5E8BB0((__int64)a1)
    || a1[4].m128i_i16[0] != 3 )
  {
    goto LABEL_3;
  }
  sub_3A0970((__int64 *)&ptr, a1[4].m128i_u32[2]);
  v8 = sub_5E8BB0((__int64)a1);
  v5 = _mm_load_si128(&v22);
  v6 = _mm_loadu_si128(&v18);
  v7 = v21;
  v4 = ptr;
  if ( !v8 && a1[4].m128i_i16[0] == 41 )
  {
    v21 = ptr;
    ptr = v7;
    v22 = v6;
    v18 = v5;
    sub_5E9C00(a1, (__int64)&v19);
    goto LABEL_7;
  }
LABEL_4:
  v21 = v4;
  ptr = v7;
  v22 = v6;
  v18 = v5;
  if ( !(unsigned int)get_qerrno() )
    set_qerrno(47);
  v8 = 47;
LABEL_7:
  if ( ptr )
  {
    v18.m128i_i64[0] = 0;
    qfree(ptr);
  }
  if ( v21 )
  {
    v22.m128i_i64[0] = 0;
    qfree(v21);
  }
  if ( v19 )
  {
    v20.m128i_i64[0] = 0;
    qfree(v19);
  }
  return v8;
}
