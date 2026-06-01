__int64 __fastcall sub_5642D0(
        __int64 a1,
        __int64 a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9)
{
  char **exception; // rbx
  __int64 v10; // r13
  __int64 v11; // rbp
  __int64 *v12; // rax
  __int64 *v13; // r15
  __int64 v14; // rdx
  __int64 v15; // r14
  __int64 v16; // r8
  unsigned int v17; // eax
  __int64 v18; // rbx
  unsigned int v19; // r12d
  unsigned int v20; // edx
  unsigned int *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r12
  __int64 *v24; // rbx
  unsigned __int64 v25; // rdx
  __int64 *v26; // rbp
  __int64 v27; // r14
  __int64 v28; // r12
  __int64 *i; // r14
  __int64 v30; // r13
  __int64 *v31; // rbx
  __int64 *v32; // r12
  __int64 *v33; // r14
  __int64 v34; // r12
  __int64 v35; // rdx
  double v36; // xmm4_8
  double v37; // xmm5_8
  __int64 v38; // rax
  __int64 v39; // r14
  __int64 v40; // rbx
  __int64 v41; // rsi
  __int64 v43; // rax
  __int64 *v44; // rbp
  __int64 v45; // r14
  __int64 v46; // r12
  __int64 *j; // r14
  __int64 v48; // r13
  __int64 *v49; // rbx
  __int64 *v50; // r12
  __int64 v51; // r15
  __int64 *v52; // r14
  __int64 *v53; // rcx
  __int64 v54; // r12
  int v55; // eax
  unsigned __int64 v56; // rsi
  unsigned __int64 v57; // rdx
  unsigned int v58; // edi
  int v59; // r10d
  int v60; // r8d
  __int64 v61; // rax
  __int64 v62; // r11
  __int64 v63; // rax
  int *v64; // r9
  unsigned int v65; // r9d
  unsigned int v66; // r10d
  __int64 v67; // rax
  __int64 v68; // [rsp+8h] [rbp-80h]
  __int64 *v69; // [rsp+8h] [rbp-80h]
  __int64 v70; // [rsp+8h] [rbp-80h]
  __int64 *v71; // [rsp+8h] [rbp-80h]
  int v72; // [rsp+8h] [rbp-80h]
  __int64 v73[11]; // [rsp+30h] [rbp-58h] BYREF

  v10 = a2;
  v11 = a1;
  v12 = *(__int64 **)(a2 + 24);
  v13 = *(__int64 **)(a1 + 48);
  *(_BYTE *)(a1 + 72) = 0;
  if ( v12 && (v14 = *((unsigned int *)v12 - 1), (_DWORD)v14) )
  {
    v15 = *v12;
    v16 = 8 * v14;
    if ( v13 )
    {
      v17 = *((_DWORD *)v13 - 1);
      v18 = 0;
      if ( v17 != *((_DWORD *)v13 - 2) )
        goto LABEL_38;
      while ( 1 )
      {
        v19 = (3 * v17 + 1) >> 1;
        v20 = 8 * v19 + 8;
        if ( 8 * v17 + 8 >= v20 || v17 >= v19 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v73, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v73);
          sub_233E40((__int64)v73);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v68 = v16;
        v18 += 8;
        v21 = (unsigned int *)sub_186B300(v13 - 1, v20);
        v16 = v68;
        v22 = v21[1];
        v13 = (__int64 *)(v21 + 2);
        *v21 = v19;
        *(_QWORD *)(a1 + 48) = v21 + 2;
        *(_QWORD *)&v21[2 * v22 + 2] = v15;
        v21[1] = v22 + 1;
        if ( v68 == v18 )
          break;
LABEL_37:
        while ( 1 )
        {
          v15 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + v18);
          v17 = *((_DWORD *)v13 - 1);
          if ( v17 == *((_DWORD *)v13 - 2) )
            break;
LABEL_38:
          v18 += 8;
          v13[v17] = v15;
          *((_DWORD *)v13 - 1) = v17 + 1;
          if ( v16 == v18 )
            goto LABEL_8;
        }
      }
    }
    else
    {
      v70 = 8 * v14;
      v43 = sub_186B270(0x18u);
      v16 = v70;
      v18 = 8;
      v13 = (__int64 *)(v43 + 8);
      *(_QWORD *)v43 = 2;
      *(_QWORD *)(a1 + 48) = v43 + 8;
      *(_QWORD *)(v43 + 8) = v15;
      *(_DWORD *)(v43 + 4) = 1;
      if ( v70 != 8 )
        goto LABEL_37;
    }
  }
  else if ( !v13 )
  {
    goto LABEL_28;
  }
