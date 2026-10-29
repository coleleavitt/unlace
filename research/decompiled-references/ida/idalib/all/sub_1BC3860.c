__int64 __fastcall sub_1BC3860(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
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
  int v20; // r13d
  __int64 v21; // r12
  int v22; // eax
  __int64 v23; // r12
  const __m128i *v24; // rsi
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rbx
  int v30; // [rsp+Ch] [rbp-DCh]
  _BYTE *v31; // [rsp+18h] [rbp-D0h]
  _BYTE *v32; // [rsp+18h] [rbp-D0h]
  const char *v33; // [rsp+20h] [rbp-C8h] BYREF
  __int128 v34; // [rsp+28h] [rbp-C0h]
  void *ptr; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v36; // [rsp+48h] [rbp-A0h]
  _BYTE v37[152]; // [rsp+50h] [rbp-98h] BYREF

  v4 = v37;
  v30 = sub_EEB7E0(*(_QWORD *)(a2 + 8LL * *(unsigned int *)(a2 + 8) + 32), a2, *(double *)a3.m128_u64);
  ptr = v37;
  v5 = sub_EEE250(a2);
  v6 = *(_DWORD *)(v5 + 72);
  v7 = *(_DWORD *)(v5 + 76);
  v36 = 0x400000000LL;
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
        v34 = 0;
        v33 = nullptr;
        v15 = (__m128i *)((char *)ptr + 24 * v10);
        v16 = (const __m128i *)&v33;
        if ( v10 + 1 > (unsigned __int64)HIDWORD(v36) )
        {
          v32 = ptr;
          if ( ptr > &v33 || v15 <= (__m128i *)&v33 )
          {
            sub_2237220(&ptr, v37, v19, 24);
            v15 = (__m128i *)((char *)ptr + 24 * (unsigned int)v36);
            v16 = (const __m128i *)&v33;
          }
          else
          {
            sub_2237220(&ptr, v37, v19, 24);
            v16 = (const __m128i *)((char *)ptr + (char *)&v33 - v32);
            v15 = (__m128i *)((char *)ptr + 24 * (unsigned int)v36);
          }
        }
        *v15 = _mm_loadu_si128(v16);
      }
      else
      {
        v17 = sub_1BB2C30(a1, *(_QWORD *)(*(_QWORD *)(v5 + 8 * v9 + 88) + 48LL), a3, a4);
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
        *((_QWORD *)&v34 + 1) = v17;
        *(_QWORD *)&v34 = v12;
        v33 = v11;
        v14 = (unsigned int)v36 + 1LL;
        v15 = (__m128i *)((char *)ptr + 24 * (unsigned int)v36);
        v16 = (const __m128i *)&v33;
        if ( v14 > HIDWORD(v36) )
        {
          if ( ptr > &v33 || v15 <= (__m128i *)&v33 )
          {
            sub_2237220(&ptr, v37, v14, 24);
            v15 = (__m128i *)((char *)ptr + 24 * (unsigned int)v36);
            v16 = (const __m128i *)&v33;
          }
          else
          {
            v31 = ptr;
            sub_2237220(&ptr, v37, v14, 24);
            v16 = (const __m128i *)((char *)ptr + (char *)&v33 - v31);
            v15 = (__m128i *)((char *)ptr + 24 * (unsigned int)v36);
          }
        }
        a4 = (__m128)_mm_loadu_si128(v16);
        *v15 = (__m128i)a4;
      }
      v15[1].m128i_i64[0] = v16[1].m128i_i64[0];
      v10 = (unsigned int)(v36 + 1);
      LODWORD(v36) = v36 + 1;
      if ( v9 == v8 )
        break;
      ++v9;
    }
    LODWORD(v4) = (_DWORD)ptr;
    v20 = v10;
  }
  else
  {
    v20 = 0;
  }
  v21 = *a1;
  v22 = sub_EEE280(a2);
  sub_1C40660(v21, v30, 0, v22, (_DWORD)v4, v20, 0);
  v23 = *a1;
  sub_1C36400(*a1, 0);
  v24 = *(const __m128i **)(a2 + 8LL * *(unsigned int *)(a2 + 8) + 32);
  v28 = sub_1B71AD0(a1, v24, 0, a3, a4, v25, v26, v27);
  sub_1C36470(v23);
  if ( v28 == 1 )
    sub_1C37B90(*a1, v24);
  else
    v28 = sub_1C37DC0(*a1, v28 & 0xFFFFFFFFFFFFFFFELL);
  if ( ptr != v37 )
    free(ptr);
  return v28;
}
