__int64 __fastcall sub_8430C0(__int64 a1, __int64 a2)
{
  char **v2; // rbp
  char **exception; // rbp
  __int64 v6; // rax
  __int64 *v7; // rcx
  int v8; // edi
  unsigned int v9; // edx
  __int64 *v10; // rsi
  __int64 v11; // rdx
  __int64 *v12; // r8
  __int64 *i; // rax
  __int64 v14; // rdx
  __int64 v15; // r13
  __int64 v16; // rax
  unsigned int v17; // edx
  __int64 *v18; // rbx
  int v19; // r9d
  __int64 v20; // rcx
  __int64 *v21; // r14
  int v22; // esi
  __int64 v23; // r9
  __int64 *v24; // rdi
  __int64 *v25; // rax
  __int64 *v26; // rcx
  __int64 v27; // rdx
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // r14
  _QWORD *v32; // rax
  _QWORD *v33; // rdx
  _QWORD *v34; // rbx
  unsigned int v35; // eax
  __int64 v36; // rcx
  int v37; // eax
  _QWORD *v38; // rcx
  __int64 v39; // r14
  _QWORD *v40; // rax
  _QWORD *v41; // rdx
  _QWORD *v42; // rbx
  unsigned int v43; // eax
  __int64 v44; // rcx
  int v45; // eax
  _QWORD *v46; // rcx
  unsigned int v47; // r15d
  unsigned int v48; // ecx
  unsigned int *v49; // rax
  __int64 v50; // rcx
  unsigned int v51; // ebp
  unsigned int v52; // ecx
  unsigned int *v53; // rax
  __int64 v54; // rcx
  __m128i *v55; // rax
  int v56; // r10d
  __m128i *v57; // r8
  const __m128i *v58; // r15
  __m128i *v59; // r11
  __int64 v60; // rax
  __m128i *v61; // rdx
  __m128i *v62; // rax
  _QWORD *v63; // rdx
  _QWORD *v64; // rdx
  size_t v65; // [rsp+8h] [rbp-90h]
  int v66; // [rsp+8h] [rbp-90h]
  int v67; // [rsp+10h] [rbp-88h]
  size_t v68; // [rsp+10h] [rbp-88h]
  int v69; // [rsp+18h] [rbp-80h]
  __int64 v70[11]; // [rsp+40h] [rbp-58h] BYREF

  v6 = *(unsigned int *)(a1 + 40);
  v7 = *(__int64 **)(a1 + 32);
  v8 = *(_DWORD *)(a2 + 12);
  v9 = v6 - 1;
  v6 *= 16;
  v10 = (__int64 *)((char *)v7 + v6);
  v11 = 16LL * (v8 & v9);
  v12 = &v7[(unsigned __int64)v11 / 8];
  if ( v11 != v6 )
  {
    for ( i = &v7[(unsigned __int64)v11 / 8]; v10 != i; i += 2 )
    {
      v14 = *i;
      if ( (unsigned __int64)*i > 1 )
      {
        if ( *(_DWORD *)(v14 + 12) == v8 && a2 == v14 )
          return i[1];
      }
      else if ( !v14 )
      {
        goto LABEL_8;
      }
    }
  }
  for ( ; v12 != v7; v7 += 2 )
  {
    v29 = *v7;
    if ( (unsigned __int64)*v7 > 1 )
    {
      if ( *(_DWORD *)(v29 + 12) == v8 && a2 == v29 )
      {
        i = v7;
        return i[1];
      }
    }
    else if ( !v29 )
    {
      break;
    }
  }
LABEL_8:
  v15 = sub_186B270(0x58u);
  v16 = sub_7D5350(*(_QWORD *)(a1 + 16), a2);
  sub_137FC40(v15, *(_QWORD *)(a1 + 24), v16);
  v17 = *(_DWORD *)(a1 + 40);
  if ( 3 * v17 < 4 * (*(_DWORD *)(a1 + 44) + *(_DWORD *)(a1 + 48)) )
  {
    v67 = 2 * v17;
    v65 = 32LL * v17;
    v55 = (__m128i *)sub_186B270(v65);
    v20 = v65;
    v56 = v67;
    v18 = (__int64 *)v55;
    v57 = &v55[v65 / 0x10];
    if ( v67 )
    {
      if ( (v65 & 0x10) == 0 || (*v55 = 0, ++v55, v55 != v57) )
      {
        do
        {
          *v55 = 0;
          v55 += 2;
          v55[-1] = 0;
        }
        while ( v55 != v57 );
      }
    }
    v58 = *(const __m128i **)(a1 + 32);
    v19 = v67 - 1;
    v21 = (__int64 *)v57;
    v59 = (__m128i *)&v58[*(unsigned int *)(a1 + 40)];
    if ( v58 != v59 )
    {
      do
      {
        if ( v58->m128i_i64[0] > 1uLL )
        {
          v60 = 16LL * (*(_DWORD *)(v58->m128i_i64[0] + 12) & (unsigned int)v19);
          v61 = (__m128i *)&v18[(unsigned __int64)v60 / 8];
          if ( v65 == v60 )
          {
LABEL_63:
            if ( v18 == (__int64 *)v61 )
            {
LABEL_75:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v62 = (__m128i *)v18;
            while ( v62->m128i_i64[0] )
            {
              if ( v61 == ++v62 )
                goto LABEL_75;
            }
          }
          else
          {
            v62 = (__m128i *)&v18[(unsigned __int64)v60 / 8];
            while ( v62->m128i_i64[0] )
            {
              if ( v57 == ++v62 )
                goto LABEL_63;
            }
          }
          *v62 = _mm_loadu_si128(v58);
        }
        ++v58;
      }
      while ( v59 != v58 );
      v59 = *(__m128i **)(a1 + 32);
    }
    if ( v59 )
    {
      v69 = v67;
      v68 = v65;
      v66 = v56 - 1;
      sub_186B220(v59);
      v56 = v69;
      v20 = v68;
      v19 = v66;
    }
    *(_QWORD *)(a1 + 32) = v18;
    *(_DWORD *)(a1 + 40) = v56;
    *(_DWORD *)(a1 + 48) = 0;
  }
  else
  {
    v18 = *(__int64 **)(a1 + 32);
    v19 = v17 - 1;
    v20 = 16LL * v17;
    v21 = (__int64 *)((char *)v18 + v20);
  }
  v22 = *(_DWORD *)(a2 + 12);
  v23 = 16LL * (v22 & (unsigned int)v19);
  v24 = &v18[(unsigned __int64)v23 / 8];
  if ( v23 != v20 )
  {
    v25 = &v18[(unsigned __int64)v23 / 8];
    v26 = nullptr;
    while ( 1 )
    {
      v27 = *v25;
      if ( (unsigned __int64)*v25 > 1 )
      {
        if ( *(_DWORD *)(v27 + 12) == v22 && a2 == v27 )
        {
          *v25 = a2;
          v25[1] = v15;
          goto LABEL_37;
        }
      }
      else
      {
        if ( !v27 )
        {
          if ( v26 )
            goto LABEL_73;
          v26 = v25;
          goto LABEL_74;
        }
        v26 = v25;
      }
      v25 += 2;
      if ( v25 == v21 )
        goto LABEL_32;
    }
  }
  v26 = nullptr;
  while ( 1 )
  {
LABEL_32:
    if ( v24 == v18 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v30 = *v18;
    if ( (unsigned __int64)*v18 <= 1 )
      break;
    if ( *(_DWORD *)(v30 + 12) == v22 && a2 == v30 )
    {
      *v18 = a2;
      v18[1] = v15;
      goto LABEL_37;
    }
LABEL_31:
    v18 += 2;
  }
  if ( v30 )
  {
    v26 = v18;
    goto LABEL_31;
  }
  if ( v26 )
LABEL_73:
    --*(_DWORD *)(a1 + 48);
  else
    v26 = v18;
LABEL_74:
  *v26 = a2;
  v26[1] = v15;
  ++*(_DWORD *)(a1 + 44);
LABEL_37:
  v31 = *(_QWORD *)(a1 + 8);
  v32 = (_QWORD *)sub_180C100(v31 + 2144, 16);
  v33 = *(_QWORD **)(v31 + 2128);
  v34 = v32;
  *v32 = off_1C55330;
  v32[1] = v15;
  if ( v33 )
  {
    v35 = *((_DWORD *)v33 - 1);
    if ( v35 == *((_DWORD *)v33 - 2) )
    {
      v47 = (3 * v35 + 1) >> 1;
      v48 = 8 * v47 + 8;
      if ( 8 * v35 + 8 >= v48 || v35 >= v47 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v70, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v70);
        sub_233E40((__int64)v70);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v49 = (unsigned int *)sub_186B300(v33 - 1, v48);
      v50 = v49[1];
      v33 = v49 + 2;
      *(_QWORD *)(v31 + 2128) = v49 + 2;
      *v49 = v47;
      LODWORD(v49) = v50;
      v38 = &v33[v50];
      v37 = (_DWORD)v49 + 1;
    }
    else
    {
      v36 = v35;
      v37 = v35 + 1;
      v38 = &v33[v36];
    }
  }
  else
  {
    v63 = (_QWORD *)sub_186B270(0x18u);
    *v63 = 2;
    v37 = 1;
    v33 = v63 + 1;
    *(_QWORD *)(v31 + 2128) = v33;
    v38 = v33;
  }
  v39 = *(_QWORD *)(a1 + 8);
  *v38 = v34;
  *((_DWORD *)v33 - 1) = v37;
  v40 = (_QWORD *)sub_180C100(v39 + 2144, 24);
  v41 = *(_QWORD **)(v39 + 2128);
  v42 = v40;
  *v40 = off_1C55358;
  v40[1] = a1 + 32;
  v40[2] = a2;
  if ( v41 )
  {
    v43 = *((_DWORD *)v41 - 1);
    if ( v43 == *((_DWORD *)v41 - 2) )
    {
      v51 = (3 * v43 + 1) >> 1;
      v52 = 8 * v51 + 8;
      if ( 8 * v43 + 8 >= v52 || v43 >= v51 )
      {
        v2 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v70, "Overflow encountered when expanding vector");
        *v2 = (char *)off_1C63128;
        sub_2333C0(v2 + 1, v70);
        sub_233E40((__int64)v70);
        __cxa_throw(v2, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v53 = (unsigned int *)sub_186B300(v41 - 1, v52);
      v54 = v53[1];
      v41 = v53 + 2;
      *(_QWORD *)(v39 + 2128) = v53 + 2;
      *v53 = v51;
      LODWORD(v53) = v54;
      v46 = &v41[v54];
      v45 = (_DWORD)v53 + 1;
    }
    else
    {
      v44 = v43;
      v45 = v43 + 1;
      v46 = &v41[v44];
    }
  }
  else
  {
    v64 = (_QWORD *)sub_186B270(0x18u);
    *v64 = 2;
    v45 = 1;
    v41 = v64 + 1;
    *(_QWORD *)(v39 + 2128) = v41;
    v46 = v41;
  }
  *v46 = v42;
  *((_DWORD *)v41 - 1) = v45;
  return v15;
}

