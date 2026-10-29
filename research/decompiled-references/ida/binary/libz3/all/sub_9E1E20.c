unsigned __int64 __fastcall sub_9E1E20(__int64 a1, int *a2)
{
  __int64 v4; // r15
  _DWORD *v5; // rbx
  unsigned int v6; // r8d
  size_t v7; // r15
  _DWORD *v8; // rbp
  int v9; // esi
  int v10; // r9d
  __int64 v11; // rax
  _DWORD *v12; // r8
  unsigned __int64 result; // rax
  _DWORD *v14; // rdi
  int v15; // edx
  __int64 v16; // rax
  int v17; // r9d
  size_t v18; // rcx
  _DWORD *v19; // r14
  _DWORD *v20; // r10
  __int64 v21; // rax
  _DWORD *v22; // rdx
  _DWORD *v23; // rax
  __int64 v24; // rdx
  int v25; // [rsp+8h] [rbp-50h]

  v4 = *(unsigned int *)(a1 + 8);
  if ( 3 * (int)v4 < (unsigned int)(4 * (*(_DWORD *)(a1 + 12) + *(_DWORD *)(a1 + 16))) )
  {
    v25 = 2 * v4;
    v7 = 8LL * (unsigned int)(2 * v4);
    v16 = sub_186B270(v7);
    v17 = v25;
    v5 = (_DWORD *)v16;
    v18 = v16 + v7;
    if ( v25 )
    {
      if ( (v7 & 8) == 0 || (*(_DWORD *)(v16 + 4) = 0x80000000, v16 += 8, v16 != v18) )
      {
        do
        {
          *(_DWORD *)(v16 + 4) = 0x80000000;
          v16 += 16;
          *(_DWORD *)(v16 - 4) = 0x80000000;
        }
        while ( v16 != v18 );
      }
    }
    v19 = *(_DWORD **)a1;
    v6 = v25 - 1;
    v8 = (_DWORD *)v18;
    v20 = (_DWORD *)(*(_QWORD *)a1 + 8LL * *(unsigned int *)(a1 + 8));
    if ( *(_DWORD **)a1 != v20 )
    {
      do
      {
        while ( v19[1] + 0x80000000 <= 1 )
        {
          v19 += 2;
          if ( v20 == v19 )
            goto LABEL_32;
        }
        v21 = 8LL * (*v19 & v6);
        v22 = &v5[(unsigned __int64)v21 / 4];
        if ( v7 == v21 )
        {
LABEL_36:
          if ( v5 == v22 )
          {
LABEL_44:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v23 = v5;
          while ( v23[1] != 0x80000000 )
          {
            v23 += 2;
            if ( v22 == v23 )
              goto LABEL_44;
          }
        }
        else
        {
          v23 = &v5[(unsigned __int64)v21 / 4];
          while ( v23[1] != 0x80000000 )
          {
            v23 += 2;
            if ( (_DWORD *)v18 == v23 )
              goto LABEL_36;
          }
        }
        v24 = *(_QWORD *)v19;
        v19 += 2;
        *(_QWORD *)v23 = v24;
      }
      while ( v20 != v19 );
LABEL_32:
      v20 = *(_DWORD **)a1;
    }
    if ( v20 )
    {
      sub_186B220(v20);
      v17 = v25;
      v6 = v25 - 1;
    }
    *(_QWORD *)a1 = v5;
    *(_DWORD *)(a1 + 8) = v17;
    *(_DWORD *)(a1 + 16) = 0;
  }
  else
  {
    v5 = *(_DWORD **)a1;
    v6 = v4 - 1;
    v7 = 8 * v4;
    v8 = (_DWORD *)(*(_QWORD *)a1 + v7);
  }
  v9 = *a2;
  v10 = *a2;
  v11 = 8LL * (v9 & v6);
  v12 = &v5[(unsigned __int64)v11 / 4];
  if ( v11 != v7 )
  {
    result = (unsigned __int64)&v5[(unsigned __int64)v11 / 4];
    v14 = nullptr;
    while ( 1 )
    {
      v15 = *(_DWORD *)(result + 4);
      if ( v15 + 0x80000000 > 1 )
      {
        if ( *(_DWORD *)result == v9 && v9 == v15 )
        {
          *(_DWORD *)(result + 4) = v9;
          return result;
        }
      }
      else
      {
        if ( v15 == 0x80000000 )
        {
          if ( v14 )
            goto LABEL_42;
          v14 = (_DWORD *)result;
          goto LABEL_43;
        }
        v14 = (_DWORD *)result;
      }
      result += 8LL;
      if ( (_DWORD *)result == v8 )
        goto LABEL_14;
    }
  }
  v14 = nullptr;
  while ( 1 )
  {
LABEL_14:
    if ( v12 == v5 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    result = (unsigned int)v5[1];
    if ( (unsigned int)result + 0x80000000 <= 1 )
      break;
    if ( *v5 == v9 && v9 == (_DWORD)result )
    {
      v5[1] = v9;
      return result;
    }
LABEL_13:
    v5 += 2;
  }
  if ( (_DWORD)result != 0x80000000 )
  {
    v14 = v5;
    goto LABEL_13;
  }
  if ( v14 )
  {
LABEL_42:
    --*(_DWORD *)(a1 + 16);
    v9 = *a2;
  }
  else
  {
    v14 = v5;
  }
LABEL_43:
  v14[1] = v9;
  *v14 = v10;
  ++*(_DWORD *)(a1 + 12);
  return result;
}

