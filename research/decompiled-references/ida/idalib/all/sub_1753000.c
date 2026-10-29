__int64 __fastcall sub_1753000(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned int v5; // ebp
  __int64 v6; // rax
  __int64 v7; // r15
  __int64 v8; // r12
  __int64 v9; // rax
  char *v10; // rcx
  __int64 v11; // rdi
  __int64 (*v12)(void); // rax
  __int64 v13; // rax
  const __m128i *v14; // r12
  unsigned __int64 v15; // rdx
  __m128i v16; // xmm0
  __int64 v17; // rax
  _BYTE *v19; // [rsp+8h] [rbp-E0h]
  __int64 v20; // [rsp+10h] [rbp-D8h] BYREF
  __int64 v21; // [rsp+18h] [rbp-D0h]
  __int64 v22; // [rsp+20h] [rbp-C8h]
  void *ptr; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v24; // [rsp+38h] [rbp-B0h]
  _DWORD v25[25]; // [rsp+40h] [rbp-A8h] BYREF
  char v26; // [rsp+A4h] [rbp-44h]

  v5 = a2;
  v6 = *(_QWORD *)(a2 + 24);
  v7 = *(unsigned int *)(v6 + 36);
  v8 = v6 + 40;
  v9 = *(_QWORD *)(a2 + 16);
  v10 = (char *)v25;
  ptr = v25;
  v11 = *(_QWORD *)(v9 + 56);
  v26 = 0;
  v24 = 0x400000000LL;
  v25[24] = 0;
  if ( v11 )
  {
    v12 = *(__int64 (**)(void))(*(_QWORD *)v11 + 32LL);
    if ( (char *)v12 == (char *)sub_A56070 )
      v13 = sub_B72720(v11);
    else
      v13 = v12();
    v21 = v8;
    v20 = v13 | 4;
    v14 = (const __m128i *)&v20;
    v15 = (unsigned int)v24 + 1LL;
    v22 = v7;
    v10 = (char *)ptr + 24 * (unsigned int)v24;
    if ( v15 > HIDWORD(v24) )
    {
      if ( ptr > &v20 || v10 <= (char *)&v20 )
      {
        sub_2237220(&ptr, v25, v15, 24);
        v10 = (char *)ptr + 24 * (unsigned int)v24;
      }
      else
      {
        v19 = ptr;
        sub_2237220(&ptr, v25, v15, 24);
        v14 = (const __m128i *)((char *)ptr + (char *)&v20 - v19);
        v10 = (char *)ptr + 24 * (unsigned int)v24;
      }
    }
  }
  else
  {
    v21 = v8;
    v14 = (const __m128i *)&v20;
    v20 = 4;
    v22 = v7;
  }
  v16 = _mm_loadu_si128(v14);
  *(__m128i *)v10 = v16;
  v17 = v14[1].m128i_i64[0];
  LODWORD(v24) = v24 + 1;
  *((_QWORD *)v10 + 2) = v17;
  LOBYTE(v5) = sub_174E240(
                 a1,
                 a2,
                 *(_QWORD *)(*(_QWORD *)(a2 + 16) + 56LL),
                 *(_DWORD *)(*(_QWORD *)(a2 + 16) + 32LL),
                 (__int64 *)&ptr,
                 a3,
                 *(double *)v16.m128i_i64) == 1;
  if ( ptr != v25 )
    free(ptr);
  return v5;
}
