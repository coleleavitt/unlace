bool __fastcall sub_5A3240(__int64 a1, __int64 a2)
{
  __m128i v3; // xmm0
  __m128i v4; // xmm3
  __m128i v5; // xmm1
  __m128i v6; // xmm2
  int v7; // r13d
  __int64 *v8; // r15
  __int64 v9; // rbp
  __int64 v10; // rdi
  char v11; // r12
  int v12; // r13d
  __int64 v13; // rbp
  int v14; // eax
  const char *v15; // rsi
  __int64 v16; // rax
  int v17; // eax
  unsigned __int64 v18; // r14
  __int64 i; // rbp
  __int64 v20; // rax
  void *v21; // rdi
  int v22; // eax
  __int64 v24; // [rsp+8h] [rbp-60h]
  __int64 v25; // [rsp+10h] [rbp-58h] BYREF
  __m128i v26; // [rsp+18h] [rbp-50h]
  unsigned __int64 v27; // [rsp+28h] [rbp-40h]

  v3 = _mm_cvtsi32_si128(*(_DWORD *)(a1 + 56));
  v4 = _mm_cvtsi32_si128(*(_DWORD *)(a1 + 52));
  v27 = __readfsqword(0x28u);
  v5 = _mm_cvtsi32_si128(*(_DWORD *)(a1 + 128));
  v6 = _mm_cvtsi32_si128(*(_DWORD *)(a1 + 132));
  v24 = a1 + 64;
  v7 = *(unsigned __int8 *)(a1 + 60);
  v25 = a2;
  v26 = _mm_unpacklo_epi64(_mm_unpacklo_epi32(v3, v4), _mm_unpacklo_epi32(v5, v6));
  if ( (_BYTE)v7 )
  {
    v8 = *(__int64 **)(a1 + 96);
    v26.m128i_i32[2] = 0;
    v9 = *v8;
    if ( 56 * v8[1] )
    {
      do
      {
        v10 = v9;
        v9 += 56;
        v7 &= sub_5A2550(v10, (__int64)&v25, 0);
      }
      while ( v9 != *v8 + 56 * v8[1] );
    }
  }
  else
  {
    LOBYTE(v7) = sub_5A2550(a1 + 64, (__int64)&v25, 0);
  }
  if ( (a2 == 0) != (_BYTE)v7 )
  {
    if ( !under_debugger )
      interr(604);
LABEL_27:
    BUG();
  }
  *(_QWORD *)(a1 + 168) = a2;
  v11 = sub_5A2DA0(a1, v24, 0) ^ 1;
  if ( v11 && (_BYTE)v7 )
  {
    if ( !under_debugger )
      interr(603);
    goto LABEL_27;
  }
  if ( *(_QWORD *)(a1 + 152) )
  {
    v12 = 0;
    v13 = 0;
    if ( *(_BYTE *)(a1 + 180) )
      goto LABEL_11;
    while ( 1 )
    {
      v15 = haystack;
      v16 = *(_QWORD *)(a1 + 144) + 24 * v13;
      if ( *(_QWORD *)(v16 + 8) )
        v15 = *(const char **)v16;
      v17 = (*(__int64 (__fastcall **)(_QWORD, const char *))(**(_QWORD **)(a1 + 120) + 16LL))(
              *(_QWORD *)(a1 + 120),
              v15);
      v18 = *(_QWORD *)(a1 + 152);
      *(_DWORD *)(a1 + 176) = v17;
      if ( v17 )
        break;
      v13 = ++v12;
      if ( v12 >= v18 )
        break;
LABEL_11:
      v14 = (*(__int64 (__fastcall **)(_QWORD, char *))(**(_QWORD **)(a1 + 120) + 16LL))(*(_QWORD *)(a1 + 120), "\n");
      *(_DWORD *)(a1 + 176) = v14;
      if ( v14 )
      {
        v18 = *(_QWORD *)(a1 + 152);
        break;
      }
    }
    if ( v18 )
    {
      for ( i = 0; i != v18; ++i )
      {
        v20 = *(_QWORD *)(a1 + 144) + 24 * i;
        v21 = *(void **)v20;
        if ( *(_QWORD *)v20 )
        {
          *(_QWORD *)(v20 + 8) = 0;
          qfree(v21);
        }
      }
    }
  }
  v22 = *(_DWORD *)(a1 + 176);
  *(_BYTE *)(a1 + 180) = v11;
  *(_QWORD *)(a1 + 152) = 0;
  return v22 == 0;
}
