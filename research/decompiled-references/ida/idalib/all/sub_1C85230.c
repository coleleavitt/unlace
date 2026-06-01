_DWORD *__fastcall sub_1C85230(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  unsigned __int64 v5; // rdx
  int v6; // r12d
  int v7; // r15d
  __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  __int64 v13; // r8
  unsigned __int16 *v14; // r14
  unsigned __int64 v15; // rax
  unsigned __int16 *v16; // rax
  __m128 *v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rcx
  char *v20; // rdx
  char *v21; // rdx
  int v22; // eax
  _DWORD *v23; // rbx
  unsigned __int64 v25; // rdx
  const __m128i *v26; // rcx
  __int64 v27; // rdx
  int v28; // ecx
  unsigned __int64 v29; // [rsp+10h] [rbp-218h]
  unsigned __int64 v30; // [rsp+10h] [rbp-218h]
  _BYTE *v31; // [rsp+18h] [rbp-210h]
  __m128 v32; // [rsp+20h] [rbp-208h] BYREF
  int v33; // [rsp+30h] [rbp-1F8h]
  int v34; // [rsp+34h] [rbp-1F4h]
  __int128 v35; // [rsp+40h] [rbp-1E8h] BYREF
  __int64 v36; // [rsp+50h] [rbp-1D8h]
  void *ptr; // [rsp+60h] [rbp-1C8h] BYREF
  __int64 v38; // [rsp+68h] [rbp-1C0h]
  _BYTE v39[440]; // [rsp+70h] [rbp-1B8h] BYREF

  v5 = *(unsigned int *)(a2 + 16);
  v6 = *(_DWORD *)(a2 + 16);
  ptr = v39;
  v38 = 0x1000000000LL;
  if ( v5 > 0x10 )
  {
    sub_2237220(&ptr, v39, v5, 24);
    v6 = *(_DWORD *)(a2 + 16);
  }
  v7 = 0;
  if ( v6 )
  {
    while ( 1 )
    {
      sub_EB5BF0(&v32, a2, v7);
      v14 = sub_1C7CFE0(a1, v32.m128_u64[0], a3, a4, v8, v9, v10);
      if ( v14 != (unsigned __int16 *)((char *)&dword_0 + 1) )
      {
        v15 = v32.m128_u64[1];
        if ( !v32.m128_u64[1] )
          goto LABEL_8;
        v16 = sub_1C7CFE0(a1, v32.m128_u64[1], a3, a4, v11, v12, v13);
        if ( v16 != (unsigned __int16 *)((char *)&dword_0 + 1) )
          break;
      }
LABEL_11:
      if ( v6 == ++v7 )
        goto LABEL_12;
    }
    v15 = (unsigned __int64)v16 & 0xFFFFFFFFFFFFFFFELL;
LABEL_8:
    a3 = 0;
    v17 = (__m128 *)((char *)ptr + 24 * (unsigned int)v38);
    if ( (unsigned int)v38 >= (unsigned __int64)HIDWORD(v38) )
    {
      v25 = (unsigned int)v38 + 1LL;
      v35 = 0;
      v26 = (const __m128i *)&v35;
      v36 = 0;
      if ( HIDWORD(v38) < v25 )
      {
        if ( ptr > &v35 || v17 <= (__m128 *)&v35 )
        {
          v30 = v15;
          sub_2237220(&ptr, v39, v25, 24);
          v15 = v30;
          v17 = (__m128 *)((char *)ptr + 24 * (unsigned int)v38);
          v26 = (const __m128i *)&v35;
        }
        else
        {
          v31 = ptr;
          v29 = v15;
          sub_2237220(&ptr, v39, v25, 24);
          v15 = v29;
          v26 = (const __m128i *)((char *)ptr + (char *)&v35 - v31);
          v17 = (__m128 *)((char *)ptr + 24 * (unsigned int)v38);
        }
      }
      a4 = (__m128)_mm_loadu_si128(v26);
      *v17 = a4;
      v27 = v26[1].m128i_i64[0];
      v28 = v38;
      v17[1].m128_u64[0] = v27;
      LODWORD(v38) = v28 + 1;
      v21 = (char *)ptr + 24 * (unsigned int)(v28 + 1) - 24;
    }
    else
    {
      v18 = (unsigned int)(v38 + 1);
      *v17 = 0;
      v19 = 3 * v18;
      LODWORD(v38) = v18;
      v20 = (char *)ptr;
      v17[1].m128_u64[0] = 0;
      v21 = &v20[8 * v19 - 24];
    }
    *((_QWORD *)v21 + 1) = v15;
    *((_DWORD *)v21 + 4) = v33;
    v22 = v34;
    *(_QWORD *)v21 = (unsigned __int64)v14 & 0xFFFFFFFFFFFFFFFELL;
    *((_DWORD *)v21 + 5) = v22;
    goto LABEL_11;
  }
LABEL_12:
  v23 = sub_1B440A0(
          *(__int64 **)(*a1 + 760),
          *(_DWORD *)a2,
          *(_DWORD *)(a2 + 12),
          *(_DWORD *)(a2 + 4),
          (__int64 *)ptr,
          (unsigned int)v38,
          a3,
          a4);
  if ( ptr != v39 )
    free(ptr);
  return v23;
}
