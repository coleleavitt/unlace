__int64 __fastcall sub_14EC6D0(__int64 a1, int a2)
{
  __int64 v2; // r12
  __m128i v4; // xmm0
  __int32 v5; // eax
  __m128i v6; // xmm1
  int v7; // edx
  __m128i v9; // [rsp+0h] [rbp-68h] BYREF
  __int64 v10; // [rsp+10h] [rbp-58h]
  __m128i v11[4]; // [rsp+20h] [rbp-48h] BYREF

  v2 = a1 + 24;
  while ( 1 )
  {
    while ( 1 )
    {
      sub_13DFA10(v11, v2);
      if ( (unsigned int)(v11[0].m128i_i32[0] - 8) > 1 )
        break;
      sub_13DF9D0(&v9, v2);
      v5 = v9.m128i_i32[0];
      v6 = _mm_loadu_si128(&v9);
      *(_QWORD *)(a1 + 104) = v10;
      v7 = a2-- + 1;
      if ( v5 != 9 )
        a2 = v7;
      *(__m128i *)(a1 + 88) = v6;
      if ( !a2 )
        return 1;
    }
    v11[0].m128i_i32[0] = 1;
    if ( sub_14E3360(a1, v11, 1) )
      break;
    sub_13DF9D0(&v9, v2);
    v4 = _mm_loadu_si128(&v9);
    *(_QWORD *)(a1 + 104) = v10;
    *(__m128i *)(a1 + 88) = v4;
  }
  return 0;
}
