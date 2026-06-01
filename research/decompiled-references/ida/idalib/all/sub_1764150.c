__int64 __fastcall sub_1764150(__int64 *a1, unsigned int *a2, double a3)
{
  unsigned __int64 v4; // rdx
  unsigned int v5; // r12d
  int v6; // r15d
  __int64 v7; // r14
  unsigned __int64 v8; // rax
  __int64 v9; // rax
  __m128i *v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  char *v13; // rdx
  char *v14; // rdx
  int v15; // eax
  __int64 v16; // rbx
  unsigned __int64 v18; // rdx
  const __m128i *v19; // rcx
  __int64 v20; // rdx
  int v21; // ecx
  unsigned __int64 v22; // [rsp+10h] [rbp-218h]
  unsigned __int64 v23; // [rsp+10h] [rbp-218h]
  _BYTE *v24; // [rsp+18h] [rbp-210h]
  __m128 v25; // [rsp+20h] [rbp-208h] BYREF
  int v26; // [rsp+30h] [rbp-1F8h]
  int v27; // [rsp+34h] [rbp-1F4h]
  __int128 v28; // [rsp+40h] [rbp-1E8h] BYREF
  __int64 v29; // [rsp+50h] [rbp-1D8h]
  void *ptr; // [rsp+60h] [rbp-1C8h] BYREF
  __int64 v31; // [rsp+68h] [rbp-1C0h]
  _BYTE v32[440]; // [rsp+70h] [rbp-1B8h] BYREF

  v4 = a2[4];
  v5 = a2[4];
  ptr = v32;
  v31 = 0x1000000000LL;
  if ( v4 > 0x10 )
  {
    sub_2237220(&ptr, v32, v4, 24);
    v5 = a2[4];
  }
  v6 = 0;
  if ( v5 )
  {
    while ( 1 )
    {
      sub_EB5BF0(&v25, (__int64)a2, v6);
      v7 = sub_175B800(a1, (unsigned __int16 *)v25.m128_u64[0]);
      if ( v7 != 1 )
      {
        v8 = v25.m128_u64[1];
        if ( !v25.m128_u64[1] )
          goto LABEL_8;
        v9 = sub_175B800(a1, (unsigned __int16 *)v25.m128_u64[1]);
        if ( v9 != 1 )
          break;
      }
LABEL_11:
      if ( v5 == ++v6 )
        goto LABEL_12;
    }
    v8 = v9 & 0xFFFFFFFFFFFFFFFELL;
LABEL_8:
    a3 = 0.0;
    v10 = (__m128i *)((char *)ptr + 24 * (unsigned int)v31);
    if ( (unsigned int)v31 >= (unsigned __int64)HIDWORD(v31) )
    {
      v18 = (unsigned int)v31 + 1LL;
      v28 = 0;
      v19 = (const __m128i *)&v28;
      v29 = 0;
      if ( HIDWORD(v31) < v18 )
      {
        if ( ptr > &v28 || v10 <= (__m128i *)&v28 )
        {
          v23 = v8;
          sub_2237220(&ptr, v32, v18, 24);
          v8 = v23;
          v10 = (__m128i *)((char *)ptr + 24 * (unsigned int)v31);
          v19 = (const __m128i *)&v28;
        }
        else
        {
          v24 = ptr;
          v22 = v8;
          sub_2237220(&ptr, v32, v18, 24);
          v8 = v22;
          v19 = (const __m128i *)((char *)ptr + (char *)&v28 - v24);
          v10 = (__m128i *)((char *)ptr + 24 * (unsigned int)v31);
        }
      }
      *v10 = _mm_loadu_si128(v19);
      v20 = v19[1].m128i_i64[0];
      v21 = v31;
      v10[1].m128i_i64[0] = v20;
      LODWORD(v31) = v21 + 1;
      v14 = (char *)ptr + 24 * (unsigned int)(v21 + 1) - 24;
    }
    else
    {
      v11 = (unsigned int)(v31 + 1);
      *v10 = 0;
      v12 = 3 * v11;
      LODWORD(v31) = v11;
      v13 = (char *)ptr;
      v10[1].m128i_i64[0] = 0;
      v14 = &v13[8 * v12 - 24];
    }
    *((_QWORD *)v14 + 1) = v8;
    *((_DWORD *)v14 + 4) = v26;
    v15 = v27;
    *(_QWORD *)v14 = v7 & 0xFFFFFFFFFFFFFFFELL;
    *((_DWORD *)v14 + 5) = v15;
    goto LABEL_11;
  }
LABEL_12:
  v16 = sub_1B440A0(*(_QWORD *)(*a1 + 760), *a2, a2[3], a2[1], ptr, (unsigned int)v31, a3);
  if ( ptr != v32 )
    free(ptr);
  return v16;
}
