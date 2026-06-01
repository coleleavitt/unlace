unsigned __int64 __fastcall sub_9765A0(__int64 a1, unsigned int *a2)
{
  __int64 v4; // rbp
  _DWORD *v5; // rbx
  unsigned int v6; // r9d
  __int64 v7; // r15
  __int64 v8; // rbp
  unsigned int v9; // esi
  __int64 v10; // r9
  _DWORD *v11; // rdi
  unsigned __int64 result; // rax
  _DWORD *v13; // rcx
  int v14; // edx
  unsigned int v15; // edx
  _QWORD *v16; // rax
  int v17; // ecx
  _QWORD *v18; // rdx
  _DWORD *v19; // r14
  _DWORD *v20; // r10
  __int64 v21; // rax
  _DWORD *v22; // rdx
  _DWORD *v23; // rax
  __int64 v24; // rdx
  size_t v25; // [rsp+8h] [rbp-50h]
  unsigned int v26; // [rsp+8h] [rbp-50h]
  int v27; // [rsp+10h] [rbp-48h]

  v4 = *(unsigned int *)(a1 + 8);
  if ( 3 * (int)v4 < (unsigned int)(4 * (*(_DWORD *)(a1 + 12) + *(_DWORD *)(a1 + 16))) )
  {
    v25 = 12LL * (unsigned int)(2 * v4);
    v7 = v25;
    v16 = (_QWORD *)sub_186B270(v25);
    v17 = 2 * v4;
    v5 = v16;
    if ( 2 * (_DWORD)v4 )
    {
      v18 = &v16[3 * (v4 & 0x7FFFFFFF)];
      do
      {
        *v16 = 0;
        v16 += 3;
        *(_QWORD *)((char *)v16 - 12) = 0;
      }
      while ( v16 != v18 );
    }
    v19 = *(_DWORD **)a1;
    v6 = v17 - 1;
    v8 = (__int64)&v5[v25 / 4];
    v20 = (_DWORD *)(*(_QWORD *)a1 + 12LL * *(unsigned int *)(a1 + 8));
    if ( *(_DWORD **)a1 != v20 )
    {
      do
      {
        while ( v19[1] != 2 )
        {
          v19 += 3;
          if ( v20 == v19 )
            goto LABEL_35;
        }
        v21 = 12LL * (*v19 & v6);
        v22 = &v5[(unsigned __int64)v21 / 4];
        if ( v25 == v21 )
        {
LABEL_40:
          if ( v5 == v22 )
          {
LABEL_49:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v23 = v5;
          while ( v23[1] )
          {
            v23 += 3;
            if ( v22 == v23 )
              goto LABEL_49;
          }
        }
        else
        {
          v23 = &v5[(unsigned __int64)v21 / 4];
          while ( v23[1] )
          {
            v23 += 3;
            if ( (_DWORD *)v8 == v23 )
              goto LABEL_40;
          }
        }
        v24 = *(_QWORD *)v19;
        v19 += 3;
        *(_QWORD *)v23 = v24;
        v23[2] = *(v19 - 1);
      }
      while ( v20 != v19 );
LABEL_35:
      v20 = *(_DWORD **)a1;
    }
    if ( v20 )
    {
      v27 = v17;
      v26 = v17 - 1;
      sub_186B220(v20);
      v17 = v27;
      v6 = v26;
    }
    *(_QWORD *)a1 = v5;
    *(_DWORD *)(a1 + 8) = v17;
    *(_DWORD *)(a1 + 16) = 0;
  }
  else
  {
    v5 = *(_DWORD **)a1;
    v6 = v4 - 1;
    v7 = 12 * v4;
    v8 = *(_QWORD *)a1 + 12 * v4;
  }
  v9 = *a2;
  v10 = *a2 & v6;
  v11 = &v5[3 * v10];
  if ( 12 * v10 == v7 )
  {
    v13 = nullptr;
    while ( 1 )
    {
LABEL_15:
      if ( v11 == v5 )
      {
        sub_1872CE0("");
        sub_1873130(114, 405);
      }
      result = (unsigned int)v5[1];
      if ( (_DWORD)result == 2 )
      {
        if ( v9 == *v5 && v9 == v5[2] )
        {
          v5[2] = v9;
          v5[1] = 2;
          return result;
        }
      }
      else
      {
        if ( !(_DWORD)result )
        {
          if ( v13 )
          {
            --*(_DWORD *)(a1 + 16);
            result = *a2;
          }
          else
          {
            result = v9;
            v13 = v5;
          }
          v13[2] = result;
          v13[1] = 2;
          *v13 = v9;
          ++*(_DWORD *)(a1 + 12);
          return result;
        }
        v13 = v5;
      }
      v5 += 3;
    }
  }
  result = (unsigned __int64)&v5[3 * v10];
  v13 = nullptr;
  while ( 1 )
  {
    v14 = *(_DWORD *)(result + 4);
    if ( v14 != 2 )
      break;
    if ( v9 == *(_DWORD *)result && v9 == *(_DWORD *)(result + 8) )
    {
      *(_DWORD *)(result + 8) = v9;
      *(_DWORD *)(result + 4) = 2;
      return result;
    }
LABEL_7:
    result += 12LL;
    if ( result == v8 )
      goto LABEL_15;
  }
  if ( v14 )
  {
    v13 = (_DWORD *)result;
    goto LABEL_7;
  }
  if ( v13 )
  {
    --*(_DWORD *)(a1 + 16);
    v15 = *a2;
  }
  else
  {
    v15 = v9;
    v13 = (_DWORD *)result;
  }
  v13[2] = v15;
  v13[1] = 2;
  *v13 = v9;
  ++*(_DWORD *)(a1 + 12);
  return result;
}

