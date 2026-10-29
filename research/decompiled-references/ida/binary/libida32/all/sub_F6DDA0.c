_QWORD *__fastcall sub_F6DDA0(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rax
  __int64 v8; // rbx
  __int64 v9; // rbp
  unsigned int v10; // edi
  _QWORD *result; // rax
  __int64 v12; // rdx
  __m128i *v13; // r13
  _QWORD *i; // rdx
  __m128i *v15; // rbx
  __int64 v16; // rdx
  _QWORD *j; // rdx
  __m128i *v18; // [rsp+18h] [rbp-40h] BYREF

  v6 = (unsigned int)(a2 - 1);
  v8 = *(unsigned int *)(a1 + 16);
  v9 = *(_QWORD *)a1;
  v10 = (((((((((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 4) | ((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 8)
         | ((((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 4)
         | ((v6 | (v6 >> 1)) >> 2)
         | v6
         | (v6 >> 1)) >> 16)
       | ((((((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 4) | ((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 8)
       | ((((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 4)
       | ((v6 | (v6 >> 1)) >> 2)
       | v6
       | (v6 >> 1))
      + 1;
  if ( v10 < 0x40 )
    v10 = 64;
  *(_DWORD *)(a1 + 16) = v10;
  result = (_QWORD *)sub_220C370(16LL * v10, 8, a3, a4, a5, a6);
  *(_QWORD *)a1 = result;
  if ( v9 )
  {
    v12 = *(unsigned int *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = 0;
    v13 = (__m128i *)(v9 + 16 * v8);
    for ( i = &result[2 * v12]; i != result; *(result - 1) = 0x7FFFFFFFFFFFFFFFLL )
    {
      *result = -4096;
      result += 2;
    }
    if ( v13 != (__m128i *)v9 )
    {
      v15 = (__m128i *)v9;
      while ( v15->m128i_i64[0] == -4096 )
      {
        if ( v15->m128i_i64[1] == 0x7FFFFFFFFFFFFFFFLL )
        {
          if ( v13 == ++v15 )
            return (_QWORD *)operator delete();
        }
        else
        {
LABEL_9:
          sub_F5CBC0((__int64 *)a1, v15->m128i_i64, (__int64 **)&v18);
          *v18 = _mm_loadu_si128(v15);
          ++*(_DWORD *)(a1 + 8);
LABEL_10:
          if ( v13 == ++v15 )
            return (_QWORD *)operator delete();
        }
      }
      if ( v15->m128i_i64[0] == -8192 && v15->m128i_i64[1] == 0x7FFFFFFFFFFFFFFELL )
        goto LABEL_10;
      goto LABEL_9;
    }
    return (_QWORD *)operator delete();
  }
  else
  {
    v16 = *(unsigned int *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = 0;
    for ( j = &result[2 * v16]; j != result; *(result - 1) = 0x7FFFFFFFFFFFFFFFLL )
    {
      *result = -4096;
      result += 2;
    }
  }
  return result;
}

