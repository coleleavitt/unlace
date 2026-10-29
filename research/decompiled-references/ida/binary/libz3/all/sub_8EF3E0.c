__int64 __fastcall sub_8EF3E0(__int64 a1, unsigned int ***a2, unsigned int a3)
{
  char **v3; // r13
  char **exception; // r13
  unsigned int **v6; // rbp
  __int64 result; // rax
  unsigned int v8; // ecx
  __int64 v9; // rdx
  unsigned int **v10; // r14
  _DWORD *v11; // rbx
  __int64 v12; // rax
  unsigned int *v13; // r15
  unsigned int v14; // esi
  unsigned int *v15; // rax
  __int64 v16; // rdx
  _DWORD *v17; // rcx
  __int64 v18; // rsi
  char v19; // al
  __int64 v20; // rdx
  __int64 v21; // rdi
  __int64 v22; // rax
  unsigned int v23; // eax
  unsigned int v24; // r13d
  unsigned int v25; // r13d
  unsigned int v26; // eax
  unsigned int v27; // r15d
  unsigned int v28; // eax
  unsigned int v29; // edx
  size_t v30; // rsi
  unsigned int v31; // r13d
  unsigned int *v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rax
  unsigned int v35; // edx
  __int64 v36; // rdi
  __int64 v37; // rbx
  unsigned int v38; // edx
  size_t v39; // rsi
  unsigned int *v40; // rax
  unsigned int v41; // eax
  __int64 v42; // rdx
  __int64 v43; // rax
  _QWORD *v44; // rax
  unsigned int v45; // r15d
  unsigned int v46; // r14d
  _DWORD *v47; // rax
  __int64 v48; // rax
  unsigned int v49; // r14d
  __int64 v50; // rax
  unsigned int v51; // esi
  unsigned int v52; // eax
  __int64 v53; // rdi
  int v54; // edx
  __int64 v55; // rax
  __int64 v56; // rax
  int v57; // [rsp+8h] [rbp-80h]
  unsigned int v58; // [rsp+8h] [rbp-80h]
  unsigned int **v59; // [rsp+10h] [rbp-78h]
  unsigned int v60; // [rsp+18h] [rbp-70h]
  unsigned int v61; // [rsp+18h] [rbp-70h]
  char v62; // [rsp+1Ch] [rbp-6Ch]
  unsigned int v63; // [rsp+1Ch] [rbp-6Ch]
  unsigned int v64; // [rsp+20h] [rbp-68h]
  __int64 v67[11]; // [rsp+30h] [rbp-58h] BYREF

  v6 = *a2;
  if ( *a2 )
    result = *((unsigned int *)v6 - 1);
  else
    result = 0;
  v8 = result - a3;
  if ( (_DWORD)result == a3 )
    return result;
  result *= 8;
  v9 = 8LL * a3;
  v10 = (unsigned int **)((char *)v6 + result);
  v59 = &v6[(unsigned __int64)v9 / 8];
  if ( v8 <= 0x3E8 )
  {
    if ( v9 != result )
    {
      do
      {
        v37 = (__int64)*--v10;
        if ( *(char *)(v37 + 7) >= 0 )
          sub_8E8AA0((_QWORD *)a1, (unsigned int *)v37);
        sub_AA3E20(v37, *(_QWORD *)(a1 + 104));
        ++*(_DWORD *)(a1 + 60);
      }
      while ( v59 != v10 );
      result = (__int64)a2;
      v6 = *a2;
    }
    if ( v6 )
      goto LABEL_48;
    return result;
  }
  v11 = nullptr;
  if ( v9 == result )
    goto LABEL_34;
  do
  {
    v12 = *(_QWORD *)(a1 + 8560);
    v13 = *--v10;
    if ( v12 )
      v14 = *(_DWORD *)(v12 - 4);
    else
      v14 = 0;
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 112) + 512LL) == 6 )
    {
      v15 = v13 + 2;
      v16 = *v13;
      if ( v16 * 4 )
      {
        do
        {
          if ( *v15 >> 1 < v14 )
          {
            v17 = (_DWORD *)(*(_QWORD *)(a1 + 8864) + 4LL * *v15);
            if ( *v17 )
              --*v17;
          }
          ++v15;
        }
        while ( v15 != &v13[v16 + 2] );
      }
    }
    if ( *((char *)v13 + 7) >= 0 )
    {
      v18 = *(_QWORD *)(a1 + 104);
      v19 = *((_BYTE *)v13 + 7) | 0x80;
      *((_BYTE *)v13 + 7) = v19;
      if ( (v19 & 0x20) != 0 )
      {
        v20 = (__int64)&v13[(v13[1] & 0xFFFFFF) + 2];
        if ( (v19 & 3u) - 2 < 2 )
          v20 += 4;
        v21 = *(_QWORD *)((v20 + 7) & 0xFFFFFFFFFFFFFFF8LL);
        if ( v21 )
        {
          (*(void (__fastcall **)(__int64, __int64, unsigned int *))(*(_QWORD *)v21 + 16LL))(v21, v18, v13);
          v22 = (__int64)&v13[(v13[1] & 0xFFFFFF) + 2];
          if ( (*((_BYTE *)v13 + 7) & 3u) - 2 < 2 )
            v22 += 4;
          *(_QWORD *)((v22 + 7) & 0xFFFFFFFFFFFFFFF8LL) = 0;
        }
      }
    }
    v23 = v13[2];
    v24 = v23 >> 5;
    v60 = v23 >> 5;
    v62 = v23 ^ 1;
    if ( v11 )
    {
      v25 = v24 + 1;
      v64 = *(v11 - 1);
      if ( v23 >> 5 < v64 )
        goto LABEL_24;
    }
    else
    {
      v25 = v24 + 1;
      v44 = (_QWORD *)sub_186B270(0x10u);
      v64 = 0;
      v11 = v44 + 1;
      *v44 = 2;
    }
    while ( 1 )
    {
      v41 = *(v11 - 2);
      if ( v41 >= v25 )
        break;
      v38 = (3 * v41 + 1) >> 1;
      v39 = 4 * v38 + 8;
      if ( 4 * v41 + 8 >= (unsigned int)v39 || v41 >= v38 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_8E4EB0(v67, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v67);
        sub_233E40((__int64)v67);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v58 = (3 * v41 + 1) >> 1;
      v40 = (unsigned int *)sub_186B300(v11 - 2, v39);
      v11 = v40 + 2;
      *v40 = v58;
    }
    *(v11 - 1) = v25;
    v42 = 4LL * v25;
    v43 = 4LL * v64;
    if ( v43 != v42 )
      memset(&v11[(unsigned __int64)v43 / 4], 0, v42 - v43);
LABEL_24:
    v11[v60] |= 1 << v62;
    v63 = *(v11 - 1);
    v57 = v13[3] ^ 1;
    v26 = v13[3] >> 5;
    v61 = v26;
    if ( v26 >= v63 )
    {
      v27 = v26 + 1;
      v28 = *(v11 - 2);
      if ( v28 < v27 )
      {
        do
        {
          v29 = (3 * v28 + 1) >> 1;
          v30 = 4 * v29 + 8;
          v31 = v29;
          if ( 4 * v28 + 8 >= (unsigned int)v30 || v28 >= v29 )
          {
            v3 = (char **)__cxa_allocate_exception(0x28u);
            sub_8E4EB0(v67, "Overflow encountered when expanding vector");
            *v3 = (char *)off_1C63128;
            sub_2333C0(v3 + 1, v67);
            sub_233E40((__int64)v67);
            __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v32 = (unsigned int *)sub_186B300(v11 - 2, v30);
          *v32 = v31;
          v11 = v32 + 2;
          v28 = v31;
        }
        while ( v31 < v27 );
      }
      *(v11 - 1) = v27;
      v33 = 4LL * v27;
      v34 = 4LL * v63;
      if ( v34 != v33 )
        memset(&v11[(unsigned __int64)v34 / 4], 0, v33 - v34);
    }
    v11[v61] |= 1 << v57;
  }
  while ( v59 != v10 );
  v35 = *(v11 - 1);
  if ( !v35 )
    goto LABEL_33;
  v45 = 32 * v35;
  v46 = *v11 & 1;
  if ( v46 )
  {
    v49 = 0;
LABEL_67:
    if ( v49 == v45 )
      goto LABEL_33;
    while ( 1 )
    {
      sub_9678C0(*(_QWORD *)(a1 + 8856) + 8LL * v49++);
      if ( v49 == v45 )
      {
        v51 = *(v11 - 1);
        v52 = v49 >> 5;
        if ( v49 >> 5 >= v51 )
          goto LABEL_33;
        v53 = v52;
LABEL_72:
        v54 = v11[v53];
        if ( (v54 & (1 << v49)) == 0 )
        {
          if ( v45 != v49 )
            goto LABEL_77;
          goto LABEL_33;
        }
      }
      else
      {
        v51 = *(v11 - 1);
        while ( 1 )
        {
          v52 = v49 >> 5;
          if ( v49 >> 5 < v51 )
          {
            v53 = v52;
            if ( (v11[v52] & (1 << (v49 & 0x1F))) != 0 )
              goto LABEL_72;
          }
          if ( (v49 & 0x1F) == 0 )
            break;
          if ( v45 == ++v49 )
          {
            v52 = v45 >> 5;
            if ( v45 >> 5 >= v51 )
              goto LABEL_33;
            goto LABEL_89;
          }
        }
        if ( v52 < v51 )
        {
LABEL_89:
          v53 = v52;
          goto LABEL_72;
        }
        if ( v45 == v49 )
          goto LABEL_33;
        while ( 1 )
        {
          v54 = v11[v52];
LABEL_77:
          if ( v54 )
            break;
          v49 += 32;
          ++v52;
          if ( v49 == v45 )
            goto LABEL_33;
        }
        if ( v49 == v45 )
          goto LABEL_33;
        v55 = v49 >> 5;
        if ( ((unsigned int)v55 >= v51 || (v11[v55] & (1 << v49)) == 0) && ++v49 == v45 )
          goto LABEL_33;
        while ( 1 )
        {
          v56 = v49 >> 5;
          if ( (unsigned int)v56 < v51 && (v11[v56] & (1 << (v49 & 0x1F))) != 0 )
            break;
          if ( (v49 & 0x1F) == 0 )
            break;
          if ( v45 == ++v49 )
            goto LABEL_33;
        }
      }
      if ( v49 == v45 )
        goto LABEL_33;
    }
  }
  v47 = v11;
  if ( v45 )
  {
    while ( !*v47 )
    {
      v46 += 32;
      ++v47;
      if ( v46 == v45 )
        goto LABEL_33;
    }
    if ( v46 != v45 )
    {
      v48 = v46 >> 5;
      if ( (unsigned int)v48 < v35 )
        v49 = ((v11[v48] & 1) == 0) + v46;
      else
        v49 = v46 + 1;
      do
      {
        v50 = v49 >> 5;
        if ( (unsigned int)v50 < v35 && (v11[v50] & (1 << (v49 & 0x1F))) != 0 )
          goto LABEL_67;
        if ( (v49 & 0x1F) == 0 )
          goto LABEL_67;
      }
      while ( ++v49 != v45 );
    }
  }
LABEL_33:
  v6 = *a2;
LABEL_34:
  if ( v6 )
    v6 += *((unsigned int *)v6 - 1);
  while ( v6 != v59 )
  {
    v36 = (__int64)*--v6;
    sub_AA3E20(v36, *(_QWORD *)(a1 + 104));
  }
  v6 = *a2;
  if ( *a2 )
  {
    *(_DWORD *)(a1 + 60) = *((_DWORD *)v6 - 1) + *(_DWORD *)(a1 + 60) - a3;
    if ( v11 )
      goto LABEL_40;
LABEL_48:
    *((_DWORD *)v6 - 1) = a3;
    return a3;
  }
  else
  {
    result = a3;
    *(_DWORD *)(a1 + 60) -= a3;
    if ( v11 )
    {
LABEL_40:
      sub_186B220(v11 - 2);
      result = (__int64)a2;
      v6 = *a2;
      if ( *a2 )
        goto LABEL_48;
    }
  }
  return result;
}

