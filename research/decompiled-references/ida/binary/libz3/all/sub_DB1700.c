__int64 __fastcall sub_DB1700(__int64 a1, __int64 a2, void **a3, unsigned int a4)
{
  char **exception; // rbx
  __int64 v9; // rdx
  __int64 result; // rax
  __int64 v11; // rdx
  __int64 v12; // r10
  int v13; // edi
  __int64 *v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 *v17; // r11
  __int64 *v18; // rsi
  __int64 v19; // rdx
  char *v20; // rax
  __m128i v21; // xmm0
  _QWORD *v22; // rax
  _DWORD *v23; // rsi
  size_t v24; // rdx
  int v25; // esi
  unsigned int v26; // r13d
  __int64 v27; // r14
  size_t v28; // rcx
  int v29; // edi
  __int64 v30; // r12
  __int64 v31; // r10
  __int64 v32; // r12
  __int64 v33; // r13
  __int64 v34; // rdx
  __int64 v35; // rdx
  _QWORD *v36; // rdx
  unsigned int v37; // eax
  __int64 v38; // rcx
  _QWORD *v39; // rcx
  unsigned int v40; // r12d
  unsigned int v41; // ecx
  unsigned int *v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rax
  _QWORD *v45; // rcx
  _QWORD *v46; // rdx
  __int64 v47; // rdx
  __int64 v48; // rcx
  char *v49; // rsi
  __int64 v50; // rdx
  char *v51; // r11
  char *v52; // r12
  char *v53; // r15
  __int64 v54; // rdi
  __int64 v55; // rdi
  __int64 v56; // rsi
  __int64 v57; // r15
  __int64 v58; // rdx
  unsigned __int64 v59; // rdx
  __int64 v60; // rax
  void *v61; // rax
  __int64 v62; // rax
  void *v63; // rax
  _QWORD *v64; // rdx
  __int64 v65; // rdx
  void *v66; // rax
  void *dest; // [rsp+0h] [rbp-98h]
  __int64 v68; // [rsp+8h] [rbp-90h]
  size_t v69; // [rsp+10h] [rbp-88h]
  size_t v70; // [rsp+18h] [rbp-80h]
  __int64 v71; // [rsp+20h] [rbp-78h]
  unsigned int v72; // [rsp+28h] [rbp-70h]
  unsigned int v73; // [rsp+2Ch] [rbp-6Ch]
  __int64 v74[11]; // [rsp+40h] [rbp-58h] BYREF

  v9 = *(unsigned int *)(a1 + 100);
  if ( (_DWORD)v9 )
  {
    result = *(_QWORD *)(a1 + 104);
    v11 = result + 8 * v9;
    do
    {
      if ( *(_QWORD *)result == a2 )
        return result;
      result += 8;
    }
    while ( v11 != result );
  }
  v12 = *(unsigned int *)(a1 + 128);
  v13 = *(_DWORD *)(a2 + 12);
  v14 = *(__int64 **)(a1 + 120);
  v15 = 24LL * (v13 & (unsigned int)(v12 - 1));
  v16 = 24LL * *(unsigned int *)(a1 + 128);
  v17 = &v14[(unsigned __int64)v15 / 8];
  v18 = &v14[(unsigned __int64)v16 / 8];
  if ( v15 != v16 )
  {
    for ( result = (__int64)&v14[(unsigned __int64)v15 / 8]; v18 != (__int64 *)result; result += 24 )
    {
      v19 = *(_QWORD *)result;
      if ( *(_QWORD *)result > 1u )
      {
        if ( *(_DWORD *)(v19 + 12) == v13 && a2 == v19 )
          return result;
      }
      else if ( !v19 )
      {
        goto LABEL_13;
      }
    }
  }
  for ( ; v17 != v14; v14 += 3 )
  {
    result = *v14;
    if ( (unsigned __int64)*v14 > 1 )
    {
      if ( *(_DWORD *)(result + 12) == v13 && a2 == result )
        return result;
    }
    else if ( !result )
    {
      break;
    }
  }
LABEL_13:
  v20 = (char *)*a3;
  dest = v20;
  if ( v20 )
  {
    v21 = _mm_loadl_epi64((const __m128i *)(v20 - 8));
    v72 = a4;
    v22 = (_QWORD *)sub_186B270(4LL * (unsigned int)_mm_cvtsi128_si32(v21) + 8);
    a4 = v72;
    dest = v22 + 1;
    v23 = *a3;
    *v22 = v21.m128i_i64[0];
    if ( v23 )
    {
      v24 = 4LL * (unsigned int)*(v23 - 1);
      if ( v24 <= 4 )
      {
        v12 = *(unsigned int *)(a1 + 128);
        if ( v24 == 4 )
          *((_DWORD *)v22 + 2) = *v23;
      }
      else
      {
        v72 = a4;
        memmove(dest, v23, v24);
        v12 = *(unsigned int *)(a1 + 128);
        a4 = v72;
      }
    }
    else
    {
      v12 = *(unsigned int *)(a1 + 128);
    }
  }
  v25 = *(_DWORD *)(a1 + 136);
  v26 = 2 * v12;
  if ( 3 * (int)v12 < (unsigned int)(4 * (v25 + *(_DWORD *)(a1 + 132))) )
  {
    v72 = a4;
    v68 = 24LL * v26;
    v71 = v68;
    v44 = sub_186B270(v68);
    a4 = v72;
    v27 = v44;
    if ( v26 )
    {
      v45 = (_QWORD *)(v44 + 24LL * v26);
      v46 = (_QWORD *)v44;
      do
      {
        *v46 = 0;
        v46 += 3;
        *((_DWORD *)v46 - 2) = 0;
      }
      while ( v45 != v46 );
      v47 = v44;
      if ( ((24 * (_BYTE)v26) & 8) == 0 || (v47 = v44 + 24, *(_QWORD *)(v44 + 8) = 0, (_QWORD *)(v44 + 24) != v45) )
      {
        do
        {
          *(_QWORD *)(v47 + 8) = 0;
          v47 += 48;
          *(_QWORD *)(v47 - 16) = 0;
        }
        while ( (_QWORD *)v47 != v45 );
      }
    }
    v48 = *(unsigned int *)(a1 + 128);
    v49 = *(char **)(a1 + 120);
    v72 = v26 - 1;
    v50 = v48;
    v51 = v49 + 8;
    v52 = &v49[24 * v48];
    v28 = v44 + v68;
    if ( v49 == v52 )
    {
LABEL_57:
      if ( v52 )
      {
        if ( (_DWORD)v50 )
        {
          v53 = v52;
          v68 = (__int64)&v52[24 * v50];
          do
          {
            while ( 1 )
            {
              v54 = *((_QWORD *)v53 + 1);
              if ( !v54 )
                break;
              LODWORD(v70) = a4;
              v53 += 24;
              v69 = v28;
              sub_186B220((void *)(v54 - 8));
              v28 = v69;
              a4 = v70;
              if ( (char *)v68 == v53 )
                goto LABEL_62;
            }
            v53 += 24;
          }
          while ( v53 != (char *)v68 );
        }
LABEL_62:
        LODWORD(v69) = a4;
        v68 = v28;
        sub_186B220(v52);
        v28 = v68;
        a4 = v69;
      }
      *(_QWORD *)(a1 + 120) = v27;
      v25 = 0;
      *(_DWORD *)(a1 + 128) = v26;
      *(_DWORD *)(a1 + 136) = 0;
      goto LABEL_19;
    }
    while ( 1 )
    {
      v59 = *((_QWORD *)v51 - 1);
      if ( v59 > 1 )
        break;
LABEL_73:
      if ( v52 == v51 + 16 )
      {
        v50 = *(unsigned int *)(a1 + 128);
        v52 = *(char **)(a1 + 120);
        goto LABEL_57;
      }
      v51 += 24;
    }
    v55 = 24LL * (*(_DWORD *)(v59 + 12) & v72);
    v56 = v27 + v55;
    if ( v68 == v55 )
    {
LABEL_77:
      if ( v27 == v56 )
      {
LABEL_92:
        v73 = a4;
        v70 = v28;
        v69 = (size_t)v51;
        sub_1872CE0("");
        sub_1873130(114, 213);
      }
      v57 = v27;
      while ( *(_QWORD *)v57 )
      {
        v57 += 24;
        if ( v56 == v57 )
          goto LABEL_92;
      }
      *(_QWORD *)v57 = v59;
      if ( v51 == (char *)(v57 + 8) )
        goto LABEL_72;
      v58 = *(_QWORD *)(v57 + 8);
      if ( !v58 )
      {
LABEL_71:
        *(_QWORD *)(v57 + 8) = 0;
        *(_QWORD *)(v57 + 8) = *(_QWORD *)v51;
        *(_QWORD *)v51 = 0;
LABEL_72:
        *(_DWORD *)(v57 + 16) = *((_DWORD *)v51 + 2);
        goto LABEL_73;
      }
    }
    else
    {
      v57 = v27 + v55;
      while ( *(_QWORD *)v57 )
      {
        v57 += 24;
        if ( v28 == v57 )
          goto LABEL_77;
      }
      *(_QWORD *)v57 = v59;
      if ( v51 == (char *)(v57 + 8) )
        goto LABEL_72;
      v58 = *(_QWORD *)(v57 + 8);
      if ( !v58 )
        goto LABEL_71;
    }
    v73 = a4;
    v70 = v28;
    v69 = (size_t)v51;
    sub_186B220((void *)(v58 - 8));
    a4 = v73;
    v28 = v70;
    v51 = (char *)v69;
    goto LABEL_71;
  }
  v27 = *(_QWORD *)(a1 + 120);
  v72 = v12 - 1;
  v71 = 24 * v12;
  v28 = v27 + 24 * v12;
LABEL_19:
  v29 = *(_DWORD *)(a2 + 12);
  v30 = v29 & v72;
  v31 = v27 + 24 * v30;
  if ( 24 * v30 == v71 )
  {
    v33 = 0;
    while ( 1 )
    {
LABEL_38:
      if ( v31 == v27 )
      {
        sub_1872CE0("");
        sub_1873130(114, 405);
      }
      v35 = *(_QWORD *)v27;
      if ( *(_QWORD *)v27 > 1u )
      {
        if ( *(_DWORD *)(v35 + 12) == v29 && a2 == v35 )
        {
          v65 = *(_QWORD *)(v27 + 8);
          *(_QWORD *)v27 = a2;
          if ( v65 )
          {
            v72 = a4;
            sub_186B220((void *)(v65 - 8));
            a4 = v72;
          }
          v66 = dest;
          *(_DWORD *)(v27 + 16) = a4;
          *(_QWORD *)(v27 + 8) = v66;
          goto LABEL_43;
        }
      }
      else
      {
        if ( !v35 )
        {
          if ( v33 )
            *(_DWORD *)(a1 + 136) = v25 - 1;
          else
            v33 = v27;
          v60 = *(_QWORD *)(v33 + 8);
          *(_QWORD *)v33 = a2;
          if ( v60 )
            goto LABEL_89;
          goto LABEL_90;
        }
        v33 = v27;
      }
      v27 += 24;
    }
  }
  v32 = v27 + 24 * v30;
  v33 = 0;
  while ( 1 )
  {
    v34 = *(_QWORD *)v32;
    if ( *(_QWORD *)v32 <= 1u )
      break;
    if ( *(_DWORD *)(v34 + 12) == v29 && a2 == v34 )
    {
      v62 = *(_QWORD *)(v32 + 8);
      *(_QWORD *)v32 = a2;
      if ( v62 )
      {
        v72 = a4;
        sub_186B220((void *)(v62 - 8));
        a4 = v72;
      }
      v63 = dest;
      *(_DWORD *)(v32 + 16) = a4;
      *(_QWORD *)(v32 + 8) = v63;
      goto LABEL_43;
    }
LABEL_23:
    v32 += 24;
    if ( v32 == v28 )
      goto LABEL_38;
  }
  if ( v34 )
  {
    v33 = v32;
    goto LABEL_23;
  }
  if ( v33 )
    *(_DWORD *)(a1 + 136) = v25 - 1;
  else
    v33 = v32;
  v60 = *(_QWORD *)(v33 + 8);
  *(_QWORD *)v33 = a2;
  if ( !v60 )
    goto LABEL_90;
LABEL_89:
  v72 = a4;
  sub_186B220((void *)(v60 - 8));
  a4 = v72;
LABEL_90:
  v61 = dest;
  *(_DWORD *)(v33 + 16) = a4;
  *(_QWORD *)(v33 + 8) = v61;
  ++*(_DWORD *)(a1 + 132);
LABEL_43:
  v36 = *(_QWORD **)(a1 + 152);
  ++*(_DWORD *)(a2 + 8);
  if ( v36 )
  {
    v37 = *((_DWORD *)v36 - 1);
    if ( v37 == *((_DWORD *)v36 - 2) )
    {
      v40 = (3 * v37 + 1) >> 1;
      v41 = 8 * v40 + 8;
      if ( 8 * v37 + 8 >= v41 || v37 >= v40 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v74, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v74);
        sub_233E40((__int64)v74);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v42 = (unsigned int *)sub_186B300(v36 - 1, v41);
      v43 = v42[1];
      v36 = v42 + 2;
      *v42 = v40;
      *(_QWORD *)(a1 + 152) = v42 + 2;
      LODWORD(v42) = v43;
      v39 = &v36[v43];
      result = (unsigned int)((_DWORD)v42 + 1);
    }
    else
    {
      v38 = v37;
      result = v37 + 1;
      v39 = &v36[v38];
    }
  }
  else
  {
    v64 = (_QWORD *)sub_186B270(0x18u);
    *v64 = 2;
    result = 1;
    v36 = v64 + 1;
    *(_QWORD *)(a1 + 152) = v36;
    v39 = v36;
  }
  *v39 = a2;
  *((_DWORD *)v36 - 1) = result;
  return result;
}

