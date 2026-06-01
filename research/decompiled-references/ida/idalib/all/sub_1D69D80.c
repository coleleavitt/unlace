__int64 __fastcall sub_1D69D80(
        unsigned __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        unsigned __int8 a5,
        const __m128i *a6,
        __m128 a7,
        __m128 a8,
        const __m128i *a9,
        unsigned __int64 a10,
        __int128 a11,
        __m128 *a12)
{
  __int64 v13; // r13
  char *v14; // rsi
  _BYTE *v16; // rdi
  __int64 v17; // rcx
  _BYTE *v18; // rax
  char *i; // rax
  __int64 j; // r15
  const __m128i *v21; // rdx
  __m128 *v22; // rax
  unsigned int v23; // ebx
  __m128i v30; // [rsp+30h] [rbp-168h] BYREF
  __m128i v31; // [rsp+40h] [rbp-158h] BYREF
  void *ptr; // [rsp+50h] [rbp-148h] BYREF
  __int64 v33; // [rsp+58h] [rbp-140h]
  _BYTE v34[312]; // [rsp+60h] [rbp-138h] BYREF

  v13 = *(_QWORD *)(a4 + 56);
  v14 = v34;
  v16 = v34;
  v17 = a10;
  ptr = v34;
  v33 = 0x800000000LL;
  if ( a10 )
  {
    v18 = v34;
    if ( a10 > 8 )
    {
      sub_2237220(&ptr, v34, a10, 32);
      v18 = ptr;
      v14 = (char *)ptr + 32 * (unsigned int)v33;
    }
    for ( i = &v18[32 * a10]; i != v14; *((_QWORD *)v14 - 1) = 0 )
    {
      *(_QWORD *)v14 &= 0xFFFFFFFE00000000LL;
      v14 += 32;
      *((_QWORD *)v14 - 3) = 0;
    }
    LODWORD(v33) = a10;
    if ( (_DWORD)a10 )
    {
      for ( j = 0; ; ++j )
      {
        v21 = a9;
        a9 = (const __m128i *)((char *)a9 + 24);
        sub_1D37A30(
          &v30,
          a1,
          v21,
          0,
          *(unsigned int *)(*(_QWORD *)(v13 + 8 * j + 24) + 24LL),
          0,
          *(double *)a7.m128_u64,
          a8);
        a7 = (__m128)_mm_load_si128(&v30);
        a8 = (__m128)_mm_load_si128(&v31);
        v22 = (__m128 *)((char *)ptr + 32 * j);
        *v22 = a7;
        v22[1] = a8;
        if ( j == (_DWORD)a10 - 1 )
          break;
      }
      v16 = ptr;
      v17 = (unsigned int)v33;
    }
    else
    {
      v16 = ptr;
      v17 = 0;
    }
  }
  v23 = sub_1D68F80(a1, a2, a3, a4, a5, a6, a7, a8, (__int64)v16, v17, a11, a12, 0);
  if ( ptr != v34 )
    free(ptr);
  return v23;
}
