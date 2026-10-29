__int64 __fastcall sub_20B2A90(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  char v8; // si
  unsigned __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // r13
  unsigned int v12; // r12d
  __int64 v13; // rdi
  __int64 v14; // rax
  __m128i *v16; // r12
  __int64 v17; // rax
  __m128i v18; // xmm1
  __int64 v19; // rax
  __m128i v20; // xmm2
  __int64 v21; // rax
  __m128i v22; // xmm3
  __int64 v23; // rax
  __m128i v24; // xmm4
  __int64 v25; // rax
  __int64 v26; // [rsp+0h] [rbp-88h] BYREF
  __m128i v27; // [rsp+8h] [rbp-80h]
  __int64 v28; // [rsp+18h] [rbp-70h] BYREF

  v8 = *(_BYTE *)a1 & 1;
  if ( a2 <= 4 )
  {
    a4 = a1 + 8;
    v9 = a1 + 104;
    if ( !v8 )
    {
      v11 = *(_QWORD *)(a1 + 8);
      v12 = *(_DWORD *)(a1 + 16);
      *(_BYTE *)a1 |= 1u;
      goto LABEL_8;
    }
  }
  else
  {
    v9 = (((((a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 2)
         | (a2 - 1)
         | ((unsigned __int64)(a2 - 1) >> 1)
         | (((((a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 2) | (a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 4)) >> 8)
       | (((a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 2)
       | (a2 - 1)
       | ((unsigned __int64)(a2 - 1) >> 1)
       | (((((a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 2) | (a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 4);
    v10 = (v9 | (v9 >> 16)) + 1;
    a2 = v10;
    if ( (unsigned int)v10 > 0x40 )
    {
      a4 = a1 + 8;
      v9 = a1 + 104;
      if ( !v8 )
      {
        v11 = *(_QWORD *)(a1 + 8);
        v12 = *(_DWORD *)(a1 + 16);
        v13 = 24LL * (unsigned int)v10;
        goto LABEL_5;
      }
    }
    else
    {
      if ( !v8 )
      {
        v11 = *(_QWORD *)(a1 + 8);
        v12 = *(_DWORD *)(a1 + 16);
        a2 = 64;
        v13 = 1536;
LABEL_5:
        v14 = sub_22300B0(v13, 8, v9, a4, a5, a6);
        *(_DWORD *)(a1 + 16) = a2;
        *(_QWORD *)(a1 + 8) = v14;
LABEL_8:
        sub_20B29B0(a1, v11, v11 + 24LL * v12);
        return operator delete(v11, 24LL * v12, 8);
      }
      a4 = a1 + 8;
      v9 = a1 + 104;
      a2 = 64;
    }
  }
  if ( *(_QWORD *)a4 == -4096 || *(_QWORD *)a4 == -8192 )
  {
    v16 = (__m128i *)&v26;
  }
  else
  {
    v26 = *(_QWORD *)a4;
    v16 = (__m128i *)&v28;
    v27 = _mm_loadu_si128((const __m128i *)(a4 + 8));
  }
  if ( v9 != a4 + 24 )
  {
    v17 = *(_QWORD *)(a4 + 24);
    if ( v17 != -4096 && v17 != -8192 )
    {
      v18 = _mm_loadu_si128((const __m128i *)(a4 + 32));
      v16->m128i_i64[0] = v17;
      v16 = (__m128i *)((char *)v16 + 24);
      v16[-1] = v18;
    }
    if ( v9 != a4 + 48 )
    {
      v19 = *(_QWORD *)(a4 + 48);
      if ( v19 != -8192 && v19 != -4096 )
      {
        v20 = _mm_loadu_si128((const __m128i *)(a4 + 56));
        v16->m128i_i64[0] = v19;
        v16 = (__m128i *)((char *)v16 + 24);
        v16[-1] = v20;
      }
      if ( v9 != a4 + 72 )
      {
        v21 = *(_QWORD *)(a4 + 72);
        if ( v21 != -8192 && v21 != -4096 )
        {
          v22 = _mm_loadu_si128((const __m128i *)(a4 + 80));
          v16->m128i_i64[0] = v21;
          v16 = (__m128i *)((char *)v16 + 24);
          v16[-1] = v22;
        }
        if ( v9 != a4 + 96 )
        {
          v23 = *(_QWORD *)(a4 + 96);
          if ( v23 != -4096 && v23 != -8192 )
          {
            v24 = _mm_loadu_si128((const __m128i *)(a4 + 104));
            v16->m128i_i64[0] = v23;
            v16 = (__m128i *)((char *)v16 + 24);
            v16[-1] = v24;
          }
        }
      }
    }
  }
  if ( a2 > 4 )
  {
    *(_BYTE *)a1 &= ~1u;
    v25 = sub_22300B0(24LL * a2, 8, v9, a4, a5, a6);
    *(_DWORD *)(a1 + 16) = a2;
    *(_QWORD *)(a1 + 8) = v25;
  }
  return sub_20B29B0(a1, (__int64)&v26, (__int64)v16);
}
