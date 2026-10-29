unsigned __int64 __fastcall sub_1DFC3C0(
        __int64 *a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __m128i a5,
        __m128i a6,
        double a7,
        double a8,
        __m128 a9,
        __m128i a10)
{
  _BYTE *v10; // rbx
  unsigned __int64 v11; // r15
  int v12; // eax
  int v13; // r12d
  __int64 v14; // r13
  __int64 v15; // r14
  __int64 v16; // r9
  const char *v17; // rcx
  unsigned __int64 v18; // rdx
  unsigned int *v19; // rcx
  unsigned __int64 v20; // rdx
  __m128 *v21; // rcx
  const __m128i *v22; // rax
  _QWORD *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // r13
  _QWORD *v27; // r12
  int v28; // eax
  __int64 v29; // r12
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  double v33; // xmm4_8
  double v34; // xmm5_8
  unsigned __int64 v35; // rbx
  unsigned int v37; // [rsp+Ch] [rbp-DCh]
  _BYTE *v38; // [rsp+18h] [rbp-D0h]
  _BYTE *v39; // [rsp+18h] [rbp-D0h]
  const char *v40; // [rsp+20h] [rbp-C8h] BYREF
  __int128 v41; // [rsp+28h] [rbp-C0h]
  void *ptr; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v43; // [rsp+48h] [rbp-A0h]
  _BYTE v44[152]; // [rsp+50h] [rbp-98h] BYREF

  v10 = v44;
  v37 = sub_EEB7E0(*(_QWORD *)(a2 + 8LL * *(unsigned int *)(a2 + 8) + 32), a2, *(double *)a3.m128_u64);
  ptr = v44;
  v11 = sub_EEE250(a2);
  v12 = *(_DWORD *)(v11 + 72);
  v13 = *(_DWORD *)(v11 + 76);
  v43 = 0x400000000LL;
  if ( v12 )
  {
    v14 = (unsigned int)(v12 - 1);
    v15 = 0;
    v16 = 0;
    while ( 1 )
    {
      if ( v13 == (_DWORD)v15 )
      {
        a3 = 0;
        v25 = v16 + 1;
        v41 = 0;
        v40 = nullptr;
        v21 = (__m128 *)((char *)ptr + 24 * v16);
        v22 = (const __m128i *)&v40;
        if ( v16 + 1 > (unsigned __int64)HIDWORD(v43) )
        {
          v39 = ptr;
          if ( ptr > &v40 || v21 <= (__m128 *)&v40 )
          {
            sub_2237220(&ptr, v44, v25, 24);
            v21 = (__m128 *)((char *)ptr + 24 * (unsigned int)v43);
            v22 = (const __m128i *)&v40;
          }
          else
          {
            sub_2237220(&ptr, v44, v25, 24);
            v22 = (const __m128i *)((char *)ptr + (char *)&v40 - v39);
            v21 = (__m128 *)((char *)ptr + 24 * (unsigned int)v43);
          }
        }
        a5 = _mm_loadu_si128(v22);
        *v21 = (__m128)a5;
      }
      else
      {
        v23 = sub_1DD1AB0((__int64)a1, *(_QWORD *)(*(_QWORD *)(v11 + 8 * v15 + 88) + 48LL), a3, a4);
        v24 = *(_QWORD *)(*(_QWORD *)(v11 + 8 * v15 + 88) + 40LL);
        if ( (v24 & 7) != 0 )
        {
          v18 = 0;
          v17 = &byte_22F0C30;
        }
        else
        {
          v17 = &byte_22F0C30;
          v18 = v24 & 0xFFFFFFFFFFFFFFF8LL;
          if ( v18 )
          {
            v19 = *(unsigned int **)(v18 + 16);
            v18 = *v19;
            v17 = (const char *)(v19 + 4);
          }
        }
        *((_QWORD *)&v41 + 1) = v23;
        *(_QWORD *)&v41 = v18;
        v40 = v17;
        v20 = (unsigned int)v43 + 1LL;
        v21 = (__m128 *)((char *)ptr + 24 * (unsigned int)v43);
        v22 = (const __m128i *)&v40;
        if ( v20 > HIDWORD(v43) )
        {
          if ( ptr > &v40 || v21 <= (__m128 *)&v40 )
          {
            sub_2237220(&ptr, v44, v20, 24);
            v21 = (__m128 *)((char *)ptr + 24 * (unsigned int)v43);
            v22 = (const __m128i *)&v40;
          }
          else
          {
            v38 = ptr;
            sub_2237220(&ptr, v44, v20, 24);
            v22 = (const __m128i *)((char *)ptr + (char *)&v40 - v38);
            v21 = (__m128 *)((char *)ptr + 24 * (unsigned int)v43);
          }
        }
        a4 = (__m128)_mm_loadu_si128(v22);
        *v21 = a4;
      }
      v21[1].m128_u64[0] = v22[1].m128i_u64[0];
      v16 = (unsigned int)(v43 + 1);
      LODWORD(v43) = v43 + 1;
      if ( v15 == v14 )
        break;
      ++v15;
    }
    v10 = ptr;
    v26 = (unsigned int)v16;
  }
  else
  {
    v26 = 0;
  }
  v27 = (_QWORD *)*a1;
  v28 = sub_EEE280(a2);
  sub_1C40660(v27, v37, 0, v28, (__int64)v10, v26, 0);
  v29 = *a1;
  sub_1C36400(*a1, 0);
  v35 = sub_1DF6720(
          a1,
          *(_WORD **)(a2 + 8LL * *(unsigned int *)(a2 + 8) + 32),
          nullptr,
          a3,
          a4,
          a5,
          a6,
          v33,
          v34,
          a9,
          a10,
          v30,
          v31,
          v32);
  sub_1C36470(v29);
  if ( v35 == 1 )
    sub_1C37B90(*a1, a3, *(double *)a4.m128_u64);
  else
    v35 = sub_1C37DC0(*a1, v35 & 0xFFFFFFFFFFFFFFFELL, a3, a4);
  if ( ptr != v44 )
    free(ptr);
  return v35;
}
