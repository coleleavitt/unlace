__int64 *__fastcall sub_7E1020(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  char **exception; // rbp
  __int64 v10; // rax
  __int64 *v11; // rcx
  __int64 v12; // rax
  int v13; // edi
  unsigned int v14; // edx
  __int64 *v15; // rsi
  __int64 v16; // rdx
  __int64 *v17; // r8
  __int64 *i; // rax
  __int64 v19; // rdx
  __int64 v20; // rsi
  __int64 v21; // r10
  __int64 v22; // rdi
  unsigned int v24; // eax
  int v25; // esi
  __int64 v26; // rbx
  int v27; // r8d
  __int64 v28; // rcx
  __int64 *v29; // r14
  int v30; // edi
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 *v33; // rax
  _QWORD *v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // r14
  __int64 v41; // r15
  __int64 v42; // rdx
  __int64 v43; // r12
  _QWORD *v44; // rbx
  _QWORD *v45; // rdx
  unsigned int v46; // eax
  __int64 v47; // rcx
  int v48; // eax
  _QWORD *v49; // rcx
  unsigned int v50; // ebp
  unsigned int v51; // ecx
  unsigned int *v52; // rax
  __int64 v53; // rcx
  __int64 v54; // rax
  int v55; // r9d
  __m128i *v56; // rdx
  __m128i *v57; // rax
  const __m128i *v58; // r15
  __m128i *v59; // r11
  __int64 v60; // rdx
  __m128i *v61; // rsi
  __m128i *v62; // rdx
  _QWORD *v63; // rdx
  __int64 v64; // [rsp+8h] [rbp-A0h]
  size_t v65; // [rsp+8h] [rbp-A0h]
  __int64 v66; // [rsp+8h] [rbp-A0h]
  int v67; // [rsp+18h] [rbp-90h]
  __int64 v68; // [rsp+20h] [rbp-88h]
  size_t v69; // [rsp+20h] [rbp-88h]
  __int64 v70[11]; // [rsp+50h] [rbp-58h] BYREF

  v10 = *(_QWORD *)(a2 + 72);
  *a1 = 0;
  v11 = *(__int64 **)(a2 + 1400);
  a1[1] = v10;
  v12 = *(unsigned int *)(a2 + 1408);
  v13 = *(_DWORD *)(a3 + 12);
  v14 = v12 - 1;
  v12 *= 16;
  v15 = (__int64 *)((char *)v11 + v12);
  v16 = 16LL * (v13 & v14);
  v17 = &v11[(unsigned __int64)v16 / 8];
  if ( v16 != v12 )
  {
    for ( i = &v11[(unsigned __int64)v16 / 8]; v15 != i; i += 2 )
    {
      v19 = *i;
      if ( (unsigned __int64)*i > 1 )
      {
        if ( *(_DWORD *)(v19 + 12) == v13 && a3 == v19 )
          goto LABEL_22;
      }
      else if ( !v19 )
      {
        goto LABEL_8;
      }
    }
  }
  for ( ; v17 != v11; v11 += 2 )
  {
    v38 = *v11;
    if ( (unsigned __int64)*v11 > 1 )
    {
      if ( *(_DWORD *)(v38 + 12) == v13 && a3 == v38 )
      {
        i = v11;
LABEL_22:
        v36 = i[1];
        if ( v36 )
          ++*(_DWORD *)(v36 + 8);
        *a1 = v36;
        return a1;
      }
    }
    else if ( !v38 )
    {
      break;
    }
  }
LABEL_8:
  sub_D854F0((unsigned int)v70, a2 + 776, a2 + 112, a3, (_DWORD)v17, a6);
  v21 = v70[0];
  v70[0] = *a1;
  v20 = v70[0];
  *a1 = v21;
  if ( v20 )
  {
    v22 = v70[1];
    if ( (*(_DWORD *)(v20 + 8))-- == 1 )
    {
      sub_15D7BC0(v22, v20);
      v21 = *a1;
    }
  }
  v24 = *(_DWORD *)(a2 + 1408);
  v25 = *(_DWORD *)(a2 + 1416);
  if ( 3 * v24 < 4 * (v25 + *(_DWORD *)(a2 + 1412)) )
  {
    v68 = v21;
    v67 = 2 * v24;
    v65 = 32LL * v24;
    v54 = sub_186B270(v65);
    v55 = v67;
    v28 = v65;
    v26 = v54;
    v56 = (__m128i *)v54;
    v21 = v68;
    v57 = (__m128i *)(v65 + v54);
    if ( v67 )
    {
      if ( (((_BYTE)v57 - (_BYTE)v26) & 0x10) == 0
        || (v56 = (__m128i *)(v26 + 16), *(_OWORD *)v26 = 0, (__m128i *)(v26 + 16) != v57) )
      {
        do
        {
          *v56 = 0;
          v56 += 2;
          v56[-1] = 0;
        }
        while ( v56 != v57 );
      }
    }
    v58 = *(const __m128i **)(a2 + 1400);
    v27 = v67 - 1;
    v29 = (__int64 *)v57;
    v59 = (__m128i *)&v58[*(unsigned int *)(a2 + 1408)];
    if ( v58 != v59 )
    {
      do
      {
        if ( v58->m128i_i64[0] > 1uLL )
        {
          v60 = 16LL * (*(_DWORD *)(v58->m128i_i64[0] + 12) & (unsigned int)v27);
          v61 = (__m128i *)(v26 + v60);
          if ( v65 == v60 )
          {
LABEL_64:
            if ( (__m128i *)v26 == v61 )
            {
LABEL_76:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v62 = (__m128i *)v26;
            while ( v62->m128i_i64[0] )
            {
              if ( v61 == ++v62 )
                goto LABEL_76;
            }
          }
          else
          {
            v62 = (__m128i *)(v26 + v60);
            while ( v62->m128i_i64[0] )
            {
              if ( v57 == ++v62 )
                goto LABEL_64;
            }
          }
          *v62 = _mm_loadu_si128(v58);
        }
        ++v58;
      }
      while ( v59 != v58 );
      v59 = *(__m128i **)(a2 + 1400);
    }
    if ( v59 )
    {
      v69 = v65;
      v66 = v21;
      sub_186B220(v59);
      v55 = v67;
      v28 = v69;
      v27 = v67 - 1;
      v21 = v66;
    }
    *(_QWORD *)(a2 + 1400) = v26;
    v25 = 0;
    *(_DWORD *)(a2 + 1408) = v55;
    *(_DWORD *)(a2 + 1416) = 0;
  }
  else
  {
    v26 = *(_QWORD *)(a2 + 1400);
    v27 = v24 - 1;
    v28 = 16LL * v24;
    v29 = (__int64 *)(v26 + v28);
  }
  v30 = *(_DWORD *)(a3 + 12);
  v31 = 16LL * (v30 & (unsigned int)v27);
  v32 = v26 + v31;
  if ( v31 != v28 )
  {
    v33 = (__int64 *)(v26 + v31);
    v34 = nullptr;
    while ( 1 )
    {
      v35 = *v33;
      if ( (unsigned __int64)*v33 > 1 )
      {
        if ( *(_DWORD *)(v35 + 12) == v30 && a3 == v35 )
        {
          *v33 = a3;
          v33[1] = v21;
          goto LABEL_42;
        }
      }
      else
      {
        if ( !v35 )
        {
          if ( v34 )
            goto LABEL_74;
          v34 = v33;
          goto LABEL_75;
        }
        v34 = v33;
      }
      v33 += 2;
      if ( v33 == v29 )
        goto LABEL_37;
    }
  }
  v34 = nullptr;
  while ( 1 )
  {
LABEL_37:
    if ( v32 == v26 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v39 = *(_QWORD *)v26;
    if ( *(_QWORD *)v26 <= 1u )
      break;
    if ( *(_DWORD *)(v39 + 12) == v30 && a3 == v39 )
    {
      *(_QWORD *)v26 = a3;
      *(_QWORD *)(v26 + 8) = v21;
      goto LABEL_42;
    }
LABEL_36:
    v26 += 16;
  }
  if ( v39 )
  {
    v34 = (_QWORD *)v26;
    goto LABEL_36;
  }
  if ( v34 )
LABEL_74:
    *(_DWORD *)(a2 + 1416) = v25 - 1;
  else
    v34 = (_QWORD *)v26;
LABEL_75:
  *v34 = a3;
  v34[1] = v21;
  ++*(_DWORD *)(a2 + 1412);
LABEL_42:
  v40 = *a1;
  ++*(_DWORD *)(a3 + 8);
  if ( v40 )
    ++*(_DWORD *)(v40 + 8);
  v41 = *(_QWORD *)(a2 + 80);
  v42 = a2 + 1400;
  v43 = *(_QWORD *)(a2 + 72);
  v64 = v42;
  v44 = (_QWORD *)sub_180C100(v41 + 2144, 40);
  *v44 = off_1C54A90;
  v44[2] = v64;
  v45 = *(_QWORD **)(v41 + 2128);
  v44[1] = v43;
  v44[3] = a3;
  v44[4] = v40;
  if ( v45 )
  {
    v46 = *((_DWORD *)v45 - 1);
    if ( v46 == *((_DWORD *)v45 - 2) )
    {
      v50 = (3 * v46 + 1) >> 1;
      v51 = 8 * v50 + 8;
      if ( 8 * v46 + 8 >= v51 || v46 >= v50 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v70, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v70);
        sub_233E40((__int64)v70);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v52 = (unsigned int *)sub_186B300(v45 - 1, v51);
      v53 = v52[1];
      v45 = v52 + 2;
      *(_QWORD *)(v41 + 2128) = v52 + 2;
      *v52 = v50;
      LODWORD(v52) = v53;
      v49 = &v45[v53];
      v48 = (_DWORD)v52 + 1;
    }
    else
    {
      v47 = v46;
      v48 = v46 + 1;
      v49 = &v45[v47];
    }
  }
  else
  {
    v63 = (_QWORD *)sub_186B270(0x18u);
    *v63 = 2;
    v48 = 1;
    v45 = v63 + 1;
    *(_QWORD *)(v41 + 2128) = v45;
    v49 = v45;
  }
  *v49 = v44;
  *((_DWORD *)v45 - 1) = v48;
  return a1;
}

