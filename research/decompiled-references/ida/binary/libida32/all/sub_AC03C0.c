void __fastcall sub_AC03C0(__int64 a1, unsigned __int16 *a2)
{
  unsigned __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rax
  unsigned __int16 *v5; // r9
  __int64 v6; // r8
  const __m128i *v7; // rbx
  const __m128i *v8; // r12
  __m128i v9; // xmm0
  __int64 v10; // rax
  __int128 si128; // xmm2
  __int128 v12; // xmm3
  __int128 v13; // xmm4
  _BYTE v14[24]; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v15; // [rsp+38h] [rbp-90h]
  __m128i v16; // [rsp+40h] [rbp-88h] BYREF
  __int64 v17; // [rsp+50h] [rbp-78h]
  __int128 v18; // [rsp+60h] [rbp-68h]
  __int128 v19; // [rsp+70h] [rbp-58h]
  __int128 v20; // [rsp+80h] [rbp-48h]
  __int64 v21; // [rsp+90h] [rbp-38h]

  v2 = *(_QWORD *)a2;
  if ( (*(_QWORD *)a2 & 0x80000) != 0 )
  {
    v3 = *a2;
    LOWORD(v3) = v3 & 0x1FF;
    v4 = 4LL * *((unsigned int *)a2 + 1);
    v5 = &a2[v4 + 40];
    if ( (_WORD)v3 == 24 )
      v5 = &a2[v4 + 32];
    if ( *(_DWORD *)v5 )
    {
      v6 = v2 >> 16;
      if ( (v2 & 0x80000) != 0 )
      {
        if ( (_WORD)v3 == 24 )
        {
          if ( *(_DWORD *)&a2[v4 + 32] )
          {
            v6 = 16LL * ((v2 & 0x80000) != 0);
            v7 = (const __m128i *)((char *)&a2[v4 + 32] + v6);
LABEL_10:
            if ( (v2 & 0x80000) != 0 )
            {
              v8 = &v7[2 * *((unsigned int *)v5 + 3)];
              while ( v8 != v7 )
              {
                v9 = _mm_loadu_si128(v7);
                v10 = v7[1].m128i_i64[0];
                *(_QWORD *)v14 = a1;
                *(__m128i *)&v14[8] = v9;
                si128 = (__int128)_mm_load_si128((const __m128i *)v14);
                v7 += 2;
                v15 = v10;
                v12 = (__int128)_mm_load_si128((const __m128i *)&v14[16]);
                v16 = 0u;
                v13 = (__int128)_mm_load_si128(&v16);
                v17 = 0;
                v18 = si128;
                v19 = v12;
                v20 = v13;
                v21 = 0;
                sub_ABFAF0((char *)(a1 + 8), (char *)&byte_22CD811, 0, v3, v6, (__int64)v5, si128, v12, v13, 0);
              }
            }
            return;
          }
        }
        else
        {
          v3 = *(unsigned int *)&a2[v4 + 40];
          if ( (_DWORD)v3 )
          {
            v6 = 16LL * ((v2 & 0x80000) != 0);
            v7 = (const __m128i *)((char *)&a2[v4 + 40] + v6);
            goto LABEL_10;
          }
        }
      }
      v7 = nullptr;
      goto LABEL_10;
    }
  }
}

