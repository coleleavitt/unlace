__int64 __fastcall sub_5BB040(__int64 a1)
{
  __int64 *v1; // rax
  __int64 v2; // rcx
  __int64 v3; // rsi
  __int64 v4; // rdi
  __int64 *v5; // rcx

  v1 = (__int64 *)sub_5B8DA0(*(__m128i **)(qword_2CCB598 + 1672), a1);
  if ( !v1 )
    return -1;
  v2 = *(unsigned int *)(a1 + 68);
  if ( !(_DWORD)v2 )
    return -1;
  v3 = 0x7FFFFFFF;
  v4 = -1;
  v5 = &v1[2 * v2];
  do
  {
    if ( v3 > v1[1] )
    {
      v4 = *v1;
      v3 = v1[1];
    }
    v1 += 2;
  }
  while ( v5 != v1 );
  return v4;
}
