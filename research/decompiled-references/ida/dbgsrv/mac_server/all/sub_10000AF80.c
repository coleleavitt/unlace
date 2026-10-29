/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10000AF80
// Address: 0x000000010000AF80

//----- (000000010000AF80) ----------------------------------------------------
__int64 __fastcall sub_10000AF80(__int64 a1)
{
  unsigned __int64 v2; // rax
  char *v3; // r12
  char *v4; // r15
  __int64 v5; // r13
  char *v6; // r14
  char *v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // r13
  __int64 v11; // rax
  char *v12; // r12
  size_t v13; // r15
  _QWORD *v14; // r14
  __int64 v15; // r15
  _QWORD *v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rcx
  unsigned __int64 v19; // r13
  char *v20; // r12
  void *v21; // r13
  unsigned __int64 v22; // r13
  _BYTE *v23; // rax
  char *v24; // rdx
  char *v25; // rcx
  char *v26; // rsi
  unsigned __int64 v27; // r15
  char *v28; // rdi
  char *v29; // r12
  char *v30; // rcx
  unsigned __int64 v31; // r13
  _BYTE *v32; // rax
  char *v33; // rcx
  unsigned __int64 v34; // r13
  char *v35; // rsi
  char *v36; // rdx
  unsigned __int64 v37; // r15
  char *v38; // rdi
  __int64 v39; // r15
  bool v40; // zf
  unsigned __int64 v41; // r14
  char *v42; // rax
  _QWORD *v43; // rax
  char *v44; // rdi
  __int128 v45; // xmm0
  _QWORD *v46; // rax
  __int128 v47; // xmm1
  __int64 v48; // r15
  unsigned __int64 v49; // r8
  __int64 v50; // r10
  __int128 v51; // xmm1
  char *v52; // rdi
  __int64 v54; // r15
  __int64 v55; // r13
  unsigned __int64 v56; // r8
  __int64 v57; // r10
  __int128 v58; // xmm1
  _QWORD *v59; // [rsp+8h] [rbp-78h]
  unsigned __int64 v60; // [rsp+8h] [rbp-78h]
  void *__p; // [rsp+10h] [rbp-70h]
  char *__pa; // [rsp+10h] [rbp-70h]
  char *__pb; // [rsp+10h] [rbp-70h]
  __int64 v64; // [rsp+18h] [rbp-68h]
  __int64 v65; // [rsp+18h] [rbp-68h]
  __int128 v66; // [rsp+20h] [rbp-60h] BYREF
  __int128 v67; // [rsp+30h] [rbp-50h]
  __int64 v68; // [rsp+40h] [rbp-40h]

  v2 = *(_QWORD *)(a1 + 32);
  if ( v2 >= 0x38 )
  {
    *(_QWORD *)(a1 + 32) = v2 - 56;
    v3 = *(char **)(a1 + 8);
    v4 = *(char **)(a1 + 16);
    v5 = *(_QWORD *)v3;
    v6 = v3 + 8;
    *(_QWORD *)(a1 + 8) = v3 + 8;
    if ( v4 != *(char **)(a1 + 24) )
      goto LABEL_50;
    v64 = v5;
    v7 = *(char **)a1;
    v8 = (__int64)&v6[-*(_QWORD *)a1];
    if ( (unsigned __int64)v6 > *(_QWORD *)a1 )
    {
LABEL_4:
      v9 = (__int64)(((unsigned __int64)((v8 >> 3) + 1) >> 63) + (v8 >> 3) + 1) >> 1;
      v10 = -v9;
      v11 = 8 * v9;
      v12 = &v6[-v11];
      v13 = v4 - v6;
      if ( v13 )
      {
        memmove(&v6[-v11], v6, v13);
        v6 = *(char **)(a1 + 8);
      }
      v4 = &v12[v13];
      *(_QWORD *)(a1 + 16) = v4;
      *(_QWORD *)(a1 + 8) = &v6[8 * v10];
      v5 = v64;
      goto LABEL_50;
    }
    __pa = *(char **)a1;
    v22 = 1;
    if ( v4 != v7 )
      v22 = (v4 - v7) >> 2;
    if ( !(v22 >> 61) )
    {
      v60 = v22 >> 2;
      v23 = operator new(8 * v22);
      v24 = &v23[8 * (v22 >> 2)];
      v25 = &v23[8 * v22];
      v26 = v24;
      v5 = v64;
      if ( v4 == v6 )
        goto LABEL_48;
      v26 = &v24[v4 - v6];
      v27 = v4 - v3 - 16;
      if ( v27 >= 0x88 )
      {
        if ( (unsigned __int64)(&v23[8 * v60] - v3 - 8) >= 0x20 )
        {
          v48 = (v27 >> 3) + 1;
          v49 = v48 & 0xFFFFFFFFFFFFFFFCLL;
          v28 = &v24[8 * (v48 & 0xFFFFFFFFFFFFFFFCLL)];
          v6 += 8 * (v48 & 0xFFFFFFFFFFFFFFFCLL);
          v50 = 0;
          do
          {
            v51 = *(_OWORD *)&v3[8 * v50 + 24];
            *(_OWORD *)&v23[8 * v60 + 8 * v50] = *(_OWORD *)&v3[8 * v50 + 8];
            *(_OWORD *)&v23[8 * v60 + 16 + 8 * v50] = v51;
            v50 += 4;
          }
          while ( v49 != v50 );
          if ( v48 == v49 )
          {
LABEL_48:
            *(_QWORD *)a1 = v23;
            *(_QWORD *)(a1 + 8) = v24;
            *(_QWORD *)(a1 + 16) = v26;
            *(_QWORD *)(a1 + 24) = v25;
            v4 = v26;
            v52 = __pa;
            if ( __pa )
            {
LABEL_49:
              operator delete(v52);
              v4 = *(char **)(a1 + 16);
            }
LABEL_50:
            *(_QWORD *)v4 = v5;
            *(_QWORD *)(a1 + 16) += 8LL;
            return __stack_chk_guard;
          }
        }
        else
        {
          v28 = &v23[8 * v60];
        }
      }
      else
      {
        v28 = &v23[8 * v60];
      }
      do
      {
        *(_QWORD *)v28 = *(_QWORD *)v6;
        v28 += 8;
        v6 += 8;
      }
      while ( v28 != v26 );
      goto LABEL_48;
    }
LABEL_60:
    sub_10000AF40();
  }
  v14 = *(_QWORD **)(a1 + 16);
  v15 = (__int64)v14 - *(_QWORD *)(a1 + 8);
  v16 = *(_QWORD **)(a1 + 24);
  v17 = (__int64)v16 - *(_QWORD *)a1;
  if ( v15 < (unsigned __int64)v17 )
  {
    if ( v16 != v14 )
    {
      *(_QWORD *)&v66 = operator new(0xFC0u);
      sub_10000AD60((char **)a1, &v66);
      return __stack_chk_guard;
    }
    *(_QWORD *)&v66 = operator new(0xFC0u);
    sub_10000AB90(a1, &v66);
    v29 = *(char **)(a1 + 8);
    v4 = *(char **)(a1 + 16);
    v5 = *(_QWORD *)v29;
    v6 = v29 + 8;
    *(_QWORD *)(a1 + 8) = v29 + 8;
    if ( v4 != *(char **)(a1 + 24) )
      goto LABEL_50;
    v64 = v5;
    v30 = *(char **)a1;
    v8 = (__int64)&v6[-*(_QWORD *)a1];
    if ( (unsigned __int64)v6 > *(_QWORD *)a1 )
      goto LABEL_4;
    __pb = *(char **)a1;
    v31 = 1;
    if ( v4 != v30 )
      v31 = (v4 - v30) >> 2;
    if ( v31 >> 61 )
      sub_10000AF40();
    v32 = operator new(8 * v31);
    v33 = &v32[8 * v31];
    v34 = v31 >> 2;
    v35 = &v32[8 * v34];
    v36 = v35;
    if ( v4 != v6 )
    {
      v36 = &v35[v4 - v6];
      v37 = v4 - v29 - 16;
      if ( v37 < 0x88 )
      {
        v38 = &v32[8 * v34];
        goto LABEL_57;
      }
      if ( (unsigned __int64)(&v32[8 * v34] - v29 - 8) < 0x20 )
      {
        v38 = &v32[8 * v34];
        do
        {
LABEL_57:
          *(_QWORD *)v38 = *(_QWORD *)v6;
          v38 += 8;
          v6 += 8;
        }
        while ( v38 != v36 );
        goto LABEL_58;
      }
      v54 = (v37 >> 3) + 1;
      v55 = 8 * v34;
      v56 = v54 & 0xFFFFFFFFFFFFFFFCLL;
      v38 = &v35[8 * (v54 & 0xFFFFFFFFFFFFFFFCLL)];
      v6 += 8 * (v54 & 0xFFFFFFFFFFFFFFFCLL);
      v57 = 0;
      do
      {
        v58 = *(_OWORD *)&v29[8 * v57 + 24];
        *(_OWORD *)&v32[8 * v57 + v55] = *(_OWORD *)&v29[8 * v57 + 8];
        *(_OWORD *)&v32[8 * v57 + 16 + v55] = v58;
        v57 += 4;
      }
      while ( v56 != v57 );
      if ( v54 != v56 )
        goto LABEL_57;
    }
LABEL_58:
    *(_QWORD *)a1 = v32;
    *(_QWORD *)(a1 + 8) = v35;
    *(_QWORD *)(a1 + 16) = v36;
    *(_QWORD *)(a1 + 24) = v33;
    v4 = v36;
    v52 = __pb;
    v5 = v64;
    if ( !__pb )
      goto LABEL_50;
    goto LABEL_49;
  }
  v59 = *(_QWORD **)(a1 + 8);
  v18 = v17 >> 2;
  v19 = 1;
  if ( v16 != *(_QWORD **)a1 )
    v19 = v18;
  v68 = a1 + 24;
  if ( v19 >> 61 )
    goto LABEL_60;
  v65 = 8 * v19;
  *(_QWORD *)&v66 = operator new(8 * v19);
  v20 = (char *)(v66 + v15);
  *(_QWORD *)&v67 = v66 + v15;
  *((_QWORD *)&v66 + 1) = v66 + v15;
  __p = (void *)v66;
  *((_QWORD *)&v67 + 1) = v66 + 8 * v19;
  v21 = operator new(0xFC0u);
  if ( v15 == v65 )
  {
    if ( (unsigned __int64)v20 <= (unsigned __int64)v66 )
    {
      v39 = v15 >> 2;
      v40 = v14 == v59;
      v41 = 1;
      if ( !v40 )
        v41 = v39;
      if ( v41 > 0x1FFFFFFFFFFFFFFFLL )
        sub_10000AF40();
      v42 = (char *)operator new(8 * v41);
      v20 = &v42[2 * (v41 & 0xFFFFFFFFFFFFFFFCLL)];
      *(_QWORD *)&v66 = v42;
      *((_QWORD *)&v66 + 1) = v20;
      *((_QWORD *)&v67 + 1) = &v42[8 * v41];
      operator delete(__p);
      v14 = *(_QWORD **)(a1 + 16);
    }
    else
    {
      v20 -= (4 * ((v15 >> 3) + ((unsigned __int64)((v15 >> 3) + 1) >> 63) + 1)) & 0xFFFFFFFFFFFFFFF8LL;
      *((_QWORD *)&v66 + 1) = v20;
    }
  }
  *(_QWORD *)v20 = v21;
  *(_QWORD *)&v67 = v20 + 8;
  while ( 1 )
  {
    v43 = *(_QWORD **)(a1 + 8);
    if ( v14 == v43 )
      break;
    sub_10000B530((__int64)&v66, --v14);
  }
  v44 = *(char **)a1;
  v45 = v66;
  *(_QWORD *)&v66 = *(_QWORD *)a1;
  *(_OWORD *)a1 = v45;
  *((_QWORD *)&v66 + 1) = v43;
  v46 = *(_QWORD **)(a1 + 16);
  v47 = *(_OWORD *)(a1 + 16);
  *(_OWORD *)(a1 + 16) = v67;
  v67 = v47;
  if ( v14 != v46 )
  {
    do
      --v46;
    while ( v14 != v46 );
    *(_QWORD *)&v67 = v46;
  }
  if ( v44 )
    operator delete(v44);
  return __stack_chk_guard;
}
