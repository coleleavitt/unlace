__int64 __fastcall sub_4EBFF0(__int64 a1)
{
  __int64 v2; // rax
  char *v3; // rdi
  __int64 result; // rax
  char *v5; // rbp
  char *v6; // rbx
  void *v7; // r12
  void *v8; // rdi
  void *v9; // rdi

  *(_QWORD *)a1 = &off_1C4FD08;
  v2 = *(unsigned int *)(a1 + 112);
  v3 = *(char **)(a1 + 104);
  result = 3 * v2;
  v5 = &v3[8 * result];
  v6 = v3;
  if ( v3 != v5 )
  {
    while ( *((_DWORD *)v6 + 1) != 2 )
    {
      v6 += 24;
      if ( v5 == v6 )
        goto LABEL_14;
    }
    if ( v5 != v6 )
    {
      do
      {
        v7 = *((void **)v6 + 2);
        if ( v7 )
        {
          sub_552D60(*((_QWORD *)v6 + 2));
          sub_186B220(v7);
        }
        result = (__int64)(v6 + 24);
        if ( v5 == v6 + 24 )
          break;
        while ( 1 )
        {
          v6 = (char *)result;
          if ( *(_DWORD *)(result + 4) == 2 )
            break;
          result += 24;
          if ( v5 == (char *)result )
            goto LABEL_13;
        }
      }
      while ( v5 != (char *)result );
LABEL_13:
      v3 = *(char **)(a1 + 104);
    }
  }
LABEL_14:
  if ( v3 )
    result = sub_186B220(v3);
  v8 = *(void **)(a1 + 88);
  if ( v8 )
    result = sub_186B220(v8);
  v9 = *(void **)(a1 + 80);
  if ( v9 )
    return sub_186B220(v9);
  return result;
}

