__int64 __fastcall sub_E7C920(__int64 a1, unsigned int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 result; // rax
  _QWORD *v9; // r13
  _QWORD *v10; // rdx
  _QWORD *v11; // rbx
  unsigned int v12; // ecx
  __int64 v13; // rax
  unsigned int v14; // r15d
  size_t v15; // rsi
  unsigned int *v16; // rax
  __int64 v17; // rax
  __int64 v18; // r9
  unsigned int *v19; // r15
  __int64 v20; // r12
  __int64 v21; // rbx
  unsigned int v22; // r13d
  __int64 v23; // rdx
  __int64 *v24; // rcx
  __int64 v25; // rsi
  __int64 v26; // rdi
  bool v27; // zf
  unsigned int v28; // eax
  _QWORD *v29; // rax
  unsigned __int64 v30; // r12
  __int64 *v31; // rbx
  __int64 v32; // rsi
  __int64 v33; // rdi
  char **exception; // rbx
  unsigned int *v35; // [rsp+0h] [rbp-78h]
  __int64 *v36; // [rsp+18h] [rbp-60h]
  __int64 v37[11]; // [rsp+20h] [rbp-58h] BYREF

  sub_2FCDE0((__int64 *)(a1 + 624));
  v4 = *(_QWORD *)(a1 + 632);
  if ( v4 )
  {
    v5 = *(unsigned int *)(v4 - 4);
    if ( a2 < (unsigned int)v5 )
    {
      v30 = v4 + 8 * v5;
      v31 = (__int64 *)(v4 + 8LL * a2);
      if ( (unsigned __int64)v31 >= v30 )
        goto LABEL_51;
      do
      {
        while ( 1 )
        {
          v32 = *v31;
          if ( *v31 )
          {
            v33 = *(_QWORD *)(a1 + 624);
            v27 = (*(_DWORD *)(v32 + 8))-- == 1;
            if ( v27 )
              break;
          }
          if ( (unsigned __int64)++v31 >= v30 )
            goto LABEL_50;
        }
        sub_15D7BC0(v33, v32);
        ++v31;
      }
      while ( (unsigned __int64)v31 < v30 );
LABEL_50:
      v4 = *(_QWORD *)(a1 + 632);
      if ( v4 )
LABEL_51:
        *(_DWORD *)(v4 - 4) = a2;
    }
    else if ( (unsigned int)v5 < a2 )
    {
      do
      {
        v28 = *(_DWORD *)(v4 - 4);
        if ( v28 == *(_DWORD *)(v4 - 8) )
        {
LABEL_37:
          sub_23A6F0((unsigned int **)(a1 + 632));
          v4 = *(_QWORD *)(a1 + 632);
          v28 = *(_DWORD *)(v4 - 4);
        }
        LODWORD(v5) = v5 + 1;
        *(_QWORD *)(v4 + 8LL * v28) = 0;
        *(_DWORD *)(v4 - 4) = v28 + 1;
      }
      while ( a2 != (_DWORD)v5 );
    }
  }
  else if ( a2 )
  {
    LODWORD(v5) = 0;
    goto LABEL_37;
  }
  sub_1584740(a1 + 80);
  v6 = *(_QWORD *)(a1 + 240);
  if ( v6 )
    *(_DWORD *)(v6 - 4) = 0;
  v7 = *(_QWORD *)(a1 + 608);
  if ( v7 )
    *(_DWORD *)(v7 - 4) = 0;
  sub_1584740(a1 + 248);
  sub_1584740(a1 + 408);
  result = *(_QWORD *)(a1 + 240);
  v9 = *(_QWORD **)(a1 + 632);
  if ( result )
    *(_DWORD *)(result - 4) = 0;
  v10 = *(_QWORD **)(a1 + 608);
  if ( v10 )
    *((_DWORD *)v10 - 1) = 0;
  if ( a2 )
  {
    v11 = &v9[a2];
    while ( 1 )
    {
      if ( !result || (v12 = *(_DWORD *)(result - 4), v12 == *(_DWORD *)(result - 8)) )
      {
        sub_23A6F0((unsigned int **)(a1 + 240));
        result = *(_QWORD *)(a1 + 240);
        v10 = *(_QWORD **)(a1 + 608);
        v12 = *(_DWORD *)(result - 4);
      }
      *(_QWORD *)(result + 8LL * v12) = *v9;
      *(_DWORD *)(result - 4) = v12 + 1;
      if ( !v10 )
        break;
      v13 = *((unsigned int *)v10 - 1);
      if ( (_DWORD)v13 != *((_DWORD *)v10 - 2) )
      {
        result = (__int64)v10 + 4 * v13;
        goto LABEL_15;
      }
      v14 = (unsigned int)(3 * v13 + 1) >> 1;
      v15 = 4 * v14 + 8;
      if ( 4 * (int)v13 + 8 >= (unsigned int)v15 || (unsigned int)v13 >= v14 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_E65BE0(v37, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v37);
        sub_233E40((__int64)v37);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      ++v9;
      v16 = (unsigned int *)sub_186B300(v10 - 1, v15);
      v10 = v16 + 2;
      *v16 = v14;
      v17 = v16[1];
      *(_QWORD *)(a1 + 608) = v10;
      result = (__int64)v10 + 4 * v17;
      *(_DWORD *)result = a2;
      ++*((_DWORD *)v10 - 1);
      if ( v11 == v9 )
        goto LABEL_24;
LABEL_16:
      result = *(_QWORD *)(a1 + 240);
    }
    v29 = (_QWORD *)sub_186B270(0x10u);
    v10 = v29 + 1;
    *v29 = 2;
    *(_QWORD *)(a1 + 608) = v29 + 1;
    result = (__int64)(v29 + 1);
LABEL_15:
    ++v9;
    *(_DWORD *)result = a2;
    ++*((_DWORD *)v10 - 1);
    if ( v11 == v9 )
      goto LABEL_24;
    goto LABEL_16;
  }
LABEL_24:
  v18 = *(_QWORD *)(a1 + 704);
  if ( v18 )
  {
    result = v18 + 4LL * *(unsigned int *)(v18 - 4);
    v35 = (unsigned int *)result;
    if ( result != v18 )
    {
      v19 = *(unsigned int **)(a1 + 704);
      do
      {
        while ( 1 )
        {
          v20 = *(_QWORD *)a1;
          v21 = *(_QWORD *)(*(_QWORD *)(a1 + 672) + 8LL * *v19);
          v22 = *v19;
          if ( !*(_WORD *)(v21 + 4) && (*(_BYTE *)(v21 + 30) & 1) != 0 )
          {
            ++*(_DWORD *)(v21 + 8);
          }
          else
          {
            v37[0] = 0;
            v37[1] = v20;
            sub_E7C780(a1 + 80, v21, v37, (__int64 *)(a1 + 576));
            v21 = v37[0];
          }
          result = a2 - 1 - v22;
          *(_QWORD *)(*(_QWORD *)(a1 + 240) + 8 * result) = v21;
          v23 = *(_QWORD *)(a1 + 632);
          v24 = (__int64 *)(v23 + 8 * result);
          v25 = *v24;
          if ( *v24 )
          {
            v26 = *(_QWORD *)(a1 + 624);
            v27 = (*(_DWORD *)(v25 + 8))-- == 1;
            if ( v27 )
              break;
          }
          *v24 = v21;
          if ( v35 == ++v19 )
            return result;
        }
        v36 = (__int64 *)(v23 + 8 * result);
        result = sub_15D7BC0(v26, v25);
        ++v19;
        *v36 = v21;
      }
      while ( v35 != v19 );
    }
  }
  return result;
}

