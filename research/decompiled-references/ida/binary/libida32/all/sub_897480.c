__int64 __fastcall sub_897480(_QWORD *a1, unsigned int *a2)
{
  unsigned int *v3; // rdi
  __int64 result; // rax
  unsigned int *v5; // rdx
  unsigned int *v6; // rdx
  unsigned int v7; // r8d
  unsigned int v8; // ecx
  __int64 v9; // rbp
  __int64 v10; // rax

  v3 = a2;
  result = a1[10];
  v5 = (unsigned int *)a1[2];
  if ( a2 == (unsigned int *)result )
  {
    if ( a2 != v5 )
    {
      result = *a2;
      if ( *(a2 - 3) >= (unsigned int)result )
      {
        v6 = a2 - 4;
LABEL_14:
        v6[1] = v3[1];
        v9 = ((char *)a2 - (char *)v3) >> 4;
LABEL_15:
        memmove(v3, a2, a1[2] + 16LL * a1[3] - (_QWORD)a2);
        v10 = a1[3] - v9;
        a1[3] = v10;
        result = a1[2] + 16 * v10;
        a1[10] = result;
      }
    }
  }
  else
  {
    a2 += 4;
    if ( v3 == v5 )
    {
      if ( (unsigned int *)result == a2 )
        return result;
    }
    else
    {
      v6 = v3 - 4;
      if ( v3 - 4 != (unsigned int *)result )
      {
        v7 = *(v3 - 3);
        v8 = *v3;
        if ( (unsigned int *)result == a2 || (result = v3[4], v3[1] < (unsigned int)result) )
        {
          if ( v7 < v8 )
            return result;
          goto LABEL_14;
        }
        if ( v7 >= v8 )
        {
          a2 = v3 + 8;
          v9 = 2;
          *(v3 - 3) = v3[5];
          goto LABEL_15;
        }
LABEL_10:
        v3[1] = v3[5];
        return (__int64)sub_895300(a1, (__int64)a2);
      }
      if ( v6 == a2 )
        return result;
    }
    result = v3[4];
    if ( v3[1] >= (unsigned int)result )
      goto LABEL_10;
  }
  return result;
}

