__int64 __fastcall sub_DBDC80(__int64 *a1, __int64 a2)
{
  __int64 v4; // r12
  __int64 v5; // rax
  int v6; // edi
  char *v7; // rcx
  __int64 v8; // rax
  unsigned int v9; // edx
  char *v10; // rsi
  __int64 v11; // rdx
  char *v12; // r8
  char *i; // rax
  __int64 v14; // rdx
  __int64 *v15; // r14
  _QWORD *v16; // rbx
  __int64 v17; // r10
  __int64 v18; // rax
  __int64 *v19; // rcx
  int v20; // edi
  unsigned int v21; // edx
  __int64 *v22; // rsi
  __int64 v23; // rdx
  __int64 *v24; // r9
  __int64 *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rdx
  unsigned int v29; // eax
  __int64 v30; // rcx
  int v31; // eax
  _QWORD *v32; // rcx
  char v33; // al
  int v34; // r8d
  int v35; // r9d
  __int64 v36; // rdi
  __int64 v37; // rax
  __int64 v38; // r8
  _QWORD *v39; // rdx
  unsigned int v40; // eax
  __int64 v41; // rcx
  int v42; // eax
  __int64 *v43; // rcx
  unsigned int v44; // edx
  __int64 v45; // r12
  int v46; // r9d
  __int64 v47; // rcx
  __m128i *v48; // r13
  int v49; // esi
  __int64 v50; // r9
  __int64 v51; // rdi
  __int64 result; // rax
  _QWORD *v53; // rcx
  __int64 v54; // rdx
  unsigned int v55; // ecx
  size_t v56; // rsi
  unsigned int *v57; // rax
  _QWORD *v58; // rax
  __int64 v59; // rax
  unsigned int v60; // r12d
  unsigned int v61; // ecx
  unsigned int *v62; // rax
  __int64 v63; // rcx
  __int64 v64; // rax
  int v65; // r10d
  __m128i *v66; // rdx
  __m128i *v67; // rax
  const __m128i *v68; // r14
  __m128i *v69; // r11
  __int64 v70; // rdx
  __m128i *v71; // rsi
  __m128i *v72; // rdx
  __m128i v73; // xmm0
  _QWORD *v74; // rdx
  char **exception; // r12
  char **v76; // r12
  __int64 v77; // [rsp+0h] [rbp-98h]
  __int64 v78; // [rsp+0h] [rbp-98h]
  size_t v79; // [rsp+0h] [rbp-98h]
  __int64 v80; // [rsp+0h] [rbp-98h]
  __int64 v81; // [rsp+0h] [rbp-98h]
  unsigned int v82; // [rsp+8h] [rbp-90h]
  int v83; // [rsp+8h] [rbp-90h]
  unsigned int v84; // [rsp+10h] [rbp-88h]
  int v85[2]; // [rsp+10h] [rbp-88h]
  int v86[2]; // [rsp+10h] [rbp-88h]
  int v87; // [rsp+18h] [rbp-80h]
  int v88; // [rsp+20h] [rbp-78h]
  char v89; // [rsp+28h] [rbp-70h]
  int v90; // [rsp+30h] [rbp-68h]
  int v91; // [rsp+38h] [rbp-60h]
  __int64 v92[11]; // [rsp+40h] [rbp-58h] BYREF

  v4 = *(_QWORD *)(a2 + 16);
  v84 = *(_DWORD *)(a2 + 24);
  v5 = a1[3];
  v6 = *(_DWORD *)(v4 + 12);
  v7 = *(char **)v5;
  v8 = *(unsigned int *)(v5 + 8);
  v9 = v8 - 1;
  v8 *= 16;
  v10 = &v7[v8];
  v11 = 16LL * (v6 & v9);
  v12 = &v7[v11];
  if ( v11 != v8 )
  {
    for ( i = &v7[v11]; v10 != i; i += 16 )
    {
      v14 = *(_QWORD *)i;
      if ( *(_QWORD *)i > 1u )
      {
        if ( *(_DWORD *)(v14 + 12) == v6 && v4 == v14 )
        {
LABEL_58:
          v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1[8] + 8LL * *((unsigned int *)i + 2)) + 16LL);
          goto LABEL_8;
        }
      }
      else if ( !v14 )
      {
        goto LABEL_8;
      }
    }
  }
  for ( ; v12 != v7; v7 += 16 )
  {
    v59 = *(_QWORD *)v7;
    if ( *(_QWORD *)v7 > 1u )
    {
      if ( *(_DWORD *)(v59 + 12) == v6 && v4 == v59 )
      {
        i = v7;
        goto LABEL_58;
      }
    }
    else if ( !v59 )
    {
      break;
    }
  }
