__int64 __fastcall sub_389770(__int64 a1)
{
  bool v1; // zf
  unsigned __int64 v3; // rbp
  char v4; // al
  size_t v6; // rax
  __int64 v7; // r13
  size_t v8; // rbp
  __m128i v9; // xmm0
  void *v10; // rdi
  void *v11; // r12
  __m128i v12; // xmm0
  void *v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __m128i v16; // [rsp+0h] [rbp-78h] BYREF
  void *ptr; // [rsp+10h] [rbp-68h] BYREF
  __m128i v18; // [rsp+18h] [rbp-60h] BYREF
  char s[24]; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v20; // [rsp+48h] [rbp-30h]

  v1 = *(_BYTE *)(a1 + 267) == 0;
  v20 = __readfsqword(0x28u);
  if ( !v1 )
  {
    v3 = *(_QWORD *)(a1 + 48);
    if ( *(_BYTE *)(a1 + 280) )
    {
      if ( v3 > 1 )
      {
LABEL_4:
        v4 = set_processor_type(*(_QWORD *)(a1 + 40), 3);
        goto LABEL_5;
      }
      if ( !getinf_buf(1, s, 16) )
        s[0] = 0;
      ptr = nullptr;
      v18 = 0;
      v6 = strlen(s);
      v7 = v6 + 1;
      v8 = v6;
      ptr = (void *)qvector_reserve(&ptr, 0, v6 + 1, 1);
      v18.m128i_i64[0] = v7;
      memmove(ptr, s, v8);
      *((_BYTE *)ptr + v8) = 0;
      v9 = _mm_loadu_si128(&v18);
      v10 = *(void **)(a1 + 40);
      v11 = ptr;
      v18 = 0;
      ptr = nullptr;
      v3 = v9.m128i_i64[0];
      if ( v10 )
      {
        *(_QWORD *)(a1 + 48) = 0;
        v16 = v9;
        qfree(v10);
        v12 = _mm_load_si128(&v16);
        v13 = ptr;
        *(_QWORD *)(a1 + 40) = v11;
        *(__m128i *)(a1 + 48) = v12;
        if ( v13 )
        {
          v18.m128i_i64[0] = 0;
          qfree(v13);
          v3 = *(_QWORD *)(a1 + 48);
        }
      }
      else
      {
        *(_QWORD *)(a1 + 40) = v11;
        *(__m128i *)(a1 + 48) = v9;
      }
    }
    if ( v3 <= 1 )
      return 0;
    goto LABEL_4;
  }
  if ( !(unsigned __int8)sub_638450(*(_QWORD *)a1, s, 16) )
    sub_387D20(1342, (__int64)s, v14, v15);
  v4 = set_processor_type(s, 0);
  if ( *(_QWORD *)(a1 + 48) > 1u )
    goto LABEL_4;
LABEL_5:
  if ( v4 )
    return 0;
  term_database();
  return 4;
}
