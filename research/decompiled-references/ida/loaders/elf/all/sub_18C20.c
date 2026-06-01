__int64 __fastcall sub_18C20(__int64 a1, _DWORD *a2)
{
  __int64 v3; // rsi
  __int64 v4; // rbp
  __m128i v5; // xmm1
  __m128i v6; // xmm1
  __int64 result; // rax
  __m128i v8; // [rsp+0h] [rbp-58h] BYREF
  int v9; // [rsp+1Ch] [rbp-3Ch] BYREF
  __int64 v10; // [rsp+20h] [rbp-38h] BYREF
  __m128i v11; // [rsp+28h] [rbp-30h] BYREF
  unsigned __int64 v12; // [rsp+38h] [rbp-20h]

  v12 = __readfsqword(0x28u);
  v3 = (unsigned int)*a2;
  v9 = 0;
  sub_4BB00(&v10, v3, &v9);
  v4 = v10;
  v10 = 0;
  v5 = _mm_loadu_si128(&v11);
  v11 = 0;
  if ( qword_895F0 )
  {
    v8 = v5;
    *(_QWORD *)&xmmword_895F8 = 0;
    qfree(qword_895F0);
    v6 = _mm_load_si128(&v8);
    qword_895F0 = v4;
    xmmword_895F8 = (__int128)v6;
    if ( v10 )
    {
      v11.m128i_i64[0] = 0;
      qfree(v10);
    }
  }
  else
  {
    qword_895F0 = v4;
    xmmword_895F8 = (__int128)v5;
  }
  *a2 = v9;
  result = 0;
  if ( (unsigned __int64)xmmword_895F8 > 1 )
    return qword_895F0;
  return result;
}

