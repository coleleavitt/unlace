unsigned __int64 __fastcall sub_C6E0(__int64 *a1, unsigned __int8 (__fastcall *a2)(__int64 *, __int64 *))
{
  __int64 *v2; // rbx
  __int64 v3; // rax
  void *v4; // rax
  void *v5; // rax
  void *v6; // rax
  __m128i v7; // xmm1
  int v8; // eax
  void *v9; // rdi
  __int64 v10; // rbp
  __m128i v11; // xmm0
  int v12; // eax
  void *v13; // rdi
  __int64 v14; // rbp
  __m128i v15; // xmm0
  __m128i v16; // xmm4
  char *v17; // rdx
  __int64 v18; // r13
  __int64 v19; // r15
  __int64 i; // rbp
  char *v21; // rax
  void *v22; // rdi
  char v23; // al
  __m128i v24; // xmm6
  int *v25; // rbp
  __m128i v26; // xmm0
  void *v27; // rdi
  void *v28; // rbx
  void *v29; // rdi
  void *v30; // rbx
  __m128i v31; // xmm0
  __m128i v32; // xmm7
  char *v33; // rdx
  void *v34; // r12
  __int64 v35; // r13
  __int64 j; // rbx
  char *v37; // rax
  void *v38; // rdi
  __m128i v39; // xmm7
  char v40; // al
  char *v41; // rdx
  __int64 v42; // rbp
  __int64 v43; // rbx
  char *v44; // rax
  void *v45; // rdi
  char v46; // al
  __m128i v48; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v49; // [rsp+10h] [rbp-A8h] BYREF
  int v50; // [rsp+18h] [rbp-A0h]
  void *v51; // [rsp+20h] [rbp-98h]
  __m128i v52; // [rsp+28h] [rbp-90h] BYREF
  void *v53; // [rsp+38h] [rbp-80h]
  __m128i v54; // [rsp+40h] [rbp-78h] BYREF
  void *ptr; // [rsp+50h] [rbp-68h]
  __m128i v56; // [rsp+58h] [rbp-60h] BYREF
  char v57; // [rsp+68h] [rbp-50h]
  unsigned __int64 v58; // [rsp+78h] [rbp-40h]

  v2 = a1 - 12;
  v3 = *a1;
  v58 = __readfsqword(0x28u);
  v49 = v3;
  LODWORD(v3) = *((_DWORD *)a1 + 2);
  v52 = _mm_loadu_si128((const __m128i *)(a1 + 3));
  v50 = v3;
  v4 = (void *)a1[2];
  v54 = _mm_loadu_si128((const __m128i *)a1 + 3);
  v51 = v4;
  v5 = (void *)a1[5];
  a1[2] = 0;
  v53 = v5;
  a1[5] = 0;
  *(_OWORD *)(a1 + 3) = 0;
  *((_OWORD *)a1 + 3) = 0;
  v6 = (void *)a1[8];
  v7 = _mm_loadu_si128((const __m128i *)(a1 + 9));
  a1[8] = 0;
  ptr = v6;
  LOBYTE(v6) = *((_BYTE *)a1 + 88);
  v56 = v7;
  v57 = (char)v6;
  *(_OWORD *)(a1 + 9) = 0;
  while ( a2(&v49, v2) )
  {
    v8 = *(_DWORD *)v2;
    v9 = (void *)v2[14];
    v10 = v2[2];
    v11 = _mm_loadu_si128((const __m128i *)(v2 + 3));
    *(_OWORD *)(v2 + 3) = 0;
    *((_DWORD *)v2 + 24) = v8;
    v12 = *((_DWORD *)v2 + 1);
    v2[2] = 0;
    *((_DWORD *)v2 + 25) = v12;
    *((_DWORD *)v2 + 26) = *((_DWORD *)v2 + 2);
    if ( v9 )
    {
      v2[15] = 0;
      v48 = v11;
      j__free(v9);
      v11 = _mm_load_si128(&v48);
    }
    v13 = (void *)v2[17];
    v2[14] = v10;
    *(__m128i *)(v2 + 15) = v11;
    v14 = v2[5];
    v15 = _mm_loadu_si128((const __m128i *)v2 + 3);
    v2[5] = 0;
    *((_OWORD *)v2 + 3) = 0;
    if ( v13 )
    {
      v2[18] = 0;
      v48 = v15;
      j__free(v13);
      v15 = _mm_load_si128(&v48);
    }
    v16 = _mm_loadu_si128((const __m128i *)(v2 + 9));
    v17 = (char *)v2[20];
    v2[17] = v14;
    v18 = v2[8];
    *((__m128i *)v2 + 9) = v15;
    v2[8] = 0;
    v48 = v16;
    *(_OWORD *)(v2 + 9) = 0;
    if ( v17 )
    {
      v19 = v2[21];
      if ( v19 )
      {
        for ( i = 0; i != v19; ++i )
        {
          v21 = &v17[24 * i];
          v22 = *(void **)v21;
          if ( *(_QWORD *)v21 )
          {
            *((_QWORD *)v21 + 1) = 0;
            j__free(v22);
            v17 = (char *)v2[20];
          }
        }
      }
      v2[21] = 0;
      j__free(v17);
    }
    v23 = *((_BYTE *)v2 + 88);
    v24 = _mm_load_si128(&v48);
    v2[20] = v18;
    v2 -= 12;
    *(__m128i *)(v2 + 33) = v24;
    *((_BYTE *)v2 + 280) = v23;
  }
  v25 = (int *)(v2 + 12);
  v26 = _mm_loadu_si128(&v52);
  v52 = 0;
  v2[12] = v49;
  v27 = (void *)v2[14];
  v28 = v51;
  v51 = nullptr;
  v25[2] = v50;
  if ( v27 )
  {
    *((_QWORD *)v25 + 3) = 0;
    v48 = v26;
    j__free(v27);
    v26 = _mm_load_si128(&v48);
  }
  v29 = *((void **)v25 + 5);
  *((_QWORD *)v25 + 2) = v28;
  *(__m128i *)(v25 + 6) = v26;
  v30 = v53;
  v31 = _mm_load_si128(&v54);
  v53 = nullptr;
  v54 = 0;
  if ( v29 )
  {
    *((_QWORD *)v25 + 6) = 0;
    v48 = v31;
    j__free(v29);
    v31 = _mm_load_si128(&v48);
  }
  v32 = _mm_loadu_si128(&v56);
  v33 = *((char **)v25 + 8);
  *((__m128i *)v25 + 3) = v31;
  v34 = ptr;
  *((_QWORD *)v25 + 5) = v30;
  ptr = nullptr;
  v48 = v32;
  v56 = 0;
  if ( v33 )
  {
    v35 = *((_QWORD *)v25 + 9);
    if ( v35 )
    {
      for ( j = 0; j != v35; ++j )
      {
        v37 = &v33[24 * j];
        v38 = *(void **)v37;
        if ( *(_QWORD *)v37 )
        {
          *((_QWORD *)v37 + 1) = 0;
          j__free(v38);
          v33 = *((char **)v25 + 8);
        }
      }
    }
    *((_QWORD *)v25 + 9) = 0;
    j__free(v33);
    v39 = _mm_load_si128(&v48);
    v40 = v57;
    *((_QWORD *)v25 + 8) = v34;
    v41 = (char *)ptr;
    *((_BYTE *)v25 + 88) = v40;
    *(__m128i *)(v25 + 18) = v39;
    if ( v41 )
    {
      v42 = v56.m128i_i64[0];
      if ( v56.m128i_i64[0] )
      {
        v43 = 0;
        do
        {
          v44 = &v41[24 * v43];
          v45 = *(void **)v44;
          if ( *(_QWORD *)v44 )
          {
            *((_QWORD *)v44 + 1) = 0;
            j__free(v45);
            v41 = (char *)ptr;
          }
          ++v43;
        }
        while ( v42 != v43 );
      }
      v56.m128i_i64[0] = 0;
      j__free(v41);
    }
  }
  else
  {
    v46 = v57;
    *((_QWORD *)v25 + 8) = v34;
    *(__m128i *)(v25 + 18) = v32;
    *((_BYTE *)v25 + 88) = v46;
  }
  if ( v53 )
  {
    v54.m128i_i64[0] = 0;
    j__free(v53);
  }
  if ( v51 )
  {
    v52.m128i_i64[0] = 0;
    j__free(v51);
  }
  return v58 - __readfsqword(0x28u);
}

