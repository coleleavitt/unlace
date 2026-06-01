void __fastcall sub_975EB0(_QWORD *a1, __int64 a2, unsigned int a3, __int64 a4, int a5, __int64 a6)
{
  unsigned int v6; // r15d
  __int64 v7; // r14
  __int64 v10; // rax
  bool v11; // zf
  unsigned __int64 v12; // rcx
  __int64 v13; // rax
  int v14; // esi
  int v15; // edx
  unsigned __int64 v16; // rdx
  __int64 v17; // r13
  __int64 v18; // r8
  __int64 v19; // r12
  __int64 v20; // rax
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rax
  __int64 v23; // rsi
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  void **v27; // rbp
  __int64 v28; // rax
  unsigned __int64 *v29; // rax
  __int64 v30; // r12
  __int64 v31; // r13
  __int16 v32; // ax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rcx
  __int64 v38; // rdi
  _QWORD *v39; // rcx
  unsigned __int64 v40; // rdx
  unsigned __int64 v41; // r13
  __m128 *v42; // rdx
  __int64 v43; // rax
  unsigned __int64 v44; // r13
  __int64 v45; // rax
  unsigned __int64 *v46; // rax
  __int64 v47; // rax
  unsigned __int64 *v48; // rax
  __int64 *v49; // rax
  __int64 v50; // rcx
  __int64 v51; // rdi
  __int64 v52; // rdi
  __int64 v53; // rdi
  _QWORD *v55; // [rsp+10h] [rbp-1E8h] BYREF
  void **v56; // [rsp+18h] [rbp-1E0h]
  void **v57; // [rsp+20h] [rbp-1D8h]
  __int64 v58; // [rsp+28h] [rbp-1D0h]
  void **v59; // [rsp+30h] [rbp-1C8h]
  __int64 v60; // [rsp+38h] [rbp-1C0h]
  void *v61[2]; // [rsp+40h] [rbp-1B8h] BYREF
  _BYTE v62[64]; // [rsp+50h] [rbp-1A8h] BYREF
  void *v63; // [rsp+90h] [rbp-168h] BYREF
  __int64 v64; // [rsp+98h] [rbp-160h]
  char v65; // [rsp+A0h] [rbp-158h] BYREF
  void *ptr; // [rsp+F0h] [rbp-108h]
  __int64 v67; // [rsp+F8h] [rbp-100h]
  _BYTE v68[248]; // [rsp+100h] [rbp-F8h] BYREF

  v6 = a3;
  v7 = a2;
  v10 = a1[41];
  v11 = *(_BYTE *)(v10 + 59) == 0;
  v58 = a6;
  if ( v11 && !*(_BYTE *)(v10 + 60) || a2 == a4 && a3 == a5 )
    return;
  v12 = a3;
  v59 = &v63;
  v63 = &v65;
  v64 = 0xA00000000LL;
  if ( a2 == a4 )
  {
    v15 = 0;
  }
  else
  {
    v13 = a2;
    v14 = 0;
    do
    {
      v15 = v14 + v12;
      v12 = *(unsigned int *)(v13 + 40);
      v13 = *(_QWORD *)(v13 + 32);
      v14 = v15;
    }
    while ( v13 != a4 );
  }
  v16 = (int)v12 + v15 - a5;
  if ( v16 > 0xA )
    sub_22134E0(v59, v59 + 2, v16, 8);
  v56 = v59 + 2;
LABEL_14:
  v18 = v6 - 1;
  LOBYTE(v55) = v7 == a4;
  v17 = 8 * v18;
  while ( a5 != v6 || !(_BYTE)v55 )
  {
    v19 = *(_QWORD *)(*(_QWORD *)(v7 + 8) + v17);
    if ( !sub_9750B0(a1, v19) )
      goto LABEL_18;
    if ( (*(_BYTE *)(v19 + 29) & 1) != 0 )
    {
      v28 = sub_B68690(v19);
      v16 = *(_QWORD *)v28;
      v12 = *(_QWORD *)v28 + 8LL * *(unsigned int *)(v28 + 8);
      if ( *(_QWORD *)v28 < v12 )
      {
        v29 = *(unsigned __int64 **)v28;
        while ( 1 )
        {
          v16 = *v29;
          if ( *(_WORD *)(*v29 + 36) == 174 )
            break;
          if ( (unsigned __int64 *)v12 == ++v29 )
            goto LABEL_12;
        }
        if ( (unsigned __int64 *)v12 == v29 )
          goto LABEL_12;
        goto LABEL_18;
      }
      if ( v16 != v12 )
      {
        if ( *(_WORD *)(*(_QWORD *)v12 + 36LL) != 174 )
        {
          v49 = (__int64 *)(v12 + 8);
          do
          {
            v12 = (unsigned __int64)v49;
            if ( (__int64 *)v16 == v49 )
              goto LABEL_12;
            v50 = *v49++;
          }
          while ( *(_WORD *)(v50 + 36) != 174 );
        }
LABEL_18:
        v20 = (unsigned int)v64;
        v12 = HIDWORD(v64);
        v21 = (unsigned int)v64 + 1LL;
        if ( v21 > HIDWORD(v64) )
        {
          sub_22134E0(v59, v56, v21, 8);
          v20 = (unsigned int)v64;
        }
        v16 = (unsigned __int64)v63;
        *((_QWORD *)v63 + v20) = v19;
        LODWORD(v64) = v64 + 1;
      }
    }
LABEL_12:
    v17 -= 8;
    if ( !--v6 )
    {
      v6 = *(_DWORD *)(v7 + 40);
      v7 = *(_QWORD *)(v7 + 32);
      goto LABEL_14;
    }
  }
  v23 = (__int64)v63;
  v27 = (void **)((char *)v63 + 8 * (unsigned int)v64);
  v56 = (void **)v63;
  if ( v63 == v27 )
    goto LABEL_36;
  v57 = v61;
  while ( 2 )
  {
    v30 = (__int64)*(v27 - 1);
    if ( !*(_BYTE *)(a1[41] + 59LL) )
      goto LABEL_29;
    v23 = *(_QWORD *)(v30 + 48);
    if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v23 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                      & 0xFFFFFFFFFFFFFFF0LL)
                                          + 16LL)
       - 43 <= 1 )
    {
      v22 = sub_B4F900(*(v27 - 1));
      do
      {
        while ( 1 )
        {
          while ( 1 )
          {
            v31 = sub_BD7CB0(v22);
            v32 = *(_WORD *)v31 & 0x1FF;
            if ( v32 != 60 )
              break;
            v22 = *(_QWORD *)(v31 + 16);
          }
          if ( v32 != 48 )
            break;
          v33 = *(_QWORD *)(v31 + 16);
          if ( (v33 & 4) != 0 )
            v22 = *(_QWORD *)((v33 & 0xFFFFFFFFFFFFFFF8LL) + 40);
          else
            v22 = v33 & 0xFFFFFFFFFFFFFFF8LL;
        }
        v61[1] = (void *)0x800000000LL;
        ptr = v68;
        v55 = v68;
        v61[0] = v62;
        v67 = 0x800000000LL;
        v22 = sub_BD34A0(v31, v57);
        if ( ptr != v55 )
        {
          v55 = (_QWORD *)v22;
          free(ptr);
          v22 = (unsigned __int64)v55;
        }
        if ( v61[0] != v62 )
        {
          v55 = (_QWORD *)v22;
          free(v61[0]);
          v22 = (unsigned __int64)v55;
        }
      }
      while ( v31 != v22 );
      v23 = *(_QWORD *)(v31 + 8);
    }
    v24 = sub_A4D710(*a1, v23);
    v25 = sub_F3F530(*(_QWORD *)(v24 & 0xFFFFFFFFFFFFFFF0LL));
    if ( !v25
      || (v23 = *(_QWORD *)(v25 + 104),
          v55 = (_QWORD *)v25,
          sub_6E4DB0((__int64 *)(v23 + 96), v23, v16, v12, v18, a6),
          v16 = (unsigned __int64)v55,
          (*(_BYTE *)(v55[16] + 10LL) & 8) == 0) )
    {
LABEL_29:
      v26 = a1[2];
      if ( !v26 )
      {
        v26 = sub_975DA0((__int64)a1, v23, v16, v12, v18, a6);
        a1[2] = v26;
      }
      v16 = a1[41];
      if ( !*(_BYTE *)(v16 + 60) )
        goto LABEL_32;
LABEL_58:
      v23 = v30 & 0xFFFFFFFFFFFFFFFCLL;
      v55 = (_QWORD *)(v30 & 0xFFFFFFFFFFFFFFFCLL);
      v41 = v58 & 0xFFFFFFFFFFFFFFFCLL | 1;
      v42 = *(__m128 **)(v26 + 8);
      if ( (unsigned __int64)v42 >= *(_QWORD *)(v26 + 16) )
      {
        v51 = a1[1];
        v60 = v26;
        v23 = v51 + 32;
        sub_975850((const __m128i **)v26, (_QWORD *)(v51 + 32), 1u, v12, v18, a6);
        v26 = v60;
        v42 = *(__m128 **)(v60 + 8);
      }
      v55 = (_QWORD *)v41;
      *v42 = _mm_loadh_ps((const double *)&v55);
      v16 = a1[41];
      *(_QWORD *)(v26 + 8) += 16LL;
      if ( *(_BYTE *)(v16 + 59) )
        goto LABEL_61;
LABEL_33:
      if ( (*(_BYTE *)(v30 + 29) & 1) == 0 )
        goto LABEL_34;
LABEL_65:
      v45 = sub_B68690(v30);
      v16 = *(_QWORD *)v45;
      v12 = *(_QWORD *)v45 + 8LL * *(unsigned int *)(v45 + 8);
      if ( *(_QWORD *)v45 >= v12 )
      {
        if ( v16 == v12 )
          goto LABEL_34;
        if ( *(_WORD *)(*(_QWORD *)v12 + 36LL) != 174 )
        {
          v48 = (unsigned __int64 *)(v12 + 8);
          do
          {
            v12 = (unsigned __int64)v48;
            if ( (unsigned __int64 *)v16 == v48 )
              goto LABEL_34;
            v12 = *v48++;
          }
          while ( *(_WORD *)(v12 + 36) != 174 );
        }
      }
      else
      {
        v46 = *(unsigned __int64 **)v45;
        while ( 1 )
        {
          v16 = *v46;
          if ( *(_WORD *)(*v46 + 36) == 174 )
            break;
          if ( (unsigned __int64 *)v12 == ++v46 )
            goto LABEL_34;
        }
        if ( (unsigned __int64 *)v12 == v46 )
          goto LABEL_34;
      }
      v47 = a1[2];
      v16 = *(_QWORD *)(v47 + 8);
      if ( v16 >= *(_QWORD *)(v47 + 16) )
      {
        v53 = a1[1];
        v55 = (_QWORD *)a1[2];
        v23 = v53 + 32;
        sub_975850((const __m128i **)v47, (_QWORD *)(v53 + 32), 1u, v12, v18, a6);
        v47 = (__int64)v55;
        v16 = v55[1];
      }
      *(_QWORD *)(v16 + 8) = 3;
      *(_QWORD *)v16 = v30 & 0xFFFFFFFFFFFFFFFCLL | 2;
      *(_QWORD *)(v47 + 8) += 16LL;
      goto LABEL_34;
    }
    v34 = sub_975DE0((__int64)a1, v23, (__int64)v55, v12, v18, a6);
    *(_BYTE *)(v34 + 104) |= 1u;
    v37 = a1[1];
    v38 = a1[3];
    v55 = (_QWORD *)v34;
    v23 = *(_QWORD *)(v37 + 8);
    v39 = (_QWORD *)(v37 + 32);
    v40 = v38 & 0xFFFFFFFFFFFFFFF9LL;
    if ( v38 == v23 )
      v40 = 4;
    sub_975B20(v34, v23, v40, v39, v35, v36);
    v16 = a1[41];
    v26 = (__int64)v55;
    v11 = *(_BYTE *)(v16 + 60) == 0;
    a1[2] = v55;
    if ( !v11 )
      goto LABEL_58;
