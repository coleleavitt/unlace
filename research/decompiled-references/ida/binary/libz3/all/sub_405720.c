__int64 __fastcall sub_405720(__int64 a1, __int64 a2, __int16 a3, __int16 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r15
  _QWORD *v10; // rax
  _QWORD *v11; // rdx
  __int64 *v12; // rax
  __int64 *i; // rdx
  __int64 v14; // rbx
  __int64 v15; // rax
  unsigned int v16; // edx
  unsigned __int64 *v17; // rbp
  __int64 v18; // r14
  _QWORD *v19; // rax
  unsigned __int64 v20; // rdx
  unsigned __int64 *v21; // rcx
  unsigned int v22; // edx
  unsigned int v23; // ebp
  __int64 v24; // r12
  unsigned int v26; // r8d
  int v27; // eax
  unsigned int v28; // r11d
  size_t v29; // r14
  unsigned __int64 *v30; // rax
  int v31; // r8d
  __int64 v32; // r11
  unsigned __int64 *v33; // r9
  unsigned __int64 *v34; // rsi
  unsigned __int64 v35; // rdi
  unsigned __int64 v36; // rax
  __int64 v37; // rbp
  __int64 v38; // rax
  char *v39; // rdi
  __int64 v40; // rax
  __int64 v41; // rax
  int v42; // r8d
  __int64 v43; // rsi
  __int64 v44; // rdx
  char *v45; // rsi
  __int64 v46; // rdx
  __int64 v47; // r9
  char *v48; // r10
  unsigned __int64 v49; // rsi
  __int64 v50; // rdx
  unsigned __int64 *v51; // rdi
  unsigned __int64 *v52; // rdx
  char *v53; // r14
  char *v54; // rbx
  unsigned int v55; // r15d
  unsigned __int64 *v56; // r12
  char *v57; // rbp
  unsigned __int64 *v58; // r13
  char *v59; // rdi
  __int64 v60; // rax
  unsigned __int64 *v62; // [rsp+0h] [rbp-158h]
  unsigned __int64 v63; // [rsp+0h] [rbp-158h]
  void *v64; // [rsp+0h] [rbp-158h]
  unsigned __int64 *v65; // [rsp+0h] [rbp-158h]
  unsigned __int64 *v66; // [rsp+0h] [rbp-158h]
  int v67; // [rsp+10h] [rbp-148h]
  int v68; // [rsp+10h] [rbp-148h]
  int v69; // [rsp+10h] [rbp-148h]
  unsigned int v70; // [rsp+10h] [rbp-148h]
  unsigned __int64 *v71; // [rsp+18h] [rbp-140h]
  size_t v72; // [rsp+18h] [rbp-140h]
  unsigned __int64 *v73; // [rsp+18h] [rbp-140h]
  unsigned int v74; // [rsp+20h] [rbp-138h]
  __int64 v75; // [rsp+20h] [rbp-138h]
  int v76; // [rsp+20h] [rbp-138h]
  char *v77; // [rsp+28h] [rbp-130h]
  __int64 v78; // [rsp+28h] [rbp-130h]
  unsigned __int64 *v79; // [rsp+30h] [rbp-128h]
  __int64 v80; // [rsp+50h] [rbp-108h]
  unsigned __int64 v81; // [rsp+60h] [rbp-F8h]
  void *v82[2]; // [rsp+68h] [rbp-F0h] BYREF
  __int64 v83; // [rsp+78h] [rbp-E0h] BYREF
  _QWORD v84[3]; // [rsp+80h] [rbp-D8h] BYREF
  __int64 v85; // [rsp+98h] [rbp-C0h]

  v6 = a1;
  sub_405460((__int64)v84, a2, *(_QWORD *)a1, a3, a4, 0);
  sub_403D10(v84, a5, a6);
  v10 = sub_3FCC60(*(_QWORD **)(v6 + 8), *(_DWORD *)(v6 + 16), v85);
  v11 = v10;
  if ( v10 )
  {
    v12 = (__int64 *)v10[1];
    for ( i = &v12[*((unsigned int *)v11 + 4)]; i != v12; ++v12 )
    {
      v14 = *v12;
      if ( a2 == *(_QWORD *)(*v12 + 8) && (*(_BYTE *)(v14 + 78) & 4) == 0 )
      {
        sub_403E50(*v12, (__int64)v84);
        goto LABEL_14;
      }
    }
  }
  v14 = sub_186B270(0x98u);
  sub_405460(v14, a2, *(_QWORD *)a1, a3, a4, 1);
  sub_403D10((_QWORD *)v14, a5, a6);
  v15 = *(_QWORD *)(a1 + 32);
  ++*(_DWORD *)v14;
  if ( !v15 || (v16 = *(_DWORD *)(v15 - 4), v16 == *(_DWORD *)(v15 - 8)) )
  {
    sub_41E7C0(a1 + 32);
    v15 = *(_QWORD *)(a1 + 32);
    v16 = *(_DWORD *)(v15 - 4);
  }
  v17 = *(unsigned __int64 **)(a1 + 8);
  *(_QWORD *)(v15 + 8LL * v16) = v14;
  *(_DWORD *)(v15 - 4) = v16 + 1;
  v18 = *(unsigned int *)(a1 + 16);
  v19 = sub_3FCC60(v17, *(_DWORD *)(a1 + 16), *(_QWORD *)(v14 + 24));
  v21 = v19;
  if ( v19 )
  {
    v22 = *((_DWORD *)v19 + 4);
    v23 = *((_DWORD *)v19 + 5);
    if ( v22 >= v23 )
    {
      v62 = v19;
      v37 = 2 * v23;
      v38 = sub_186B270(8 * v37);
      v21 = v62;
      v24 = v38;
      v22 = *((_DWORD *)v62 + 4);
      v39 = (char *)v62[1];
      if ( v22 )
      {
        if ( v22 - 1 <= 2 || (char *)v38 == v39 + 8 )
        {
          v60 = 0;
          do
          {
            *(_QWORD *)(v24 + v60) = *(_QWORD *)&v39[v60];
            v60 += 8;
          }
          while ( 8LL * v22 != v60 );
        }
        else
        {
          v40 = 0;
          do
          {
            *(__m128i *)(v24 + v40) = _mm_loadu_si128((const __m128i *)&v39[v40]);
            v40 += 16;
          }
          while ( v40 != 16LL * (v22 >> 1) );
          if ( (v22 & 1) != 0 )
            *(_QWORD *)(v24 + 8LL * (v22 & 0xFFFFFFFE)) = *(_QWORD *)&v39[8 * (v22 & 0xFFFFFFFE)];
        }
      }
      if ( v39 != (char *)(v62 + 3) && v39 )
      {
        sub_186B220(v39);
        v21 = v62;
        v22 = *((_DWORD *)v62 + 4);
      }
      v21[1] = v24;
      *((_DWORD *)v21 + 5) = v37;
    }
    else
    {
      v24 = v19[1];
    }
    *(_QWORD *)(v24 + 8LL * v22) = v14;
    *((_DWORD *)v21 + 4) = v22 + 1;
    goto LABEL_14;
  }
  v26 = 2 * v18;
  v80 = v14;
  v82[1] = (void *)0x100000001LL;
  v27 = *(_DWORD *)(a1 + 20) + *(_DWORD *)(a1 + 24);
  v81 = v20;
  v82[0] = &v83;
  v83 = v14;
  if ( 3 * (int)v18 < (unsigned int)(4 * v27) )
  {
    v67 = 2 * v18;
    v29 = 32LL * v26;
    v63 = v26;
    v41 = sub_186B270(v29);
    v42 = v67;
    v17 = (unsigned __int64 *)v41;
    v21 = nullptr;
    v43 = v41 + 32 * v63;
    if ( v67 )
    {
      do
      {
        v44 = v41 + 24;
        *(_OWORD *)(v41 + 8) = 0;
        v41 += 32;
        *(_QWORD *)(v41 - 32) = 0;
        *(_QWORD *)(v41 - 8) = 0;
        *(_QWORD *)(v41 - 24) = v44;
        *(_DWORD *)(v41 - 12) = 1;
      }
      while ( v41 != v43 );
    }
    v45 = *(char **)(a1 + 8);
    v28 = v67 - 1;
    v46 = *(unsigned int *)(a1 + 16);
    v47 = (__int64)(v45 + 8);
    v48 = &v45[32 * v46];
    v30 = (unsigned __int64 *)((char *)v17 + v29);
    if ( v45 != v48 )
    {
      while ( 1 )
      {
        v49 = *(_QWORD *)(v47 - 8);
        if ( v49 > 1 )
        {
          v50 = 32LL * (*(_DWORD *)(v49 + 12) & v28);
          v51 = &v17[(unsigned __int64)v50 / 8];
          if ( v29 == v50 )
          {
LABEL_61:
            if ( v17 == v51 )
            {
LABEL_81:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v52 = v17;
            while ( *v52 )
            {
              v52 += 4;
              if ( v51 == v52 )
                goto LABEL_81;
            }
          }
          else
          {
            v52 = &v17[(unsigned __int64)v50 / 8];
            while ( *v52 )
            {
              v52 += 4;
              if ( v30 == v52 )
                goto LABEL_61;
            }
          }
          v79 = v21;
          v77 = v48;
          v74 = v28;
          v71 = v30;
          v68 = v42;
          *v52 = v49;
          v64 = (void *)v47;
          sub_3FCE10((__int64)(v52 + 1), v47);
          v47 = (__int64)v64;
          v42 = v68;
          v30 = v71;
          v28 = v74;
          v48 = v77;
          v21 = v79;
        }
        if ( v48 == (char *)(v47 + 24) )
          break;
        v47 += 32;
      }
      v46 = *(unsigned int *)(v6 + 16);
      v48 = *(char **)(v6 + 8);
    }
    if ( v48 )
    {
      if ( (_DWORD)v46 )
      {
        v72 = v29;
        v53 = v48;
        v75 = v14;
        v54 = v48;
        v78 = v6;
        v55 = v28;
        v56 = v17;
        v57 = &v48[32 * v46];
        v58 = v21;
        do
        {
          while ( 1 )
          {
            v59 = *((char **)v54 + 1);
            if ( v59 == v54 + 24 || !v59 )
              break;
            v54 += 32;
            v69 = v42;
            v65 = v30;
            sub_186B220(v59);
            v30 = v65;
            v42 = v69;
            if ( v57 == v54 )
              goto LABEL_73;
          }
          v54 += 32;
        }
        while ( v54 != v57 );
LABEL_73:
        v17 = v56;
        v21 = v58;
        v48 = v53;
        v28 = v55;
        v29 = v72;
        v14 = v75;
        v6 = v78;
      }
      v76 = v42;
      v73 = v30;
      v70 = v28;
      v66 = v21;
      sub_186B220(v48);
      v21 = v66;
      v28 = v70;
      v30 = v73;
      v42 = v76;
    }
    *(_QWORD *)(v6 + 8) = v17;
    v20 = v81;
    *(_DWORD *)(v6 + 16) = v42;
    *(_DWORD *)(v6 + 24) = 0;
  }
  else
  {
    v28 = v18 - 1;
    v29 = 32 * v18;
    v30 = (unsigned __int64 *)((char *)v17 + v29);
  }
  v31 = *(_DWORD *)(v20 + 12);
  v32 = 32LL * (v31 & v28);
  v33 = &v17[(unsigned __int64)v32 / 8];
  if ( v32 == v29 )
    goto LABEL_28;
  v34 = &v17[(unsigned __int64)v32 / 8];
  while ( 1 )
  {
    v35 = *v34;
    if ( *v34 <= 1 )
      break;
    if ( *(_DWORD *)(v35 + 12) == v31 && v35 == v20 )
    {
      *v34 = v20;
      sub_3FCE10((__int64)(v34 + 1), (__int64)v82);
      goto LABEL_45;
    }
LABEL_21:
    v34 += 4;
    if ( v34 == v30 )
    {
      while ( 1 )
      {
LABEL_28:
        if ( v33 == v17 )
        {
          sub_1872CE0("");
          sub_1873130(114, 405);
        }
        v36 = *v17;
        if ( *v17 > 1 )
        {
          if ( *(_DWORD *)(v36 + 12) == v31 && v36 == v20 )
          {
            *v17 = v20;
            sub_3FCE10((__int64)(v17 + 1), (__int64)v82);
            goto LABEL_45;
          }
        }
        else
        {
          if ( !v36 )
          {
            if ( v21 )
              goto LABEL_77;
            v21 = v17;
            goto LABEL_78;
          }
          v21 = v17;
        }
        v17 += 4;
      }
    }
  }
  if ( v35 )
  {
    v21 = v34;
    goto LABEL_21;
  }
  if ( v21 )
LABEL_77:
    --*(_DWORD *)(v6 + 24);
  else
    v21 = v34;
LABEL_78:
  *v21 = v20;
  sub_3FCE10((__int64)(v21 + 1), (__int64)v82);
  ++*(_DWORD *)(v6 + 20);
LABEL_45:
  if ( v82[0] != &v83 && v82[0] )
    sub_186B220(v82[0]);
LABEL_14:
  sub_41CB00(v84);
  return v14;
}