LABEL_8:
  v15 = (__int64 *)(a2 + 32);
  v16 = nullptr;
  if ( !(8LL * v84) )
    goto LABEL_30;
  do
  {
    v17 = *v15;
    v18 = *((unsigned int *)a1 + 12);
    v19 = (__int64 *)a1[5];
    v20 = *(_DWORD *)(*v15 + 12);
    v21 = v18 - 1;
    v18 *= 16;
    v22 = (__int64 *)((char *)v19 + v18);
    v23 = 16LL * (v20 & v21);
    v24 = &v19[(unsigned __int64)v23 / 8];
    if ( v23 == v18 )
    {
LABEL_17:
      while ( v24 != v19 )
      {
        v27 = *v19;
        if ( (unsigned __int64)*v19 > 1 )
        {
          if ( *(_DWORD *)(v27 + 12) == v20 && v17 == v27 )
          {
            v25 = v19;
            goto LABEL_26;
          }
        }
        else if ( !v27 )
        {
          break;
        }
        v19 += 2;
      }
LABEL_16:
      BUG();
    }
    v25 = &v19[(unsigned __int64)v23 / 8];
    while ( 1 )
    {
      v26 = *v25;
      if ( (unsigned __int64)*v25 > 1 )
        break;
      if ( !v26 )
        goto LABEL_16;
LABEL_13:
      v25 += 2;
      if ( v22 == v25 )
        goto LABEL_17;
    }
    if ( *(_DWORD *)(v26 + 12) != v20 || v17 != v26 )
      goto LABEL_13;
LABEL_26:
    v28 = v25[1];
    if ( v16 )
    {
      v29 = *((_DWORD *)v16 - 1);
      if ( v29 == *((_DWORD *)v16 - 2) )
      {
        v55 = (3 * v29 + 1) >> 1;
        v56 = 8 * v55 + 8;
        if ( 8 * v29 + 8 >= (unsigned int)v56 || v29 >= v55 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v92, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v92);
          sub_233E40((__int64)v92);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v82 = (3 * v29 + 1) >> 1;
        v77 = v28;
        v57 = (unsigned int *)sub_186B300(v16 - 1, v56);
        v16 = v57 + 2;
        v28 = v77;
        *v57 = v82;
        LODWORD(v57) = v57[1];
        v32 = &v16[(unsigned int)v57];
        v31 = (_DWORD)v57 + 1;
      }
      else
      {
        v30 = v29;
        v31 = v29 + 1;
        v32 = &v16[v30];
      }
    }
    else
    {
      v77 = v25[1];
      v58 = (_QWORD *)sub_186B270(0x18u);
      v28 = v77;
      v16 = v58 + 1;
      *v58 = 2;
      v31 = 1;
      v32 = v16;
    }
    ++v15;
    *v32 = v28;
    *((_DWORD *)v16 - 1) = v31;
  }
  while ( (__int64 *)(a2 + 32 + 8LL * v84) != v15 );
