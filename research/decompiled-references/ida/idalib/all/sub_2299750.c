unsigned __int64 __fastcall sub_2299750(__int64 a1, const char *a2, _DWORD *a3, int *a4, _DWORD *a5)
{
  unsigned __int64 v6; // rbx
  int v7; // r14d
  int v8; // r13d
  int v9; // r12d
  size_t v10; // rax
  void *v12; // r9
  __int64 v13; // r12
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // r13
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // r14
  int v19; // r10d
  int v20; // ecx
  int v21; // r13d
  unsigned __int64 v22; // r12
  size_t v23; // rax
  int v24; // r10d
  int v25; // ecx
  __m128i *v26; // r9
  const __m128i *v27; // rax
  unsigned __int64 v28; // rdx
  __m128i v29; // xmm1
  unsigned __int64 v30; // rax
  __int64 v31; // [rsp+0h] [rbp-68h] BYREF
  void *v32; // [rsp+8h] [rbp-60h]
  _DWORD *v33; // [rsp+10h] [rbp-58h]
  void *v34; // [rsp+18h] [rbp-50h]
  unsigned __int64 v35; // [rsp+20h] [rbp-48h]
  _DWORD *v36; // [rsp+28h] [rbp-40h]

  v6 = *(_QWORD *)(a1 + 8);
  if ( v6 != *(_QWORD *)(a1 + 16) )
  {
    v7 = *a3;
    v8 = *a4;
    v9 = *a5;
    v10 = strlen(a2);
    *(_QWORD *)v6 = a2;
    *(_QWORD *)(v6 + 8) = v10;
    *(_DWORD *)(v6 + 16) = v7;
    *(_DWORD *)(v6 + 20) = v8;
    *(_DWORD *)(v6 + 24) = v9;
    *(_BYTE *)(v6 + 28) = 1;
    *(_QWORD *)(a1 + 8) = v6 + 32;
    return v6;
  }
  v12 = *(void **)a1;
  v13 = v6 - *(_QWORD *)a1;
  v14 = v13 >> 5;
  if ( v13 >> 5 )
  {
    v15 = 2 * v14;
    v16 = -32;
    if ( v14 <= 2 * v14 && v15 <= 0x7FFFFFFFFFFFFFFLL )
    {
      if ( !v15 )
      {
        v31 = 32;
        v18 = 0;
        v35 = 0;
        goto LABEL_7;
      }
      v16 = v14 << 6;
    }
  }
  else
  {
    v16 = 32;
  }
  v36 = a5;
  v34 = a4;
  v33 = a3;
  v32 = v12;
  v17 = operator new(v16);
  v12 = v32;
  a3 = v33;
  v18 = v17;
  a4 = (int *)v34;
  a5 = v36;
  v35 = v17 + v16;
  v31 = v17 + 32;
LABEL_7:
  v19 = *a3;
  v20 = *a4;
  v34 = v12;
  v21 = *a5;
  v22 = v18 + v13;
  LODWORD(v33) = v19;
  LODWORD(v32) = v20;
  v23 = strlen(a2);
  v24 = (int)v33;
  v25 = (int)v32;
  *(_QWORD *)v22 = a2;
  v26 = (__m128i *)v34;
  *(_QWORD *)(v22 + 8) = v23;
  *(_DWORD *)(v22 + 16) = v24;
  *(_DWORD *)(v22 + 20) = v25;
  *(_DWORD *)(v22 + 24) = v21;
  *(_BYTE *)(v22 + 28) = 1;
  if ( (__m128i *)v6 == v26 )
  {
    v6 = v18;
  }
  else
  {
    v27 = v26;
    v28 = v18;
    do
    {
      v29 = _mm_loadu_si128(v27);
      v27 += 2;
      v28 += 32LL;
      *(__m128i *)(v28 - 32) = v29;
      *(__m128i *)(v28 - 16) = _mm_loadu_si128(v27 - 1);
    }
    while ( (const __m128i *)v6 != v27 );
    v6 = v18 + ((v6 - 32 - (_QWORD)v26) & 0xFFFFFFFFFFFFFFE0LL) + 32;
    v31 = v6 + 32;
  }
  if ( v26 )
    operator delete(v26);
  v32 = (void *)v18;
  v30 = v35;
  *(__m128 *)a1 = _mm_loadh_ps((const double *)&v31);
  *(_QWORD *)(a1 + 16) = v30;
  return v6;
}
