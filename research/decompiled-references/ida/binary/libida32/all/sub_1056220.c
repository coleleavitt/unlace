__int64 __fastcall sub_1056220(__m128i *a1, __m128i *a2)
{
  char **i; // rbx
  char **v4; // r13
  int v5; // edx
  __int64 result; // rax
  __m128i *v7; // r14
  size_t v8; // r13
  unsigned __int64 v9; // r15
  __int8 *v10; // rsi
  __int64 v11; // rax
  const char *v12; // rdx
  const char *v13; // rbp
  size_t v14; // rax
  __m128i v15; // xmm0
  __int32 v16; // eax
  char *v17; // rdx
  __int64 v18; // r15
  unsigned __int64 v19; // rdi
  __int64 v20; // rax
  __m128i *v21; // rdi

  for ( i = &off_2C58820; sub_990D60((__int64)a2, *i); i += 20 )
  {
    if ( !sub_990D60((__int64)a2, i[5]) )
    {
      i += 5;
      break;
    }
    if ( !sub_990D60((__int64)a2, i[10]) )
    {
      i += 10;
      break;
    }
    if ( !sub_990D60((__int64)a2, i[15]) )
    {
      i += 15;
      break;
    }
    if ( i + 20 == off_2C5C2E0 )
    {
      if ( !sub_990D60((__int64)a2, i[20]) )
      {
        i = off_2C5C2E0;
        goto LABEL_15;
      }
      v4 = i + 25;
      if ( sub_990D60((__int64)a2, i[25]) )
      {
        v4 = i + 30;
        v5 = sub_990D60((__int64)a2, i[30]);
        result = 0;
        if ( v5 )
          return result;
      }
      i = v4;
      break;
    }
  }
  result = 0;
  if ( i == (char **)&unk_2C5C358 )
    return result;
LABEL_15:
  if ( a2 != &a1[32] )
  {
    v7 = (__m128i *)a1[32].m128i_i64[0];
    v8 = a2->m128i_u64[1];
    if ( v7 == &a1[33] )
      v9 = 15;
    else
      v9 = a1[33].m128i_u64[0];
    if ( v8 > v9 )
    {
      if ( (v8 & 0x8000000000000000LL) != 0LL )
        std::__throw_length_error("basic_string::_M_create");
      v18 = 2 * v9;
      if ( v8 < v18 )
      {
        v19 = v18 + 1;
        if ( v18 < 0 )
        {
          v19 = 0x8000000000000000LL;
          v18 = 0x7FFFFFFFFFFFFFFFLL;
        }
      }
      else
      {
        v19 = v8 + 1;
        v18 = a2->m128i_i64[1];
      }
      v20 = operator new(v19);
      v21 = (__m128i *)a1[32].m128i_i64[0];
      v7 = (__m128i *)v20;
      if ( &a1[33] != v21 )
        operator delete(v21);
      a1[32].m128i_i64[0] = (__int64)v7;
      a1[33].m128i_i64[0] = v18;
    }
    if ( v8 )
    {
      v10 = (__int8 *)a2->m128i_i64[0];
      if ( v8 == 1 )
        v7->m128i_i8[0] = *v10;
      else
        memcpy(v7, v10, v8);
      v7 = (__m128i *)a1[32].m128i_i64[0];
    }
    a1[32].m128i_i64[1] = v8;
    v7->m128i_i8[v8] = 0;
  }
  v11 = (__int64)i[3];
  if ( v11 == 3 )
  {
    v17 = i[2];
    if ( *(_WORD *)v17 == 12337 && v17[2] == 48 )
    {
      v11 = 7;
      v12 = "avrtiny";
      goto LABEL_27;
    }
  }
  else
  {
    v11 = 3;
  }
  v12 = "avr";
LABEL_27:
  v13 = i[1];
  a1[34].m128i_i64[1] = v11;
  v14 = 0;
  a1[34].m128i_i64[0] = (__int64)v12;
  if ( v13 )
    v14 = strlen(v13);
  v15 = _mm_loadu_si128((const __m128i *)i + 1);
  a1[35].m128i_i64[1] = v14;
  v16 = *((_DWORD *)i + 8);
  a1[35].m128i_i64[0] = (__int64)v13;
  a1[36] = v15;
  a1[37].m128i_i32[0] = v16;
  return 1;
}

