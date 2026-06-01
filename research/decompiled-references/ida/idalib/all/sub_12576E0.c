__int64 __fastcall sub_12576E0(__int64 a1, __int16 **a2)
{
  signed __int64 v3; // rbx
  __int64 result; // rax
  __m128i v5; // xmm0
  __int16 *v6; // rdi
  __int16 *v7; // r9
  __int16 *v8; // rdx
  __int64 v9; // rcx
  __int16 v10; // r8
  char v11; // si
  __m128i v12[2]; // [rsp+0h] [rbp-20h] BYREF

  v3 = (char *)a2[1] - (char *)*a2;
  *(_OWORD *)a1 = 0;
  *(_QWORD *)(a1 + 16) = 0;
  if ( v3 >> 2 )
  {
    if ( (unsigned __int64)(v3 >> 2) > 0x3FFFFFFFFFFFFFFFLL )
      std::__throw_bad_alloc();
    result = operator new(v3);
  }
  else
  {
    result = 0;
  }
  v12[0].m128i_i64[0] = result;
  v5 = _mm_loadl_epi64(v12);
  *(_QWORD *)(a1 + 16) = result + v3;
  *(__m128i *)a1 = _mm_unpacklo_epi64(v5, v5);
  v6 = a2[1];
  v7 = *a2;
  if ( *a2 != v6 )
  {
    v8 = *a2;
    v9 = result;
    do
    {
      v10 = *v8;
      v11 = *((_BYTE *)v8 + 2);
      v8 += 2;
      v9 += 4;
      *(_WORD *)(v9 - 4) = v10;
      *(_BYTE *)(v9 - 2) = v11;
    }
    while ( v6 != v8 );
    result += 4 * ((unsigned __int64)((char *)(v6 - 2) - (char *)v7) >> 2) + 4;
  }
  *(_QWORD *)(a1 + 8) = result;
  return result;
}
