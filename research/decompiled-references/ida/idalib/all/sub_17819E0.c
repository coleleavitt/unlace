__int64 __fastcall sub_17819E0(__int64 *a1, __int64 a2, __m128 a3)
{
  _BYTE *v3; // rbx
  unsigned __int64 v4; // r15
  int v5; // eax
  int v6; // r12d
  __int64 v7; // r13
  __int64 v8; // r14
  __int64 v9; // r9
  const char *v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned int *v12; // rcx
  unsigned __int64 v13; // rdx
  __m128i *v14; // rcx
  const __m128i *v15; // rax
  void **v16; // rax
  __int64 v17; // rdx
  int v18; // r13d
  __int64 v19; // r12
  int v20; // eax
  __int64 v21; // r12
  unsigned __int16 *v22; // rsi
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rbx
  int v28; // [rsp+Ch] [rbp-DCh]
  _BYTE *v29; // [rsp+18h] [rbp-D0h]
  _BYTE *v30; // [rsp+18h] [rbp-D0h]
  const char *v31; // [rsp+20h] [rbp-C8h] BYREF
  __int128 v32; // [rsp+28h] [rbp-C0h]
  void *ptr; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v34; // [rsp+48h] [rbp-A0h]
  _BYTE v35[152]; // [rsp+50h] [rbp-98h] BYREF

  v3 = v35;
  v28 = sub_EEB7E0(*(_QWORD *)(a2 + 8LL * *(unsigned int *)(a2 + 8) + 32), a2, *(double *)a3.m128_u64);
  ptr = v35;
  v4 = sub_EEE250(a2);
  v5 = *(_DWORD *)(v4 + 72);
  v6 = *(_DWORD *)(v4 + 76);
  v34 = 0x400000000LL;
  if ( v5 )
  {
    v7 = (unsigned int)(v5 - 1);
    v8 = 0;
    v9 = 0;
    while ( 1 )
    {
      if ( v6 == (_DWORD)v8 )
      {
        a3 = 0;
        v13 = v9 + 1;
        v32 = 0;
        v31 = nullptr;
        v14 = (__m128i *)((char *)ptr + 24 * v9);
        v15 = (const __m128i *)&v31;
        if ( v9 + 1 > (unsigned __int64)HIDWORD(v34) )
        {
          v30 = ptr;
          if ( ptr > &v31 || v14 <= (__m128i *)&v31 )
            goto LABEL_22;
          sub_2237220(&ptr, v35, v13, 24);
          v15 = (const __m128i *)((char *)ptr + (char *)&v31 - v30);
          v14 = (__m128i *)((char *)ptr + 24 * (unsigned int)v34);
        }
      }
      else
      {
        v16 = sub_176A2F0(a1, *(_QWORD *)(*(_QWORD *)(v4 + 8 * v8 + 88) + 48LL), a3);
        v17 = *(_QWORD *)(*(_QWORD *)(v4 + 8 * v8 + 88) + 40LL);
        if ( (v17 & 7) != 0 )
        {
          v11 = 0;
          v10 = &byte_22F0C30;
        }
        else
        {
          v10 = &byte_22F0C30;
          v11 = v17 & 0xFFFFFFFFFFFFFFF8LL;
          if ( v11 )
          {
            v12 = *(unsigned int **)(v11 + 16);
            v11 = *v12;
            v10 = (const char *)(v12 + 4);
          }
        }
        *((_QWORD *)&v32 + 1) = v16;
        *(_QWORD *)&v32 = v11;
        v31 = v10;
        v13 = (unsigned int)v34 + 1LL;
        v14 = (__m128i *)((char *)ptr + 24 * (unsigned int)v34);
        v15 = (const __m128i *)&v31;
        if ( v13 > HIDWORD(v34) )
        {
          if ( ptr <= &v31 && v14 > (__m128i *)&v31 )
          {
            v29 = ptr;
            sub_2237220(&ptr, v35, v13, 24);
            v15 = (const __m128i *)((char *)ptr + (char *)&v31 - v29);
            v14 = (__m128i *)((char *)ptr + 24 * (unsigned int)v34);
            goto LABEL_6;
          }
LABEL_22:
          sub_2237220(&ptr, v35, v13, 24);
          v14 = (__m128i *)((char *)ptr + 24 * (unsigned int)v34);
          v15 = (const __m128i *)&v31;
        }
      }
LABEL_6:
      *v14 = _mm_loadu_si128(v15);
      v14[1].m128i_i64[0] = v15[1].m128i_i64[0];
      v9 = (unsigned int)(v34 + 1);
      LODWORD(v34) = v34 + 1;
      if ( v8 == v7 )
      {
        LODWORD(v3) = (_DWORD)ptr;
        v18 = v9;
        goto LABEL_14;
      }
      ++v8;
    }
  }
  v18 = 0;
LABEL_14:
  v19 = *a1;
  v20 = sub_EEE280(a2);
  sub_1C40660(v19, v28, 0, v20, (_DWORD)v3, v18, 0);
  v21 = *a1;
  sub_1C36400(*a1, 0);
  v22 = *(unsigned __int16 **)(a2 + 8LL * *(unsigned int *)(a2 + 8) + 32);
  v26 = sub_177B9C0(a1, v22, 0, *(double *)a3.m128_u64, v23, v24, v25);
  sub_1C36470(v21);
  if ( v26 == 1 )
    sub_1C37B90(*a1, v22);
  else
    v26 = sub_1C37DC0(*a1, v26 & 0xFFFFFFFFFFFFFFFELL);
  if ( ptr != v35 )
    free(ptr);
  return v26;
}
