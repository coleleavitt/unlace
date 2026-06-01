unsigned __int64 __fastcall sub_22BD6F0(__int64 a1)
{
  signed __int64 v1; // rbp
  __int64 v2; // r14
  __int64 v3; // rdx
  __int64 v4; // rbx
  _DWORD *v5; // rax
  _DWORD *i; // rdx
  __m128i *v7; // r13
  char j; // al
  __int64 v9; // r12
  int *v10; // rdx
  int v11; // eax
  int v12; // ecx
  bool v13; // zf
  __int32 v14; // eax
  __int64 v15; // rcx
  signed __int64 v16; // rbp
  signed __int64 v17; // rbx
  unsigned int v18; // r10d
  int v19; // r11d
  unsigned int n; // ecx
  _DWORD *v21; // r13
  unsigned int v22; // ecx
  unsigned __int64 v23; // rbx
  unsigned __int64 v25; // rax
  __int64 v26; // rcx
  unsigned int v27; // ecx
  int ii; // r12d
  _DWORD *v29; // r11
  unsigned int v30; // ecx
  unsigned __int64 v31; // rax
  _DWORD *v32; // rax
  int *v33; // rdi
  _DWORD *k; // rdx
  int *v35; // rbx
  char *v36; // rsi
  __int32 v37; // edx
  __m128i *v38; // rax
  _DWORD *m; // rdx
  int v40; // r11d
  __int64 v41; // [rsp+8h] [rbp-130h]
  bool v42; // [rsp+10h] [rbp-128h]
  unsigned int v43; // [rsp+18h] [rbp-120h]
  __int64 v44; // [rsp+20h] [rbp-118h]
  bool v45; // [rsp+28h] [rbp-110h]
  bool v46; // [rsp+30h] [rbp-108h]
  int v47; // [rsp+3Ch] [rbp-FCh]
  __int64 v48; // [rsp+58h] [rbp-E0h]
  __int64 v49; // [rsp+88h] [rbp-B0h]
  int *v50; // [rsp+98h] [rbp-A0h] BYREF
  int *v51; // [rsp+A0h] [rbp-98h] BYREF
  __m128i *v52; // [rsp+A8h] [rbp-90h] BYREF
  _DWORD *v53; // [rsp+B0h] [rbp-88h] BYREF
  __int64 v54; // [rsp+B8h] [rbp-80h]
  unsigned int v55; // [rsp+C0h] [rbp-78h]
  _BYTE v56[36]; // [rsp+D0h] [rbp-68h] BYREF
  int v57; // [rsp+F4h] [rbp-44h]
  __int64 v58; // [rsp+F8h] [rbp-40h] BYREF

  v1 = sub_22B7B00(a1);
  v2 = (unsigned int)v1;
  v4 = v3;
  memset(&v56[4], 0, 32);
  LODWORD(v41) = HIDWORD(v1) & 0x7FFFFFFF;
  v46 = v1 < 0;
  *(_DWORD *)&v56[24] = -2147483645;
  v43 = v3 & 0x7FFFFFFF;
  v57 = 48;
  v42 = (int)v3 < 0;
  v55 = 4;
  LODWORD(v44) = HIDWORD(v3) & 0x7FFFFFFF;
  v45 = v3 < 0;
  v47 = *(_DWORD *)(a1 + 36);
  *(_QWORD *)v56 = 0x8000000200000001LL;
  *(_QWORD *)&v56[16] = 0x10000002FLL;
  v5 = (_DWORD *)sub_22300B0(80, 4);
  v54 = 0;
  v53 = v5;
  for ( i = v5 + 20; i != v5; *(v5 - 2) = 0 )
  {
    *v5 = 0x7FFFFFFF;
    v5 += 5;
    *((_QWORD *)v5 - 2) = 0;
  }
  v7 = (__m128i *)v56;
  for ( j = sub_22BD350((__int64 *)&v53, v56, &v50); ; j = sub_22BD350((__int64 *)&v53, v7->m128i_i8, &v50) )
  {
    if ( j )
      goto LABEL_4;
    v9 = v55;
    v10 = v50;
    v11 = v54 + 1;
    v51 = v50;
    if ( 4 * ((int)v54 + 1) >= 3 * v55 )
    {
      v48 = (__int64)v53;
      v12 = 2 * v55;
      v31 = ((((((((((unsigned int)(v12 - 1) | ((unsigned __int64)(unsigned int)(v12 - 1) >> 1)) >> 2)
                 | (unsigned int)(v12 - 1)
                 | ((unsigned __int64)(unsigned int)(v12 - 1) >> 1)) >> 4)
               | (((unsigned int)(v12 - 1) | ((unsigned __int64)(unsigned int)(v12 - 1) >> 1)) >> 2)
               | (unsigned int)(v12 - 1)
               | ((unsigned __int64)(unsigned int)(v12 - 1) >> 1)) >> 8)
             | (((((unsigned int)(v12 - 1) | ((unsigned __int64)(unsigned int)(v12 - 1) >> 1)) >> 2)
               | (unsigned int)(v12 - 1)
               | ((unsigned __int64)(unsigned int)(v12 - 1) >> 1)) >> 4)
             | (((unsigned int)(v12 - 1) | ((unsigned __int64)(unsigned int)(v12 - 1) >> 1)) >> 2)
             | (unsigned int)(v12 - 1)
             | ((unsigned __int64)(unsigned int)(v12 - 1) >> 1)) >> 16)
           | (((((((unsigned int)(v12 - 1) | ((unsigned __int64)(unsigned int)(v12 - 1) >> 1)) >> 2)
               | (unsigned int)(v12 - 1)
               | ((unsigned __int64)(unsigned int)(v12 - 1) >> 1)) >> 4)
             | (((unsigned int)(v12 - 1) | ((unsigned __int64)(unsigned int)(v12 - 1) >> 1)) >> 2)
             | (unsigned int)(v12 - 1)
             | ((unsigned __int64)(unsigned int)(v12 - 1) >> 1)) >> 8)
           | (((((unsigned int)(v12 - 1) | ((unsigned __int64)(unsigned int)(v12 - 1) >> 1)) >> 2)
             | (unsigned int)(v12 - 1)
             | ((unsigned __int64)(unsigned int)(v12 - 1) >> 1)) >> 4)
           | (((unsigned int)(v12 - 1) | ((unsigned __int64)(unsigned int)(v12 - 1) >> 1)) >> 2)
           | (unsigned int)(v12 - 1)
           | ((unsigned __int64)(unsigned int)(v12 - 1) >> 1))
          + 1;
      if ( (unsigned int)v31 < 0x40 )
        LODWORD(v31) = 64;
      v55 = v31;
      v32 = (_DWORD *)sub_22300B0(20LL * (unsigned int)v31, 4);
      v53 = v32;
      if ( v48 )
      {
        v54 = 0;
        v33 = (int *)(20 * v9 + v48);
        for ( k = &v32[5 * v55]; k != v32; *(v32 - 2) = 0 )
        {
          *v32 = 0x7FFFFFFF;
          v32 += 5;
          *((_QWORD *)v32 - 2) = 0;
        }
        if ( (int *)v48 != v33 )
        {
          v49 = v4;
          v35 = (int *)v48;
          do
          {
            while ( *v35 > 2147483645
                 && (v35[1] & 0x7FFFFFFF) == 0
                 && (v35[2] & 0x7FFFFFFF) == 0
                 && (v35[3] & 0x7FFFFFFF) == 0 )
            {
              v35 += 5;
              if ( v33 == v35 )
                goto LABEL_63;
            }
            v36 = (char *)v35;
            v35 += 5;
            sub_22BD350((__int64 *)&v53, v36, (int **)&v52);
            v37 = *(v35 - 1);
            v38 = v52;
            *v52 = _mm_loadu_si128((const __m128i *)(v35 - 5));
            v38[1].m128i_i32[0] = v37;
            LODWORD(v54) = v54 + 1;
          }
          while ( v33 != v35 );
LABEL_63:
          v4 = v49;
        }
        operator delete(v48, 20 * v9, 4);
      }
      else
      {
        v54 = 0;
        for ( m = &v32[5 * v55]; m != v32; *(v32 - 2) = 0 )
        {
          *v32 = 0x7FFFFFFF;
          v32 += 5;
          *((_QWORD *)v32 - 2) = 0;
        }
      }
    }
    else
    {
      if ( v55 - HIDWORD(v54) - v11 > v55 >> 3 )
        goto LABEL_9;
      sub_22BD540((__int64)&v53, v55);
    }
    sub_22BD350((__int64 *)&v53, v7->m128i_i8, &v51);
    v10 = v51;
    v11 = v54 + 1;
LABEL_9:
    v13 = *v10 == 0x7FFFFFFF;
    LODWORD(v54) = v11;
    if ( !v13 || (v10[1] & 0x7FFFFFFF) != 0 || (v10[2] & 0x7FFFFFFF) != 0 || (v10[3] & 0x7FFFFFFF) != 0 )
      --HIDWORD(v54);
    v14 = v7[1].m128i_i32[0];
    *(__m128i *)v10 = _mm_loadu_si128(v7);
    v10[4] = v14;
LABEL_4:
    v7 = (__m128i *)((char *)v7 + 20);
    if ( v7 == (__m128i *)&v58 )
      break;
  }
  if ( !(_DWORD)v1 )
  {
    v25 = (v41 << 32) & 0x7FFFFFFFFFFFFFFFLL;
    v1 = v25 | ((unsigned __int64)v1 >> 63 << 63);
    if ( !HIDWORD(v25) )
    {
      v2 = v43 & 0x7FFFFFFF;
      if ( (v43 & 0x7FFFFFFF) != 0 )
      {
        v2 = 0;
      }
      else if ( !(((v44 << 32) & 0x7FFFFFFFFFFFFFFFLL | (unsigned __int64)((v42 << 31) | v43 & 0x7FFFFFFF)) >> 32) )
      {
        v45 = 0;
        v2 = 1;
        LODWORD(v44) = 0;
        v42 = 0;
        v43 = 0;
        v46 = 1;
        LODWORD(v41) = 2;
      }
    }
  }
  if ( !v55 )
    goto LABEL_31;
  v15 = (unsigned int)v2;
  v16 = ((unsigned __int64)v46 << 63)
      | ((unsigned __int64)(unsigned int)v41 << 32) & 0x7FFFFFFFFFFFFFFFLL
      | (unsigned int)v1;
  if ( v16 < 0 )
    v15 = (unsigned int)((0xBF58476D1CE4E5B9LL * ((unsigned int)v41 | (unsigned __int64)(v2 << 32))) >> 31)
        ^ (484763065 * (_DWORD)v41);
  if ( ((((v42 << 31) | v43 & 0x7FFFFFFF) >> 24) & 0x80u) != 0 )
    v15 = (unsigned int)((0xBF58476D1CE4E5B9LL * (v43 | (unsigned __int64)(v15 << 32))) >> 31) ^ (484763065 * v43);
  v17 = ((unsigned __int64)v45 << 63)
      | ((unsigned __int64)(unsigned int)v44 << 32) & 0x7FFFFFFFFFFFFFFFLL
      | (v42 << 31)
      | v43 & 0x7FFFFFFF;
  if ( v17 < 0 )
    LODWORD(v15) = ((0xBF58476D1CE4E5B9LL * ((unsigned int)v44 | (unsigned __int64)(v15 << 32))) >> 31)
                 ^ (484763065 * v44);
  v18 = v55 - 1;
  v19 = 1;
  for ( n = (v55 - 1) & v15; ; n = v18 & v22 )
  {
    v21 = &v53[5 * n];
    if ( *v21 == (_DWORD)v2 )
    {
      v16 = ((unsigned __int64)v46 << 63)
          | ((unsigned __int64)(v41 & 0x7FFFFFFF) << 32) & 0x7FFFFFFFFFFFFFFFLL
          | (unsigned int)v16;
      if ( ((v21[1] ^ HIDWORD(v16)) & 0x7FFFFFFF) == 0 )
      {
        v17 = ((unsigned __int64)v42 << 31) | v43 & 0x7FFFFFFF | v17 & 0xFFFFFFFF00000000LL;
        if ( (((unsigned int)v17 ^ v21[2]) & 0x7FFFFFFF) == 0 )
        {
          v17 = ((unsigned __int64)v45 << 63)
              | ((unsigned __int64)(v44 & 0x7FFFFFFF) << 32) & 0x7FFFFFFFFFFFFFFFLL
              | (unsigned int)v17;
          if ( ((v21[3] ^ HIDWORD(v17)) & 0x7FFFFFFF) == 0 )
            break;
        }
      }
    }
    if ( *v21 == 0x7FFFFFFF && (v21[1] & 0x7FFFFFFF) == 0 && (v21[2] & 0x7FFFFFFF) == 0 && (v21[3] & 0x7FFFFFFF) == 0 )
      goto LABEL_31;
    v22 = v19 + n;
    ++v19;
  }
  v26 = (unsigned int)v2;
  if ( v16 < 0 )
    v26 = (unsigned int)((0xBF58476D1CE4E5B9LL * ((unsigned int)v41 | (unsigned __int64)(v2 << 32))) >> 31)
        ^ (484763065 * (_DWORD)v41);
  if ( (v17 & 0x80000000LL) != 0 )
    v26 = (unsigned int)((0xBF58476D1CE4E5B9LL * (v43 | (unsigned __int64)(v26 << 32))) >> 31) ^ (484763065 * v43);
  if ( v17 < 0 )
    LODWORD(v26) = ((0xBF58476D1CE4E5B9LL * ((unsigned int)v44 | (unsigned __int64)(v26 << 32))) >> 31)
                 ^ (484763065 * v44);
  v27 = v18 & v26;
  for ( ii = 1; ; ++ii )
  {
    v29 = &v53[5 * v27];
    if ( *v29 == (_DWORD)v2 )
    {
      v16 = ((unsigned __int64)v46 << 63)
          | ((unsigned __int64)(v41 & 0x7FFFFFFF) << 32) & 0x7FFFFFFFFFFFFFFFLL
          | (unsigned int)v16;
      if ( ((v29[1] ^ HIDWORD(v16)) & 0x7FFFFFFF) == 0 )
      {
        v17 = ((unsigned __int64)v42 << 31) | v43 & 0x7FFFFFFF | v17 & 0xFFFFFFFF00000000LL;
        if ( (((unsigned int)v17 ^ v29[2]) & 0x7FFFFFFF) == 0 )
        {
          v17 = ((unsigned __int64)v45 << 63)
              | ((unsigned __int64)(v44 & 0x7FFFFFFF) << 32) & 0x7FFFFFFFFFFFFFFFLL
              | (unsigned int)v17;
          if ( ((v29[3] ^ HIDWORD(v17)) & 0x7FFFFFFF) == 0 )
            break;
        }
      }
    }
    if ( *v29 == 0x7FFFFFFF && (v29[1] & 0x7FFFFFFF) == 0 && (v29[2] & 0x7FFFFFFF) == 0 )
    {
      v40 = v29[3] & 0x7FFFFFFF;
      if ( !v40 )
        goto LABEL_74;
    }
    v30 = ii + v27;
    v27 = v18 & v30;
  }
  v40 = v29[4];
LABEL_74:
  if ( v47 == v40 || !v47 )
    v23 = ((unsigned __int64)v46 << 63) | ((unsigned __int64)(v41 & 0x7FFFFFFF) << 32) | (unsigned int)v2;
  else
LABEL_31:
    v23 = 0;
  operator delete(v53, 20LL * v55, 4);
  return v23;
}
