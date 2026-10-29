__int64 __fastcall sub_1982770(__int64 *a1, unsigned int *a2, double a3, __m128 a4)
{
  unsigned __int64 v5; // rdx
  unsigned int v6; // r12d
  int v7; // r15d
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rax
  __m128 *v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  char *v14; // rdx
  char *v15; // rdx
  int v16; // eax
  __int64 v17; // rbx
  unsigned __int64 v19; // rdx
  const __m128i *v20; // rcx
  __int64 v21; // rdx
  int v22; // ecx
  unsigned __int64 v23; // [rsp+10h] [rbp-218h]
  unsigned __int64 v24; // [rsp+10h] [rbp-218h]
  _BYTE *v25; // [rsp+18h] [rbp-210h]
  __m128 v26; // [rsp+20h] [rbp-208h] BYREF
  int v27; // [rsp+30h] [rbp-1F8h]
  int v28; // [rsp+34h] [rbp-1F4h]
  __int128 v29; // [rsp+40h] [rbp-1E8h] BYREF
  __int64 v30; // [rsp+50h] [rbp-1D8h]
  void *ptr; // [rsp+60h] [rbp-1C8h] BYREF
  __int64 v32; // [rsp+68h] [rbp-1C0h]
  _BYTE v33[440]; // [rsp+70h] [rbp-1B8h] BYREF

  v5 = a2[4];
  v6 = a2[4];
  ptr = v33;
  v32 = 0x1000000000LL;
  if ( v5 > 0x10 )
  {
    sub_2237220(&ptr, v33, v5, 24);
    v6 = a2[4];
  }
  v7 = 0;
  if ( v6 )
  {
    while ( 1 )
    {
      sub_EB5BF0(&v26, (__int64)a2, v7);
      v8 = sub_190CCA0(a1, (unsigned __int16 *)v26.m128_u64[0], a3, a4);
      if ( v8 != 1 )
      {
        v9 = v26.m128_u64[1];
        if ( !v26.m128_u64[1] )
          goto LABEL_8;
        v10 = sub_190CCA0(a1, (unsigned __int16 *)v26.m128_u64[1], a3, a4);
        if ( v10 != 1 )
          break;
      }
LABEL_11:
      if ( v6 == ++v7 )
        goto LABEL_12;
    }
    v9 = v10 & 0xFFFFFFFFFFFFFFFELL;
LABEL_8:
    a3 = 0.0;
    v11 = (__m128 *)((char *)ptr + 24 * (unsigned int)v32);
    if ( (unsigned int)v32 >= (unsigned __int64)HIDWORD(v32) )
    {
      v19 = (unsigned int)v32 + 1LL;
      v29 = 0;
      v20 = (const __m128i *)&v29;
      v30 = 0;
      if ( HIDWORD(v32) < v19 )
      {
        if ( ptr > &v29 || v11 <= (__m128 *)&v29 )
        {
          v24 = v9;
          sub_2237220(&ptr, v33, v19, 24);
          v9 = v24;
          v11 = (__m128 *)((char *)ptr + 24 * (unsigned int)v32);
          v20 = (const __m128i *)&v29;
        }
        else
        {
          v25 = ptr;
          v23 = v9;
          sub_2237220(&ptr, v33, v19, 24);
          v9 = v23;
          v20 = (const __m128i *)((char *)ptr + (char *)&v29 - v25);
          v11 = (__m128 *)((char *)ptr + 24 * (unsigned int)v32);
        }
      }
      a4 = (__m128)_mm_loadu_si128(v20);
      *v11 = a4;
      v21 = v20[1].m128i_i64[0];
      v22 = v32;
      v11[1].m128_u64[0] = v21;
      LODWORD(v32) = v22 + 1;
      v15 = (char *)ptr + 24 * (unsigned int)(v22 + 1) - 24;
    }
    else
    {
      v12 = (unsigned int)(v32 + 1);
      *v11 = 0;
      v13 = 3 * v12;
      LODWORD(v32) = v12;
      v14 = (char *)ptr;
      v11[1].m128_u64[0] = 0;
      v15 = &v14[8 * v13 - 24];
    }
    *((_QWORD *)v15 + 1) = v9;
    *((_DWORD *)v15 + 4) = v27;
    v16 = v28;
    *(_QWORD *)v15 = v8 & 0xFFFFFFFFFFFFFFFELL;
    *((_DWORD *)v15 + 5) = v16;
    goto LABEL_11;
  }
LABEL_12:
  v17 = sub_1B440A0(*(_QWORD *)(*a1 + 760), *a2, a2[3], a2[1], ptr, (unsigned int)v32, a3);
  if ( ptr != v33 )
    free(ptr);
  return v17;
}
