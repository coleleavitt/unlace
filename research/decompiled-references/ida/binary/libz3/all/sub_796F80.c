__int64 __fastcall sub_796F80(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 *v5; // rcx
  int v6; // edi
  unsigned int v7; // edx
  __int64 *v8; // rsi
  __int64 v9; // rdx
  __int64 *v10; // r8
  __int64 *i; // rax
  __int64 v12; // rdx
  __int64 v13; // r14
  _OWORD *v14; // rax
  unsigned int v15; // edx
  __m128i *v16; // rbx
  int v17; // r9d
  __int64 v18; // rcx
  __int64 *v19; // r13
  int v20; // esi
  __int64 v21; // r9
  __m128i *v22; // rdi
  __m128i *v23; // rax
  __int64 *v24; // rcx
  __int64 v25; // rdx
  __int64 v27; // rax
  __int64 v28; // rax
  _QWORD *v29; // rdx
  unsigned int v30; // eax
  __int64 v31; // rcx
  int v32; // eax
  __int64 *v33; // rcx
  _QWORD *v34; // rdx
  unsigned int v35; // eax
  __int64 v36; // rcx
  int v37; // eax
  __int64 *v38; // rcx
  unsigned int v39; // ebx
  unsigned int v40; // ecx
  unsigned int *v41; // rax
  __int64 v42; // rcx
  unsigned int v43; // ebx
  unsigned int v44; // ecx
  unsigned int *v45; // rax
  __int64 v46; // rcx
  __m128i *v47; // rax
  int v48; // r10d
  __m128i *v49; // r8
  const __m128i *v50; // r15
  __m128i *v51; // r11
  __int64 v52; // rax
  __m128i *v53; // rdx
  __m128i *v54; // rax
  _QWORD *v55; // rdx
  _QWORD *v56; // rdx
  char **exception; // rbp
  size_t v58; // [rsp+8h] [rbp-90h]
  int v59; // [rsp+8h] [rbp-90h]
  int v60; // [rsp+10h] [rbp-88h]
  size_t v61; // [rsp+10h] [rbp-88h]
  int v62; // [rsp+18h] [rbp-80h]
  __int64 v63[11]; // [rsp+40h] [rbp-58h] BYREF

  v4 = *(unsigned int *)(a1 + 32);
  v5 = *(__int64 **)(a1 + 24);
  v6 = *(_DWORD *)(a2 + 12);
  v7 = v4 - 1;
  v4 *= 16;
  v8 = (__int64 *)((char *)v5 + v4);
  v9 = 16LL * (v6 & v7);
  v10 = &v5[(unsigned __int64)v9 / 8];
  if ( v9 != v4 )
  {
    for ( i = &v5[(unsigned __int64)v9 / 8]; v8 != i; i += 2 )
    {
      v12 = *i;
      if ( (unsigned __int64)*i > 1 )
      {
        if ( *(_DWORD *)(v12 + 12) == v6 && a2 == v12 )
          return i[1];
      }
      else if ( !v12 )
      {
        goto LABEL_8;
      }
    }
  }
  for ( ; v10 != v5; v5 += 2 )
  {
    v27 = *v5;
    if ( (unsigned __int64)*v5 > 1 )
    {
      if ( *(_DWORD *)(v27 + 12) == v6 && a2 == v27 )
      {
        i = v5;
        return i[1];
      }
    }
    else if ( !v27 )
    {
      break;
    }
  }
LABEL_8:
  v13 = sub_186B270(0x20u);
  v14 = (_OWORD *)sub_186B270(0x40u);
  v15 = *(_DWORD *)(a1 + 32);
  *(_QWORD *)(v13 + 8) = 8;
  *(_QWORD *)v13 = v14;
  *v14 = 0;
  v14[1] = 0;
  v14[2] = 0;
  v14[3] = 0;
  LODWORD(v14) = 4 * (*(_DWORD *)(a1 + 36) + *(_DWORD *)(a1 + 40));
  *(_DWORD *)(v13 + 16) = 0;
  *(_DWORD *)(v13 + 24) = 0;
  if ( 3 * v15 < (unsigned int)v14 )
  {
    v60 = 2 * v15;
    v58 = 32LL * v15;
    v47 = (__m128i *)sub_186B270(v58);
    v18 = v58;
    v48 = v60;
    v16 = v47;
    v49 = &v47[v58 / 0x10];
    if ( v60 )
    {
      if ( (v58 & 0x10) == 0 || (*v47 = 0, ++v47, v49 != v47) )
      {
        do
        {
          *v47 = 0;
          v47 += 2;
          v47[-1] = 0;
        }
        while ( v49 != v47 );
      }
    }
    v50 = *(const __m128i **)(a1 + 24);
    v17 = v60 - 1;
    v19 = (__int64 *)v49;
    v51 = (__m128i *)&v50[*(unsigned int *)(a1 + 32)];
    if ( v50 != v51 )
    {
      do
      {
        if ( v50->m128i_i64[0] > 1uLL )
        {
          v52 = 16LL * (*(_DWORD *)(v50->m128i_i64[0] + 12) & (unsigned int)v17);
          v53 = &v16[(unsigned __int64)v52 / 0x10];
          if ( v58 == v52 )
          {
LABEL_63:
            if ( v16 == v53 )
            {
LABEL_75:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v54 = v16;
            while ( v54->m128i_i64[0] )
            {
              if ( v53 == ++v54 )
                goto LABEL_75;
            }
          }
          else
          {
            v54 = &v16[(unsigned __int64)v52 / 0x10];
            while ( v54->m128i_i64[0] )
            {
              if ( v49 == ++v54 )
                goto LABEL_63;
            }
          }
          *v54 = _mm_loadu_si128(v50);
        }
        ++v50;
      }
      while ( v51 != v50 );
      v51 = *(__m128i **)(a1 + 24);
    }
    if ( v51 )
    {
      v62 = v60;
      v61 = v58;
      v59 = v48 - 1;
      sub_186B220(v51);
      v48 = v62;
      v18 = v61;
      v17 = v59;
    }
    *(_QWORD *)(a1 + 24) = v16;
    *(_DWORD *)(a1 + 32) = v48;
    *(_DWORD *)(a1 + 40) = 0;
  }
  else
  {
    v16 = *(__m128i **)(a1 + 24);
    v17 = v15 - 1;
    v18 = 16LL * v15;
    v19 = (__int64 *)((char *)v16->m128i_i64 + v18);
  }
  v20 = *(_DWORD *)(a2 + 12);
  v21 = 16LL * (v20 & (unsigned int)v17);
  v22 = &v16[(unsigned __int64)v21 / 0x10];
  if ( v21 != v18 )
  {
    v23 = &v16[(unsigned __int64)v21 / 0x10];
    v24 = nullptr;
    while ( 1 )
    {
      v25 = v23->m128i_i64[0];
      if ( v23->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v25 + 12) == v20 && a2 == v25 )
        {
          v23->m128i_i64[0] = a2;
          v23->m128i_i64[1] = v13;
          goto LABEL_37;
        }
      }
      else
      {
        if ( !v25 )
        {
          if ( v24 )
            goto LABEL_73;
          v24 = (__int64 *)v23;
          goto LABEL_74;
        }
        v24 = (__int64 *)v23;
      }
      if ( ++v23 == (__m128i *)v19 )
        goto LABEL_32;
    }
  }
  v24 = nullptr;
  while ( 1 )
  {
LABEL_32:
    if ( v22 == v16 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v28 = v16->m128i_i64[0];
    if ( v16->m128i_i64[0] <= 1uLL )
      break;
    if ( *(_DWORD *)(v28 + 12) == v20 && a2 == v28 )
    {
      v16->m128i_i64[0] = a2;
      v16->m128i_i64[1] = v13;
      goto LABEL_37;
    }
LABEL_31:
    ++v16;
  }
  if ( v28 )
  {
    v24 = (__int64 *)v16;
    goto LABEL_31;
  }
  if ( v24 )
LABEL_73:
    --*(_DWORD *)(a1 + 40);
  else
    v24 = (__int64 *)v16;
LABEL_74:
  *v24 = a2;
  v24[1] = v13;
  ++*(_DWORD *)(a1 + 36);
LABEL_37:
  v29 = *(_QWORD **)(a1 + 72);
  ++*(_DWORD *)(a2 + 8);
  if ( v29 )
  {
    v30 = *((_DWORD *)v29 - 1);
    if ( v30 != *((_DWORD *)v29 - 2) )
    {
      v31 = v30;
      v32 = v30 + 1;
      v33 = &v29[v31];
      goto LABEL_40;
    }
    v39 = (3 * v30 + 1) >> 1;
    v40 = 8 * v39 + 8;
    if ( 8 * v30 + 8 < v40 && v30 < v39 )
    {
      v41 = (unsigned int *)sub_186B300(v29 - 1, v40);
      v42 = v41[1];
      v29 = v41 + 2;
      *v41 = v39;
      *(_QWORD *)(a1 + 72) = v41 + 2;
      LODWORD(v41) = v42;
      v33 = &v29[v42];
      v32 = (_DWORD)v41 + 1;
      goto LABEL_40;
    }
LABEL_84:
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_24ABB0(v63, "Overflow encountered when expanding vector");
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v63);
    sub_233E40((__int64)v63);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  v55 = (_QWORD *)sub_186B270(0x18u);
  *v55 = 2;
  v32 = 1;
  v29 = v55 + 1;
  *(_QWORD *)(a1 + 72) = v29;
  v33 = v29;
LABEL_40:
  *v33 = a2;
  *((_DWORD *)v29 - 1) = v32;
  v34 = *(_QWORD **)(a1 + 80);
  if ( v34 )
  {
    v35 = *((_DWORD *)v34 - 1);
    if ( v35 == *((_DWORD *)v34 - 2) )
    {
      v43 = (3 * v35 + 1) >> 1;
      v44 = 8 * v43 + 8;
      if ( 8 * v35 + 8 >= v44 || v35 >= v43 )
        goto LABEL_84;
      v45 = (unsigned int *)sub_186B300(v34 - 1, v44);
      v46 = v45[1];
      v34 = v45 + 2;
      *v45 = v43;
      *(_QWORD *)(a1 + 80) = v45 + 2;
      LODWORD(v45) = v46;
      v38 = &v34[v46];
      v37 = (_DWORD)v45 + 1;
    }
    else
    {
      v36 = v35;
      v37 = v35 + 1;
      v38 = &v34[v36];
    }
  }
  else
  {
    v56 = (_QWORD *)sub_186B270(0x18u);
    *v56 = 2;
    v37 = 1;
    v34 = v56 + 1;
    *(_QWORD *)(a1 + 80) = v34;
    v38 = v34;
  }
  *v38 = v13;
  *((_DWORD *)v34 - 1) = v37;
  return v13;
}

