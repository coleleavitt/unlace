__int64 __fastcall sub_124B50(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 *a5)
{
  __int64 v5; // rbx
  bool v9; // al
  __int64 v10; // rdi
  __int64 v11; // rax
  __m128i v12; // xmm0
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v17; // [rsp+0h] [rbp-68h] BYREF
  __int64 v18; // [rsp+8h] [rbp-60h]
  __int64 v19; // [rsp+10h] [rbp-58h]
  __m128i v20; // [rsp+18h] [rbp-50h] BYREF
  unsigned __int64 v21; // [rsp+28h] [rbp-40h]

  v21 = __readfsqword(0x28u);
  v5 = a3;
  if ( a3 != a4 && a3 )
  {
    while ( 1 )
    {
      sub_123560((__int64)&v17, a1, v5, 0x101u);
      v9 = sub_605B0(&v17, a2);
      v10 = v19;
      if ( v9 )
        break;
      if ( v19 )
      {
        v20.m128i_i64[0] = 0;
        qfree(v19);
      }
      qfree(v17);
      v5 = *(_QWORD *)(v5 + 16);
      if ( !v5 || a4 == v5 )
        return v5;
    }
    if ( a5 )
    {
      v11 = *a5;
      v12 = _mm_loadu_si128(&v20);
      *a5 = v17;
      v17 = v11;
      v13 = a5[1];
      a5[1] = v18;
      v14 = a5[4];
      v18 = v13;
      v15 = a5[2];
      v20.m128i_i64[1] = v14;
      v19 = v15;
      a5[2] = v10;
      v10 = v15;
      *(__m128i *)(a5 + 3) = v12;
    }
    if ( v10 )
    {
      v20.m128i_i64[0] = 0;
      qfree(v10);
    }
    qfree(v17);
  }
  return v5;
}
