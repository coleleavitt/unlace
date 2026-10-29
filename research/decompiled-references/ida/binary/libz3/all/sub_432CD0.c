__int64 __fastcall sub_432CD0(__int64 *a1, __int64 a2)
{
  char **exception; // rbx
  __int64 v3; // rdx
  __int64 v6; // rax
  __int64 *v7; // rcx
  int v8; // edi
  unsigned int v9; // edx
  __int64 *v10; // rsi
  __int64 v11; // rdx
  __int64 *v12; // r8
  __int64 *i; // rax
  __int64 v14; // rdx
  __int64 v15; // rbp
  __int64 v16; // r13
  __int64 v17; // rax
  __int64 v18; // r14
  _QWORD *v19; // rdx
  unsigned int v20; // eax
  __int64 v21; // rcx
  int v22; // eax
  __int64 *v23; // rcx
  unsigned int v24; // edx
  __m128i *v25; // rbp
  int v26; // r9d
  __int64 v27; // rcx
  __int64 *v28; // r15
  int v29; // esi
  __int64 v30; // r9
  __m128i *v31; // rdi
  __m128i *v32; // rax
  __int64 *v33; // rcx
  __int64 v34; // rdx
  __int64 v36; // rax
  __int64 v37; // rax
  unsigned int v38; // ebp
  unsigned int v39; // ecx
  unsigned int *v40; // rax
  __int64 v41; // rcx
  unsigned int v42; // edx
  __int64 *v43; // rbp
  int v44; // r9d
  __int64 v45; // rcx
  __int64 *v46; // r12
  int v47; // esi
  __int64 v48; // r9
  __int64 *v49; // rdi
  __int64 *v50; // rax
  __int64 *v51; // rcx
  __int64 v52; // rdx
  __int64 v53; // rax
  __m128i *v54; // rax
  int v55; // r10d
  __m128i *v56; // r8
  const __m128i *v57; // rax
  __m128i *v58; // r11
  __int64 v59; // rdx
  __m128i *v60; // rsi
  __m128i *v61; // rdx
  __m128i *v62; // rax
  int v63; // r10d
  __m128i *v64; // r8
  const __m128i *v65; // r15
  __m128i *v66; // r11
  __int64 v67; // rax
  __m128i *v68; // rdx
  __m128i *v69; // rax
  _QWORD *v70; // rdx
  size_t v71; // [rsp+0h] [rbp-88h]
  int v72; // [rsp+0h] [rbp-88h]
  size_t v73; // [rsp+0h] [rbp-88h]
  int v74; // [rsp+0h] [rbp-88h]
  int v75; // [rsp+8h] [rbp-80h]
  size_t v76; // [rsp+8h] [rbp-80h]
  int v77; // [rsp+8h] [rbp-80h]
  size_t v78; // [rsp+8h] [rbp-80h]
  int v79; // [rsp+10h] [rbp-78h]
  int v80; // [rsp+10h] [rbp-78h]
  __int64 v81[11]; // [rsp+30h] [rbp-58h] BYREF

  v6 = *((unsigned int *)a1 + 8);
  v7 = (__int64 *)a1[3];
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
    v36 = *v7;
    if ( (unsigned __int64)*v7 > 1 )
    {
      if ( *(_DWORD *)(v36 + 12) == v8 && a2 == v36 )
      {
        i = v7;
        return i[1];
      }
    }
    else if ( !v36 )
    {
      break;
    }
  }
