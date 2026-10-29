void __fastcall sub_62FD30(__m128i *a1)
{
  unsigned __int64 *v2; // rdi
  __m128i si128; // xmm0
  __int64 v4; // rax
  __int64 *v5; // r12
  __int64 *v6; // rbx
  __int64 v7; // rdi
  __m128i v8[2]; // [rsp+0h] [rbp-28h] BYREF

  a1->m128i_i64[0] = (__int64)&off_47CFFA8;
  v2 = (unsigned __int64 *)a1[3].m128i_i64[1];
  si128 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&qword_49F4A20[2], (__m128i)(unsigned __int64)&off_47CFF88);
  if ( v2 != &a1[4].m128i_u64[1] )
  {
    v4 = a1[4].m128i_i64[1];
    v8[0] = si128;
    operator delete(v2, v4 + 1);
    si128 = _mm_load_si128(v8);
  }
  v5 = (__int64 *)a1[1].m128i_i64[1];
  v6 = (__int64 *)a1[1].m128i_i64[0];
  *a1 = si128;
  if ( v5 != v6 )
  {
    do
    {
      while ( 1 )
      {
        v7 = *v6;
        if ( !*v6 )
          break;
        ++v6;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
        *(v6 - 1) = 0;
        if ( v6 == v5 )
          goto LABEL_6;
      }
      ++v6;
    }
    while ( v5 != v6 );
LABEL_6:
    v6 = (__int64 *)a1[1].m128i_i64[0];
  }
  if ( v6 )
    operator delete(v6, a1[2].m128i_i64[0] - (_QWORD)v6);
}

