char *__fastcall sub_897360(_QWORD *a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  unsigned int v5; // edx
  char *result; // rax
  unsigned int v7; // edx
  __int64 v8; // rax
  char *v9; // rdx
  char *v10; // rcx
  unsigned __int64 v11; // [rsp+0h] [rbp-38h] BYREF
  __int64 v12; // [rsp+8h] [rbp-30h]
  unsigned __int64 v13; // [rsp+18h] [rbp-20h]

  v13 = __readfsqword(0x28u);
  v5 = *(_DWORD *)(a2 + 4);
  if ( v5 < a4 )
  {
    if ( !under_debugger )
      interr(591);
    BUG();
  }
  result = (char *)a2;
  if ( v5 == a4
    || (*(_DWORD *)(a2 + 4) = a4,
        v8 = *(_QWORD *)(a2 + 8) + 4LL * (a4 - *(_DWORD *)a2),
        v11 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(a4), _mm_cvtsi32_si128(v5)).m128i_u64[0],
        v12 = v8,
        v9 = sub_895360(a1, (__int64 *)&v11),
        result = v9 - 16,
        (char *)a1[2] != v9) )
  {
    v7 = *(_DWORD *)result;
    if ( *(_DWORD *)result == a3 )
      return result;
  }
  else
  {
    result = (char *)a1[10];
    v7 = *(_DWORD *)result;
    if ( *(_DWORD *)result == a3 )
      return result;
  }
  *(_DWORD *)result = a3;
  v12 = *((_QWORD *)result + 1);
  v11 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v7), _mm_cvtsi32_si128(a3)).m128i_u64[0];
  result = sub_895360(a1, (__int64 *)&v11);
  v10 = result;
  if ( (char *)a1[10] != result )
    result += 16;
  *((_QWORD *)result + 1) = *((_QWORD *)v10 + 1) + 4LL * (unsigned int)(*((_DWORD *)v10 + 1) - *(_DWORD *)v10);
  return result;
}

