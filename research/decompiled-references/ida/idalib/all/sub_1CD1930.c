__int64 __fastcall sub_1CD1930(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        unsigned int a6,
        char a7,
        int a8,
        int a9,
        unsigned int a10,
        __int64 a11,
        unsigned int a12,
        __int64 *a13,
        int a14)
{
  __int64 v17; // rax
  unsigned __int64 v18; // rdx
  char *v19; // rdx
  const __m128i *v20; // rcx
  __m128 v21; // xmm1
  __m128i *v22; // rax
  unsigned int v23; // edx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r9
  unsigned __int64 v27; // r15
  unsigned __int64 v28; // rdx
  const __m128i *v29; // r10
  __m128i *v30; // rax
  __int64 v31; // rax
  __int64 v32; // rbp
  _BYTE *v35; // [rsp+18h] [rbp-1C0h]
  unsigned __int64 v36; // [rsp+20h] [rbp-1B8h]
  __int64 v37; // [rsp+20h] [rbp-1B8h]
  __int64 v38; // [rsp+28h] [rbp-1B0h]
  _BYTE v39[32]; // [rsp+30h] [rbp-1A8h] BYREF
  __int128 v40; // [rsp+50h] [rbp-188h] BYREF
  void *v41[2]; // [rsp+60h] [rbp-178h]
  __int128 v42; // [rsp+70h] [rbp-168h]
  void *ptr; // [rsp+80h] [rbp-158h] BYREF
  __int64 v44; // [rsp+88h] [rbp-150h]
  _BYTE v45[256]; // [rsp+90h] [rbp-148h] BYREF
  unsigned __int64 v46; // [rsp+190h] [rbp-48h]

  v44 = 0x800000000LL;
  ptr = v45;
  v46 = 0;
  sub_F1D250((__int64)v39, a11, 0, 0);
  sub_1D3AAD0(&v40, a1, v39, 0, a12, 0);
  v17 = (unsigned int)v44;
  v18 = (unsigned int)v44 + 1LL;
  if ( v18 > HIDWORD(v44) )
  {
    if ( ptr > &v40 || &v40 >= (__int128 *)((char *)ptr + 32 * (unsigned int)v44) )
    {
      sub_2237220(&ptr, v45, v18, 32);
      v19 = (char *)ptr;
      v17 = (unsigned int)v44;
      v20 = (const __m128i *)&v40;
    }
    else
    {
      v35 = ptr;
      sub_2237220(&ptr, v45, v18, 32);
      v19 = (char *)ptr;
      v17 = (unsigned int)v44;
      v20 = (const __m128i *)((char *)ptr + (char *)&v40 - v35);
    }
  }
  else
  {
    v19 = (char *)ptr;
    v20 = (const __m128i *)&v40;
  }
  v21 = (__m128)_mm_loadu_si128(v20);
  v22 = (__m128i *)&v19[32 * v17];
  v23 = a10;
  *v22 = (__m128i)v21;
  v22[1] = _mm_loadu_si128(v20 + 1);
  v24 = (unsigned int)(v44 + 1);
  v46 = __PAIR64__(v23, a6);
  v25 = *a13;
  LODWORD(v44) = v44 + 1;
  if ( v25 )
  {
    v26 = *(_QWORD *)v25 + 32LL * *(unsigned int *)(v25 + 8);
    if ( *(_QWORD *)v25 != v26 )
    {
      v27 = *(_QWORD *)v25;
      do
      {
        v28 = v24 + 1;
        v29 = (const __m128i *)v27;
        v30 = (__m128i *)((char *)ptr + 32 * v24);
        if ( v28 > HIDWORD(v44) )
        {
          if ( (unsigned __int64)ptr > v27 || (unsigned __int64)v30 <= v27 )
          {
            v37 = v26;
            sub_2237220(&ptr, v45, v28, 32);
            v29 = (const __m128i *)v27;
            v26 = v37;
            v30 = (__m128i *)((char *)ptr + 32 * (unsigned int)v44);
          }
          else
          {
            v38 = v26;
            v36 = v27 - (_QWORD)ptr;
            sub_2237220(&ptr, v45, v28, 32);
            v26 = v38;
            v29 = (const __m128i *)((char *)ptr + v36);
            v30 = (__m128i *)((char *)ptr + 32 * (unsigned int)v44);
          }
        }
        v27 += 32LL;
        *v30 = _mm_loadu_si128(v29);
        v30[1] = _mm_loadu_si128(v29 + 1);
        v24 = (unsigned int)(v44 + 1);
        LODWORD(v44) = v44 + 1;
      }
      while ( v26 != v27 );
    }
  }
  v40 = 0;
  *(_OWORD *)v41 = 0;
  v42 = 0;
  sub_15AB8B0((__int64)&v40, a2, a3);
  if ( !a5 )
    a5 = a4;
  v31 = sub_1CD12A0(a1, (__int64)&v40, 0, (__int64)&a7, a5, a4, 0.0, v21, (__int64)&ptr);
  if ( v31 != 1 && a14 )
  {
    v32 = sub_1E4D400(a1, 0, 0, (unsigned int)v31 & 0xFFFFFFFE, 19, a14, 0, 0, 0);
    if ( !HIDWORD(v41[1]) )
      goto LABEL_13;
  }
  else
  {
    v32 = v31;
    if ( !HIDWORD(v41[1]) )
      goto LABEL_13;
  }
  free(v41[0]);
LABEL_13:
  if ( ptr != v45 )
    free(ptr);
  return v32;
}
