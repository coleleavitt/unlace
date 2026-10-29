__int64 __fastcall sub_778F10(__int64 a1, __int64 a2, char *a3)
{
  unsigned __int64 v4; // rdx
  __int64 result; // rax
  char *v6; // rbp
  size_t v7; // rax
  __int64 v8; // r12
  size_t v9; // r13
  size_t v10; // r14
  _BYTE *v11; // rsi
  __int64 v12; // r12
  _BYTE *v13; // rsi
  __int64 v14; // r14
  unsigned __int64 v15; // r13
  _BYTE *v16; // rdi
  void *v17; // rbp
  __m128i v18; // xmm0
  __m128i v19; // xmm0
  void *v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rax
  __m128i v23; // [rsp+0h] [rbp-78h] BYREF
  char *s; // [rsp+18h] [rbp-60h] BYREF
  void *ptr; // [rsp+20h] [rbp-58h] BYREF
  __m128i v26; // [rsp+28h] [rbp-50h] BYREF
  unsigned __int64 v27; // [rsp+38h] [rbp-40h]

  s = a3;
  v27 = __readfsqword(0x28u);
  v4 = sub_778480(a1, (const char **)&s);
  result = 0;
  if ( v4 != -1 )
  {
    if ( v4 )
    {
      sub_776CB0((__int64)&ptr, a1, v4, 0);
      v16 = *(_BYTE **)a2;
      v17 = ptr;
      ptr = nullptr;
      v18 = _mm_loadu_si128(&v26);
      v26 = 0;
      if ( v16 )
      {
        *(_QWORD *)(a2 + 8) = 0;
        v23 = v18;
        qfree(v16);
        v19 = _mm_load_si128(&v23);
        v20 = ptr;
        *(_QWORD *)a2 = v17;
        *(__m128i *)(a2 + 8) = v19;
        if ( v20 )
        {
          v26.m128i_i64[0] = 0;
          qfree(v20);
        }
      }
      else
      {
        *(_QWORD *)a2 = v17;
        *(__m128i *)(a2 + 8) = v18;
      }
    }
    v6 = s;
    if ( *s == 47 )
    {
      if ( s )
      {
LABEL_5:
        v7 = strlen(v6);
        v8 = *(_QWORD *)(a2 + 8);
        v9 = v7;
        v10 = v7;
        if ( v8 )
        {
          --v8;
          v10 = v7 + v8;
        }
        v11 = *(_BYTE **)a2;
        if ( *(_QWORD *)(a2 + 16) < v10 + 1 )
        {
          v22 = qvector_reserve(a2, v11, v10 + 1, 1);
          *(_QWORD *)a2 = v22;
          v11 = (_BYTE *)v22;
        }
        *(_QWORD *)(a2 + 8) = v10 + 1;
        v11[v10] = 0;
        memmove((void *)(v8 + *(_QWORD *)a2), v6, v9);
      }
      return 1;
    }
    v12 = *(_QWORD *)(a2 + 8);
    if ( v12 )
    {
      v15 = v12 + 1;
      v14 = *(_QWORD *)(a2 + 8);
      v13 = *(_BYTE **)a2;
      --v12;
      if ( *(_QWORD *)(a2 + 16) >= v15 )
        goto LABEL_14;
    }
    else
    {
      v13 = *(_BYTE **)a2;
      v14 = 1;
      v15 = 2;
      if ( *(_QWORD *)(a2 + 16) >= 2u )
        goto LABEL_14;
    }
    v21 = qvector_reserve(a2, v13, v15, 1);
    *(_QWORD *)a2 = v21;
    v13 = (_BYTE *)v21;
LABEL_14:
    *(_QWORD *)(a2 + 8) = v15;
    v13[v12] = 47;
    *(_BYTE *)(*(_QWORD *)a2 + v14) = 0;
    if ( v6 )
      goto LABEL_5;
    return 1;
  }
  return result;
}
