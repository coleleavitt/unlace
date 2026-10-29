__int64 __fastcall sub_A914A0(__int64 a1, __int64 a2)
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
  __int64 v13; // r13
  _OWORD *v14; // rax
  void *v15; // rdi
  unsigned int v16; // edx
  int v17; // eax
  int v18; // eax
  __m128i *v19; // rbx
  int v20; // r9d
  __int64 v21; // rcx
  __int64 *v22; // r14
  int v23; // esi
  __int64 v24; // r9
  __m128i *v25; // rdi
  __m128i *v26; // rax
  __int64 *v27; // rcx
  __int64 v28; // rdx
  __int64 v30; // rax
  __int64 v31; // rax
  _QWORD *v32; // rdx
  unsigned int v33; // eax
  __int64 v34; // rcx
  int v35; // eax
  __int64 *v36; // rcx
  _QWORD *v37; // rdx
  unsigned int v38; // eax
  __int64 v39; // rcx
  int v40; // eax
  __int64 *v41; // rcx
  unsigned int v42; // ebx
  unsigned int v43; // ecx
  unsigned int *v44; // rax
  __int64 v45; // rcx
  unsigned int v46; // ebx
  unsigned int v47; // ecx
  unsigned int *v48; // rax
  __int64 v49; // rcx
  __m128i *v50; // rax
  int v51; // r10d
  __m128i *v52; // r8
  const __m128i *v53; // r15
  __m128i *v54; // r11
  __int64 v55; // rax
  __m128i *v56; // rdx
  __m128i *v57; // rax
  _QWORD *v58; // rdx
  _QWORD *v59; // rdx
  char **exception; // rbp
  size_t v61; // [rsp+8h] [rbp-80h]
  int v62; // [rsp+8h] [rbp-80h]
  int v63; // [rsp+10h] [rbp-78h]
  size_t v64; // [rsp+10h] [rbp-78h]
  int v65; // [rsp+18h] [rbp-70h]
  char *v66[11]; // [rsp+30h] [rbp-58h] BYREF

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
    v30 = *v5;
    if ( (unsigned __int64)*v5 > 1 )
    {
      if ( *(_DWORD *)(v30 + 12) == v6 && a2 == v30 )
      {
        i = v5;
        return i[1];
      }
    }
    else if ( !v30 )
    {
      break;
    }
  }
