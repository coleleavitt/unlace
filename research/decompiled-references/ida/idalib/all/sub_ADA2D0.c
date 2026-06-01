void __fastcall sub_ADA2D0(__int64 a1, __int64 *a2)
{
  __int64 v2; // rdx
  __int16 v3; // cx
  __int64 v4; // rax
  __int64 *v5; // r9
  const __m128i *v6; // rbx
  const __m128i *v7; // rbp
  __m128i v8; // xmm0
  __m128i v9; // xmm1
  __m128i v10[4]; // [rsp+0h] [rbp-48h] BYREF

  v2 = *a2;
  if ( (*a2 & 0x80000) != 0 )
  {
    v3 = *(_WORD *)a2 & 0x1FF;
    v4 = *((unsigned int *)a2 + 1);
    v5 = &a2[v4 + 10];
    if ( v3 == 24 )
      v5 = &a2[v4 + 8];
    if ( *(_DWORD *)v5 )
    {
      if ( (v2 & 0x80000) != 0 )
      {
        if ( v3 == 24 )
        {
          if ( LODWORD(a2[v4 + 8]) )
          {
            v6 = (const __m128i *)&a2[2 * ((v2 & 0x80000) != 0) + 8 + v4];
LABEL_9:
            if ( (v2 & 0x80000) != 0 )
            {
              v7 = &v6[2 * *((unsigned int *)v5 + 3)];
              while ( v7 != v6 )
              {
                v8 = _mm_loadu_si128(v6);
                v9 = _mm_loadu_si128(v6 + 1);
                v6 += 2;
                v10[0] = v8;
                v10[1] = v9;
                sub_AD68F0(a1, v10, 0);
              }
            }
            return;
          }
        }
        else if ( LODWORD(a2[v4 + 10]) )
        {
          v6 = (const __m128i *)&a2[2 * ((v2 & 0x80000) != 0) + 10 + v4];
          goto LABEL_9;
        }
      }
      v6 = nullptr;
      goto LABEL_9;
    }
  }
}
