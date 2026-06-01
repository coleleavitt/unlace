unsigned __int64 __fastcall sub_1D67050(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  _BYTE *v4; // rbx
  unsigned __int64 v5; // r15
  int v6; // eax
  int v7; // r12d
  __int64 v8; // r13
  __int64 v9; // r14
  __int64 v10; // r9
  const char *v11; // rcx
  unsigned __int64 v12; // rdx
  unsigned int *v13; // rcx
  unsigned __int64 v14; // rdx
  __m128i *v15; // rcx
  const __m128i *v16; // rax
  _QWORD *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // r13
  _QWORD *v21; // r12
  int v22; // eax
  _QWORD *v23; // r12
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  unsigned __int64 v27; // rbx
  unsigned int v29; // [rsp+Ch] [rbp-DCh]
  _BYTE *v30; // [rsp+18h] [rbp-D0h]
  _BYTE *v31; // [rsp+18h] [rbp-D0h]
  const char *v32; // [rsp+20h] [rbp-C8h] BYREF
  __int128 v33; // [rsp+28h] [rbp-C0h]
  void *ptr; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v35; // [rsp+48h] [rbp-A0h]
  _BYTE v36[152]; // [rsp+50h] [rbp-98h] BYREF

  v4 = v36;
  v29 = sub_EEB7E0(*(_QWORD *)(a2 + 8LL * *(unsigned int *)(a2 + 8) + 32), a2, *(double *)a3.m128_u64);
  ptr = v36;
  v5 = sub_EEE250(a2);
  v6 = *(_DWORD *)(v5 + 72);
  v7 = *(_DWORD *)(v5 + 76);
  v35 = 0x400000000LL;
  if ( v6 )
  {
    v8 = (unsigned int)(v6 - 1);
    v9 = 0;
    v10 = 0;
    while ( 1 )
    {
      if ( v7 == (_DWORD)v9 )
      {
        a3 = 0;
        v19 = v10 + 1;
        v33 = 0;
        v32 = nullptr;
        v15 = (__m128i *)((char *)ptr + 24 * v10);
        v16 = (const __m128i *)&v32;
        if ( v10 + 1 > (unsigned __int64)HIDWORD(v35) )
        {
          v31 = ptr;
          if ( ptr > &v32 || v15 <= (__m128i *)&v32 )
          {
            sub_2237220(&ptr, v36, v19, 24);
            v15 = (__m128i *)((char *)ptr + 24 * (unsigned int)v35);
            v16 = (const __m128i *)&v32;
          }
          else
          {
            sub_2237220(&ptr, v36, v19, 24);
            v16 = (const __m128i *)((char *)ptr + (char *)&v32 - v31);
            v15 = (__m128i *)((char *)ptr + 24 * (unsigned int)v35);
          }
        }
        *v15 = _mm_loadu_si128(v16);
      }
      else
      {
        v17 = sub_1D51630(a1, *(_QWORD *)(*(_QWORD *)(v5 + 8 * v9 + 88) + 48LL), a3, a4);
        v18 = *(_QWORD *)(*(_QWORD *)(v5 + 8 * v9 + 88) + 40LL);
        if ( (v18 & 7) != 0 )
        {
          v12 = 0;
          v11 = &byte_22F0C30;
        }
        else
        {
          v11 = &byte_22F0C30;
          v12 = v18 & 0xFFFFFFFFFFFFFFF8LL;
          if ( v12 )
          {
            v13 = *(unsigned int **)(v12 + 16);
            v12 = *v13;
            v11 = (const char *)(v13 + 4);
          }
        }
        *((_QWORD *)&v33 + 1) = v17;
        *(_QWORD *)&v33 = v12;
        v32 = v11;
        v14 = (unsigned int)v35 + 1LL;
        v15 = (__m128i *)((char *)ptr + 24 * (unsigned int)v35);
        v16 = (const __m128i *)&v32;
        if ( v14 > HIDWORD(v35) )
        {
          if ( ptr > &v32 || v15 <= (__m128i *)&v32 )
          {
            sub_2237220(&ptr, v36, v14, 24);
            v15 = (__m128i *)((char *)ptr + 24 * (unsigned int)v35);
            v16 = (const __m128i *)&v32;
          }
          else
          {
            v30 = ptr;
            sub_2237220(&ptr, v36, v14, 24);
            v16 = (const __m128i *)((char *)ptr + (char *)&v32 - v30);
            v15 = (__m128i *)((char *)ptr + 24 * (unsigned int)v35);
          }
        }
        a4 = (__m128)_mm_loadu_si128(v16);
        *v15 = (__m128i)a4;
      }
      v15[1].m128i_i64[0] = v16[1].m128i_i64[0];
      v10 = (unsigned int)(v35 + 1);
      LODWORD(v35) = v35 + 1;
      if ( v9 == v8 )
        break;
      ++v9;
    }
    v4 = ptr;
    v20 = (unsigned int)v10;
  }
  else
  {
    v20 = 0;
  }
  v21 = (_QWORD *)*a1;
  v22 = sub_EEE280(a2);
  sub_1C40660(v21, v29, 0, v22, (__int64)v4, v20, 0);
  v23 = (_QWORD *)*a1;
  sub_1C36400(*a1, 0);
  v27 = sub_1D42130(a1, *(_WORD **)(a2 + 8LL * *(unsigned int *)(a2 + 8) + 32), 0, a3, a4, v24, v25, v26);
  sub_1C36470(v23);
  if ( v27 == 1 )
    sub_1C37B90(*a1, a3, *(double *)a4.m128_u64);
  else
    v27 = sub_1C37DC0(*a1, v27 & 0xFFFFFFFFFFFFFFFELL, a3, a4);
  if ( ptr != v36 )
    free(ptr);
  return v27;
}
