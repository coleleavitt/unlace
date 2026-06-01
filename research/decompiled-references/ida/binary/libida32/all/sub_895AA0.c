__int64 __fastcall sub_895AA0(__int64 **a1, unsigned int a2, int a3, __int64 a4, char a5, char a6)
{
  unsigned int v7; // r12d
  __int64 v8; // rcx
  unsigned int *v10; // rax
  unsigned int *v11; // r15
  __int64 result; // rax
  unsigned int *v13; // r15
  unsigned int *v14; // rax
  unsigned int *v15; // rdx

  v7 = a2 + a3;
  v8 = (__int64)a1[3];
  if ( !a6 )
  {
    v13 = sub_8951C0(a1, a2, 0, v8);
    v14 = (unsigned int *)a1[10];
    if ( v14 == v13 )
    {
      v15 = v14 - 4;
      if ( a1[2] == (__int64 *)v14 )
        return 0xFFFFFFFFLL;
      if ( a2 >= *(v13 - 3) )
      {
LABEL_16:
        if ( v14 != v13 )
          goto LABEL_20;
        return 0xFFFFFFFFLL;
      }
    }
    else
    {
      if ( a2 >= *v13 || v13 == (unsigned int *)a1[2] || (v15 = v13 - 4, v14 == v13 - 4) )
      {
        do
        {
LABEL_20:
          if ( *v13 >= v7 )
            break;
          result = sub_895770(a1, v13, a2, v7, a4, a5, 0);
          if ( (_DWORD)result != -1 )
            return result;
          v13 += 4;
        }
        while ( a1[10] != (__int64 *)v13 );
        return 0xFFFFFFFFLL;
      }
      if ( a2 >= *(v13 - 3) )
        goto LABEL_16;
    }
    v13 = v15;
    goto LABEL_20;
  }
  v10 = sub_8951C0(a1, v7, 0, v8);
  if ( a1[2] == (__int64 *)v10 )
    return 0xFFFFFFFFLL;
  v11 = v10 - 4;
  if ( a1[10] == (__int64 *)(v10 - 4) || a2 >= *(v10 - 3) )
    return 0xFFFFFFFFLL;
  while ( 1 )
  {
    result = sub_895770(a1, v11, a2, v7, a4, a5, 1);
    if ( (_DWORD)result != -1 )
      break;
    if ( a1[2] != (__int64 *)v11 )
    {
      v11 -= 4;
      if ( a2 < v11[1] )
        continue;
    }
    return 0xFFFFFFFFLL;
  }
  return result;
}

