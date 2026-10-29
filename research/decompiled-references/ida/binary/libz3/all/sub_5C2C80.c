__int64 __fastcall sub_5C2C80(__int64 a1)
{
  __int64 result; // rax
  __int64 *v3; // rbx
  __int64 *v4; // r12
  __int64 v5; // rsi
  __int64 v6; // rdi
  char *v8; // r13
  __int64 v9; // rax
  __int64 v10; // rbx
  char *v11; // r12
  void *v12; // rdi
  void *v13; // rdi

  result = (__int64)&off_1C68570;
  v3 = *(__int64 **)(a1 + 96);
  *(_QWORD *)a1 = &off_1C68570;
  if ( v3 )
  {
    result = *((unsigned int *)v3 - 1);
    v4 = &v3[result];
    if ( v3 >= v4 )
      goto LABEL_9;
    do
    {
      while ( 1 )
      {
        v5 = *v3;
        if ( *v3 )
        {
          v6 = *(_QWORD *)(a1 + 88);
          if ( (*(_DWORD *)(v5 + 8))-- == 1 )
            break;
        }
        if ( ++v3 >= v4 )
          goto LABEL_8;
      }
      result = sub_15D7BC0(v6, v5);
      ++v3;
    }
    while ( v3 < v4 );
LABEL_8:
    v3 = *(__int64 **)(a1 + 96);
    if ( v3 )
LABEL_9:
      result = sub_186B220(v3 - 1);
  }
  v8 = *(char **)(a1 + 64);
  if ( v8 )
  {
    v9 = *(unsigned int *)(a1 + 72);
    if ( (_DWORD)v9 )
    {
      v10 = *(_QWORD *)(a1 + 64);
      v11 = &v8[24 * v9];
      do
      {
        while ( 1 )
        {
          v12 = *(void **)(v10 + 16);
          if ( !v12 )
            break;
          sub_186B220(v12);
          v10 += 24;
          if ( v11 == (char *)v10 )
            goto LABEL_15;
        }
        v10 += 24;
      }
      while ( (char *)v10 != v11 );
    }
LABEL_15:
    result = sub_186B220(v8);
  }
  v13 = *(void **)(a1 + 40);
  if ( v13 )
    return sub_186B220(v13);
  return result;
}

