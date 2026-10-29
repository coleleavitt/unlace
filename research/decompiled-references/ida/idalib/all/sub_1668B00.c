void __fastcall sub_1668B00(__int64 a1, char *a2, _QWORD *a3)
{
  char *v4; // r14
  char *v7; // rsi
  char *v8; // rbx
  char *v9; // r8
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // r13
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // r12
  __int64 v16; // r13
  char *v17; // rax
  unsigned __int64 v18; // rdi
  unsigned __int64 v19; // r8
  __int64 v20; // rdx
  unsigned __int64 v21; // rdx
  char *v22; // rax
  _QWORD *v23; // rdx
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rsi
  __int64 v26; // rdx
  unsigned __int64 v27; // r14
  _QWORD *v28; // rdx
  unsigned __int64 v29; // rdx
  int v30; // r9d
  int v31; // r8d
  __int64 v32; // [rsp+8h] [rbp-50h] BYREF
  char *v33; // [rsp+10h] [rbp-48h]
  _QWORD *v34; // [rsp+18h] [rbp-40h]

  v4 = a2;
  v7 = *(char **)(a1 + 8);
  v8 = *(char **)a1;
  v9 = &a2[-*(_QWORD *)a1];
  v10 = (__int64)&v7[-*(_QWORD *)a1] >> 3;
  if ( !v10 )
  {
    v11 = 1;
    goto LABEL_26;
  }
  v11 = 2 * v10;
  v12 = -8;
  if ( v10 > 2 * v10 || v11 > 0x1FFFFFFFFFFFFFFFLL )
    goto LABEL_3;
  if ( v11 )
  {
LABEL_26:
    v12 = 8 * v11;
LABEL_3:
    v34 = a3;
    v33 = v9;
    v32 = (__int64)v7;
    v13 = operator new(v12);
    v9 = v33;
    a3 = v34;
    v14 = v13 + v12;
    v15 = v13;
    v16 = v13 + 8;
    goto LABEL_4;
  }
  v16 = 8;
  v14 = 0;
  v15 = 0;
LABEL_4:
  *(_QWORD *)&v9[v15] = *a3;
  if ( a2 != v8 )
  {
    v17 = v8;
    v18 = (unsigned __int64)(a2 - 8 - v8) >> 3;
    if ( (v15 >= (unsigned __int64)(v8 + 16) || (unsigned __int64)v8 >= v15 + 16) && (v18 & 0x1FFFFFFFFFFFFFFELL) != 0 )
    {
      v19 = v18 + 1;
      v20 = 0;
      do
      {
        *(__m128i *)(v15 + v20) = _mm_loadu_si128((const __m128i *)&v8[v20]);
        v20 += 16;
      }
      while ( 16 * ((v18 + 1) >> 1) != v20 );
      v21 = 8 * (v19 & 0xFFFFFFFFFFFFFFFELL);
      v22 = &v8[v21];
      v23 = (_QWORD *)(v15 + v21);
      if ( v19 != (v19 & 0xFFFFFFFFFFFFFFFELL) )
        *v23 = *(_QWORD *)v22;
    }
    else
    {
      v29 = v15;
      do
      {
        v30 = *(_DWORD *)v17;
        v31 = *((_DWORD *)v17 + 1);
        v17 += 8;
        v29 += 8LL;
        *(_DWORD *)(v29 - 8) = v30;
        *(_DWORD *)(v29 - 4) = v31;
      }
      while ( a2 != v17 );
    }
    v16 = v15 + 8 * v18 + 16;
  }
  if ( a2 != v7 )
  {
    v24 = v7 - a2 - 8;
    v25 = (v24 >> 3) + 1;
    if ( v24 )
    {
      v26 = 0;
      do
      {
        *(__m128i *)(v16 + v26) = _mm_loadu_si128((const __m128i *)&a2[v26]);
        v26 += 16;
      }
      while ( v26 != 16 * (v25 >> 1) );
      v27 = 8 * (v25 & 0xFFFFFFFFFFFFFFFELL);
      v28 = (_QWORD *)(v16 + v27);
      v4 = &a2[v27];
      if ( v25 == (v25 & 0xFFFFFFFFFFFFFFFELL) )
        goto LABEL_18;
    }
    else
    {
      v28 = (_QWORD *)v16;
    }
    *v28 = *(_QWORD *)v4;
LABEL_18:
    v16 += 8 * v25;
  }
  if ( v8 )
  {
    v32 = v14;
    operator delete(v8);
    v14 = v32;
  }
  v32 = v16;
  *(_QWORD *)(a1 + 16) = v14;
  *(__m128 *)a1 = _mm_loadh_ps((const double *)&v32);
}
