unsigned __int64 __fastcall sub_18DB40(_QWORD *a1, _QWORD *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdx
  _QWORD *v5; // rsi
  _QWORD *v6; // rcx
  unsigned __int64 result; // rax
  unsigned __int64 v8; // rdx
  __int64 v9; // r12
  unsigned __int64 *v10; // r13
  unsigned __int64 v11; // rcx
  char *v12; // rdi
  char *v13; // rdx
  __int64 v14; // rdx
  unsigned __int64 *v15; // rdx
  __int64 v16; // rdx
  unsigned __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rdx

  v3 = a2[1];
  v4 = a1[15];
  v5 = (_QWORD *)a1[14];
  v6 = &v5[v4];
  if ( v5 == v6 )
    goto LABEL_7;
  result = a1[14];
  while ( v3 != *(_QWORD *)result )
  {
    result += 8LL;
    if ( v6 == (_QWORD *)result )
      goto LABEL_7;
  }
  if ( v6 == (_QWORD *)result )
  {
LABEL_7:
    v8 = v4 + 1;
    v9 = a1[17] + 16LL * *(int *)(*a2 + 72LL);
    if ( a1[16] < v8 )
    {
      v18 = qvector_reserve(a1 + 14, v5, v8, 8);
      v19 = a1[15];
      a1[14] = v18;
      v6 = (_QWORD *)(v18 + 8 * v19);
    }
    *v6 = v3;
    ++a1[15];
    result = *(_QWORD *)v9;
    if ( !*(_QWORD *)v9 )
      return result;
    if ( !*(_QWORD *)(v9 + 8) )
      return result;
    v10 = *(unsigned __int64 **)(result + 8);
    if ( (unsigned __int64 *)result == v10 )
      return result;
    while ( 1 )
    {
LABEL_12:
      v11 = v10[6];
      v12 = (char *)v10[5];
      v13 = &v12[24 * v11];
      if ( v12 != v13 )
      {
        while ( a2[1] != *((_QWORD *)v12 + 1) )
        {
          v12 += 24;
          if ( v13 == v12 )
            goto LABEL_20;
        }
        if ( v12 != v13 )
        {
          v14 = v13 - v12;
          if ( (__int64)(0xAAAAAAAAAAAAAAABLL * (v14 >> 3) - 2) >= 0 )
          {
            memmove(v12, v12 + 24, v14 - 24);
            v11 = v10[6];
          }
          v10[6] = v11 - 1;
        }
      }
LABEL_20:
      result = *v10;
      if ( (*v10 & 2) != 0 )
        goto LABEL_23;
      v15 = (unsigned __int64 *)v10[2];
      if ( (*(_BYTE *)v15 & 2) != 0 )
      {
        result &= 0xFFFFFFFFFFFFFFFCLL;
        v16 = *(_QWORD *)result;
        if ( (*(_QWORD *)result & 2) == 0 )
        {
          while ( v10 == *(unsigned __int64 **)(result + 16) )
          {
            v10 = (unsigned __int64 *)result;
            v17 = v16 & 0xFFFFFFFFFFFFFFFCLL;
            v16 = *(_QWORD *)(v16 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v16 & 2) != 0 )
            {
              v10 = (unsigned __int64 *)v17;
              if ( *(_QWORD *)v9 != v17 )
                goto LABEL_12;
              return result;
            }
            result = v17;
          }
        }
        v10 = (unsigned __int64 *)result;
        if ( *(_QWORD *)v9 == result )
          return result;
      }
      else
      {
        do
        {
          v10 = v15;
          v15 = (unsigned __int64 *)v15[1];
        }
        while ( (*(_BYTE *)v15 & 2) == 0 );
LABEL_23:
        if ( *(unsigned __int64 **)v9 == v10 )
          return result;
      }
    }
  }
  return result;
}
