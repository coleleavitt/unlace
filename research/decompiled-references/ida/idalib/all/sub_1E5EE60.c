__int64 __fastcall sub_1E5EE60(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rcx
  __int64 v4; // r8
  _QWORD *v5; // rdx
  __int64 v6; // r9
  __int64 result; // rax
  _QWORD *v8; // r9
  _QWORD *v9; // rdi

  v3 = *(_QWORD **)(a1 + 8);
  v4 = *(unsigned int *)(a1 + 16);
  v5 = &v3[v4];
  v6 = (8 * v4) >> 3;
  result = (8 * v4) >> 5;
  if ( !result )
  {
    v9 = *(_QWORD **)(a1 + 8);
LABEL_14:
    switch ( v6 )
    {
      case 2LL:
        v8 = v9;
        break;
      case 3LL:
        v8 = v9 + 1;
        if ( a2 == *v9 )
          goto LABEL_18;
        break;
      case 1LL:
        goto LABEL_27;
      default:
        goto LABEL_17;
    }
    v9 = v8 + 1;
    if ( a2 == *v8 )
    {
      result = (__int64)(v8 + 1);
      v9 = v8++;
      goto LABEL_18;
    }
LABEL_27:
    if ( a2 == *v9 )
    {
      v8 = v9 + 1;
      goto LABEL_18;
    }
LABEL_17:
    v8 = v5 + 1;
    v9 = v5;
    goto LABEL_18;
  }
  v8 = v3 + 1;
  if ( *v3 == a2 )
  {
    v9 = *(_QWORD **)(a1 + 8);
  }
  else
  {
    v9 = v3 + 1;
    v8 = v3 + 2;
    if ( a2 != v3[1] )
    {
      v9 = v3 + 2;
      v8 = v3 + 3;
      if ( a2 != v3[2] )
      {
        v9 = v3 + 3;
        v8 = v3 + 4;
        result = (__int64)&v3[4 * result];
        if ( v3[3] != a2 )
        {
          while ( 1 )
          {
            v9 = v3 + 4;
            if ( (_QWORD *)result == v3 + 4 )
            {
              v6 = v5 - v9;
              goto LABEL_14;
            }
            if ( a2 == v3[4] )
            {
              v8 = v3 + 5;
              goto LABEL_18;
            }
            if ( a2 == v3[5] )
            {
              v9 = v3 + 5;
              v8 = v3 + 6;
              goto LABEL_18;
            }
            if ( a2 == v3[6] )
            {
              v9 = v3 + 6;
              v8 = v3 + 7;
              goto LABEL_18;
            }
            if ( a2 == v3[7] )
              break;
            v3 += 4;
          }
          v9 = v3 + 7;
          v8 = v3 + 8;
        }
      }
    }
  }
LABEL_18:
  if ( v5 != v8 )
  {
    result = (__int64)memmove(v9, v8, (char *)v5 - (char *)v8);
    LODWORD(v4) = *(_DWORD *)(a1 + 16);
  }
  *(_DWORD *)(a1 + 16) = v4 - 1;
  return result;
}
