__int64 __fastcall sub_AC830(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rbx
  __int64 *v5; // rax
  __int64 v6; // rsi
  __int64 v7; // r13
  unsigned __int64 v8; // rdx
  __int64 *v9; // rax
  unsigned __int64 v10; // rdx
  __int64 v11; // rax
  __m128 v12; // xmm0
  __m128i v13; // xmm1
  __m128i v14; // xmm0
  __int64 v15; // rax
  __m128i v16; // xmm0
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 v19; // r12
  __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v23; // rdx
  __int64 v24; // r12
  __int64 v25; // rbx
  __int64 v26; // rax
  _QWORD *v27; // [rsp+0h] [rbp-A8h] BYREF
  unsigned __int64 i; // [rsp+8h] [rbp-A0h]
  __int64 v29; // [rsp+10h] [rbp-98h] BYREF
  __m128i v30; // [rsp+18h] [rbp-90h] BYREF
  int v31[2]; // [rsp+28h] [rbp-80h]
  int v32[4]; // [rsp+30h] [rbp-78h] BYREF
  __int64 v33; // [rsp+40h] [rbp-68h]
  __m128i v34; // [rsp+48h] [rbp-60h] BYREF
  __int64 v35; // [rsp+58h] [rbp-50h]
  __m128i v36; // [rsp+60h] [rbp-48h] BYREF
  unsigned __int64 v37; // [rsp+78h] [rbp-30h]

  v37 = __readfsqword(0x28u);
  v4 = *(int *)(dbg + 64LL);
  sub_A6C80((__int64)&v29, *(_DWORD *)(dbg + 64LL));
  v5 = sub_A19D0((__int64)a2);
  if ( *((_DWORD *)v5 + 2) != 1 || (v6 = v5[3]) == 0 )
  {
LABEL_10:
    v11 = v29;
    v12 = _mm_loadh_ps((const double *)&v32[2]);
    v13 = _mm_loadu_si128(&v30);
    v29 = 0;
    *(__m128 *)(a1 + 32) = v12;
    v14 = _mm_loadu_si128(&v34);
    *(_QWORD *)a1 = v11;
    v15 = *(_QWORD *)v31;
    *(__m128i *)(a1 + 56) = v14;
    v16 = _mm_load_si128(&v36);
    *(_QWORD *)(a1 + 24) = v15;
    *(_QWORD *)v31 = 0;
    *(_QWORD *)(a1 + 48) = v33;
    v17 = v35;
    *(__m128i *)(a1 + 8) = v13;
    *(_QWORD *)(a1 + 72) = v17;
    v30 = 0;
    *(_OWORD *)v32 = 0;
    *(__m128i *)(a1 + 80) = v16;
    goto LABEL_11;
  }
  sub_9D240(&v29, v6);
  if ( *(_DWORD *)(dbg + 64LL) != *(_QWORD *)v32 )
  {
    v7 = *(_QWORD *)v32;
    if ( v4 > *(__int64 *)v32 )
    {
      v27 = sub_AC5C0(a2, 0);
      for ( i = v8;
            v27
         && i < 16 * ((unsigned __int64)(v27[15] == 0) + ((__int64)(v27[15] - v27[11]) >> 3) - 1)
              + ((__int64)(v27[10] - v27[8]) >> 5)
              + ((__int64)(v27[12] - v27[13]) >> 5)
         && v4 > v7;
            i = v10 )
      {
        v9 = sub_A19D0((__int64)&v27);
        v7 += (int)sub_9ED00(&v29, (_QWORD *)v9[3], 1);
        v27 = sub_AC5C0(&v27, 0);
      }
    }
    goto LABEL_10;
  }
  sub_A88C0(a1, *(__int64 *)v31);
  v23 = v35;
  if ( v35 )
  {
    v24 = v36.m128i_i64[0];
    if ( v36.m128i_i64[0] )
    {
      v25 = 0;
      do
      {
        v26 = v23 + 32 * v25;
        if ( *(_QWORD *)(v26 + 8) )
        {
          *(_QWORD *)(v26 + 16) = 0;
          qfree();
          v23 = v35;
        }
        ++v25;
      }
      while ( v24 != v25 );
    }
    v36.m128i_i64[0] = 0;
    qfree();
  }
  if ( v33 )
  {
    v34.m128i_i64[0] = 0;
    qfree();
  }
LABEL_11:
  v18 = *(_QWORD *)v31;
  if ( *(_QWORD *)v31 )
  {
    v19 = *(_QWORD *)v32;
    if ( *(_QWORD *)v32 )
    {
      v20 = 0;
      do
      {
        v21 = v18 + 32 * v20;
        if ( *(int *)v21 >= -1 && *(_QWORD *)(v21 + 8) )
        {
          *(_QWORD *)(v21 + 16) = 0;
          qfree();
          v18 = *(_QWORD *)v31;
        }
        ++v20;
      }
      while ( v19 != v20 );
    }
    *(_QWORD *)v32 = 0;
    qfree();
  }
  if ( v29 )
  {
    v30.m128i_i64[0] = 0;
    qfree();
  }
  return a1;
}

