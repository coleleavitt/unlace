unsigned __int64 __fastcall sub_4C99E0(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rax
  unsigned int v5; // eax
  __int64 v6; // rdi
  unsigned int v7; // esi
  int v9; // edx
  int v10; // eax
  __m128i v11; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v12; // [rsp+18h] [rbp-20h]

  v3 = *(unsigned int *)(a2 + 4);
  v12 = __readfsqword(0x28u);
  v11 = _mm_unpacklo_epi64(
          (__m128i)*(unsigned __int64 *)(a2 + 8),
          (__m128i)(unsigned __int64)(*(_QWORD *)(a2 + 8) + v3));
  v5 = unpack_dd(&v11);
  v6 = *(_QWORD *)(a1 + 1536);
  v7 = v5;
  if ( v11.m128i_i64[0] >= (unsigned __int64)v11.m128i_i64[1] )
    goto LABEL_2;
  v9 = *(unsigned __int8 *)v11.m128i_i64[0]++;
  LOBYTE(v10) = v9;
  if ( a3 == 1 )
  {
    if ( (_BYTE)v9 == 2 )
      goto LABEL_8;
    v10 = -v9;
  }
  if ( (_BYTE)v10 == 2 )
  {
LABEL_8:
    sub_4C7EB0(v6, v7);
    return v12 - __readfsqword(0x28u);
  }
  if ( (char)v10 > 0 )
  {
    sub_4C8D00(v6, v7);
    return v12 - __readfsqword(0x28u);
  }
LABEL_2:
  sub_4C7DE0(v6, v7);
  return v12 - __readfsqword(0x28u);
}

