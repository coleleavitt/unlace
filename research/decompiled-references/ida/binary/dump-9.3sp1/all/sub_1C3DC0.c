__int64 __fastcall sub_1C3DC0(int *a1, int a2, __int64 a3, int a4, __m128i *a5)
{
  int v7; // eax
  const __m128i *v8; // rdi
  unsigned int v9; // r12d
  const __m128i *v11; // [rsp+0h] [rbp-38h] BYREF
  __int128 v12; // [rsp+8h] [rbp-30h]
  unsigned __int64 v13; // [rsp+18h] [rbp-20h]

  v13 = __readfsqword(0x28u);
  v11 = nullptr;
  v12 = 0;
  v7 = sub_1C37C0(a1, (__int64 *)&v11, a2, a3, a4, 1);
  v8 = v11;
  v9 = 0;
  if ( v7 == 1 && v11->m128i_i32[0] == a4 )
  {
    if ( a5 )
    {
      *a5 = _mm_loadu_si128(v11);
      a5[1].m128i_i64[0] = v8[1].m128i_i64[0];
    }
    v9 = 1;
  }
  if ( v8 )
  {
    *(_QWORD *)&v12 = 0;
    qfree((__int64)v8);
  }
  return v9;
}
