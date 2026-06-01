__int64 __fastcall sub_1706840(__int64 a1, char *a2, __int64 a3)
{
  char *v5; // rbx
  char *v6; // rbp
  char *v7; // r8
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // r14
  __int64 v10; // rax
  char *v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rax
  char *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rsi
  char v21; // di
  __int64 v22; // rsi
  __int64 v23; // rsi
  __int64 v24; // rsi
  char *i; // r12
  _QWORD *v26; // r15
  _QWORD *v27; // r14
  _QWORD *v28; // rdi
  __int64 result; // rax
  __m128 v30; // xmm0
  __int64 v31; // [rsp+8h] [rbp-60h] BYREF
  __int64 v32; // [rsp+10h] [rbp-58h]
  __int64 v33; // [rsp+18h] [rbp-50h]
  char *v34; // [rsp+20h] [rbp-48h]
  __int64 v35; // [rsp+28h] [rbp-40h]

  v5 = *(char **)(a1 + 8);
  v6 = *(char **)a1;
  v7 = &a2[-*(_QWORD *)a1];
  if ( !(0xAAAAAAAAAAAAAAABLL * ((__int64)&v5[-*(_QWORD *)a1] >> 5)) )
  {
    v8 = 1;
    goto LABEL_29;
  }
  v8 = 0x5555555555555556LL * ((__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 5);
  v9 = -64;
  if ( 0xAAAAAAAAAAAAAAABLL * ((__int64)&v5[-*(_QWORD *)a1] >> 5) > 0x5555555555555556LL
                                                                  * ((__int64)&v5[-*(_QWORD *)a1] >> 5)
    || v8 > 0x2AAAAAAAAAAAAAALL )
  {
    goto LABEL_3;
  }
  if ( v8 )
  {
LABEL_29:
    v9 = 96 * v8;
LABEL_3:
    v35 = a3;
    v34 = v7;
    v10 = operator new(v9);
    v7 = v34;
    a3 = v35;
    v32 = v10;
    v33 = v10 + v9;
    v31 = v10 + 96;
    goto LABEL_4;
  }
  v31 = 96;
  v33 = 0;
  v32 = 0;
LABEL_4:
  sub_17048E0((__int64)&v7[v32], a3);
  if ( a2 != v6 )
  {
    v11 = v6;
    v12 = v32;
    do
    {
      v13 = *(_QWORD *)v11;
      v11 += 96;
      v12 += 96;
      *(_QWORD *)(v12 - 96) = v13;
      *(_QWORD *)(v12 - 88) = *((_QWORD *)v11 - 11);
      *(_DWORD *)(v12 - 80) = *((_DWORD *)v11 - 20);
      *(_DWORD *)(v12 - 76) = *((_DWORD *)v11 - 19);
      *(_DWORD *)(v12 - 72) = *((_DWORD *)v11 - 18);
      *(_DWORD *)(v12 - 68) = *((_DWORD *)v11 - 17);
      LODWORD(v13) = *((_DWORD *)v11 - 16);
      *(_QWORD *)(v12 - 48) = 0;
      *(_QWORD *)(v12 - 40) = 0;
      *(_QWORD *)(v12 - 56) = 0;
      *(_DWORD *)(v12 - 64) = v13;
      *(_QWORD *)(v12 - 56) = *((_QWORD *)v11 - 7);
      v14 = *((_QWORD *)v11 - 6);
      *((_QWORD *)v11 - 7) = 0;
      v15 = *(_QWORD *)(v12 - 48);
      *(_QWORD *)(v12 - 48) = v14;
      v16 = *((_QWORD *)v11 - 5);
      *((_QWORD *)v11 - 6) = v15;
      v17 = *(_QWORD *)(v12 - 40);
      *(_QWORD *)(v12 - 40) = v16;
      LOBYTE(v16) = *(v11 - 32);
      *((_QWORD *)v11 - 5) = v17;
      LOBYTE(v17) = v16 & 1 | *(_BYTE *)(v12 - 32) & 0xFE;
      *(_BYTE *)(v12 - 32) = v17;
      LOBYTE(v17) = *(v11 - 32) & 2 | v17 & 0xFD;
      *(_BYTE *)(v12 - 32) = v17;
      LOBYTE(v17) = *(v11 - 32) & 4 | v17 & 0xFB;
      *(_BYTE *)(v12 - 32) = v17;
      LOBYTE(v17) = *(v11 - 32) & 8 | v17 & 0xF7;
      *(_BYTE *)(v12 - 32) = v17;
      LOBYTE(v17) = *(v11 - 32) & 0x10 | v17 & 0xEF;
      *(_BYTE *)(v12 - 32) = v17;
      LOBYTE(v17) = *(v11 - 32) & 0x20 | v17 & 0xDF;
      *(_BYTE *)(v12 - 32) = v17;
      *(_BYTE *)(v12 - 32) = *(v11 - 32) & 0x40 | v17 & 0xBF;
      *(_QWORD *)(v12 - 24) = *((_QWORD *)v11 - 3);
      *(_QWORD *)(v12 - 16) = *((_QWORD *)v11 - 2);
      *(_QWORD *)(v12 - 8) = *((_QWORD *)v11 - 1);
    }
    while ( a2 != v11 );
    v31 = v32 + 32 * (3 * ((0x2AAAAAAAAAAAAABLL * ((unsigned __int64)(a2 - 96 - v6) >> 5)) & 0x7FFFFFFFFFFFFFFLL) + 6);
  }
  v18 = a2;
  v19 = v31;
  if ( a2 != v5 )
  {
    do
    {
      v20 = *(_QWORD *)v18;
      v21 = v18[64];
      v18 += 96;
      v19 += 96;
      *(_QWORD *)(v19 - 96) = v20;
      *(_QWORD *)(v19 - 88) = *((_QWORD *)v18 - 11);
      *(_DWORD *)(v19 - 80) = *((_DWORD *)v18 - 20);
      *(_DWORD *)(v19 - 76) = *((_DWORD *)v18 - 19);
      *(_DWORD *)(v19 - 72) = *((_DWORD *)v18 - 18);
      *(_DWORD *)(v19 - 68) = *((_DWORD *)v18 - 17);
      *(_DWORD *)(v19 - 64) = *((_DWORD *)v18 - 16);
      v22 = *((_QWORD *)v18 - 7);
      *((_QWORD *)v18 - 7) = 0;
      *(_QWORD *)(v19 - 56) = v22;
      v23 = *((_QWORD *)v18 - 6);
      *((_QWORD *)v18 - 6) = 0;
      *(_QWORD *)(v19 - 48) = v23;
      v24 = *((_QWORD *)v18 - 5);
      *((_QWORD *)v18 - 5) = 0;
      *(_QWORD *)(v19 - 40) = v24;
      *(_BYTE *)(v19 - 32) = v21 & 0x7F | *(_BYTE *)(v19 - 32) & 0x80;
      *(_QWORD *)(v19 - 24) = *((_QWORD *)v18 - 3);
      *(_QWORD *)(v19 - 16) = *((_QWORD *)v18 - 2);
      *(_QWORD *)(v19 - 8) = *((_QWORD *)v18 - 1);
    }
    while ( v5 != v18 );
    v31 += 32 * (3 * ((0x2AAAAAAAAAAAAABLL * ((unsigned __int64)(v5 - a2 - 96) >> 5)) & 0x7FFFFFFFFFFFFFFLL) + 3);
  }
  for ( i = v6; i != v5; i += 96 )
  {
    while ( 1 )
    {
      v26 = *((_QWORD **)i + 6);
      v27 = *((_QWORD **)i + 5);
      if ( v26 != v27 )
      {
        do
        {
          while ( 1 )
          {
            v28 = (_QWORD *)v27[3];
            if ( v28 == v27 + 5 )
              break;
            operator delete(v28);
            v27 += 8;
            if ( v26 == v27 )
              goto LABEL_15;
          }
          v27 += 8;
        }
        while ( v26 != v27 );
LABEL_15:
        v27 = *((_QWORD **)i + 5);
      }
      if ( !v27 )
        break;
      i += 96;
      operator delete(v27);
      if ( v5 == i )
        goto LABEL_18;
    }
  }
LABEL_18:
  if ( v6 )
    operator delete(v6);
  result = v33;
  v30 = _mm_loadh_ps((const double *)&v31);
  *(_QWORD *)(a1 + 16) = v33;
  *(__m128 *)a1 = v30;
  return result;
}