LABEL_8:
  v23 = *((unsigned int *)v13 - 1);
  v69 = &v13[v23];
  if ( &v13[v23] == v13 )
    goto LABEL_28;
  v24 = v13 + 1;
  _BitScanReverse64(&v25, (v23 * 8) >> 3);
  sub_564980(v13, &v13[v23], 2LL * (int)v25, sub_5616F0);
  if ( (unsigned __int64)v23 <= 16 )
  {
    if ( v23 != 1 )
    {
      v26 = &v13[v23];
      do
      {
        while ( 1 )
        {
          v27 = *v13;
          v28 = *v24;
          if ( sub_5616F0(*v24, *v13) )
            break;
          for ( i = v24; ; --i )
          {
            v30 = *(i - 1);
            if ( !sub_5616F0(v28, v30) )
              break;
            *i = v30;
          }
          ++v24;
          *i = v28;
          if ( v26 == v24 )
            goto LABEL_20;
        }
        if ( (char *)v24 - (char *)v13 <= 8 )
        {
          if ( (char *)v24 - (char *)v13 == 8 )
            *v24 = v27;
        }
        else
        {
          memmove(v13 + 1, v13, (char *)v24 - (char *)v13);
        }
        ++v24;
        *v13 = v28;
      }
      while ( v26 != v24 );
LABEL_20:
      v11 = a1;
      v10 = a2;
    }
    goto LABEL_21;
  }
  v44 = v13 + 16;
  do
  {
    while ( 1 )
    {
      v45 = *v13;
      v46 = *v24;
      if ( sub_5616F0(*v24, *v13) )
        break;
      for ( j = v24; ; --j )
      {
        v48 = *(j - 1);
        if ( !sub_5616F0(v46, v48) )
          break;
        *j = v48;
      }
      ++v24;
      *j = v46;
      if ( v44 == v24 )
        goto LABEL_49;
    }
    if ( (char *)v24 - (char *)v13 <= 8 )
    {
      if ( (char *)v24 - (char *)v13 == 8 )
        *v24 = v45;
    }
    else
    {
      memmove(v13 + 1, v13, (char *)v24 - (char *)v13);
    }
    ++v24;
    *v13 = v46;
  }
  while ( v44 != v24 );
LABEL_49:
  v49 = v13 + 16;
  v50 = v69;
  v11 = a1;
  v10 = a2;
  do
  {
    v51 = *v49;
    v52 = v49;
    v53 = v50;
    while ( 1 )
    {
      v54 = *(v52 - 1);
      v71 = v53;
      v55 = sub_561580(v51, v54);
      v53 = v71;
      if ( !v55 )
        break;
      if ( v55 != 1 )
        goto LABEL_61;
LABEL_51:
      *v52-- = v54;
    }
    if ( *(int *)(v51 + 64) < 0 )
      goto LABEL_61;
    v56 = *(_QWORD *)(v54 + 40);
    v57 = *(_QWORD *)(v51 + 40);
    v58 = -1;
    v59 = *(_DWORD *)(v51 + 64);
    v60 = 0x7FFFFFFF;
    while ( 2 )
    {
      v61 = *(unsigned int *)(v57 + 24);
      if ( !(_DWORD)v61 )
        goto LABEL_66;
      v72 = v59;
      v62 = 8 * v61 + 32;
      v63 = 32;
      do
      {
        while ( 1 )
        {
          v64 = *(int **)(v57 + v63);
          if ( *((_WORD *)v64 + 2) != 1 )
            break;
LABEL_64:
          v63 += 8;
          if ( v62 == v63 )
            goto LABEL_65;
        }
        if ( !v60 )
        {
          v60 = -1;
          goto LABEL_64;
        }
        v65 = *v64;
        v66 = **(_DWORD **)(v56 + v63);
        if ( v66 < v65 )
          goto LABEL_51;
        if ( v65 != v66 )
          goto LABEL_61;
        v63 += 8;
        --v60;
      }
      while ( v62 != v63 );
LABEL_65:
      v59 = v72;
LABEL_66:
      if ( v59 != ++v58 )
      {
        v67 = v58 + 10LL;
        v56 = *(_QWORD *)(v54 + 8 * v67) & 0xFFFFFFFFFFFFFFF8LL;
        v57 = *(_QWORD *)(v51 + 8 * v67) & 0xFFFFFFFFFFFFFFF8LL;
        continue;
      }
      break;
    }
LABEL_61:
    ++v49;
    *v52 = v51;
    v50 = v53;
  }
  while ( v53 != v49 );
LABEL_21:
  v31 = *(__int64 **)(v11 + 48);
  if ( v31 )
  {
    v32 = &v31[*((unsigned int *)v31 - 1)];
    if ( v32 != v31 )
    {
      v33 = *(__int64 **)(v11 + 48);
      while ( ++v31 != v32 )
      {
        while ( (unsigned int)sub_561580(*(v31 - 1), *v31) )
        {
          sub_563FC0(v11, v10, v33, v31);
          v33 = v31++;
          if ( v31 == v32 )
            goto LABEL_27;
        }
      }
LABEL_27:
      sub_563FC0(v11, v10, v33, v31);
    }
  }
LABEL_28:
  v34 = 0;
  if ( *(_BYTE *)(v11 + 72) )
  {
    v34 = sub_186B270(0xF8u);
    sub_63D370(v34, *(_QWORD *)(v11 + 24));
    v38 = *(_QWORD *)(v11 + 64);
    if ( v38 )
    {
      v35 = *(unsigned int *)(v38 - 4);
      if ( (_DWORD)v35 )
      {
        v39 = 8 * v35;
        v40 = 0;
        while ( 1 )
        {
          v41 = *(_QWORD *)(v38 + v40);
          v40 += 8;
          sub_63DAD0(v34, v41, a3);
          if ( v39 == v40 )
            break;
          v38 = *(_QWORD *)(v11 + 64);
        }
      }
    }
    sub_63DFA0(v34, v10, v35, a3, a4, a5, a6, v36, v37, a9);
  }
  sub_561850((_QWORD *)v11);
  return v34;
}