LABEL_8:
  v13 = sub_186B270(0x38u);
  v14 = (_OWORD *)sub_186B270(0x40u);
  *(_QWORD *)(v13 + 8) = 8;
  *v14 = 0;
  *(_QWORD *)v13 = v14;
  v14[1] = 0;
  v14[2] = 0;
  v14[3] = 0;
  *(_DWORD *)(v13 + 16) = 0;
  *(_QWORD *)(v13 + 24) = 0;
  v15 = qword_1C7F2C0;
  *(_QWORD *)(v13 + 32) = 0;
  *(_QWORD *)(v13 + 40) = 1;
  *(_QWORD *)(v13 + 48) = 0;
  sub_182CBA0(v15, v13 + 40);
  v16 = *(_DWORD *)(a1 + 32);
  v17 = *(_DWORD *)(a1 + 40);
  *(_DWORD *)(v13 + 40) = 1;
  v18 = *(_DWORD *)(a1 + 36) + v17;
  *(_BYTE *)(v13 + 44) &= ~1u;
  if ( 3 * v16 < 4 * v18 )
  {
    v63 = 2 * v16;
    v61 = 32LL * v16;
    v50 = (__m128i *)sub_186B270(v61);
    v21 = v61;
    v51 = v63;
    v19 = v50;
    v52 = &v50[v61 / 0x10];
    if ( v63 )
    {
      if ( (v61 & 0x10) == 0 || (*v50 = 0, ++v50, v52 != v50) )
      {
        do
        {
          *v50 = 0;
          v50 += 2;
          v50[-1] = 0;
        }
        while ( v52 != v50 );
      }
    }
    v53 = *(const __m128i **)(a1 + 24);
    v20 = v63 - 1;
    v22 = (__int64 *)v52;
    v54 = (__m128i *)&v53[*(unsigned int *)(a1 + 32)];
    if ( v53 != v54 )
    {
      do
      {
        if ( v53->m128i_i64[0] > 1uLL )
        {
          v55 = 16LL * (*(_DWORD *)(v53->m128i_i64[0] + 12) & (unsigned int)v20);
          v56 = &v19[(unsigned __int64)v55 / 0x10];
          if ( v61 == v55 )
          {
LABEL_63:
            if ( v19 == v56 )
            {
LABEL_75:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v57 = v19;
            while ( v57->m128i_i64[0] )
            {
              if ( v56 == ++v57 )
                goto LABEL_75;
            }
          }
          else
          {
            v57 = &v19[(unsigned __int64)v55 / 0x10];
            while ( v57->m128i_i64[0] )
            {
              if ( v52 == ++v57 )
                goto LABEL_63;
            }
          }
          *v57 = _mm_loadu_si128(v53);
        }
        ++v53;
      }
      while ( v54 != v53 );
      v54 = *(__m128i **)(a1 + 24);
    }
    if ( v54 )
    {
      v65 = v63;
      v64 = v61;
      v62 = v51 - 1;
      sub_186B220(v54);
      v51 = v65;
      v21 = v64;
      v20 = v62;
    }
    *(_QWORD *)(a1 + 24) = v19;
    *(_DWORD *)(a1 + 32) = v51;
    *(_DWORD *)(a1 + 40) = 0;
  }
  else
  {
    v19 = *(__m128i **)(a1 + 24);
    v20 = v16 - 1;
    v21 = 16LL * v16;
    v22 = (__int64 *)((char *)v19->m128i_i64 + v21);
  }
  v23 = *(_DWORD *)(a2 + 12);
  v24 = 16LL * (v23 & (unsigned int)v20);
  v25 = &v19[(unsigned __int64)v24 / 0x10];
  if ( v24 != v21 )
  {
    v26 = &v19[(unsigned __int64)v24 / 0x10];
    v27 = nullptr;
    while ( 1 )
    {
      v28 = v26->m128i_i64[0];
      if ( v26->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v28 + 12) == v23 && a2 == v28 )
        {
          v26->m128i_i64[0] = a2;
          v26->m128i_i64[1] = v13;
          goto LABEL_37;
        }
      }
      else
      {
        if ( !v28 )
        {
          if ( v27 )
            goto LABEL_73;
          v27 = (__int64 *)v26;
          goto LABEL_74;
        }
        v27 = (__int64 *)v26;
      }
      if ( ++v26 == (__m128i *)v22 )
        goto LABEL_32;
    }
  }
  v27 = nullptr;
  while ( 1 )
  {
LABEL_32:
    if ( v25 == v19 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v31 = v19->m128i_i64[0];
    if ( v19->m128i_i64[0] <= 1uLL )
      break;
    if ( *(_DWORD *)(v31 + 12) == v23 && a2 == v31 )
    {
      v19->m128i_i64[0] = a2;
      v19->m128i_i64[1] = v13;
      goto LABEL_37;
    }
LABEL_31:
    ++v19;
  }
  if ( v31 )
  {
    v27 = (__int64 *)v19;
    goto LABEL_31;
  }
  if ( v27 )
LABEL_73:
    --*(_DWORD *)(a1 + 40);
  else
    v27 = (__int64 *)v19;
LABEL_74:
  *v27 = a2;
  v27[1] = v13;
  ++*(_DWORD *)(a1 + 36);
LABEL_37:
  v32 = *(_QWORD **)(a1 + 72);
  ++*(_DWORD *)(a2 + 8);
  if ( v32 )
  {
    v33 = *((_DWORD *)v32 - 1);
    if ( v33 != *((_DWORD *)v32 - 2) )
    {
      v34 = v33;
      v35 = v33 + 1;
      v36 = &v32[v34];
      goto LABEL_40;
    }
    v42 = (3 * v33 + 1) >> 1;
    v43 = 8 * v42 + 8;
    if ( 8 * v33 + 8 < v43 && v33 < v42 )
    {
      v44 = (unsigned int *)sub_186B300(v32 - 1, v43);
      v45 = v44[1];
      v32 = v44 + 2;
      *v44 = v42;
      *(_QWORD *)(a1 + 72) = v44 + 2;
      LODWORD(v44) = v45;
      v36 = &v32[v45];
      v35 = (_DWORD)v44 + 1;
      goto LABEL_40;
    }
LABEL_84:
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_137C7A(v66);
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v66);
    sub_233E40((__int64)v66);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  v58 = (_QWORD *)sub_186B270(0x18u);
  *v58 = 2;
  v35 = 1;
  v32 = v58 + 1;
  *(_QWORD *)(a1 + 72) = v32;
  v36 = v32;
LABEL_40:
  *v36 = a2;
  *((_DWORD *)v32 - 1) = v35;
  v37 = *(_QWORD **)(a1 + 80);
  if ( v37 )
  {
    v38 = *((_DWORD *)v37 - 1);
    if ( v38 == *((_DWORD *)v37 - 2) )
    {
      v46 = (3 * v38 + 1) >> 1;
      v47 = 8 * v46 + 8;
      if ( 8 * v38 + 8 >= v47 || v38 >= v46 )
        goto LABEL_84;
      v48 = (unsigned int *)sub_186B300(v37 - 1, v47);
      v49 = v48[1];
      v37 = v48 + 2;
      *v48 = v46;
      *(_QWORD *)(a1 + 80) = v48 + 2;
      LODWORD(v48) = v49;
      v41 = &v37[v49];
      v40 = (_DWORD)v48 + 1;
    }
    else
    {
      v39 = v38;
      v40 = v38 + 1;
      v41 = &v37[v39];
    }
  }
  else
  {
    v59 = (_QWORD *)sub_186B270(0x18u);
    *v59 = 2;
    v40 = 1;
    v37 = v59 + 1;
    *(_QWORD *)(a1 + 80) = v37;
    v41 = v37;
  }
  *v41 = v13;
  *((_DWORD *)v37 - 1) = v40;
  return v13;
}

