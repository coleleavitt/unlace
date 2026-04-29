__int64 __fastcall sub_20CED0(__int64 *a1, __int64 a2)
{
  int v2; // eax
  unsigned int v4; // edx
  const void *v6; // r12
  size_t v7; // rax
  size_t v8; // rbp
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // rdx
  __m128i v13; // xmm0
  void *v14; // rdi
  size_t v15; // r13
  __int64 v16; // rax
  __int64 v17; // [rsp+0h] [rbp-48h] BYREF
  __m128i v18; // [rsp+8h] [rbp-40h] BYREF
  unsigned __int64 v19; // [rsp+18h] [rbp-30h]

  v2 = *(_DWORD *)(a2 + 8);
  v19 = __readfsqword(0x28u);
  if ( v2 == 68 )
  {
    if ( a1 )
    {
      v6 = *(const void **)(a2 + 24);
      if ( v6 && (v7 = strlen(*(const char **)(a2 + 24)), (v8 = v7) != 0) )
      {
        v14 = (void *)*a1;
        v15 = v7 + 1;
        if ( a1[2] < v7 + 1 )
        {
          v16 = qvector_reserve(a1, *a1, v7 + 1, 1);
          *a1 = v16;
          v14 = (void *)v16;
        }
        a1[1] = v15;
        memmove(v14, v6, v8);
        *(_BYTE *)(*a1 + v8) = 0;
      }
      else
      {
        a1[1] = 0;
      }
    }
    return 1;
  }
  v4 = 0;
  if ( v2 == 64 )
  {
    v9 = a2 + 48;
    v10 = *(_QWORD *)(a2 + 24);
    v17 = 0;
    v18 = 0;
    sub_263730(&v17, v10, v9);
    if ( v18.m128i_i64[0] > 1uLL )
      tag_remove(&v17, v17, 0);
    v11 = v17;
    if ( a1 )
    {
      v11 = *a1;
      v12 = a1[2];
      *a1 = v17;
      v13 = _mm_loadu_si128(&v18);
      v17 = v11;
      v18.m128i_i64[1] = v12;
      *(__m128i *)(a1 + 1) = v13;
    }
    if ( v11 )
    {
      v18.m128i_i64[0] = 0;
      qfree(v11);
    }
    return 1;
  }
  return v4;
}
