unsigned __int64 __fastcall sub_4CEAC0(unsigned __int64 *a1, __int64 a2, __int64 a3)
{
  __m128i *v4; // rdi
  unsigned __int64 v6; // rdx
  __m128i *v7; // rcx
  __m128i *v8; // rax
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdx
  int v12; // r12d
  __m128i *v13; // rbx
  __int64 v14; // rax
  const char *v15; // rbp
  const char *v16; // rsi
  __int64 v17; // rax
  unsigned __int64 v18; // rdx
  __int64 v19; // rax
  unsigned __int64 v20; // rdx
  __m128i v21; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v22; // [rsp+18h] [rbp-30h]

  v4 = (__m128i *)*a1;
  v22 = __readfsqword(0x28u);
  v6 = a1[1];
  v7 = &v4[v6];
  if ( v4 == v7 )
  {
LABEL_6:
    v21.m128i_i64[0] = a2;
    v10 = a1[2];
    v11 = v6 + 1;
    v21.m128i_i64[1] = a3;
    if ( &v21 < v4 || &v21 >= &v4[v10] )
    {
      if ( v10 < v11 )
      {
        v17 = qvector_reserve(a1, v4, v11, 16);
        v18 = a1[1];
        *a1 = v17;
        v7 = (__m128i *)(v17 + 16 * v18);
      }
      *v7 = _mm_load_si128(&v21);
    }
    else
    {
      if ( v10 < v11 )
      {
        v19 = qvector_reserve(a1, v4, v11, 16);
        v20 = a1[1];
        *a1 = v19;
        v7 = (__m128i *)(v19 + 16 * v20);
      }
      v7->m128i_i64[0] = a2;
      v7->m128i_i64[1] = a3;
    }
    ++a1[1];
  }
  else
  {
    v8 = v4;
    while ( v8->m128i_i64[0] != a2 )
    {
      if ( ++v8 == v7 )
      {
        v12 = *(_DWORD *)(a3 + 16);
        v13 = v4;
        do
        {
          v14 = v13->m128i_i64[1];
          if ( *(_DWORD *)(v14 + 16) == v12 && (*(_BYTE *)(v14 + 32) & 1) == (*(_BYTE *)(a3 + 32) & 1) )
          {
            v15 = (const char *)qbasename(*(_QWORD *)(a2 + 8));
            v16 = (const char *)qbasename(*(_QWORD *)(v13->m128i_i64[0] + 8));
            sub_375320((__int64)"Debugger modules %s and %s have the same ID %x", v16, v15, v12);
          }
          ++v13;
        }
        while ( v13 != v7 );
        goto LABEL_6;
      }
    }
  }
  return v22 - __readfsqword(0x28u);
}

