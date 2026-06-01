__int64 __fastcall sub_5CDE90(__m128i *a1, const char *a2)
{
  void *v3; // rax
  __m128i v4; // xmm1
  void *v5; // rdx
  __m128i v6; // xmm0
  __m128i v7; // xmm1
  void *v8; // rax
  unsigned int v9; // ebp
  const char *v11; // rbp
  __int64 v12; // rdx
  __int64 v13; // rax
  size_t v14; // r12
  __int64 v15; // rbp
  unsigned __int64 v16; // r14
  __int64 v17; // rdi
  void *ptr; // [rsp+0h] [rbp-88h] BYREF
  __m128i v19; // [rsp+8h] [rbp-80h] BYREF
  void *v20; // [rsp+20h] [rbp-68h] BYREF
  __m128i v21; // [rsp+28h] [rbp-60h]
  void *v22; // [rsp+38h] [rbp-50h]
  __m128i v23; // [rsp+40h] [rbp-48h] BYREF
  _BYTE src[5]; // [rsp+53h] [rbp-35h] BYREF
  _QWORD v25[6]; // [rsp+58h] [rbp-30h] BYREF

  v25[0] = __readfsqword(0x28u);
  ptr = nullptr;
  v22 = nullptr;
  v23 = 0;
  v19 = 0;
  v3 = (void *)a1[2].m128i_i64[1];
  a1[2].m128i_i64[1] = 0;
  v4 = _mm_loadu_si128(a1 + 3);
  a1[3] = 0;
  v20 = v3;
  v21 = v4;
  if ( (unsigned int)sub_5CCDC0(a1, a2)
    || a1[4].m128i_i16[0] != 40
    || (unsigned int)sub_5CCDC0(a1, a2)
    || a1[4].m128i_i16[0] != 2
    || !a1[3].m128i_i64[0] )
  {
    goto LABEL_3;
  }
  v11 = (const char *)a1[2].m128i_i64[1];
  if ( !strcmp(v11, "printf") )
  {
    v12 = 0;
  }
  else if ( !strcmp(v11, "scanf") )
  {
    v12 = 1;
  }
  else if ( !strcmp(v11, "strftime") )
  {
    v12 = 2;
  }
  else
  {
    a2 = "strfmon";
    if ( strcmp(v11, "strfmon") )
    {
LABEL_3:
      v5 = ptr;
      v6 = _mm_load_si128(&v23);
      v7 = _mm_loadu_si128(&v19);
      v8 = v22;
      goto LABEL_4;
    }
    v12 = 3;
  }
  a2 = (const char *)v25;
  v13 = pack_dd(src, v25, v12) - (_QWORD)src;
  v14 = v13;
  if ( v13 )
  {
    v15 = v19.m128i_i64[0];
    v16 = v19.m128i_i64[0] + v13;
    if ( __CFADD__(v19.m128i_i64[0], v13) )
    {
      if ( v19.m128i_i64[0] > 0x7FFFFFFFFFFFFFFEuLL )
      {
        if ( v19.m128i_i64[0] != 0x7FFFFFFFFFFFFFFFLL )
          v19.m128i_i64[0] = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_27;
      }
      v16 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v17 = v19.m128i_i64[0];
    if ( v19.m128i_i64[1] < v16 )
    {
      ptr = (void *)qvector_reserve(&ptr, ptr, v16, 1);
      v17 = v19.m128i_i64[0];
    }
    memset((char *)ptr + v17, 0, v16 - v17);
    v19.m128i_i64[0] = v16;
LABEL_27:
    a2 = src;
    memcpy((char *)ptr + v15, src, v14);
  }
  if ( (unsigned int)sub_5CCDC0(a1, a2) )
    goto LABEL_3;
  if ( a1[4].m128i_i16[0] != 44 )
    goto LABEL_3;
  if ( (unsigned int)sub_5CCDC0(a1, a2) )
    goto LABEL_3;
  if ( a1[4].m128i_i16[0] != 3 )
    goto LABEL_3;
  a2 = (const char *)a1[4].m128i_u32[1];
  sub_407AD0((__int64 *)&ptr, (unsigned int)a2);
  if ( (unsigned int)sub_5CCDC0(a1, a2)
    || a1[4].m128i_i16[0] != 44
    || (unsigned int)sub_5CCDC0(a1, a2)
    || a1[4].m128i_i16[0] != 3 )
  {
    goto LABEL_3;
  }
  a2 = (const char *)a1[4].m128i_u32[1];
  sub_407AD0((__int64 *)&ptr, (unsigned int)a2);
  v9 = sub_5CCDC0(a1, a2);
  v6 = _mm_load_si128(&v23);
  v7 = _mm_loadu_si128(&v19);
  v8 = v22;
  v5 = ptr;
  if ( !v9 && a1[4].m128i_i16[0] == 41 )
  {
    v22 = ptr;
    ptr = v8;
    v23 = v7;
    v19 = v6;
    sub_5CDE10(a1, (const char *)&v20);
    goto LABEL_7;
  }
LABEL_4:
  v22 = v5;
  ptr = v8;
  v23 = v7;
  v19 = v6;
  if ( !(unsigned int)get_qerrno() )
    set_qerrno(47, a2);
  v9 = 47;
LABEL_7:
  if ( ptr )
  {
    v19.m128i_i64[0] = 0;
    qfree(ptr);
  }
  if ( v22 )
  {
    v23.m128i_i64[0] = 0;
    qfree(v22);
  }
  if ( v20 )
  {
    v21.m128i_i64[0] = 0;
    qfree(v20);
  }
  return v9;
}

