_QWORD *__fastcall sub_63A8C0(__int64 a1, __int64 a2)
{
  _QWORD *result; // rax
  _QWORD *v4; // rbx
  __int64 v5; // rbp
  char **v6; // r13
  int v7; // esi
  __int64 v8; // rax
  unsigned int v9; // edx
  char *v10; // rcx
  __int64 v11; // rdx
  char *v12; // rdi
  __int64 *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rdx
  char *v16; // rsi
  __int64 v17; // rdi
  unsigned int v18; // edx
  int v19; // eax
  unsigned int v20; // eax
  __int64 v21; // r15
  char *v22; // rax
  char *v23; // rcx
  __int64 v24; // rax
  char *v25; // r14
  __int64 v26; // r9
  unsigned int v27; // r10d
  char *v28; // r8
  char *v29; // r15
  __int64 v30; // rax
  char *v31; // rdx
  char *v32; // rax
  char *v33; // [rsp+0h] [rbp-58h]

  result = (_QWORD *)sub_639510(a1, a2);
  v4 = *(_QWORD **)a1;
  v5 = *(_QWORD *)a1 + 16LL * *(unsigned int *)(a1 + 8);
  if ( *(_QWORD *)a1 == v5 )
    return result;
  while ( *v4 <= 1u )
  {
    v4 += 2;
    if ( (_QWORD *)v5 == v4 )
      return result;
  }
LABEL_5:
  if ( (_QWORD *)v5 == v4 )
    return result;
  v6 = (char **)v4[1];
  v7 = *(_DWORD *)(a2 + 12);
  v8 = *((unsigned int *)v6 + 2);
  v9 = v8 - 1;
  v8 *= 8;
  v10 = &(*v6)[v8];
  v11 = 8LL * (v7 & v9);
  v12 = &(*v6)[v11];
  if ( v11 == v8 )
  {
LABEL_18:
    if ( *v6 == v12 )
      goto LABEL_13;
    v13 = (__int64 *)*v6;
    while ( 1 )
    {
      v15 = *v13;
      if ( (unsigned __int64)*v13 > 1 )
      {
        if ( *(_DWORD *)(v15 + 12) == v7 && v15 == a2 )
          goto LABEL_27;
      }
      else if ( !v15 )
      {
        result = v4 + 2;
        if ( (_QWORD *)v5 == v4 + 2 )
          return result;
LABEL_16:
        while ( 1 )
        {
          v4 = result;
          if ( *result > 1u )
            break;
          result += 2;
          if ( (_QWORD *)v5 == result )
            return result;
        }
        goto LABEL_5;
      }
      if ( v12 == (char *)++v13 )
        goto LABEL_13;
    }
  }
  v13 = (__int64 *)&(*v6)[v11];
  while ( 1 )
  {
    v14 = *v13;
    if ( (unsigned __int64)*v13 > 1 )
      break;
    if ( !v14 )
      goto LABEL_13;
LABEL_10:
    if ( v10 == (char *)++v13 )
      goto LABEL_18;
  }
  if ( *(_DWORD *)(v14 + 12) != v7 || v14 != a2 )
    goto LABEL_10;
LABEL_27:
  v16 = (char *)(v13 + 1);
  v17 = *((unsigned int *)v6 + 3);
  if ( v10 == (char *)(v13 + 1) )
    v16 = *v6;
  v18 = v17 - 1;
  if ( *(_QWORD *)v16 )
  {
    *v13 = 1;
    v19 = *((_DWORD *)v6 + 4);
    *((_DWORD *)v6 + 3) = v18;
    v20 = v19 + 1;
    if ( v18 < 0x40 )
      v18 = 64;
    *((_DWORD *)v6 + 4) = v20;
    if ( v18 < v20 && !(unsigned __int8)sub_186AF10(v17) )
    {
      v21 = *((unsigned int *)v6 + 2);
      v22 = (char *)sub_186B270(8 * v21);
      v23 = v22;
      if ( (_DWORD)v21 )
        v23 = (char *)memset(v22, 0, 8 * v21);
      v24 = *((unsigned int *)v6 + 2);
      v25 = *v6;
      v26 = 8 * v24;
      v27 = v24 - 1;
      v28 = &(*v6)[8 * v24];
      v29 = &v23[8 * v24];
      if ( *v6 != v28 )
      {
        do
        {
          if ( *(_QWORD *)v25 > 1u )
          {
            v30 = 8LL * (*(_DWORD *)(*(_QWORD *)v25 + 12LL) & v27);
            v31 = &v23[v30];
            if ( v26 == v30 )
            {
LABEL_46:
              if ( v23 == v31 )
              {
LABEL_55:
                sub_1872CE0("");
                sub_1873130(114, 213);
              }
              v32 = v23;
              while ( *(_QWORD *)v32 )
              {
                v32 += 8;
                if ( v31 == v32 )
                  goto LABEL_55;
              }
            }
            else
            {
              v32 = &v23[v30];
              while ( *(_QWORD *)v32 )
              {
                v32 += 8;
                if ( v29 == v32 )
                  goto LABEL_46;
              }
            }
            *(_QWORD *)v32 = *(_QWORD *)v25;
          }
          v25 += 8;
        }
        while ( v28 != v25 );
        v28 = *v6;
      }
      if ( v28 )
      {
        v33 = v23;
        sub_186B220(v28);
        v23 = v33;
      }
      *v6 = v23;
      *((_DWORD *)v6 + 4) = 0;
    }
  }
  else
  {
    *v13 = 0;
    *((_DWORD *)v6 + 3) = v18;
  }
LABEL_13:
  result = v4 + 2;
  if ( (_QWORD *)v5 != v4 + 2 )
    goto LABEL_16;
  return result;
}

