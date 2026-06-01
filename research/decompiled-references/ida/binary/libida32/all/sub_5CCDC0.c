__int64 __fastcall sub_5CCDC0(__m128i *a1, const char *a2)
{
  __int32 v3; // eax
  unsigned int v4; // ebp
  int v5; // edx
  __int64 v6; // rsi
  __int16 v8; // ax
  unsigned int qerrno; // eax
  int v10; // edx
  unsigned __int64 v11; // rcx
  __int64 v12; // rdx
  bool v13; // zf
  const char *v14; // rdx
  char v15; // al
  void *v16; // rdi
  void *v17; // rax
  __int64 v18; // rdx
  __m128i v19; // xmm0
  const char *v20; // rsi
  __int32 v21; // eax
  __int64 v22; // rax
  const char *v23; // rsi
  const char *v24; // rsi
  unsigned int v25; // eax
  int v26; // edx
  void *ptr; // [rsp+0h] [rbp-38h] BYREF
  __m128i v28; // [rsp+8h] [rbp-30h] BYREF
  unsigned __int64 v29; // [rsp+18h] [rbp-20h]

  v29 = __readfsqword(0x28u);
  if ( !sub_5CA8C0(a1, a2) )
  {
    qerrno = get_qerrno();
    v4 = qerrno;
    if ( qerrno )
    {
      if ( a1[13].m128i_i8[8] && qerrno - 20 <= 8 )
      {
        v25 = set_qerrno(0, a2);
        v26 = a1[4].m128i_u16[0];
        v4 = v25;
        v3 = a1[45].m128i_i32[2];
        if ( (v3 & 1) == 0 )
        {
          v11 = (unsigned int)(v26 - 179);
          if ( (unsigned __int16)(v26 - 179) <= 0x14u )
            goto LABEL_22;
        }
        if ( (_WORD)v26 != 166 )
        {
LABEL_7:
          if ( v4 )
            goto LABEL_8;
          LOWORD(v5) = a1[4].m128i_i16[0];
          goto LABEL_42;
        }
      }
      else
      {
        v3 = a1[45].m128i_i32[2];
        if ( (v3 & 1) != 0 )
        {
          if ( a1[4].m128i_i16[0] == 166 )
            a1[4].m128i_i16[0] = 2;
          goto LABEL_8;
        }
        v10 = a1[4].m128i_u16[0];
        v11 = (unsigned int)(v10 - 179);
        if ( (unsigned __int16)(v10 - 179) <= 0x14u )
        {
LABEL_22:
          v12 = 1123329;
          if ( !_bittest64(&v12, v11) )
            goto LABEL_7;
LABEL_5:
          if ( unk_2C57908 )
            a1[45].m128i_i32[2] = v3 | 1;
          else
            a1[4].m128i_i16[0] = 2;
          goto LABEL_7;
        }
        if ( (_WORD)v10 != 166 )
          goto LABEL_8;
      }
      a1[4].m128i_i16[0] = 2;
      if ( v4 )
        goto LABEL_8;
      goto LABEL_27;
    }
  }
  v3 = a1[45].m128i_i32[2];
  v4 = v3 & 1;
  if ( (v3 & 1) != 0 )
  {
    v8 = a1[4].m128i_i16[0];
    if ( v8 != 166 )
      goto LABEL_15;
  }
  else
  {
    v5 = a1[4].m128i_u16[0];
    if ( (unsigned __int16)(v5 - 179) <= 0x14u )
    {
      v6 = 1123329;
      if ( _bittest64(&v6, (unsigned int)(v5 - 179)) )
        goto LABEL_5;
LABEL_42:
      v8 = v5;
LABEL_15:
      if ( v8 != 2 )
      {
LABEL_16:
        v4 = 0;
        goto LABEL_8;
      }
      goto LABEL_27;
    }
    if ( (_WORD)v5 != 166 )
      goto LABEL_42;
  }
  a1[4].m128i_i16[0] = 2;
LABEL_27:
  if ( a1[13].m128i_i8[8] )
    goto LABEL_16;
  if ( (getinf(57) & 0xF) == 6 && a1[8].m128i_i64[1] )
  {
    v23 = haystack;
    if ( a1[3].m128i_i64[0] )
      v23 = (const char *)a1[2].m128i_i64[1];
    if ( !(unsigned int)get_named_type(a1[15].m128i_i64[0], (int)v23, 1, 0, 0, 0, 0, 0, 0) )
    {
      v24 = haystack;
      if ( a1[3].m128i_i64[0] )
        v24 = (const char *)a1[2].m128i_i64[1];
      sub_68AD60(a1[15].m128i_i64[0], v24);
    }
  }
  if ( a1[45].m128i_i32[1]
    || (v22 = a1[7].m128i_i64[1]) == 0
    || (*(_BYTE *)(v22 + 186) & 0x3F) == 0 && (*(_QWORD *)(v22 + 40) & 0xFFFFFFFFFFFFF1FFLL) == 0 )
  {
    v13 = a1[3].m128i_i64[0] == 0;
    ptr = nullptr;
    v14 = haystack;
    v28 = 0;
    if ( !v13 )
      v14 = (const char *)a1[2].m128i_i64[1];
    v15 = sub_5CC930((__int64)a1, (__int64 *)&ptr, v14, 0);
    v16 = ptr;
    if ( v15 )
    {
      v17 = (void *)a1[2].m128i_i64[1];
      v18 = a1[3].m128i_i64[1];
      a1[2].m128i_i64[1] = (__int64)ptr;
      v19 = _mm_loadu_si128(&v28);
      a1[4].m128i_i16[0] = 6;
      ptr = v17;
      v16 = v17;
      v28.m128i_i64[1] = v18;
      a1[3] = v19;
    }
    if ( v16 )
    {
      v28.m128i_i64[0] = 0;
      qfree(v16);
    }
  }
  if ( a1[4].m128i_i16[0] != 2 )
    goto LABEL_16;
  v20 = haystack;
  if ( a1[3].m128i_i64[0] )
    v20 = (const char *)a1[2].m128i_i64[1];
  v21 = sub_3D7AD0(*(_QWORD *)(a1[6].m128i_i64[0] + 1480), v20);
  if ( !v21 )
    goto LABEL_16;
  a1[5].m128i_i32[0] = v21;
  v4 = 0;
  a1[4].m128i_i16[0] = 9;
LABEL_8:
  if ( a1[31].m128i_i64[0] )
  {
    ptr = nullptr;
    v28 = 0;
    lex_print_token(&ptr, &a1[2].m128i_u64[1]);
    sub_38CDA0();
    if ( a1[4].m128i_i16[0] == 1 )
      sub_38CDA0();
    if ( ptr )
    {
      v28.m128i_i64[0] = 0;
      qfree(ptr);
    }
  }
  return v4;
}

