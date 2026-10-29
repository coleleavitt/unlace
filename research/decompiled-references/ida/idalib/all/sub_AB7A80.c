unsigned __int64 __fastcall sub_AB7A80(_QWORD *a1, unsigned int a2, _QWORD *a3, const __m128i *a4, int a5)
{
  __int64 v6; // r9
  unsigned __int64 v7; // r12
  const __m128i *v8; // r15
  __int64 v9; // r8
  _BYTE *v10; // rcx
  unsigned __int64 v11; // rbp
  __int64 v12; // rdx
  __m128i *v13; // rdx
  _BYTE *v14; // rcx
  unsigned __int64 v15; // rbp
  unsigned __int64 v17; // r15
  void *ptr; // [rsp+10h] [rbp-1C8h] BYREF
  __int64 v19; // [rsp+18h] [rbp-1C0h]
  _BYTE v20[440]; // [rsp+20h] [rbp-1B8h] BYREF

  v19 = 0x1000000000LL;
  ptr = v20;
  if ( a5 )
  {
    v6 = (unsigned int)(a5 - 1);
    v7 = (unsigned __int64)&a4[2];
    v8 = a4;
    v9 = 0;
    v10 = v20;
    v11 = 32 * v6 + v7;
    while ( 1 )
    {
      v13 = (__m128i *)&v10[24 * v9];
      *v13 = _mm_loadu_si128(v8);
      v9 = (unsigned int)(v19 + 1);
      v13[1].m128i_i64[0] = v8[1].m128i_i64[0];
      LODWORD(v19) = v9;
      if ( v11 == v7 )
        break;
      v12 = v9 + 1;
      v8 = (const __m128i *)v7;
      v10 = ptr;
      if ( v9 + 1 > (unsigned __int64)HIDWORD(v19) )
      {
        if ( (unsigned __int64)ptr > v7 || (unsigned __int64)ptr + 24 * v9 <= v7 )
        {
          sub_2237220(&ptr, v20, v12, 24);
          v10 = ptr;
          v9 = (unsigned int)v19;
        }
        else
        {
          v17 = v7 - (_QWORD)ptr;
          sub_2237220(&ptr, v20, v12, 24);
          v10 = ptr;
          v9 = (unsigned int)v19;
          v8 = (const __m128i *)((char *)ptr + v17);
        }
      }
      v7 += 32LL;
    }
    v14 = ptr;
  }
  else
  {
    v9 = 0;
    v14 = v20;
  }
  v15 = sub_AB72A0(a1, a2, a3, v14, v9, 0);
  if ( ptr != v20 )
    free(ptr);
  return v15;
}