LABEL_8:
  v15 = *(_QWORD *)(*a1 + 8);
  v16 = sub_432480(*a1);
  sub_15E1A70(v15);
  v17 = sub_15E1B70(v15);
  v18 = v17;
  if ( v17 )
    ++*(_DWORD *)(v17 + 8);
  v19 = (_QWORD *)a1[2];
  if ( v19 )
  {
    v20 = *((_DWORD *)v19 - 1);
    if ( v20 == *((_DWORD *)v19 - 2) )
    {
      v38 = (3 * v20 + 1) >> 1;
      v39 = 8 * v38 + 8;
      if ( 8 * v20 + 8 >= v39 || v20 >= v38 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_D0F44(v81, "Overflow encountered when expanding vector", v3);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v81);
        sub_233E40((__int64)v81);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v40 = (unsigned int *)sub_186B300(v19 - 1, v39);
      v41 = v40[1];
      v19 = v40 + 2;
      *v40 = v38;
      a1[2] = (__int64)(v40 + 2);
      LODWORD(v40) = v41;
      v23 = &v19[v41];
      v22 = (_DWORD)v40 + 1;
    }
    else
    {
      v21 = v20;
      v22 = v20 + 1;
      v23 = &v19[v21];
    }
  }
  else
  {
    v70 = (_QWORD *)sub_186B270(0x18u);
    *v70 = 2;
    v22 = 1;
    v19 = v70 + 1;
    a1[2] = (__int64)v19;
    v23 = v19;
  }
  *v23 = v18;
  *((_DWORD *)v19 - 1) = v22;
  v24 = *((_DWORD *)a1 + 8);
  if ( 3 * v24 < 4 * (*((_DWORD *)a1 + 9) + *((_DWORD *)a1 + 10)) )
  {
    v75 = 2 * v24;
    v71 = 32LL * v24;
    v54 = (__m128i *)sub_186B270(v71);
    v27 = v71;
    v55 = v75;
    v25 = v54;
    v56 = &v54[v71 / 0x10];
    if ( v75 )
    {
      if ( (v71 & 0x10) == 0 || (*v54 = 0, ++v54, v56 != v54) )
      {
        do
        {
          *v54 = 0;
          v54 += 2;
          v54[-1] = 0;
        }
        while ( v56 != v54 );
      }
    }
    v57 = (const __m128i *)a1[3];
    v26 = v75 - 1;
    v28 = (__int64 *)v56;
    v58 = (__m128i *)&v57[*((unsigned int *)a1 + 8)];
    if ( v57 != v58 )
    {
      do
      {
        if ( v57->m128i_i64[0] > 1uLL )
        {
          v59 = 16LL * (*(_DWORD *)(v57->m128i_i64[0] + 12) & (unsigned int)v26);
          v60 = &v25[(unsigned __int64)v59 / 0x10];
          if ( v71 == v59 )
          {
LABEL_77:
            if ( v25 == v60 )
            {
LABEL_115:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v61 = v25;
            while ( v61->m128i_i64[0] )
            {
              if ( v60 == ++v61 )
                goto LABEL_115;
            }
          }
          else
          {
            v61 = &v25[(unsigned __int64)v59 / 0x10];
            while ( v61->m128i_i64[0] )
            {
              if ( v56 == ++v61 )
                goto LABEL_77;
            }
          }
          *v61 = _mm_loadu_si128(v57);
        }
        ++v57;
      }
      while ( v58 != v57 );
      v58 = (__m128i *)a1[3];
    }
    if ( v58 )
    {
      v79 = v75;
      v76 = v71;
      v72 = v55 - 1;
      sub_186B220(v58);
      v55 = v79;
      v27 = v76;
      v26 = v72;
    }
    a1[3] = (__int64)v25;
    *((_DWORD *)a1 + 8) = v55;
    *((_DWORD *)a1 + 10) = 0;
  }
  else
  {
    v25 = (__m128i *)a1[3];
    v26 = v24 - 1;
    v27 = 16LL * v24;
    v28 = (__int64 *)((char *)v25->m128i_i64 + v27);
  }
  v29 = *(_DWORD *)(a2 + 12);
  v30 = 16LL * (v29 & (unsigned int)v26);
  v31 = &v25[(unsigned __int64)v30 / 0x10];
  if ( v30 != v27 )
  {
    v32 = &v25[(unsigned __int64)v30 / 0x10];
    v33 = nullptr;
    while ( 1 )
    {
      v34 = v32->m128i_i64[0];
      if ( v32->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v34 + 12) == v29 && a2 == v34 )
        {
          v32->m128i_i64[0] = a2;
          v32->m128i_i64[1] = v16;
          goto LABEL_45;
        }
      }
      else
      {
        if ( !v34 )
        {
          if ( v33 )
            goto LABEL_109;
          v33 = (__int64 *)v32;
          goto LABEL_110;
        }
        v33 = (__int64 *)v32;
      }
      if ( ++v32 == (__m128i *)v28 )
        goto LABEL_37;
    }
  }
  v33 = nullptr;
  while ( 1 )
  {
LABEL_37:
    if ( v31 == v25 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v37 = v25->m128i_i64[0];
    if ( v25->m128i_i64[0] <= 1uLL )
      break;
    if ( *(_DWORD *)(v37 + 12) == v29 && a2 == v37 )
    {
      v25->m128i_i64[0] = a2;
      v25->m128i_i64[1] = v16;
      goto LABEL_45;
    }
LABEL_36:
    ++v25;
  }
  if ( v37 )
  {
    v33 = (__int64 *)v25;
    goto LABEL_36;
  }
  if ( v33 )
LABEL_109:
    --*((_DWORD *)a1 + 10);
  else
    v33 = (__int64 *)v25;
LABEL_110:
  *v33 = a2;
  v33[1] = v16;
  ++*((_DWORD *)a1 + 9);
LABEL_45:
  v42 = *((_DWORD *)a1 + 14);
  if ( 3 * v42 < 4 * (*((_DWORD *)a1 + 15) + *((_DWORD *)a1 + 16)) )
  {
    v77 = 2 * v42;
    v73 = 32LL * v42;
    v62 = (__m128i *)sub_186B270(v73);
    v45 = v73;
    v63 = v77;
    v43 = (__int64 *)v62;
    v64 = &v62[v73 / 0x10];
    if ( v77 )
    {
      if ( (v73 & 0x10) == 0 || (*v62 = 0, ++v62, v64 != v62) )
      {
        do
        {
          *v62 = 0;
          v62 += 2;
          v62[-1] = 0;
        }
        while ( v64 != v62 );
      }
    }
    v65 = (const __m128i *)a1[6];
    v44 = v77 - 1;
    v46 = (__int64 *)v64;
    v66 = (__m128i *)&v65[*((unsigned int *)a1 + 14)];
    if ( v65 != v66 )
    {
      do
      {
        if ( v65->m128i_i64[0] > 1uLL )
        {
          v67 = 16LL * (*(_DWORD *)(v65->m128i_i64[0] + 12) & (unsigned int)v44);
          v68 = (__m128i *)&v43[(unsigned __int64)v67 / 8];
          if ( v73 == v67 )
          {
LABEL_99:
            if ( v43 == (__int64 *)v68 )
            {
LABEL_114:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v69 = (__m128i *)v43;
            while ( v69->m128i_i64[0] )
            {
              if ( v68 == ++v69 )
                goto LABEL_114;
            }
          }
          else
          {
            v69 = (__m128i *)&v43[(unsigned __int64)v67 / 8];
            while ( v69->m128i_i64[0] )
            {
              if ( v64 == ++v69 )
                goto LABEL_99;
            }
          }
          *v69 = _mm_loadu_si128(v65);
        }
        ++v65;
      }
      while ( v66 != v65 );
      v66 = (__m128i *)a1[6];
    }
    if ( v66 )
    {
      v80 = v77;
      v78 = v73;
      v74 = v63 - 1;
      sub_186B220(v66);
      v63 = v80;
      v45 = v78;
      v44 = v74;
    }
    a1[6] = (__int64)v43;
    *((_DWORD *)a1 + 14) = v63;
    *((_DWORD *)a1 + 16) = 0;
  }
  else
  {
    v43 = (__int64 *)a1[6];
    v44 = v42 - 1;
    v45 = 16LL * v42;
    v46 = (__int64 *)((char *)v43 + v45);
  }
  v47 = *(_DWORD *)(v16 + 12);
  v48 = 16LL * (v47 & (unsigned int)v44);
  v49 = &v43[(unsigned __int64)v48 / 8];
  if ( v48 != v45 )
  {
    v50 = &v43[(unsigned __int64)v48 / 8];
    v51 = nullptr;
    while ( 1 )
    {
      v52 = *v50;
      if ( (unsigned __int64)*v50 > 1 )
      {
        if ( *(_DWORD *)(v52 + 12) == v47 && v16 == v52 )
        {
          *v50 = v16;
          v50[1] = v18;
          goto LABEL_63;
        }
      }
      else
      {
        if ( !v52 )
        {
          if ( v51 )
            goto LABEL_112;
          v51 = v50;
          goto LABEL_113;
        }
        v51 = v50;
      }
      v50 += 2;
      if ( v50 == v46 )
        goto LABEL_58;
    }
  }
  v51 = nullptr;
LABEL_58:
  while ( 2 )
  {
    if ( v49 == v43 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v53 = *v43;
    if ( (unsigned __int64)*v43 > 1 )
    {
      if ( *(_DWORD *)(v53 + 12) == v47 && v16 == v53 )
      {
        *v43 = v16;
        v43[1] = v18;
        goto LABEL_63;
      }
      goto LABEL_57;
    }
    if ( v53 )
    {
      v51 = v43;
LABEL_57:
      v43 += 2;
      continue;
    }
    break;
  }
  if ( v51 )
LABEL_112:
    --*((_DWORD *)a1 + 16);
  else
    v51 = v43;
LABEL_113:
  *v51 = v16;
  v51[1] = v18;
  ++*((_DWORD *)a1 + 15);
LABEL_63:
  sub_E5EBF0(*a1, v18);
  return v16;
}

