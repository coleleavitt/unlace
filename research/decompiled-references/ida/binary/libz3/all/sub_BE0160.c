_QWORD *__fastcall sub_BE0160(__int64 a1, __int64 a2)
{
  char **v2; // rbp
  char **exception; // rbp
  __int64 v6; // rax
  int v7; // ebp
  __int64 v8; // rax
  int v9; // edi
  __int64 *v10; // rcx
  unsigned int v11; // edx
  __int64 *v12; // rsi
  __int64 v13; // rdx
  __int64 *v14; // r8
  __int64 *i; // rax
  __int64 v16; // rdx
  unsigned int v17; // r14d
  _QWORD *v18; // r13
  __int64 v19; // rax
  __int64 v20; // rsi
  int v21; // eax
  __int64 *v22; // rsi
  __int64 v23; // rax
  __int64 v24; // r15
  _QWORD *v25; // rdx
  unsigned int v26; // eax
  unsigned int v27; // r8d
  size_t v28; // rsi
  unsigned int *v29; // rax
  __int64 v30; // rsi
  unsigned int v31; // edx
  __m128i *v32; // rbp
  int v33; // r9d
  __int64 v34; // rcx
  __int64 *v35; // r14
  int v36; // esi
  __int64 v37; // r9
  __m128i *v38; // rdi
  __m128i *v39; // rax
  __int64 *v40; // rcx
  __int64 v41; // rdx
  __int64 v43; // rax
  __int64 v44; // rax
  _QWORD *v45; // rax
  _QWORD *v46; // rdx
  unsigned int v47; // eax
  __int64 v48; // rcx
  int v49; // eax
  __int64 *v50; // rcx
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
  size_t v64; // [rsp+8h] [rbp-A0h]
  int v65; // [rsp+8h] [rbp-A0h]
  unsigned int v66; // [rsp+10h] [rbp-98h]
  int v67; // [rsp+10h] [rbp-98h]
  size_t v68; // [rsp+10h] [rbp-98h]
  int v69; // [rsp+18h] [rbp-90h]
  _BYTE v70[16]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v71[11]; // [rsp+50h] [rbp-58h] BYREF

  v6 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 8LL);
  if ( v6 )
    v7 = *(_DWORD *)(v6 - 4) - 1;
  else
    v7 = -1;
  v8 = *(unsigned int *)(a1 + 128);
  v9 = *(_DWORD *)(a2 + 12);
  v10 = *(__int64 **)(a1 + 120);
  v11 = v8 - 1;
  v8 *= 16;
  v12 = (__int64 *)((char *)v10 + v8);
  v13 = 16LL * (v9 & v11);
  v14 = &v10[(unsigned __int64)v13 / 8];
  if ( v13 != v8 )
  {
    for ( i = &v10[(unsigned __int64)v13 / 8]; v12 != i; i += 2 )
    {
      v16 = *i;
      if ( (unsigned __int64)*i > 1 )
      {
        if ( *(_DWORD *)(v16 + 12) == v9 && v16 == a2 )
          return (_QWORD *)i[1];
      }
      else if ( !v16 )
      {
        goto LABEL_10;
      }
    }
  }
  for ( ; v14 != v10; v10 += 2 )
  {
    v43 = *v10;
    if ( (unsigned __int64)*v10 > 1 )
    {
      if ( *(_DWORD *)(v43 + 12) == v9 && v43 == a2 )
      {
        i = v10;
        return (_QWORD *)i[1];
      }
    }
    else if ( !v43 )
    {
      break;
    }
  }
LABEL_10:
  v17 = 0;
  sub_1684300(v70, *(_QWORD *)(a1 + 24));
  v18 = (_QWORD *)sub_186B270(0x10u);
  v19 = *(_QWORD *)(a1 + 24);
  v18[1] = 0;
  *v18 = v19;
  if ( v7 )
  {
    while ( 1 )
    {
      v23 = sub_16845A0(v70, a2, v17);
      v24 = v23;
      if ( v23 )
        ++*(_DWORD *)(v23 + 8);
      v25 = (_QWORD *)v18[1];
      if ( !v25 )
        break;
      v26 = *((_DWORD *)v25 - 1);
      if ( v26 == *((_DWORD *)v25 - 2) )
      {
        v27 = (3 * v26 + 1) >> 1;
        v28 = 8 * v27 + 8;
        if ( 8 * v26 + 8 >= (unsigned int)v28 || v26 >= v27 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v71, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v71);
          sub_233E40((__int64)v71);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v66 = (3 * v26 + 1) >> 1;
        ++v17;
        v29 = (unsigned int *)sub_186B300(v25 - 1, v28);
        v30 = v29[1];
        *v29 = v66;
        v18[1] = v29 + 2;
        *(_QWORD *)&v29[2 * v30 + 2] = v24;
        v29[1] = v30 + 1;
        if ( v17 == v7 )
          goto LABEL_21;
      }
      else
      {
        v20 = v26;
        v21 = v26 + 1;
        v22 = &v25[v20];
LABEL_13:
        ++v17;
        *v22 = v24;
        *((_DWORD *)v25 - 1) = v21;
        if ( v17 == v7 )
          goto LABEL_21;
      }
    }
    v45 = (_QWORD *)sub_186B270(0x18u);
    v25 = v45 + 1;
    *v45 = 2;
    v21 = 1;
    v18[1] = v25;
    v22 = v25;
    goto LABEL_13;
  }
