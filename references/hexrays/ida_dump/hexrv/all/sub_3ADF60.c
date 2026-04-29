unsigned __int64 __fastcall sub_3ADF60(__int64 *a1, unsigned __int8 (__fastcall *a2)(__int64 *, __int64))
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rdx
  _QWORD *v7; // r14
  __int64 v8; // rdx
  __int64 v9; // r15
  __int64 i; // rbp
  __int64 *v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // r15
  __int64 j; // rbp
  __int64 *v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rax
  __m128i v20; // xmm0
  char v21; // al
  __m128i v22; // xmm0
  __int64 v23; // rax
  __m128i v24; // xmm0
  __int64 v26; // [rsp+0h] [rbp-78h] BYREF
  __m128i v27; // [rsp+8h] [rbp-70h] BYREF
  __m128i v28; // [rsp+18h] [rbp-60h] BYREF
  __int64 v29; // [rsp+28h] [rbp-50h]
  unsigned __int64 v30; // [rsp+38h] [rbp-40h]

  v2 = *a1;
  v30 = __readfsqword(0x28u);
  v26 = v2;
  if ( v2 )
    ++*(_DWORD *)(v2 + 104);
  v3 = a1[5];
  v4 = (__int64)(a1 - 6);
  v27 = _mm_loadu_si128((const __m128i *)(a1 + 1));
  v29 = v3;
  v28 = _mm_loadu_si128((const __m128i *)(a1 + 3));
  while ( a2(&v26, v4) )
  {
    v5 = *(_QWORD *)(v4 + 48);
    if ( v5 )
    {
      if ( (*(_DWORD *)(v5 + 104))-- == 1 )
      {
        v7 = *(_QWORD **)(v4 + 48);
        if ( v7 )
        {
          sub_253D70(*(__int64 **)(v4 + 48));
          v8 = v7[23];
          if ( v8 )
          {
            v9 = v7[24];
            if ( v9 )
            {
              for ( i = 0; i != v9; ++i )
              {
                v11 = (__int64 *)(v8 + 24 * i);
                v12 = *v11;
                if ( *v11 )
                {
                  v11[1] = 0;
                  qfree(v12);
                  v8 = v7[23];
                }
              }
            }
            v7[24] = 0;
            qfree(v8);
          }
          v13 = v7[20];
          if ( v13 )
          {
            v7[21] = 0;
            qfree(v13);
          }
          v14 = v7[16];
          if ( v14 )
          {
            v15 = v7[17];
            if ( v15 )
            {
              for ( j = 0; j != v15; ++j )
              {
                v17 = (__int64 *)(v14 + 32 * j);
                v18 = *v17;
                if ( *v17 )
                {
                  v17[1] = 0;
                  qfree(v18);
                  v14 = v7[16];
                }
              }
            }
            v7[17] = 0;
            qfree(v14);
          }
          sub_250450((__int64)(v7 + 2));
          j__qfree(v7);
        }
      }
    }
    v19 = *(_QWORD *)v4;
    *(_QWORD *)(v4 + 48) = *(_QWORD *)v4;
    if ( v19 )
      ++*(_DWORD *)(v19 + 104);
    v20 = _mm_loadu_si128((const __m128i *)(v4 + 8));
    v21 = *(_BYTE *)(v4 + 40);
    v4 -= 48;
    *(__m128i *)(v4 + 104) = v20;
    v22 = _mm_loadu_si128((const __m128i *)(v4 + 72));
    *(_BYTE *)(v4 + 136) = v21;
    *(__m128i *)(v4 + 120) = v22;
  }
  sub_13BC80((_QWORD *)(v4 + 48), v4);
  v23 = v26;
  *(_QWORD *)(v4 + 48) = v26;
  if ( v23 )
    ++*(_DWORD *)(v23 + 104);
  v24 = _mm_loadu_si128(&v27);
  *(_BYTE *)(v4 + 88) = v29;
  *(__m128i *)(v4 + 56) = v24;
  *(__m128i *)(v4 + 72) = _mm_loadu_si128(&v28);
  sub_13BC80(&v26, v4);
  return v30 - __readfsqword(0x28u);
}
