_DWORD *__fastcall sub_1DCBD70(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  unsigned __int64 v5; // rdx
  int v6; // r12d
  int v7; // r15d
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned __int16 *v16; // r14
  unsigned __int64 v17; // rax
  unsigned __int16 *v18; // rax
  __m128 *v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rcx
  char *v22; // rdx
  char *v23; // rdx
  int v24; // eax
  _DWORD *v25; // rbx
  unsigned __int64 v27; // rdx
  const __m128i *v28; // rcx
  __int64 v29; // rdx
  int v30; // ecx
  unsigned __int64 v31; // [rsp+10h] [rbp-218h]
  unsigned __int64 v32; // [rsp+10h] [rbp-218h]
  _BYTE *v33; // [rsp+18h] [rbp-210h]
  __m128 v34; // [rsp+20h] [rbp-208h] BYREF
  int v35; // [rsp+30h] [rbp-1F8h]
  int v36; // [rsp+34h] [rbp-1F4h]
  __int128 v37; // [rsp+40h] [rbp-1E8h] BYREF
  __int64 v38; // [rsp+50h] [rbp-1D8h]
  void *ptr; // [rsp+60h] [rbp-1C8h] BYREF
  __int64 v40; // [rsp+68h] [rbp-1C0h]
  _BYTE v41[440]; // [rsp+70h] [rbp-1B8h] BYREF

  v5 = *(unsigned int *)(a2 + 16);
  v6 = *(_DWORD *)(a2 + 16);
  ptr = v41;
  v40 = 0x1000000000LL;
  if ( v5 > 0x10 )
  {
    sub_2237220(&ptr, v41, v5, 24);
    v6 = *(_DWORD *)(a2 + 16);
  }
  v7 = 0;
  if ( v6 )
  {
    while ( 1 )
    {
      sub_EB5BF0(&v34, a2, v7);
      v16 = sub_1DC71F0(a1, v34.m128_u64[0], v8, v9, v10, v11, a3, a4);
      if ( v16 != (unsigned __int16 *)((char *)&dword_0 + 1) )
      {
        v17 = v34.m128_u64[1];
        if ( !v34.m128_u64[1] )
          goto LABEL_8;
        v18 = sub_1DC71F0(a1, v34.m128_u64[1], v12, v13, v14, v15, a3, a4);
        if ( v18 != (unsigned __int16 *)((char *)&dword_0 + 1) )
          break;
      }
LABEL_11:
      if ( v6 == ++v7 )
        goto LABEL_12;
    }
    v17 = (unsigned __int64)v18 & 0xFFFFFFFFFFFFFFFELL;
LABEL_8:
    a3 = 0;
    v19 = (__m128 *)((char *)ptr + 24 * (unsigned int)v40);
    if ( (unsigned int)v40 >= (unsigned __int64)HIDWORD(v40) )
    {
      v27 = (unsigned int)v40 + 1LL;
      v37 = 0;
      v28 = (const __m128i *)&v37;
      v38 = 0;
      if ( HIDWORD(v40) < v27 )
      {
        if ( ptr > &v37 || v19 <= (__m128 *)&v37 )
        {
          v32 = v17;
          sub_2237220(&ptr, v41, v27, 24);
          v17 = v32;
          v19 = (__m128 *)((char *)ptr + 24 * (unsigned int)v40);
          v28 = (const __m128i *)&v37;
        }
        else
        {
          v33 = ptr;
          v31 = v17;
          sub_2237220(&ptr, v41, v27, 24);
          v17 = v31;
          v28 = (const __m128i *)((char *)ptr + (char *)&v37 - v33);
          v19 = (__m128 *)((char *)ptr + 24 * (unsigned int)v40);
        }
      }
      a4 = (__m128)_mm_loadu_si128(v28);
      *v19 = a4;
      v29 = v28[1].m128i_i64[0];
      v30 = v40;
      v19[1].m128_u64[0] = v29;
      LODWORD(v40) = v30 + 1;
      v23 = (char *)ptr + 24 * (unsigned int)(v30 + 1) - 24;
    }
    else
    {
      v20 = (unsigned int)(v40 + 1);
      *v19 = 0;
      v21 = 3 * v20;
      LODWORD(v40) = v20;
      v22 = (char *)ptr;
      v19[1].m128_u64[0] = 0;
      v23 = &v22[8 * v21 - 24];
    }
    *((_QWORD *)v23 + 1) = v17;
    *((_DWORD *)v23 + 4) = v35;
    v24 = v36;
    *(_QWORD *)v23 = (unsigned __int64)v16 & 0xFFFFFFFFFFFFFFFELL;
    *((_DWORD *)v23 + 5) = v24;
    goto LABEL_11;
  }
LABEL_12:
  v25 = sub_1B440A0(
          *(__int64 **)(*a1 + 760),
          *(_DWORD *)a2,
          *(_DWORD *)(a2 + 12),
          *(_DWORD *)(a2 + 4),
          (__int64 *)ptr,
          (unsigned int)v40,
          a3,
          a4);
  if ( ptr != v41 )
    free(ptr);
  return v25;
}