LABEL_21:
  v31 = *(_DWORD *)(a1 + 128);
  if ( 3 * v31 < 4 * (*(_DWORD *)(a1 + 132) + *(_DWORD *)(a1 + 136)) )
  {
    v67 = 2 * v31;
    v64 = 32LL * v31;
    v55 = (__m128i *)sub_186B270(v64);
    v34 = v64;
    v56 = v67;
    v32 = v55;
    v57 = &v55[v64 / 0x10];
    if ( v67 )
    {
      if ( (v64 & 0x10) == 0 || (*v55 = 0, ++v55, v55 != v57) )
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
    v58 = *(const __m128i **)(a1 + 120);
    v33 = v67 - 1;
    v35 = (__int64 *)v57;
    v59 = (__m128i *)&v58[*(unsigned int *)(a1 + 128)];
    if ( v58 != v59 )
    {
      do
      {
        if ( v58->m128i_i64[0] > 1uLL )
        {
          v60 = 16LL * (*(_DWORD *)(v58->m128i_i64[0] + 12) & (unsigned int)v33);
          v61 = &v32[(unsigned __int64)v60 / 0x10];
          if ( v64 == v60 )
          {
LABEL_72:
            if ( v32 == v61 )
            {
LABEL_84:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v62 = v32;
            while ( v62->m128i_i64[0] )
            {
              if ( v61 == ++v62 )
                goto LABEL_84;
            }
          }
          else
          {
            v62 = &v32[(unsigned __int64)v60 / 0x10];
            while ( v62->m128i_i64[0] )
            {
              if ( v57 == ++v62 )
                goto LABEL_72;
            }
          }
          *v62 = _mm_loadu_si128(v58);
        }
        ++v58;
      }
      while ( v59 != v58 );
      v59 = *(__m128i **)(a1 + 120);
    }
    if ( v59 )
    {
      v69 = v67;
      v68 = v64;
      v65 = v56 - 1;
      sub_186B220(v59);
      v56 = v69;
      v34 = v68;
      v33 = v65;
    }
    *(_QWORD *)(a1 + 120) = v32;
    *(_DWORD *)(a1 + 128) = v56;
    *(_DWORD *)(a1 + 136) = 0;
  }
  else
  {
    v32 = *(__m128i **)(a1 + 120);
    v33 = v31 - 1;
    v34 = 16LL * v31;
    v35 = (__int64 *)((char *)v32->m128i_i64 + v34);
  }
  v36 = *(_DWORD *)(a2 + 12);
  v37 = 16LL * (v36 & (unsigned int)v33);
  v38 = &v32[(unsigned __int64)v37 / 0x10];
  if ( v37 != v34 )
  {
    v39 = &v32[(unsigned __int64)v37 / 0x10];
    v40 = nullptr;
    while ( 1 )
    {
      v41 = v39->m128i_i64[0];
      if ( v39->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v41 + 12) == v36 && v41 == a2 )
        {
          v39->m128i_i64[0] = a2;
          v39->m128i_i64[1] = (__int64)v18;
          goto LABEL_52;
        }
      }
      else
      {
        if ( !v41 )
        {
          if ( v40 )
            goto LABEL_82;
          v40 = (__int64 *)v39;
          goto LABEL_83;
        }
        v40 = (__int64 *)v39;
      }
      if ( ++v39 == (__m128i *)v35 )
        goto LABEL_45;
    }
  }
  v40 = nullptr;
  while ( 1 )
  {
LABEL_45:
    if ( v38 == v32 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v44 = v32->m128i_i64[0];
    if ( v32->m128i_i64[0] <= 1uLL )
      break;
    if ( *(_DWORD *)(v44 + 12) == v36 && v44 == a2 )
    {
      v32->m128i_i64[0] = a2;
      v32->m128i_i64[1] = (__int64)v18;
      goto LABEL_52;
    }
LABEL_44:
    ++v32;
  }
  if ( v44 )
  {
    v40 = (__int64 *)v32;
    goto LABEL_44;
  }
  if ( v40 )
LABEL_82:
    --*(_DWORD *)(a1 + 136);
  else
    v40 = (__int64 *)v32;
LABEL_83:
  *v40 = a2;
  v40[1] = (__int64)v18;
  ++*(_DWORD *)(a1 + 132);
LABEL_52:
  v46 = *(_QWORD **)(a1 + 112);
  if ( v46 )
  {
    v47 = *((_DWORD *)v46 - 1);
    if ( v47 == *((_DWORD *)v46 - 2) )
    {
      v51 = (3 * v47 + 1) >> 1;
      v52 = 8 * v51 + 8;
      if ( 8 * v47 + 8 >= v52 || v47 >= v51 )
      {
        v2 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v71, "Overflow encountered when expanding vector");
        *v2 = (char *)off_1C63128;
        sub_2333C0(v2 + 1, v71);
        sub_233E40((__int64)v71);
        __cxa_throw(v2, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v53 = (unsigned int *)sub_186B300(v46 - 1, v52);
      v54 = v53[1];
      v46 = v53 + 2;
      *v53 = v51;
      *(_QWORD *)(a1 + 112) = v53 + 2;
      LODWORD(v53) = v54;
      v50 = &v46[v54];
      v49 = (_DWORD)v53 + 1;
    }
    else
    {
      v48 = v47;
      v49 = v47 + 1;
      v50 = &v46[v48];
    }
  }
  else
  {
    v63 = (_QWORD *)sub_186B270(0x18u);
    *v63 = 2;
    v49 = 1;
    v46 = v63 + 1;
    *(_QWORD *)(a1 + 112) = v46;
    v50 = v46;
  }
  *v50 = a2;
  *((_DWORD *)v46 - 1) = v49;
  return v18;
}

