unsigned __int64 __fastcall sub_5DE770(char **a1, __int64 *a2)
{
  __int64 v3; // r15
  __int64 v4; // r12
  __int64 v6; // r12
  int v7; // r14d
  char v8; // al
  unsigned __int64 v9; // rbx
  char *v10; // rax
  char *v11; // rbx
  __m128i v12; // xmm0
  void *v13; // rax
  void *v15; // rax
  const void *v16; // rsi
  __int64 v17; // rax
  char *v18; // rcx
  char *v19; // r13
  char *v20; // rbx
  __int64 v21; // r13
  __int64 v22; // r12
  __int64 v23; // rsi
  __m128i v24; // xmm0
  __int64 v25; // rsi
  __m128i v26; // xmm0
  void *v27; // rdi
  void *v28; // rdi
  void *v30; // rax
  const void *v31; // rsi
  char *v32; // [rsp+0h] [rbp-A0h]
  char v33; // [rsp+Eh] [rbp-92h]
  char v34; // [rsp+Fh] [rbp-91h]
  char *v35; // [rsp+10h] [rbp-90h]
  void *ptr; // [rsp+20h] [rbp-80h]
  __m128i v37; // [rsp+28h] [rbp-78h] BYREF
  void *v38; // [rsp+38h] [rbp-68h]
  __m128i v39; // [rsp+40h] [rbp-60h] BYREF
  int v40; // [rsp+50h] [rbp-50h]
  char v41; // [rsp+54h] [rbp-4Ch]
  char v42; // [rsp+55h] [rbp-4Bh]
  unsigned __int64 v43; // [rsp+60h] [rbp-40h]

  v3 = *a2;
  v4 = a2[2];
  v43 = __readfsqword(0x28u);
  v37 = 0;
  ptr = nullptr;
  if ( v4 )
  {
    v15 = (void *)qalloc_or_throw(4 * v4);
    v16 = (const void *)a2[1];
    v37.m128i_i64[1] = v4;
    ptr = v15;
    memcpy(v15, v16, 4 * v4);
    v37.m128i_i64[0] = v4;
  }
  v6 = a2[5];
  v38 = nullptr;
  v39 = 0;
  if ( v6 )
  {
    v30 = (void *)qalloc_or_throw(4 * v6);
    v31 = (const void *)a2[4];
    v38 = v30;
    v39.m128i_i64[1] = v6;
    memcpy(v30, v31, 4 * v6);
    v39.m128i_i64[0] = v6;
  }
  v7 = *((_DWORD *)a2 + 14);
  v33 = *((_BYTE *)a2 + 60);
  v41 = v33;
  v8 = *((_BYTE *)a2 + 61);
  v9 = (unsigned __int64)a1[2];
  v40 = v7;
  v34 = v8;
  v42 = v8;
  v10 = a1[1];
  if ( v9 < (unsigned __int64)(v10 + 1) )
  {
    v17 = qvector_reserve(a1, 0, v10 + 1, 64);
    v18 = a1[2];
    v19 = a1[1];
    a1[2] = (char *)v9;
    v32 = (char *)v17;
    v20 = *a1;
    v35 = v18;
    v21 = (__int64)(v19 - 1);
    if ( v21 >= 0 )
    {
      v22 = v17;
      do
      {
        *(_QWORD *)v22 = *(_QWORD *)v20;
        v23 = *((_QWORD *)v20 + 1);
        v24 = _mm_loadu_si128((const __m128i *)v20 + 1);
        *((_QWORD *)v20 + 1) = 0;
        *(_QWORD *)(v22 + 8) = v23;
        *(__m128i *)(v22 + 16) = v24;
        v25 = *((_QWORD *)v20 + 4);
        v26 = _mm_loadu_si128((const __m128i *)(v20 + 40));
        *((_OWORD *)v20 + 1) = 0;
        *(_QWORD *)(v22 + 32) = v25;
        *(__m128i *)(v22 + 40) = v26;
        LODWORD(v25) = *((_DWORD *)v20 + 14);
        *((_QWORD *)v20 + 4) = 0;
        *((_QWORD *)v20 + 6) = 0;
        *(_DWORD *)(v22 + 56) = v25;
        *(_BYTE *)(v22 + 60) = v20[60];
        *(_BYTE *)(v22 + 61) = v20[61];
        v27 = *((void **)v20 + 4);
        if ( v27 )
        {
          *((_QWORD *)v20 + 5) = 0;
          qfree(v27);
        }
        v28 = *((void **)v20 + 1);
        if ( v28 )
        {
          *((_QWORD *)v20 + 2) = 0;
          qfree(v28);
        }
        v20 += 64;
        v22 += 64;
      }
      while ( v21-- != 0 );
      v20 = *a1;
    }
    qfree(v20);
    *a1 = v32;
    a1[2] = v35;
    v10 = a1[1];
  }
  else
  {
    v32 = *a1;
  }
  v11 = &v32[64 * (_QWORD)v10];
  *((__m128i *)v11 + 1) = _mm_load_si128(&v37);
  v12 = _mm_loadu_si128(&v39);
  *((_QWORD *)v11 + 1) = ptr;
  v13 = v38;
  *(_QWORD *)v11 = v3;
  *((_QWORD *)v11 + 4) = v13;
  *((_DWORD *)v11 + 14) = v7;
  v11[60] = v33;
  *(__m128i *)(v11 + 40) = v12;
  v11[61] = v34;
  ++a1[1];
  return v43 - __readfsqword(0x28u);
}
