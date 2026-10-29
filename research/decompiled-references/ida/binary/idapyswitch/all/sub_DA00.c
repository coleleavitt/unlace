__int64 __fastcall sub_DA00(__int64 *a1, int *a2)
{
  int v4; // eax
  __m128i v5; // xmm2
  __m128i v6; // xmm3
  __int64 v7; // rbp
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __m128i v11; // xmm4
  int v12; // ecx
  int v13; // ecx
  __int64 v14; // r12
  __m128i v15; // xmm1
  void *v16; // rdi
  __int64 v17; // r12
  __m128i v18; // xmm0
  void *v19; // rdi
  __m128i v20; // xmm5
  __int64 v21; // r12
  char *v22; // r8
  __int64 v23; // rbx
  __int64 i; // r15
  char *v25; // rsi
  void *v26; // rdi
  __m128i v27; // xmm6
  int v28; // eax
  void *v29; // rdi
  __m128i v30; // xmm7
  void *v31; // rdi
  __m128i v32; // xmm7
  char *v33; // rcx
  __int64 v34; // rbp
  __int64 j; // rbx
  char *v36; // rax
  void *v37; // rdi
  __m128i si128; // xmm7
  __int64 result; // rax
  __m128i v40; // [rsp+0h] [rbp-98h] BYREF
  __int64 v41; // [rsp+10h] [rbp-88h]
  int v42; // [rsp+18h] [rbp-80h]
  unsigned __int8 v43; // [rsp+1Fh] [rbp-79h]
  __int64 v44; // [rsp+20h] [rbp-78h]
  __int64 v45; // [rsp+28h] [rbp-70h]
  __m128i v46; // [rsp+30h] [rbp-68h] BYREF
  __m128i v47; // [rsp+40h] [rbp-58h] BYREF
  __m128i v48[4]; // [rsp+50h] [rbp-48h] BYREF

  v4 = *((_DWORD *)a1 + 2);
  v5 = _mm_loadu_si128((const __m128i *)(a1 + 3));
  *(_OWORD *)(a1 + 3) = 0;
  v6 = _mm_loadu_si128((const __m128i *)a1 + 3);
  v7 = *a1;
  *((_OWORD *)a1 + 3) = 0;
  v42 = v4;
  v8 = a1[2];
  v46 = v5;
  v44 = v8;
  v9 = a1[5];
  a1[2] = 0;
  v45 = v9;
  v10 = a1[8];
  a1[5] = 0;
  v41 = v10;
  a1[8] = 0;
  v47 = v6;
  v11 = _mm_loadu_si128((const __m128i *)(a1 + 9));
  LOBYTE(v10) = *((_BYTE *)a1 + 88);
  *(_OWORD *)(a1 + 9) = 0;
  v12 = *a2;
  v43 = v10;
  *(_DWORD *)a1 = v12;
  v13 = a2[1];
  v48[0] = v11;
  *((_DWORD *)a1 + 1) = v13;
  *((_DWORD *)a1 + 2) = a2[2];
  v14 = *((_QWORD *)a2 + 2);
  v15 = _mm_loadu_si128((const __m128i *)(a2 + 6));
  *((_QWORD *)a2 + 2) = 0;
  *(_OWORD *)(a2 + 6) = 0;
  v16 = (void *)a1[2];
  if ( v16 )
  {
    a1[3] = 0;
    v40 = v15;
    j__free(v16);
    v15 = _mm_load_si128(&v40);
  }
  *(__m128i *)(a1 + 3) = v15;
  a1[2] = v14;
  v17 = *((_QWORD *)a2 + 5);
  v18 = _mm_loadu_si128((const __m128i *)a2 + 3);
  *((_QWORD *)a2 + 5) = 0;
  *((_OWORD *)a2 + 3) = 0;
  v19 = (void *)a1[5];
  if ( v19 )
  {
    a1[6] = 0;
    v40 = v18;
    j__free(v19);
    v18 = _mm_load_si128(&v40);
  }
  *((__m128i *)a1 + 3) = v18;
  a1[5] = v17;
  v20 = _mm_loadu_si128((const __m128i *)(a2 + 18));
  v21 = *((_QWORD *)a2 + 8);
  *(_OWORD *)(a2 + 18) = 0;
  *((_QWORD *)a2 + 8) = 0;
  v22 = (char *)a1[8];
  v40 = v20;
  if ( v22 )
  {
    v23 = a1[9];
    if ( v23 )
    {
      for ( i = 0; i != v23; ++i )
      {
        v25 = &v22[24 * i];
        v26 = *(void **)v25;
        if ( *(_QWORD *)v25 )
        {
          *((_QWORD *)v25 + 1) = 0;
          j__free(v26);
          v22 = (char *)a1[8];
        }
      }
    }
    a1[9] = 0;
    j__free(v22);
  }
  v27 = _mm_load_si128(&v40);
  v28 = v42;
  a1[8] = v21;
  *(__m128i *)(a1 + 9) = v27;
  *((_BYTE *)a1 + 88) = *((_BYTE *)a2 + 88);
  v29 = *((void **)a2 + 2);
  *(_QWORD *)a2 = v7;
  a2[2] = v28;
  if ( v29 )
  {
    *((_QWORD *)a2 + 3) = 0;
    j__free(v29);
  }
  v30 = _mm_load_si128(&v46);
  v31 = *((void **)a2 + 5);
  *((_QWORD *)a2 + 2) = v44;
  *(__m128i *)(a2 + 6) = v30;
  if ( v31 )
  {
    *((_QWORD *)a2 + 6) = 0;
    j__free(v31);
  }
  v32 = _mm_load_si128(&v47);
  v33 = *((char **)a2 + 8);
  *((_QWORD *)a2 + 5) = v45;
  *((__m128i *)a2 + 3) = v32;
  if ( v33 )
  {
    v34 = *((_QWORD *)a2 + 9);
    if ( v34 )
    {
      for ( j = 0; j != v34; ++j )
      {
        v36 = &v33[24 * j];
        v37 = *(void **)v36;
        if ( *(_QWORD *)v36 )
        {
          *((_QWORD *)v36 + 1) = 0;
          j__free(v37);
          v33 = *((char **)a2 + 8);
        }
      }
    }
    *((_QWORD *)a2 + 9) = 0;
    j__free(v33);
  }
  si128 = _mm_load_si128(v48);
  *((_QWORD *)a2 + 8) = v41;
  result = v43;
  *(__m128i *)(a2 + 18) = si128;
  *((_BYTE *)a2 + 88) = result;
  return result;
}

