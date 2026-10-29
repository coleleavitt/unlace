unsigned __int64 __fastcall sub_201D30(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 *v6; // r12
  __int64 v7; // r14
  __int64 v8; // rax
  __int64 v9; // r15
  __int64 v10; // rbp
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v17; // rax
  __int64 v18; // [rsp+8h] [rbp-70h]
  __int64 v20; // [rsp+18h] [rbp-60h]
  __m128i v21; // [rsp+20h] [rbp-58h] BYREF
  char v22; // [rsp+30h] [rbp-48h]
  unsigned __int64 v23; // [rsp+38h] [rbp-40h]

  v23 = __readfsqword(0x28u);
  v2 = a1[1];
  if ( (int)v2 > 0 )
  {
    v18 = 0;
    v20 = 8 * (3LL * (unsigned int)(v2 - 1) + 3);
    do
    {
      v4 = a2[1];
      v5 = *a2;
      v6 = (__int64 *)(*a1 + v18);
      if ( a2[2] < (unsigned __int64)(v4 + 1) )
      {
        v17 = qvector_reserve(a2, v5, v4 + 1, 24);
        v4 = a2[1];
        *a2 = v17;
        v5 = v17;
      }
      v7 = v5 + 24 * v4;
      *(_QWORD *)v7 = 0;
      *(_OWORD *)(v7 + 8) = 0;
      ++a2[1];
      v8 = v6[1];
      if ( (int)v8 > 0 )
      {
        v9 = 0;
        v10 = 16 * ((unsigned int)(v8 - 1) + 1LL);
        do
        {
          v12 = *v6;
          v22 = 0;
          v21 = 0;
          v21 = _mm_loadu_si128((const __m128i *)(v9 + v12));
          v13 = *(_QWORD *)(v7 + 8);
          v14 = *(_QWORD *)v7;
          if ( *(_QWORD *)(v7 + 16) < (unsigned __int64)(v13 + 1) )
          {
            v15 = qvector_reserve(v7, v14, v13 + 1, 24);
            v13 = *(_QWORD *)(v7 + 8);
            *(_QWORD *)v7 = v15;
            v14 = v15;
          }
          v9 += 16;
          v11 = v14 + 24 * v13;
          *(_QWORD *)v11 = 0;
          *(_OWORD *)(v11 + 8) = 0;
          ++*(_QWORD *)(v7 + 8);
          sub_201C50((__int64 *)v11, (__int64)&v21);
        }
        while ( v10 != v9 );
      }
      v18 += 24;
    }
    while ( v20 != v18 );
  }
  return v23 - __readfsqword(0x28u);
}
