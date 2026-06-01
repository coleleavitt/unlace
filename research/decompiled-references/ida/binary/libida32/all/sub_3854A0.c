__int64 __fastcall sub_3854A0(__int64 a1)
{
  bool v1; // zf
  unsigned __int64 v3; // rbp
  char *v4; // rdi
  __int64 v5; // rsi
  char v6; // al
  size_t v8; // rax
  __int64 v9; // r13
  size_t v10; // rbp
  __m128i v11; // xmm0
  void *v12; // rdi
  void *v13; // r12
  __m128i v14; // xmm0
  void *v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __m128i v18; // [rsp+0h] [rbp-78h] BYREF
  void *ptr; // [rsp+10h] [rbp-68h] BYREF
  __m128i v20; // [rsp+18h] [rbp-60h] BYREF
  char s[24]; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v22; // [rsp+48h] [rbp-30h]

  v1 = *(_BYTE *)(a1 + 219) == 0;
  v22 = __readfsqword(0x28u);
  if ( !v1 )
  {
    v3 = *(_QWORD *)(a1 + 48);
    if ( *(_BYTE *)(a1 + 232) )
    {
      if ( v3 > 1 )
      {
LABEL_4:
        v4 = *(char **)(a1 + 40);
        v5 = 3;
        v6 = set_processor_type(v4, 3);
        goto LABEL_5;
      }
      if ( !getinf_buf(1, s, 16) )
        s[0] = 0;
      ptr = nullptr;
      v20 = 0;
      v8 = strlen(s);
      v9 = v8 + 1;
      v10 = v8;
      ptr = (void *)qvector_reserve(&ptr, 0, v8 + 1, 1);
      v20.m128i_i64[0] = v9;
      memmove(ptr, s, v10);
      *((_BYTE *)ptr + v10) = 0;
      v11 = _mm_loadu_si128(&v20);
      v12 = *(void **)(a1 + 40);
      v13 = ptr;
      v20 = 0;
      ptr = nullptr;
      v3 = v11.m128i_i64[0];
      if ( v12 )
      {
        *(_QWORD *)(a1 + 48) = 0;
        v18 = v11;
        qfree(v12);
        v14 = _mm_load_si128(&v18);
        v15 = ptr;
        *(_QWORD *)(a1 + 40) = v13;
        *(__m128i *)(a1 + 48) = v14;
        if ( v15 )
        {
          v20.m128i_i64[0] = 0;
          qfree(v15);
          v3 = *(_QWORD *)(a1 + 48);
        }
      }
      else
      {
        *(_QWORD *)(a1 + 40) = v13;
        *(__m128i *)(a1 + 48) = v11;
      }
    }
    if ( v3 <= 1 )
      return 0;
    goto LABEL_4;
  }
  if ( !(unsigned __int8)sub_61B510(*(_QWORD *)a1, s, 16) )
    sub_384000(1342, (__int64)s, v16, v17);
  v5 = 0;
  v4 = s;
  v6 = set_processor_type(s, 0);
  if ( *(_QWORD *)(a1 + 48) > 1u )
    goto LABEL_4;
LABEL_5:
  if ( v6 )
    return 0;
  term_database(v4, v5);
  return 4;
}

