__int64 __fastcall sub_6147C0(__int64 a1, __int64 a2, __int64 a3)
{
  char **exception; // rbx
  __int64 v7; // r8
  __int64 *v8; // rbx
  unsigned int v9; // r9d
  __int64 v10; // r8
  __int64 *v11; // r14
  int v12; // ecx
  __int64 v13; // r9
  __int64 *v14; // rdi
  __int64 *v15; // rax
  __int64 *v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 *v20; // rbx
  unsigned int v21; // r9d
  __int64 v22; // rcx
  char *v23; // r14
  int v24; // esi
  __int64 v25; // r9
  __int64 *v26; // rdi
  __int64 result; // rax
  _QWORD *v28; // rcx
  __int64 v29; // rdx
  _QWORD *v30; // rdx
  unsigned int v31; // eax
  __int64 v32; // rcx
  __int64 *v33; // rcx
  __int64 *v34; // rax
  int v35; // r10d
  __m128i *v36; // r8
  const __m128i *v37; // r15
  __m128i *v38; // r11
  __int64 v39; // rax
  __int64 *v40; // rdx
  __m128i *v41; // rax
  __m128i v42; // xmm0
  __int64 *v43; // rax
  int v44; // ecx
  char *v45; // r15
  char *v46; // r10
  __int64 v47; // rax
  __int64 *v48; // rdx
  __int64 *v49; // rax
  __int64 v50; // rdx
  unsigned int v51; // ebx
  unsigned int v52; // ecx
  unsigned int *v53; // rax
  __int64 v54; // rcx
  _QWORD *v55; // rdx
  __int64 n; // [rsp+8h] [rbp-90h]
  unsigned int nb; // [rsp+8h] [rbp-90h]
  __int64 na; // [rsp+8h] [rbp-90h]
  unsigned int nc; // [rsp+8h] [rbp-90h]
  int v60; // [rsp+10h] [rbp-88h]
  __int64 v61; // [rsp+10h] [rbp-88h]
  int v62; // [rsp+10h] [rbp-88h]
  __int64 v63; // [rsp+10h] [rbp-88h]
  int v64; // [rsp+18h] [rbp-80h]
  int v65; // [rsp+18h] [rbp-80h]
  __int64 v66[11]; // [rsp+40h] [rbp-58h] BYREF

  v7 = *(unsigned int *)(a1 + 64);
  if ( 3 * (int)v7 < (unsigned int)(4 * (*(_DWORD *)(a1 + 68) + *(_DWORD *)(a1 + 72))) )
  {
    v62 = 2 * v7;
    na = 8LL * (unsigned int)(2 * v7);
    v43 = (__int64 *)sub_186B270(na);
    v44 = v62;
    v10 = na;
    v8 = v43;
    if ( v62 )
    {
      memset(v43, 0, na);
      v10 = na;
      v44 = v62;
    }
    v45 = *(char **)(a1 + 56);
    v9 = v44 - 1;
    v11 = (__int64 *)((char *)v8 + v10);
    v46 = &v45[8 * *(unsigned int *)(a1 + 64)];
    if ( v45 != v46 )
    {
      do
      {
        while ( *(_QWORD *)v45 <= 1u )
        {
          v45 += 8;
          if ( v46 == v45 )
            goto LABEL_76;
        }
        v47 = 8LL * (*(_DWORD *)(*(_QWORD *)v45 + 12LL) & v9);
        v48 = &v8[(unsigned __int64)v47 / 8];
        if ( v10 == v47 )
        {
LABEL_80:
          if ( v8 == v48 )
          {
LABEL_94:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v49 = v8;
          while ( *v49 )
          {
            if ( v48 == ++v49 )
              goto LABEL_94;
          }
        }
        else
        {
          v49 = &v8[(unsigned __int64)v47 / 8];
          while ( *v49 )
          {
            if ( v11 == ++v49 )
              goto LABEL_80;
          }
        }
        v50 = *(_QWORD *)v45;
        v45 += 8;
        *v49 = v50;
      }
      while ( v46 != v45 );
LABEL_76:
      v46 = *(char **)(a1 + 56);
    }
    if ( v46 )
    {
      v65 = v44;
      v63 = v10;
      nc = v44 - 1;
      sub_186B220(v46);
      v44 = v65;
      v10 = v63;
      v9 = nc;
    }
    *(_QWORD *)(a1 + 56) = v8;
    *(_DWORD *)(a1 + 64) = v44;
    *(_DWORD *)(a1 + 72) = 0;
  }
  else
  {
    v8 = *(__int64 **)(a1 + 56);
    v9 = v7 - 1;
    v10 = 8 * v7;
    v11 = (__int64 *)((char *)v8 + v10);
  }
  v12 = *(_DWORD *)(a2 + 12);
  v13 = v12 & v9;
  v14 = &v8[v13];
  if ( 8 * v13 != v10 )
  {
    v15 = &v8[v13];
    v16 = nullptr;
    while ( 1 )
    {
      v17 = *v15;
      if ( (unsigned __int64)*v15 > 1 )
      {
        if ( *(_DWORD *)(v17 + 12) == v12 && a2 == v17 )
        {
          *v15 = a2;
          goto LABEL_19;
        }
      }
      else
      {
        if ( !v17 )
        {
          if ( v16 )
            goto LABEL_86;
          v16 = v15;
          goto LABEL_87;
        }
        v16 = v15;
      }
      if ( ++v15 == v11 )
        goto LABEL_14;
    }
  }
  v16 = nullptr;
  while ( 1 )
  {
LABEL_14:
    if ( v14 == v8 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v18 = *v8;
    if ( (unsigned __int64)*v8 <= 1 )
      break;
    if ( *(_DWORD *)(v18 + 12) == v12 && a2 == v18 )
    {
      *v8 = a2;
      goto LABEL_19;
    }
LABEL_13:
    ++v8;
  }
  if ( v18 )
  {
    v16 = v8;
    goto LABEL_13;
  }
  if ( v16 )
LABEL_86:
    --*(_DWORD *)(a1 + 72);
  else
    v16 = v8;
LABEL_87:
  *v16 = a2;
  ++*(_DWORD *)(a1 + 68);
LABEL_19:
  v19 = *(unsigned int *)(a1 + 88);
  if ( 3 * (int)v19 < (unsigned int)(4 * (*(_DWORD *)(a1 + 92) + *(_DWORD *)(a1 + 96))) )
  {
    v60 = 2 * v19;
    n = 16LL * (unsigned int)(2 * v19);
    v34 = (__int64 *)sub_186B270(n);
    v22 = n;
    v35 = v60;
    v20 = v34;
    v36 = (__m128i *)&v34[(unsigned __int64)n / 8];
    if ( v60 )
    {
      if ( (n & 0x10) == 0 || (*(_OWORD *)v34 = 0, v34 += 2, v36 != (__m128i *)v34) )
      {
        do
        {
          *(_OWORD *)v34 = 0;
          v34 += 4;
          *((_OWORD *)v34 - 1) = 0;
        }
        while ( v36 != (__m128i *)v34 );
      }
    }
    v37 = *(const __m128i **)(a1 + 80);
    v21 = v60 - 1;
    v23 = (char *)v36;
    v38 = (__m128i *)&v37[*(unsigned int *)(a1 + 88)];
    if ( v37 != v38 )
    {
      do
      {
        while ( v37->m128i_i64[0] <= 1uLL )
        {
          if ( v38 == ++v37 )
            goto LABEL_56;
        }
        v39 = 16LL * (*(_DWORD *)(v37->m128i_i64[0] + 12) & v21);
        v40 = &v20[(unsigned __int64)v39 / 8];
        if ( n == v39 )
        {
LABEL_60:
          if ( v20 == v40 )
          {
LABEL_95:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v41 = (__m128i *)v20;
          while ( v41->m128i_i64[0] )
          {
            if ( v40 == (__int64 *)++v41 )
              goto LABEL_95;
          }
        }
        else
        {
          v41 = (__m128i *)&v20[(unsigned __int64)v39 / 8];
          while ( v41->m128i_i64[0] )
          {
            if ( v36 == ++v41 )
              goto LABEL_60;
          }
        }
        v42 = _mm_loadu_si128(v37++);
        *v41 = v42;
      }
      while ( v38 != v37 );
LABEL_56:
      v38 = *(__m128i **)(a1 + 80);
    }
    if ( v38 )
    {
      v64 = v60;
      v61 = n;
      nb = v35 - 1;
      sub_186B220(v38);
      v35 = v64;
      v22 = v61;
      v21 = nb;
    }
    *(_QWORD *)(a1 + 80) = v20;
    *(_DWORD *)(a1 + 88) = v35;
    *(_DWORD *)(a1 + 96) = 0;
  }
  else
  {
    v20 = *(__int64 **)(a1 + 80);
    v21 = v19 - 1;
    v22 = 16 * v19;
    v23 = (char *)v20 + v22;
  }
  v24 = *(_DWORD *)(a2 + 12);
  v25 = 16LL * (v24 & v21);
  v26 = &v20[(unsigned __int64)v25 / 8];
  if ( v25 != v22 )
  {
    result = (__int64)&v20[(unsigned __int64)v25 / 8];
    v28 = nullptr;
    while ( 1 )
    {
      v29 = *(_QWORD *)result;
      if ( *(_QWORD *)result > 1u )
      {
        if ( *(_DWORD *)(v29 + 12) == v24 && a2 == v29 )
        {
          *(_QWORD *)result = a2;
          *(_QWORD *)(result + 8) = a3;
          goto LABEL_37;
        }
      }
      else
      {
        if ( !v29 )
        {
          if ( v28 )
            goto LABEL_89;
          v28 = (_QWORD *)result;
          goto LABEL_90;
        }
        v28 = (_QWORD *)result;
      }
      result += 16;
      if ( (char *)result == v23 )
        goto LABEL_32;
    }
  }
  v28 = nullptr;
LABEL_32:
  while ( 2 )
  {
    if ( v26 == v20 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    result = *v20;
    if ( (unsigned __int64)*v20 > 1 )
    {
      if ( *(_DWORD *)(result + 12) == v24 && a2 == result )
      {
        *v20 = a2;
        v20[1] = a3;
        goto LABEL_37;
      }
      goto LABEL_31;
    }
    if ( result )
    {
      v28 = v20;
LABEL_31:
      v20 += 2;
      continue;
    }
    break;
  }
  if ( v28 )
LABEL_89:
    --*(_DWORD *)(a1 + 96);
  else
    v28 = v20;
LABEL_90:
  *v28 = a2;
  v28[1] = a3;
  ++*(_DWORD *)(a1 + 92);
LABEL_37:
  *(_BYTE *)(a1 + 128) = 1;
  if ( a3 )
  {
    sub_62A000(*(_QWORD *)(a1 + 40), a3);
    v30 = *(_QWORD **)(a1 + 48);
    if ( v30 )
    {
      v31 = *((_DWORD *)v30 - 1);
      if ( v31 == *((_DWORD *)v30 - 2) )
      {
        v51 = (3 * v31 + 1) >> 1;
        v52 = 8 * v51 + 8;
        if ( 8 * v31 + 8 >= v52 || v31 >= v51 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v66, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v66);
          sub_233E40((__int64)v66);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v53 = (unsigned int *)sub_186B300(v30 - 1, v52);
        v54 = v53[1];
        v30 = v53 + 2;
        *v53 = v51;
        *(_QWORD *)(a1 + 48) = v53 + 2;
        LODWORD(v53) = v54;
        v33 = &v30[v54];
        result = (unsigned int)((_DWORD)v53 + 1);
      }
      else
      {
        v32 = v31;
        result = v31 + 1;
        v33 = &v30[v32];
      }
    }
    else
    {
      v55 = (_QWORD *)sub_186B270(0x18u);
      *v55 = 2;
      result = 1;
      v30 = v55 + 1;
      *(_QWORD *)(a1 + 48) = v30;
      v33 = v30;
    }
    *v33 = a3;
    *((_DWORD *)v30 - 1) = result;
  }
  return result;
}

