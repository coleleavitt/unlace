__int64 __fastcall sub_21321E0(__int64 a1, __int64 a2, char a3)
{
  unsigned int v3; // ebp
  __int64 v5; // rbx
  int *v6; // rax
  __int64 v7; // r13
  __int64 v8; // r14
  int v9; // eax
  int v10; // r12d
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdi
  __m128i v17; // xmm1
  __int64 v18; // rdx
  const char *v19; // rax
  char v20; // al
  unsigned __int64 v21; // rdx
  int v22; // eax
  __int64 v23; // rax
  __int64 v24; // rdx
  char *v25; // r13
  __int64 v26; // rbp
  __int64 v27; // rax
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rcx
  __m128i v31; // xmm3
  __int64 v32; // rdx
  __int64 v33; // rcx
  char *v34; // r14
  __int64 v35; // r12
  __int64 v36; // r8
  unsigned __int64 v37; // rdi
  unsigned __int64 v38; // r15
  __int64 v39; // rax
  __int64 v40; // r15
  __int64 v41; // rax
  __int64 v42; // r12
  char *v43; // rbp
  __m128i v44; // xmm2
  unsigned int v45; // eax
  char *v46; // r12
  void *v47; // rdi
  __int64 v48; // [rsp+8h] [rbp-80h]
  unsigned __int64 v49; // [rsp+10h] [rbp-78h] BYREF
  __int64 v50; // [rsp+18h] [rbp-70h]
  const char *v51; // [rsp+20h] [rbp-68h] BYREF
  __int16 v52; // [rsp+40h] [rbp-48h]

  v5 = a2;
  v6 = *(int **)(a1 + 48);
  if ( a3 )
  {
    if ( *v6 == 9 )
      return 0;
    v23 = sub_2131D40(a1);
    v25 = *(char **)(a2 + 8);
    v26 = v23;
    if ( v25 != *(char **)(a2 + 16) )
    {
      *(_DWORD *)v25 = 3;
      v3 = 0;
      *((_QWORD *)v25 + 1) = v23;
      *((_QWORD *)v25 + 2) = v24;
      *((_DWORD *)v25 + 8) = 64;
      *((_QWORD *)v25 + 3) = 0;
      *(_QWORD *)(a2 + 8) = v25 + 40;
      return v3;
    }
    v34 = *(char **)a2;
    v35 = (__int64)&v25[-*(_QWORD *)a2];
    v36 = v35 >> 3;
    if ( 0xCCCCCCCCCCCCCCCDLL * (v35 >> 3) )
    {
      v37 = 0x999999999999999ALL * v36;
      v38 = -16;
      if ( 0xCCCCCCCCCCCCCCCDLL * v36 <= 0x999999999999999ALL * v36 && v37 <= 0x666666666666666LL )
      {
        if ( !v37 )
        {
          v49 = 40;
          v40 = 0;
          v48 = 0;
          goto LABEL_42;
        }
        v38 = 16 * v36;
      }
    }
    else
    {
      v38 = 40;
    }
    v50 = v24;
    v39 = operator new(v38);
    v24 = v50;
    v48 = v39;
    v40 = v39 + v38;
    v49 = v39 + 40;
LABEL_42:
    v41 = v48 + v35;
    *(_DWORD *)v41 = 3;
    *(_QWORD *)(v41 + 8) = v26;
    *(_QWORD *)(v41 + 16) = v24;
    *(_DWORD *)(v41 + 32) = 64;
    *(_QWORD *)(v41 + 24) = 0;
    if ( v25 != v34 )
    {
      v42 = v48;
      v43 = v34;
      do
      {
        v44 = _mm_loadu_si128((const __m128i *)(v43 + 8));
        *(_DWORD *)v42 = *(_DWORD *)v43;
        v45 = *((_DWORD *)v43 + 8);
        *(__m128i *)(v42 + 8) = v44;
        *(_DWORD *)(v42 + 32) = v45;
        if ( v45 <= 0x40 )
          *(_QWORD *)(v42 + 24) = *((_QWORD *)v43 + 3);
        else
          sub_2205510(v42 + 24);
        v43 += 40;
        v42 += 40;
      }
      while ( v25 != v43 );
      v46 = v34;
      v49 = v48 + ((v25 - 40 - v34) & 0xFFFFFFFFFFFFFFF8LL) + 80;
      do
      {
        if ( *((_DWORD *)v46 + 8) > 0x40u )
        {
          v47 = *((void **)v46 + 3);
          if ( v47 )
            operator delete[](v47);
        }
        v46 += 40;
      }
      while ( v25 != v46 );
    }
    if ( v34 )
      operator delete(v34);
    *(_QWORD *)(a2 + 16) = v40;
    v3 = 0;
    *(__m128 *)a2 = _mm_loadh_ps((const double *)&v49);
    return v3;
  }
  v7 = a1 + 48;
  v8 = 0x3F9FF300F000LL;
  *(_BYTE *)(a1 + 192) = *(_BYTE *)(a1 + 860);
  v9 = *v6;
  v10 = 0;
  LOBYTE(v3) = v9 == 0 || v9 == 28;
  if ( (_BYTE)v3 )
  {
LABEL_16:
    v19 = "unexpected token in macro instantiation";
LABEL_17:
    v51 = v19;
    v52 = 259;
    v3 = sub_21543E0(a1, &v51, 0, 0);
  }
  else
  {
    while ( v10 )
    {
      if ( v9 == 9 )
      {
        v19 = "unbalanced parentheses in macro argument";
        goto LABEL_17;
      }
      if ( v9 == 17 )
LABEL_24:
        ++v10;
      else
        v10 -= v9 == 18;
LABEL_10:
      v12 = sub_2153C00(a1);
      v16 = *(_QWORD *)(v5 + 8);
      if ( v16 == *(_QWORD *)(v5 + 16) )
      {
        a2 = *(_QWORD *)(v5 + 8);
        sub_212ECB0(v5, (char *)a2, v12);
      }
      else
      {
        v17 = _mm_loadu_si128((const __m128i *)(v12 + 8));
        *(_DWORD *)v16 = *(_DWORD *)v12;
        v18 = *(unsigned int *)(v12 + 32);
        *(__m128i *)(v16 + 8) = v17;
        *(_DWORD *)(v16 + 32) = v18;
        if ( (unsigned int)v18 > 0x40 )
        {
          a2 = v12 + 24;
          sub_2205510(v16 + 24);
          v16 = *(_QWORD *)(v5 + 8);
        }
        else
        {
          *(_QWORD *)(v16 + 24) = *(_QWORD *)(v12 + 24);
        }
        *(_QWORD *)(v5 + 8) = v16 + 40;
      }
      sub_21318A0(v7, a2, v18, v13, v14, v15);
      v9 = **(_DWORD **)(a1 + 48);
      if ( v9 == 28 || !v9 )
        goto LABEL_16;
    }
    while ( v9 != 26 )
    {
      a2 = 11;
      v20 = sub_2154640(a1, 11);
      if ( *(_BYTE *)(a1 + 860)
        || (v21 = **(unsigned int **)(a1 + 48), (unsigned int)v21 > 0x2D)
        || !_bittest64(&v8, v21) )
      {
        if ( v20 )
          break;
        v22 = **(_DWORD **)(a1 + 48);
        if ( v22 == 9 )
          break;
        if ( v22 != 17 )
          goto LABEL_10;
        goto LABEL_24;
      }
      v27 = sub_2153C00(a1);
      v30 = *(_QWORD *)(v5 + 8);
      if ( v30 == *(_QWORD *)(v5 + 16) )
      {
        a2 = *(_QWORD *)(v5 + 8);
        sub_212ECB0(v5, (char *)a2, v27);
      }
      else
      {
        v31 = _mm_loadu_si128((const __m128i *)(v27 + 8));
        *(_DWORD *)v30 = *(_DWORD *)v27;
        v32 = *(unsigned int *)(v27 + 32);
        *(__m128i *)(v30 + 8) = v31;
        *(_DWORD *)(v30 + 32) = v32;
        if ( (unsigned int)v32 > 0x40 )
        {
          a2 = v27 + 24;
          sub_2205510(v30 + 24);
          v30 = *(_QWORD *)(v5 + 8);
        }
        else
        {
          *(_QWORD *)(v30 + 24) = *(_QWORD *)(v27 + 24);
        }
        v33 = v30 + 40;
        *(_QWORD *)(v5 + 8) = v33;
      }
      sub_21318A0(v7, a2, v32, v33, v28, v29);
      sub_2154640(a1, 11);
      v9 = **(_DWORD **)(a1 + 48);
      if ( !v9 || v9 == 28 )
        goto LABEL_16;
    }
  }
  *(_BYTE *)(a1 + 192) = 1;
  return v3;
}
