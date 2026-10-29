__int64 __fastcall sub_817D90(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  _QWORD *v4; // r12
  unsigned __int64 v5; // rbp
  __int64 result; // rax
  __int64 v7; // [rsp+0h] [rbp-38h] BYREF
  __m128i v8; // [rsp+8h] [rbp-30h]

  if ( *(_DWORD *)(a1 + 104) )
  {
    do
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 512LL))(a1);
    while ( (*(_DWORD *)(a1 + 104))-- != 1 );
  }
  v3 = *(_QWORD *)(a1 + 88);
  v4 = *(_QWORD **)(v3 + 8LL * *(unsigned int *)(a2 + 4));
  v5 = *(_QWORD *)(v3 + 8LL * *(unsigned int *)(a2 + 8));
  result = *(_QWORD *)(sub_15D1F10(*v4) + 24);
  if ( result && *(_DWORD *)(a1 + 112) == *(_DWORD *)result )
  {
    result = *(unsigned int *)(result + 4);
    if ( !(_DWORD)result )
    {
      v7 = 2;
      v8 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v4, (__m128i)v5);
      return ((__int64 (__fastcall *)(__int64, __int64 *))sub_865240)(a1, &v7);
    }
  }
  return result;
}

