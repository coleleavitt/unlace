__int64 __fastcall sub_2299370(__int64 a1, __int64 a2)
{
  __m128i v2; // xmm0
  __int64 v3; // rax
  char **v4; // rbx
  unsigned int v5; // ecx
  __int64 result; // rax
  __m128i v7; // [rsp+0h] [rbp-48h]
  __int64 v8; // [rsp+10h] [rbp-38h]

  v2 = _mm_loadu_si128((const __m128i *)(a2 + 24));
  *(_QWORD *)(a1 + 48) = *(_QWORD *)(a2 + 16);
  v3 = *(_QWORD *)(a2 + 40);
  v4 = (char **)&unk_2B414C8;
  v7 = v2;
  v8 = v3;
  do
  {
    while ( 1 )
    {
      v5 = *(_DWORD *)v4;
      result = *(_DWORD *)v4 >> 6;
      if ( ((1LL << *(_DWORD *)v4) & v7.m128i_i64[result]) != 0 )
        break;
      v4 += 14;
      if ( v4 == &off_2B44FD8 )
        return result;
    }
    v4 += 14;
    result = sub_2299030(a1, v5);
  }
  while ( v4 != &off_2B44FD8 );
  return result;
}
