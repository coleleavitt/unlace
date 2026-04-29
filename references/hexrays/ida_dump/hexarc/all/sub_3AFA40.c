unsigned __int64 __fastcall sub_3AFA40(__int64 *a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rax
  __m128i v5; // xmm0
  char v6; // al
  __m128i v7; // xmm0
  __int64 v9; // rdx
  __int64 v10; // r12
  __int64 i; // rbp
  __int64 *v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // r12
  __int64 j; // rbp
  __int64 *v18; // rax
  __int64 v19; // rdi
  char v21; // al
  __m128i v22; // xmm0
  __m128i v23; // [rsp+8h] [rbp-50h] BYREF
  __m128i v24; // [rsp+18h] [rbp-40h] BYREF
  __int64 v25; // [rsp+28h] [rbp-30h]
  unsigned __int64 v26; // [rsp+38h] [rbp-20h]

  v2 = *a1;
  v26 = __readfsqword(0x28u);
  if ( v2 )
    ++*(_DWORD *)(v2 + 104);
  v3 = a1[5];
  v23 = _mm_loadu_si128((const __m128i *)(a1 + 1));
  v25 = v3;
  v24 = _mm_loadu_si128((const __m128i *)(a1 + 3));
  sub_139A80(a1, a2);
  v4 = *(_QWORD *)a2;
  *a1 = *(_QWORD *)a2;
  if ( v4 )
    ++*(_DWORD *)(v4 + 104);
  *(__m128i *)(a1 + 1) = _mm_loadu_si128((const __m128i *)(a2 + 8));
  *(__m128i *)(a1 + 3) = _mm_loadu_si128((const __m128i *)(a2 + 24));
  *((_BYTE *)a1 + 40) = *(_BYTE *)(a2 + 40);
  sub_139A80((_QWORD *)a2, a2);
  *(_QWORD *)a2 = v2;
  if ( v2 )
  {
    v5 = _mm_loadu_si128(&v23);
    ++*(_DWORD *)(v2 + 104);
    v6 = v25;
    *(__m128i *)(a2 + 8) = v5;
    v7 = _mm_loadu_si128(&v24);
    *(_BYTE *)(a2 + 40) = v6;
    *(__m128i *)(a2 + 24) = v7;
    if ( (*(_DWORD *)(v2 + 104))-- == 1 )
    {
      sub_2515F0((__int64 *)v2);
      v9 = *(_QWORD *)(v2 + 184);
      if ( v9 )
      {
        v10 = *(_QWORD *)(v2 + 192);
        if ( v10 )
        {
          for ( i = 0; i != v10; ++i )
          {
            v12 = (__int64 *)(v9 + 24 * i);
            v13 = *v12;
            if ( *v12 )
            {
              v12[1] = 0;
              qfree(v13);
              v9 = *(_QWORD *)(v2 + 184);
            }
          }
        }
        *(_QWORD *)(v2 + 192) = 0;
        qfree(v9);
      }
      v14 = *(_QWORD *)(v2 + 160);
      if ( v14 )
      {
        *(_QWORD *)(v2 + 168) = 0;
        qfree(v14);
      }
      v15 = *(_QWORD *)(v2 + 128);
      if ( v15 )
      {
        v16 = *(_QWORD *)(v2 + 136);
        if ( v16 )
        {
          for ( j = 0; j != v16; ++j )
          {
            v18 = (__int64 *)(v15 + 32 * j);
            v19 = *v18;
            if ( *v18 )
            {
              v18[1] = 0;
              qfree(v19);
              v15 = *(_QWORD *)(v2 + 128);
            }
          }
        }
        *(_QWORD *)(v2 + 136) = 0;
        qfree(v15);
      }
      sub_24DCD0(v2 + 16);
      j__qfree(v2);
    }
  }
  else
  {
    v21 = v25;
    *(__m128i *)(a2 + 8) = _mm_loadu_si128(&v23);
    v22 = _mm_loadu_si128(&v24);
    *(_BYTE *)(a2 + 40) = v21;
    *(__m128i *)(a2 + 24) = v22;
  }
  return v26 - __readfsqword(0x28u);
}
