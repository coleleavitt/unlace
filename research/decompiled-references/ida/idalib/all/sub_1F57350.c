void __fastcall sub_1F57350(__int64 *a1, _DWORD *a2, __int64 a3, int a4)
{
  int v4; // r15d
  int v7; // eax
  __int64 v8; // rdi
  int v9; // eax
  __int64 v10; // rdi
  __int64 v11; // rax
  unsigned __int64 v12; // rdx
  char *v13; // rdx
  __m128i *v14; // rcx
  __m128i *v15; // rax
  __m128i v16; // xmm1
  int v17; // [rsp+4h] [rbp-194h]
  _BYTE *v19; // [rsp+18h] [rbp-180h]
  __m128i v20[2]; // [rsp+20h] [rbp-178h] BYREF
  void *ptr; // [rsp+40h] [rbp-158h] BYREF
  __int64 v22; // [rsp+48h] [rbp-150h]
  _BYTE v23[256]; // [rsp+50h] [rbp-148h] BYREF
  __int64 v24; // [rsp+150h] [rbp-48h]

  v4 = 0;
  v7 = sub_1EE7490(*a1);
  v8 = *a1;
  ptr = v23;
  v17 = v7;
  v22 = 0x800000000LL;
  v24 = 0;
  v9 = sub_1EE7490(v8);
  v10 = *a1;
  LODWORD(v24) = v9;
  HIDWORD(v24) = sub_1EE7490(v10);
  if ( a4 )
  {
    do
    {
      sub_1F18E50(v20, *a1);
      v11 = (unsigned int)v22;
      v12 = (unsigned int)v22 + 1LL;
      if ( v12 > HIDWORD(v22) )
      {
        if ( ptr > v20 || v20 >= (__m128i *)((char *)ptr + 32 * (unsigned int)v22) )
        {
          sub_2237220(&ptr, v23, v12, 32);
          v13 = (char *)ptr;
          v11 = (unsigned int)v22;
          v14 = v20;
        }
        else
        {
          v19 = ptr;
          sub_2237220(&ptr, v23, v12, 32);
          v11 = (unsigned int)v22;
          v13 = (char *)ptr;
          v14 = (__m128i *)((char *)ptr + (char *)v20 - v19);
        }
      }
      else
      {
        v13 = (char *)ptr;
        v14 = v20;
      }
      ++v4;
      v15 = (__m128i *)&v13[32 * v11];
      *v15 = _mm_loadu_si128(v14);
      v16 = _mm_loadu_si128(v14 + 1);
      LODWORD(v22) = v22 + 1;
      v15[1] = v16;
    }
    while ( a4 != v4 );
  }
  sub_F1E680(a2, v17, (__int64 *)&ptr, a3);
  if ( ptr != v23 )
    free(ptr);
}
