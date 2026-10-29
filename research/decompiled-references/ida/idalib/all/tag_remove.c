__int64 __fastcall tag_remove(__int64 a1, const char *a2)
{
  const char *v2; // rbx
  size_t v4; // rax
  __m128i v5; // xmm0
  void *v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rbx
  char v10; // al
  const char *v11; // rdx
  int utf8_char; // edx
  const char *v13; // rax
  const char *v14; // r14
  __int64 v15; // rbx
  unsigned __int64 v16; // r15
  char v17; // r8
  _BYTE *v18; // rsi
  __int64 v19; // r14
  char v20; // r15
  unsigned __int64 v21; // rbx
  _BYTE *v22; // rsi
  char v23; // [rsp+Fh] [rbp-69h]
  const char *v24; // [rsp+18h] [rbp-60h] BYREF
  void *ptr; // [rsp+20h] [rbp-58h] BYREF
  __m128i v26; // [rsp+28h] [rbp-50h] BYREF
  unsigned __int64 v27; // [rsp+38h] [rbp-40h]

  v27 = __readfsqword(0x28u);
  if ( !a1 )
    return -1;
  v2 = a2;
  if ( !a2 )
    return -1;
  ptr = nullptr;
  v26 = 0;
  v4 = strlen(a2);
  ptr = (void *)qvector_reserve(&ptr, 0, v4 + 1, 1);
  v24 = a2;
LABEL_4:
  while ( 2 )
  {
    switch ( *v2 )
    {
      case 0:
        goto LABEL_6;
      case 1:
        v10 = v2[1];
        v11 = v2 + 16;
        if ( v10 != 40 )
          goto LABEL_10;
        break;
      case 2:
        if ( !v2[1] )
          goto LABEL_6;
        goto LABEL_11;
      case 3:
        v24 = v2 + 1;
        if ( !v2[1] )
          goto LABEL_6;
        v19 = v26.m128i_i64[0];
        v24 = v2 + 2;
        v20 = v2[1];
        v21 = 2;
        if ( v26.m128i_i64[0] )
        {
          v21 = v26.m128i_i64[0] + 1;
          v19 = v26.m128i_i64[0] - 1;
        }
        v22 = ptr;
        if ( v26.m128i_i64[1] < v21 )
        {
          ptr = (void *)qvector_reserve(&ptr, ptr, v21, 1);
          v22 = ptr;
        }
        v26.m128i_i64[0] = v21;
        v22[v19] = v20;
        *((_BYTE *)ptr + v19 + 1) = 0;
        v2 = v24;
        continue;
      case 4:
        v24 = ++v2;
        continue;
      default:
        utf8_char = get_utf8_char(&v24);
        v13 = v24;
        if ( utf8_char == -1 )
          v13 = ++v24;
        if ( v2 >= v13 )
        {
          v2 = v13;
        }
        else
        {
          v14 = v2;
          do
          {
            v15 = v26.m128i_i64[0];
            ++v14;
            v16 = 2;
            v17 = *(v14 - 1);
            if ( v26.m128i_i64[0] )
            {
              v16 = v26.m128i_i64[0] + 1;
              v15 = v26.m128i_i64[0] - 1;
            }
            v18 = ptr;
            if ( v26.m128i_i64[1] < v16 )
            {
              v23 = *(v14 - 1);
              ptr = (void *)qvector_reserve(&ptr, ptr, v16, 1);
              v17 = v23;
              v18 = ptr;
            }
            v26.m128i_i64[0] = v16;
            v18[v15] = v17;
            *((_BYTE *)ptr + v15 + 1) = 0;
            v2 = v24;
          }
          while ( v14 < v24 );
        }
        continue;
    }
    break;
  }
  while ( *v2 )
  {
    if ( v2 + 1 == v11 )
    {
      v24 = v11;
      if ( *v11 )
      {
        v10 = v2[2];
        v2 = v11;
LABEL_10:
        if ( v10 )
        {
LABEL_11:
          v2 += 2;
          v24 = v2;
          goto LABEL_4;
        }
      }
      break;
    }
    ++v2;
  }
LABEL_6:
  v5 = _mm_loadu_si128(&v26);
  v6 = *(void **)a1;
  v7 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)a1 = ptr;
  ptr = v6;
  v26.m128i_i64[1] = v7;
  *(__m128i *)(a1 + 8) = v5;
  v8 = (v5.m128i_i64[0] == 0) + v5.m128i_i64[0] - 1;
  if ( v6 )
  {
    v26.m128i_i64[0] = 0;
    qfree(v6);
  }
  return v8;
}
