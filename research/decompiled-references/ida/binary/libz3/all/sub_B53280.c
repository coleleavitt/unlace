__int64 *__fastcall sub_B53280(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
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
  _QWORD *v41; // rbx
  _QWORD *v42; // rdx
  unsigned int v43; // eax
  __int64 v44; // rcx
  int v45; // eax
  _QWORD *v46; // rcx
  unsigned int v47; // ebp
  unsigned int v48; // ecx
  unsigned int *v49; // rax
  __int64 v50; // rcx
  __int64 v51; // rax
  int v52; // r9d
  __m128i *v53; // rdx
  __m128i *v54; // rax
  const __m128i *v55; // r15
  __m128i *v56; // r11
  __int64 v57; // rdx
  __m128i *v58; // rsi
  __m128i *v59; // rdx
  _QWORD *v60; // rdx
  __int64 v61; // [rsp+8h] [rbp-A0h]
  size_t v62; // [rsp+8h] [rbp-A0h]
  __int64 v63; // [rsp+8h] [rbp-A0h]
  int v64; // [rsp+18h] [rbp-90h]
  __int64 v65; // [rsp+20h] [rbp-88h]
  size_t v66; // [rsp+20h] [rbp-88h]
  __int64 v67[11]; // [rsp+50h] [rbp-58h] BYREF

  v10 = *(_QWORD *)(a2 + 24);
  *a1 = 0;
  v11 = *(__int64 **)(a2 + 1408);
  a1[1] = v10;
  v12 = *(unsigned int *)(a2 + 1416);
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
  sub_D854F0((unsigned int)v67, a2 + 720, a2 + 56, a3, (_DWORD)v17, a6);
  v21 = v67[0];
  v67[0] = *a1;
  v20 = v67[0];
  *a1 = v21;
  if ( v20 )
  {
    v22 = v67[1];
    if ( (*(_DWORD *)(v20 + 8))-- == 1 )
    {
      sub_15D7BC0(v22, v20);
      v21 = *a1;
    }
  }
  v24 = *(_DWORD *)(a2 + 1416);
  v25 = *(_DWORD *)(a2 + 1424);
  if ( 3 * v24 < 4 * (v25 + *(_DWORD *)(a2 + 1420)) )
  {
    v65 = v21;
    v64 = 2 * v24;
    v62 = 32LL * v24;
    v51 = sub_186B270(v62);
    v52 = v64;
    v28 = v62;
    v26 = v51;
    v53 = (__m128i *)v51;
    v21 = v65;
    v54 = (__m128i *)(v62 + v51);
    if ( v64 )
    {
      if ( (((_BYTE)v54 - (_BYTE)v26) & 0x10) == 0
        || (v53 = (__m128i *)(v26 + 16), *(_OWORD *)v26 = 0, (__m128i *)(v26 + 16) != v54) )
      {
        do
        {
          *v53 = 0;
          v53 += 2;
          v53[-1] = 0;
        }
        while ( v53 != v54 );
      }
    }
    v55 = *(const __m128i **)(a2 + 1408);
    v27 = v64 - 1;
    v29 = (__int64 *)v54;
    v56 = (__m128i *)&v55[*(unsigned int *)(a2 + 1416)];
    if ( v55 != v56 )
    {
      do
      {
        if ( v55->m128i_i64[0] > 1uLL )
        {
          v57 = 16LL * (*(_DWORD *)(v55->m128i_i64[0] + 12) & (unsigned int)v27);
          v58 = (__m128i *)(v26 + v57);
          if ( v62 == v57 )
          {
LABEL_64:
            if ( (__m128i *)v26 == v58 )
            {
LABEL_76:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v59 = (__m128i *)v26;
            while ( v59->m128i_i64[0] )
            {
              if ( v58 == ++v59 )
                goto LABEL_76;
            }
          }
          else
          {
            v59 = (__m128i *)(v26 + v57);
            while ( v59->m128i_i64[0] )
            {
              if ( v54 == ++v59 )
                goto LABEL_64;
            }
          }
          *v59 = _mm_loadu_si128(v55);
        }
        ++v55;
      }
      while ( v56 != v55 );
      v56 = *(__m128i **)(a2 + 1408);
    }
    if ( v56 )
    {
      v66 = v62;
      v63 = v21;
      sub_186B220(v56);
      v52 = v64;
      v28 = v66;
      v27 = v64 - 1;
      v21 = v63;
    }
    *(_QWORD *)(a2 + 1408) = v26;
    v25 = 0;
    *(_DWORD *)(a2 + 1416) = v52;
    *(_DWORD *)(a2 + 1424) = 0;
  }
  else
  {
    v26 = *(_QWORD *)(a2 + 1408);
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
    *(_DWORD *)(a2 + 1424) = v25 - 1;
  else
    v34 = (_QWORD *)v26;
LABEL_75:
  *v34 = a3;
  v34[1] = v21;
  ++*(_DWORD *)(a2 + 1420);
LABEL_42:
  v40 = *a1;
  ++*(_DWORD *)(a3 + 8);
  if ( v40 )
    ++*(_DWORD *)(v40 + 8);
  v61 = *(_QWORD *)(a2 + 24);
  v41 = (_QWORD *)sub_180C100(a2 + 1336, 40);
  *v41 = off_1C54A90;
  v41[1] = v61;
  v42 = *(_QWORD **)(a2 + 1320);
  v41[2] = a2 + 1408;
  v41[3] = a3;
  v41[4] = v40;
  if ( v42 )
  {
    v43 = *((_DWORD *)v42 - 1);
    if ( v43 == *((_DWORD *)v42 - 2) )
    {
      v47 = (3 * v43 + 1) >> 1;
      v48 = 8 * v47 + 8;
      if ( 8 * v43 + 8 >= v48 || v43 >= v47 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v67, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v67);
        sub_233E40((__int64)v67);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v49 = (unsigned int *)sub_186B300(v42 - 1, v48);
      v50 = v49[1];
      v42 = v49 + 2;
      *v49 = v47;
      *(_QWORD *)(a2 + 1320) = v49 + 2;
      LODWORD(v49) = v50;
      v46 = &v42[v50];
      v45 = (_DWORD)v49 + 1;
    }
    else
    {
      v44 = v43;
      v45 = v43 + 1;
      v46 = &v42[v44];
    }
  }
  else
  {
    v60 = (_QWORD *)sub_186B270(0x18u);
    *v60 = 2;
    v45 = 1;
    v42 = v60 + 1;
    *(_QWORD *)(a2 + 1320) = v42;
    v46 = v42;
  }
  *v46 = v41;
  *((_DWORD *)v42 - 1) = v45;
  return a1;
}

