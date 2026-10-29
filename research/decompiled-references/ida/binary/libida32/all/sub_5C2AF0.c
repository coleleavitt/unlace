unsigned __int64 __fastcall sub_5C2AF0(char **a1, int *a2)
{
  int v3; // r15d
  __int64 v4; // r12
  int *v5; // rbx
  __int64 v6; // r12
  int v7; // r14d
  char v8; // al
  unsigned __int64 v9; // rbx
  char *v10; // rax
  char *v11; // rbx
  __m128i v12; // xmm0
  void *v13; // rax
  void *v15; // rax
  __int64 v16; // rax
  char *v17; // rcx
  char *v18; // r13
  char *v19; // rbx
  __int64 v20; // r13
  __int64 v21; // r12
  __int64 v22; // rsi
  __m128i v23; // xmm0
  __int64 v24; // rsi
  __m128i v25; // xmm0
  void *v26; // rdi
  void *v27; // rdi
  void *v29; // rax
  const void *v30; // rsi
  char *v31; // [rsp+0h] [rbp-A0h]
  char v32; // [rsp+Eh] [rbp-92h]
  char v33; // [rsp+Fh] [rbp-91h]
  char *v34; // [rsp+10h] [rbp-90h]
  void *ptr; // [rsp+20h] [rbp-80h]
  __m128i v36; // [rsp+28h] [rbp-78h] BYREF
  void *v37; // [rsp+38h] [rbp-68h]
  __m128i v38; // [rsp+40h] [rbp-60h] BYREF
  int v39; // [rsp+50h] [rbp-50h]
  char v40; // [rsp+54h] [rbp-4Ch]
  char v41; // [rsp+55h] [rbp-4Bh]
  unsigned __int64 v42; // [rsp+60h] [rbp-40h]

  v3 = *a2;
  v4 = *((_QWORD *)a2 + 2);
  v42 = __readfsqword(0x28u);
  v5 = a2;
  v36 = 0;
  ptr = nullptr;
  if ( v4 )
  {
    v15 = (void *)qalloc_or_throw(4 * v4, (const char *)a2);
    a2 = *((int **)a2 + 1);
    v36.m128i_i64[1] = v4;
    ptr = v15;
    memcpy(v15, a2, 4 * v4);
    v36.m128i_i64[0] = v4;
  }
  v6 = *((_QWORD *)v5 + 5);
  v37 = nullptr;
  v38 = 0;
  if ( v6 )
  {
    v29 = (void *)qalloc_or_throw(4 * v6, (const char *)a2);
    v30 = *((const void **)v5 + 4);
    v37 = v29;
    v38.m128i_i64[1] = v6;
    memcpy(v29, v30, 4 * v6);
    v38.m128i_i64[0] = v6;
  }
  v7 = v5[14];
  v32 = *((_BYTE *)v5 + 60);
  v40 = v32;
  v8 = *((_BYTE *)v5 + 61);
  v9 = (unsigned __int64)a1[2];
  v39 = v7;
  v33 = v8;
  v41 = v8;
  v10 = a1[1];
  if ( v9 < (unsigned __int64)(v10 + 1) )
  {
    v16 = qvector_reserve(a1, 0, v10 + 1, 64);
    v17 = a1[2];
    v18 = a1[1];
    a1[2] = (char *)v9;
    v31 = (char *)v16;
    v19 = *a1;
    v34 = v17;
    v20 = (__int64)(v18 - 1);
    if ( v20 >= 0 )
    {
      v21 = v16;
      do
      {
        *(_DWORD *)v21 = *(_DWORD *)v19;
        v22 = *((_QWORD *)v19 + 1);
        v23 = _mm_loadu_si128((const __m128i *)v19 + 1);
        *((_QWORD *)v19 + 1) = 0;
        *(_QWORD *)(v21 + 8) = v22;
        *(__m128i *)(v21 + 16) = v23;
        v24 = *((_QWORD *)v19 + 4);
        v25 = _mm_loadu_si128((const __m128i *)(v19 + 40));
        *((_OWORD *)v19 + 1) = 0;
        *(_QWORD *)(v21 + 32) = v24;
        *(__m128i *)(v21 + 40) = v25;
        LODWORD(v24) = *((_DWORD *)v19 + 14);
        *((_QWORD *)v19 + 4) = 0;
        *((_QWORD *)v19 + 6) = 0;
        *(_DWORD *)(v21 + 56) = v24;
        *(_BYTE *)(v21 + 60) = v19[60];
        *(_BYTE *)(v21 + 61) = v19[61];
        v26 = *((void **)v19 + 4);
        if ( v26 )
        {
          *((_QWORD *)v19 + 5) = 0;
          qfree(v26);
        }
        v27 = *((void **)v19 + 1);
        if ( v27 )
        {
          *((_QWORD *)v19 + 2) = 0;
          qfree(v27);
        }
        v19 += 64;
        v21 += 64;
      }
      while ( v20-- != 0 );
      v19 = *a1;
    }
    qfree(v19);
    *a1 = v31;
    a1[2] = v34;
    v10 = a1[1];
  }
  else
  {
    v31 = *a1;
  }
  v11 = &v31[64 * (_QWORD)v10];
  *((__m128i *)v11 + 1) = _mm_load_si128(&v36);
  v12 = _mm_loadu_si128(&v38);
  *((_QWORD *)v11 + 1) = ptr;
  v13 = v37;
  *(_DWORD *)v11 = v3;
  *((_QWORD *)v11 + 4) = v13;
  *((_DWORD *)v11 + 14) = v7;
  v11[60] = v32;
  *(__m128i *)(v11 + 40) = v12;
  v11[61] = v33;
  ++a1[1];
  return v42 - __readfsqword(0x28u);
}