LABEL_32:
    if ( !*(_BYTE *)(v16 + 59) )
      goto LABEL_33;
LABEL_61:
    v23 = v30;
    if ( sub_9750B0(a1, v30) )
      goto LABEL_33;
    v43 = a1[2];
    v55 = (_QWORD *)(v30 & 0xFFFFFFFFFFFFFFFCLL | 1);
    v44 = v58 & 0xFFFFFFFFFFFFFFFCLL | 2;
    v16 = *(_QWORD *)(v43 + 8);
    if ( v16 >= *(_QWORD *)(v43 + 16) )
    {
      v52 = a1[1];
      v60 = v43;
      v23 = v52 + 32;
      sub_975850((const __m128i **)v43, (_QWORD *)(v52 + 32), 1u, v12, v18, a6);
      v43 = v60;
      v16 = *(_QWORD *)(v60 + 8);
    }
    v55 = (_QWORD *)v44;
    *(__m128 *)v16 = _mm_loadh_ps((const double *)&v55);
    *(_QWORD *)(v43 + 8) += 16LL;
    if ( (*(_BYTE *)(v30 + 29) & 1) != 0 )
      goto LABEL_65;
LABEL_34:
    if ( v56 != --v27 )
      continue;
    break;
  }
  v27 = (void **)v63;
LABEL_36:
  if ( v27 != v59 + 2 )
    free(v27);
}