LABEL_30:
  v33 = sub_15D3190(*a1, a2);
  v36 = *a1;
  if ( v33 )
    v37 = sub_15E1EC0(v36, v84, (int)v16);
  else
    v37 = sub_15DC610(v36, v4, v84, (int)v16, v34, v35, v77, v82, v84, v87, v88, v89, v90, v91, v92[0], (void *)v92[1]);
  v38 = v37;
  if ( v37 )
    ++*(_DWORD *)(v37 + 8);
  v39 = (_QWORD *)a1[2];
  if ( v39 )
  {
    v40 = *((_DWORD *)v39 - 1);
    if ( v40 == *((_DWORD *)v39 - 2) )
    {
      v60 = (3 * v40 + 1) >> 1;
      v61 = 8 * v60 + 8;
      if ( 8 * v40 + 8 >= v61 || v40 >= v60 )
      {
        v76 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v92, "Overflow encountered when expanding vector");
        *v76 = (char *)off_1C63128;
        sub_2333C0(v76 + 1, v92);
        sub_233E40((__int64)v92);
        __cxa_throw(v76, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v78 = v38;
      v62 = (unsigned int *)sub_186B300(v39 - 1, v61);
      v63 = v62[1];
      v39 = v62 + 2;
      v38 = v78;
      *v62 = v60;
      a1[2] = (__int64)(v62 + 2);
      LODWORD(v62) = v63;
      v43 = &v39[v63];
      v42 = (_DWORD)v62 + 1;
    }
    else
    {
      v41 = v40;
      v42 = v40 + 1;
      v43 = &v39[v41];
    }
  }
  else
  {
    v81 = v37;
    v74 = (_QWORD *)sub_186B270(0x18u);
    *v74 = 2;
    v38 = v81;
    v42 = 1;
    v39 = v74 + 1;
    a1[2] = (__int64)v39;
    v43 = v39;
  }
  *v43 = v38;
  *((_DWORD *)v39 - 1) = v42;
  v44 = *((_DWORD *)a1 + 12);
  if ( 3 * v44 < 4 * (*((_DWORD *)a1 + 13) + *((_DWORD *)a1 + 14)) )
  {
    *(_QWORD *)v85 = v38;
    v83 = 2 * v44;
    v79 = 32LL * v44;
    v64 = sub_186B270(v79);
    v65 = v83;
    v47 = v79;
    v45 = v64;
    v66 = (__m128i *)v64;
    v38 = *(_QWORD *)v85;
    v67 = (__m128i *)(v79 + v64);
    if ( v83 )
    {
      if ( (((_BYTE)v67 - (_BYTE)v45) & 0x10) == 0
        || (v66 = (__m128i *)(v45 + 16), *(_OWORD *)v45 = 0, (__m128i *)(v45 + 16) != v67) )
      {
        do
        {
          *v66 = 0;
          v66 += 2;
          v66[-1] = 0;
        }
        while ( v66 != v67 );
      }
    }
    v68 = (const __m128i *)a1[5];
    v46 = v83 - 1;
    v48 = v67;
    v69 = (__m128i *)&v68[*((unsigned int *)a1 + 12)];
    if ( v68 != v69 )
    {
      do
      {
        while ( v68->m128i_i64[0] <= 1uLL )
        {
          if ( v69 == ++v68 )
            goto LABEL_89;
        }
        v70 = 16LL * (*(_DWORD *)(v68->m128i_i64[0] + 12) & (unsigned int)v46);
        v71 = (__m128i *)(v45 + v70);
        if ( v79 == v70 )
        {
LABEL_93:
          if ( (__m128i *)v45 == v71 )
          {
LABEL_101:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v72 = (__m128i *)v45;
          while ( v72->m128i_i64[0] )
          {
            if ( v71 == ++v72 )
              goto LABEL_101;
          }
        }
        else
        {
          v72 = (__m128i *)(v45 + v70);
          while ( v72->m128i_i64[0] )
          {
            if ( v67 == ++v72 )
              goto LABEL_93;
          }
        }
        v73 = _mm_loadu_si128(v68++);
        *v72 = v73;
      }
      while ( v69 != v68 );
LABEL_89:
      v69 = (__m128i *)a1[5];
    }
    if ( v69 )
    {
      *(_QWORD *)v86 = v79;
      v80 = v38;
      sub_186B220(v69);
      v65 = v83;
      v47 = *(_QWORD *)v86;
      v46 = v83 - 1;
      v38 = v80;
    }
    a1[5] = v45;
    *((_DWORD *)a1 + 12) = v65;
    *((_DWORD *)a1 + 14) = 0;
  }
  else
  {
    v45 = a1[5];
    v46 = v44 - 1;
    v47 = 16LL * v44;
    v48 = (__m128i *)(v45 + v47);
  }
  v49 = *(_DWORD *)(a2 + 12);
  v50 = 16LL * (v49 & (unsigned int)v46);
  v51 = v45 + v50;
  if ( v50 != v47 )
  {
    result = v45 + v50;
    v53 = nullptr;
    while ( 1 )
    {
      v54 = *(_QWORD *)result;
      if ( *(_QWORD *)result > 1u )
      {
        if ( *(_DWORD *)(v54 + 12) == v49 && a2 == v54 )
        {
          *(_QWORD *)result = a2;
          *(_QWORD *)(result + 8) = v38;
          goto LABEL_73;
        }
      }
      else
      {
        if ( !v54 )
        {
          if ( v53 )
            goto LABEL_99;
          v53 = (_QWORD *)result;
          goto LABEL_100;
        }
        v53 = (_QWORD *)result;
      }
      result += 16;
      if ( (__m128i *)result == v48 )
        goto LABEL_50;
    }
  }
  v53 = nullptr;
LABEL_50:
  while ( 2 )
  {
    if ( v51 == v45 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    result = *(_QWORD *)v45;
    if ( *(_QWORD *)v45 > 1u )
    {
      if ( *(_DWORD *)(result + 12) == v49 && a2 == result )
      {
        *(_QWORD *)v45 = a2;
        *(_QWORD *)(v45 + 8) = v38;
        goto LABEL_73;
      }
      goto LABEL_49;
    }
    if ( result )
    {
      v53 = (_QWORD *)v45;
LABEL_49:
      v45 += 16;
      continue;
    }
    break;
  }
  if ( v53 )
LABEL_99:
    --*((_DWORD *)a1 + 14);
  else
    v53 = (_QWORD *)v45;
LABEL_100:
  *v53 = a2;
  v53[1] = v38;
  ++*((_DWORD *)a1 + 13);
LABEL_73:
  if ( v16 )
    return sub_186B220(v16 - 1);
  return result;
}

