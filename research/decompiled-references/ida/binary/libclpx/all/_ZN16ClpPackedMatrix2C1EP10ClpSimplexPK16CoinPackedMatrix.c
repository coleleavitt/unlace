// Alternative name is '_ZN16ClpPackedMatrix2C2EP10ClpSimplexPK16CoinPackedMatrix'
void __fastcall ClpPackedMatrix2::ClpPackedMatrix2(ClpPackedMatrix2 *this, ClpSimplex *a2, const CoinPackedMatrix *a3)
{
  bool v3; // zf
  int v4; // eax
  int v5; // eax
  int v6; // r15d
  __int64 v7; // rbx
  _DWORD *v8; // r13
  __int64 v9; // r12
  int v11; // ecx
  __int64 v12; // rax
  __int64 v13; // rdx
  int v14; // r14d
  void *v15; // rax
  unsigned __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdx
  int v19; // ecx
  int v20; // edx
  unsigned __int64 v21; // rax
  int v22; // ecx
  int v23; // r15d
  int v24; // eax
  int v25; // esi
  int v26; // edx
  int *v27; // r14
  __int64 v28; // r11
  int v29; // r10d
  char v30; // r8
  __int64 v31; // rax
  __int16 v32; // di
  unsigned __int64 v33; // rsi
  int v34; // edx
  int v35; // edx
  int v36; // eax
  size_t n; // [rsp+8h] [rbp-60h]
  __int64 v38; // [rsp+10h] [rbp-58h]
  _DWORD *i; // [rsp+18h] [rbp-50h]
  int *v40; // [rsp+20h] [rbp-48h]
  int v41; // [rsp+2Ch] [rbp-3Ch]

  *((_QWORD *)this + 1) = 0;
  *((_QWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0;
  *((_QWORD *)this + 4) = 0;
  *((_QWORD *)this + 5) = 0;
  *((_QWORD *)this + 6) = 0;
  v3 = *((_BYTE *)a3 + 8) == 0;
  *(_QWORD *)this = off_4D0E30;
  if ( v3 )
  {
    v5 = *((_DWORD *)a3 + 16);
    *((_DWORD *)this + 3) = v5;
    if ( !v5 )
      return;
    v6 = *((_DWORD *)a3 + 17);
  }
  else
  {
    v4 = *((_DWORD *)a3 + 17);
    *((_DWORD *)this + 3) = v4;
    if ( !v4 )
      return;
    v6 = *((_DWORD *)a3 + 16);
  }
  if ( v6 > 10000 )
  {
    v7 = *((_QWORD *)a3 + 5);
    v8 = *((_DWORD **)a3 + 7);
    v9 = *((_QWORD *)a3 + 4);
    v11 = (v6 + 0x7FFF) >> 15;
    v40 = *((int **)a3 + 6);
    *((_DWORD *)this + 2) = v11;
    v41 = (v11 + v6 - 1) / v11;
    v12 = operator new[](4LL * (v11 + 1));
    v13 = *((int *)this + 2);
    *((_QWORD *)this + 2) = v12;
    *(_DWORD *)(v12 + 4 * v13) = v6;
    v14 = *((_DWORD *)this + 3) * v13;
    if ( (unsigned __int64)v14 > 0x3FFFFFFFFFFFFFFCLL
      || (n = 2LL * v14,
          v15 = (void *)operator new[](n),
          *((_QWORD *)this + 3) = v15,
          memset(v15, 0, n),
          v16 = v14 + *((_DWORD *)this + 3) + 1,
          v16 > 0x1FFFFFFFFFFFFFFELL)
      || (v17 = operator new[](4 * v16),
          v18 = *((int *)this + 3),
          *((_QWORD *)this + 4) = v17,
          v19 = v18,
          v20 = v40[v18],
          *(_DWORD *)(v17 + 4LL * (v14 + v19)) = v20,
          (unsigned __int64)v20 > 0x3FFFFFFFFFFFFFFCLL)
      || (*((_QWORD *)this + 5) = operator new[](2LL * v20), v21 = 6 * *((_DWORD *)this + 2), v21 > 0xFFFFFFFFFFFFFFFLL) )
    {
      __cxa_throw_bad_array_new_length();
    }
    *((_QWORD *)this + 6) = operator new[](8 * v21);
    if ( *((int *)this + 2) > 0 )
    {
      v22 = 0;
      v23 = 0;
      for ( i = *((_DWORD **)this + 2); ; ++i )
      {
        *i = v22;
        v24 = *((_DWORD *)this + 3);
        if ( v24 > 0 )
          break;
        v35 = *((_DWORD *)this + 2);
LABEL_31:
        ++v23;
        v22 += v41;
        if ( v35 <= v23 )
          return;
      }
      v25 = *v40;
      v26 = *v40 + *v8;
      if ( v26 != v40[1] )
      {
LABEL_27:
        puts("not packed correctly - gaps");
        abort();
      }
      v27 = v40 + 1;
      v28 = 0;
      v38 = (unsigned int)(v24 - 1);
      while ( 1 )
      {
        v29 = v28;
        if ( v26 > v25 )
          break;
        v32 = 0;
LABEL_25:
        v35 = *((_DWORD *)this + 2);
        *(_WORD *)(*((_QWORD *)this + 3) + 2LL * (v35 * v29 + v23)) = v32;
        if ( v38 == v28 )
          goto LABEL_31;
        v25 = *v27;
        v36 = v8[v28 + 1];
        v26 = *++v27;
        ++v28;
        if ( *v27 != v25 + v36 )
          goto LABEL_27;
      }
      v30 = 0;
      v31 = 2LL * v25;
      v32 = 0;
      v33 = 2 * (v25 + (unsigned __int64)(unsigned int)(v26 - 1 - v25) + 1);
      while ( 1 )
      {
        while ( 1 )
        {
          v34 = *(_DWORD *)(v7 + 2 * v31);
          if ( v22 <= v34 )
            break;
LABEL_20:
          v31 += 2;
          if ( v31 == v33 )
            goto LABEL_24;
        }
        if ( v41 + v22 > v34 )
        {
          if ( *(double *)(v9 + 4 * v31) == 0.0 )
          {
            puts("not packed correctly - zero element");
            abort();
          }
          ++v32;
          *(_WORD *)(*((_QWORD *)this + 5) + v31) = v34 - v22;
          if ( v30 )
          {
            puts("not packed correctly - out of order");
            abort();
          }
          goto LABEL_20;
        }
        v31 += 2;
        v30 = 1;
        if ( v31 == v33 )
        {
LABEL_24:
          v29 = v28;
          goto LABEL_25;
        }
      }
    }
  }
}

