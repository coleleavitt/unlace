__int64 __fastcall sub_9768E0(char **a1, int *a2)
{
  __int64 v3; // rax
  unsigned int v4; // r13d
  _DWORD *v5; // rbx
  __int64 v6; // r15
  int v7; // edx
  __int64 v8; // r14
  _DWORD *v9; // rcx
  _DWORD *v10; // rbp
  _DWORD *v11; // r13
  __int64 result; // rax
  __int64 v13; // rsi
  __int64 v14; // rax
  _QWORD *v15; // r15
  _QWORD *v16; // rbp
  _QWORD *v17; // rax
  __int64 v18; // rax
  char *v19; // r14
  __int64 i; // rbp
  __int64 v21; // rax
  int v22; // esi
  __int64 v23; // rax
  _DWORD *v24; // rdx
  _DWORD *v25; // rax
  int v26; // edx
  char *v27; // rbp
  void *v28; // rdi
  int v30; // [rsp+0h] [rbp-58h]
  size_t v31; // [rsp+8h] [rbp-50h]
  char *v32; // [rsp+8h] [rbp-50h]
  unsigned int v33; // [rsp+14h] [rbp-44h]
  __int64 v34; // [rsp+18h] [rbp-40h]

  v3 = *((unsigned int *)a1 + 2);
  v4 = 2 * v3;
  if ( 3 * (int)v3 < (unsigned int)(4 * (*((_DWORD *)a1 + 3) + *((_DWORD *)a1 + 4))) )
  {
    v31 = 40LL * v4;
    v34 = v31;
    v14 = sub_186B270(v31);
    v5 = (_DWORD *)v14;
    if ( v4 )
    {
      v15 = (_QWORD *)(v14 + 40LL * v4);
      v16 = (_QWORD *)v14;
      do
      {
        *v16 = 0;
        v17 = (_QWORD *)sub_186B270(0x60u);
        v16[2] = v17;
        v16 += 5;
        *(v16 - 2) = 8;
        *((_DWORD *)v16 - 2) = 0;
        *v17 = 0;
        *(_QWORD *)((char *)v17 + 12) = 0;
        v17[3] = 0;
        *(_QWORD *)((char *)v17 + 36) = 0;
        v17[6] = 0;
        *(_QWORD *)((char *)v17 + 60) = 0;
        v17[9] = 0;
        *(_QWORD *)((char *)v17 + 84) = 0;
      }
      while ( v16 != v15 );
    }
    v33 = v4 - 1;
    v18 = *((unsigned int *)a1 + 2);
    v19 = &(*a1)[40 * v18];
    v6 = (__int64)&v5[v31 / 4];
    if ( *a1 != v19 )
    {
      for ( i = (__int64)(*a1 + 16); ; i = v21 )
      {
        if ( *(_DWORD *)(i - 12) != 2 )
          goto LABEL_34;
        v22 = *(_DWORD *)(i - 16);
        v23 = 40LL * (v22 & v33);
        v24 = &v5[(unsigned __int64)v23 / 4];
        if ( v31 == v23 )
        {
LABEL_54:
          if ( v5 == v24 )
          {
LABEL_61:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v25 = v5;
          while ( v25[1] )
          {
            v25 += 10;
            if ( v24 == v25 )
              goto LABEL_61;
          }
        }
        else
        {
          v25 = &v5[(unsigned __int64)v23 / 4];
          while ( v25[1] )
          {
            v25 += 10;
            if ( (_DWORD *)v6 == v25 )
              goto LABEL_54;
          }
        }
        *v25 = v22;
        v26 = *(_DWORD *)(i - 8);
        v25[1] = 2;
        v25[2] = v26;
        if ( v25 + 4 == (_DWORD *)i )
        {
LABEL_34:
          v21 = i + 40;
          if ( v19 == (char *)(i + 24) )
            goto LABEL_43;
        }
        else
        {
          sub_975F60((__int64)(v25 + 4), i);
          v21 = i + 40;
          if ( v19 == (char *)(i + 24) )
          {
LABEL_43:
            v18 = *((unsigned int *)a1 + 2);
            v19 = *a1;
            break;
          }
        }
      }
    }
    if ( v19 )
    {
      if ( (_DWORD)v18 )
      {
        v27 = v19;
        v32 = &v19[40 * v18];
        do
        {
          while ( 1 )
          {
            v28 = *((void **)v27 + 2);
            if ( !v28 )
              break;
            sub_186B220(v28);
            v27 += 40;
            if ( v32 == v27 )
              goto LABEL_49;
          }
          v27 += 40;
        }
        while ( v27 != v32 );
      }
LABEL_49:
      sub_186B220(v19);
    }
    *a1 = (char *)v5;
    *((_DWORD *)a1 + 2) = v4;
    *((_DWORD *)a1 + 4) = 0;
  }
  else
  {
    v5 = *a1;
    v33 = v3 - 1;
    v34 = 40 * v3;
    v6 = (__int64)&(*a1)[40 * v3];
  }
  v7 = *a2;
  v8 = *a2 & v33;
  v9 = &v5[10 * v8];
  if ( 40 * v8 != v34 )
  {
    v10 = &v5[10 * v8];
    v11 = nullptr;
    while ( 1 )
    {
      result = (unsigned int)v10[1];
      if ( (_DWORD)result == 2 )
      {
        if ( v7 == *v10 && v7 == v10[2] )
        {
          v10[2] = v7;
          if ( a2 + 2 != v10 + 4 )
            result = sub_975F60((__int64)(v10 + 4), (__int64)(a2 + 2));
          v10[1] = 2;
          return result;
        }
      }
      else
      {
        if ( !(_DWORD)result )
        {
          if ( v11 )
            goto LABEL_25;
          v11 = v10;
          goto LABEL_26;
        }
        v11 = v10;
      }
      v10 += 10;
      if ( v10 == (_DWORD *)v6 )
        goto LABEL_17;
    }
  }
  v11 = nullptr;
  while ( 1 )
  {
LABEL_17:
    if ( v9 == v5 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    result = (unsigned int)v5[1];
    if ( (_DWORD)result != 2 )
      break;
    if ( v7 == *v5 && v7 == v5[2] )
    {
      v5[2] = v7;
      if ( v5 + 4 != a2 + 2 )
        result = sub_975F60((__int64)(v5 + 4), (__int64)(a2 + 2));
      v5[1] = 2;
      return result;
    }
LABEL_16:
    v5 += 10;
  }
  if ( (_DWORD)result )
  {
    v11 = v5;
    goto LABEL_16;
  }
  if ( v11 )
LABEL_25:
    --*((_DWORD *)a1 + 4);
  else
    v11 = v5;
LABEL_26:
  v11[2] = v7;
  v13 = (__int64)(a2 + 2);
  if ( v11 + 4 != a2 + 2 )
  {
    v30 = v7;
    result = sub_975F60((__int64)(v11 + 4), v13);
    v7 = v30;
  }
  v11[1] = 2;
  *v11 = v7;
  ++*((_DWORD *)a1 + 3);
  return result;
}

