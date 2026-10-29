__int64 __fastcall sub_BFB600(__m128 *a1)
{
  __int64 v1; // r12
  __int64 v2; // rax
  __int64 v3; // rbp
  __int64 result; // rax

  v1 = 0;
  v2 = a1[15].m128_u32[0];
  v3 = 4 * v2;
  if ( !(_DWORD)v2 )
    return 0;
  while ( 1 )
  {
    result = sub_BF9BD0(a1, a1[16].m128_u64[0] + 48LL * *(unsigned int *)(a1[17].m128_u64[0] + v1));
    if ( (_BYTE)result )
      break;
    v1 += 4;
    if ( v3 == v1 )
      return 0;
  }
  return result;
}

