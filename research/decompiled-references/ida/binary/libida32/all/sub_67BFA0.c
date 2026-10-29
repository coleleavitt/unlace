_DWORD *__fastcall sub_67BFA0(_QWORD *a1, unsigned int a2)
{
  _DWORD *v2; // rax
  __int64 v3; // r10
  _DWORD *v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdi
  unsigned int *v7; // r8
  _DWORD *result; // rax

  if ( a2 != -1 && (*(_BYTE *)(*a1 + 772LL) & 8) != 0 )
    a2 &= ~1u;
  v2 = (_DWORD *)a1[2];
  v3 = 2LL * a1[3];
  v4 = v2;
  v5 = (v3 * 4) >> 3;
  if ( v3 > 0 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v6 = v5 >> 1;
        v7 = &v4[2 * (v5 >> 1)];
        if ( *v7 >= a2 )
          break;
        v4 = v7 + 2;
        v5 = v5 - 1 - v6;
LABEL_10:
        if ( v5 <= 0 )
        {
LABEL_11:
          if ( v2 != v4 )
            v4 -= 2;
          goto LABEL_13;
        }
      }
      if ( a2 == *v7 && v7[1] < a2 )
      {
        v4 = v7 + 2;
        v5 = v5 - 1 - v6;
        goto LABEL_10;
      }
      v5 >>= 1;
      if ( v6 <= 0 )
        goto LABEL_11;
    }
  }
LABEL_13:
  result = &v2[v3];
  if ( v4 != result )
  {
    while ( a2 >= v4[1] )
    {
      v4 += 2;
      if ( v4 == result )
        return result;
    }
    return v4;
  }
  return result;
}

