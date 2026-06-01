unsigned __int64 __fastcall sub_13FA7D0(__int64 a1, char *a2, __int64 a3)
{
  void ***v6; // rbx
  void ***v7; // r12
  char *v8; // rcx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // r14
  __int64 v12; // rax
  char *v13; // r14
  int v14; // ecx
  _BYTE *v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // r14
  __int64 v18; // r13
  __int64 v19; // rax
  _QWORD *v20; // rdi
  int v21; // edx
  __int64 v22; // r14
  __int64 v23; // r13
  _BYTE *v24; // rsi
  __int64 v25; // rdx
  _QWORD *v26; // rdi
  int v27; // eax
  void ***i; // r13
  void ***v29; // rdi
  void **v30; // r14
  void **v31; // rbp
  unsigned __int64 result; // rax
  __m128 v33; // xmm0
  unsigned __int64 v34; // [rsp+0h] [rbp-58h] BYREF
  __int64 v35; // [rsp+8h] [rbp-50h]
  unsigned __int64 v36; // [rsp+10h] [rbp-48h]
  char *v37; // [rsp+18h] [rbp-40h]

  v6 = *(void ****)(a1 + 8);
  v7 = *(void ****)a1;
  v8 = &a2[-*(_QWORD *)a1];
  v9 = ((__int64)v6 - *(_QWORD *)a1) >> 7;
  if ( !v9 )
  {
    v10 = 1;
    goto LABEL_38;
  }
  v10 = 2 * v9;
  v11 = -128;
  if ( v9 > 2 * v9 || v10 > 0x1FFFFFFFFFFFFFFLL )
    goto LABEL_3;
  if ( v10 )
  {
LABEL_38:
    v11 = v10 << 7;
LABEL_3:
    v37 = v8;
    v12 = operator new(v11);
    v8 = v37;
    v35 = v12;
    v36 = v12 + v11;
    v34 = v12 + 128;
    goto LABEL_4;
  }
  v34 = 128;
  v36 = 0;
  v35 = 0;
LABEL_4:
  v13 = &v8[v35];
  v14 = *(_DWORD *)(a3 + 8);
  *(_QWORD *)v13 = v13 + 16;
  *((_QWORD *)v13 + 1) = 0x200000000LL;
  if ( v14 )
    sub_13FA600((__int64)v13, a3);
  v15 = *(_BYTE **)(a3 + 96);
  v16 = *(_QWORD *)(a3 + 104);
  *((_QWORD *)v13 + 12) = v13 + 112;
  sub_13F27F0((_QWORD *)v13 + 12, v15, (__int64)&v15[v16]);
  if ( a2 != (char *)v7 )
  {
    v17 = v35;
    v18 = (__int64)v7;
    do
    {
      *(_DWORD *)(v17 + 8) = 0;
      *(_DWORD *)(v17 + 12) = 2;
      v21 = *(_DWORD *)(v18 + 8);
      *(_QWORD *)v17 = v17 + 16;
      if ( v21 )
        sub_13FA600(v17, v18);
      v19 = v17 + 112;
      v20 = (_QWORD *)(v17 + 96);
      v18 += 128;
      v17 += 128;
      *(_QWORD *)(v17 - 32) = v19;
      sub_13F27F0(v20, *(_BYTE **)(v18 - 32), *(_QWORD *)(v18 - 32) + *(_QWORD *)(v18 - 24));
    }
    while ( a2 != (char *)v18 );
    v34 = v35 + ((a2 - 128 - (char *)v7) & 0xFFFFFFFFFFFFFF80LL) + 256;
  }
  v22 = (__int64)a2;
  v23 = v34;
  if ( a2 != (char *)v6 )
  {
    do
    {
      *(_DWORD *)(v23 + 8) = 0;
      *(_QWORD *)v23 = v23 + 16;
      v27 = *(_DWORD *)(v22 + 8);
      *(_DWORD *)(v23 + 12) = 2;
      if ( v27 )
        sub_13FA600(v23, v22);
      v24 = *(_BYTE **)(v22 + 96);
      v25 = *(_QWORD *)(v22 + 104);
      v26 = (_QWORD *)(v23 + 96);
      *(_QWORD *)(v23 + 96) = v23 + 112;
      v22 += 128;
      v23 += 128;
      sub_13F27F0(v26, v24, (__int64)&v24[v25]);
    }
    while ( (void ***)v22 != v6 );
    v34 += (((char *)v6 - a2 - 128) & 0xFFFFFFFFFFFFFF80LL) + 128;
  }
  for ( i = v7; i != v6; i += 16 )
  {
    while ( 1 )
    {
      v29 = (void ***)i[12];
      if ( v29 != i + 14 )
        operator delete(v29);
      v30 = *i;
      v31 = &(*i)[5 * *((unsigned int *)i + 2)];
      if ( *i != v31 )
      {
        do
        {
          while ( 1 )
          {
            v31 -= 5;
            if ( *v31 == v31 + 2 )
              break;
            operator delete(*v31);
            if ( v30 == v31 )
              goto LABEL_24;
          }
        }
        while ( v30 != v31 );
LABEL_24:
        v31 = *i;
      }
      if ( v31 == (void **)(i + 2) )
        break;
      i += 16;
      free(v31);
      if ( v6 == i )
        goto LABEL_27;
    }
  }
LABEL_27:
  if ( v7 )
    operator delete(v7);
  result = v36;
  v33 = _mm_loadh_ps((const double *)&v34);
  *(_QWORD *)(a1 + 16) = v36;
  *(__m128 *)a1 = v33;
  return result;
}
