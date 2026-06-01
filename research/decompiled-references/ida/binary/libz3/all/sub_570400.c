__int64 *__fastcall sub_570400(__int64 a1)
{
  void *v2; // rdi
  __int64 v3; // rdi
  char *v4; // r13
  __int64 v5; // rax
  __int64 v6; // rbx
  char *v7; // r12
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 *result; // rax

  *(_QWORD *)a1 = &off_1C512B8;
  v2 = *(void **)(a1 + 96);
  if ( v2 )
    sub_186B220(v2);
  v3 = *(_QWORD *)(a1 + 56);
  if ( v3 )
    sub_186B220((void *)(v3 - 16));
  v4 = *(char **)(a1 + 16);
  if ( v4 )
  {
    v5 = *(unsigned int *)(a1 + 24);
    if ( (_DWORD)v5 )
    {
      v6 = *(_QWORD *)(a1 + 16);
      v7 = &v4[24 * v5];
      do
      {
        while ( 1 )
        {
          v8 = *(_QWORD *)(v6 + 16);
          if ( !v8 )
            break;
          v6 += 24;
          sub_186B220((void *)(v8 - 8));
          if ( v7 == (char *)v6 )
            goto LABEL_10;
        }
        v6 += 24;
      }
      while ( v7 != (char *)v6 );
    }
LABEL_10:
    sub_186B220(v4);
  }
  v9 = *(_QWORD *)(a1 + 8);
  result = qword_1C67AB0;
  *(_QWORD *)a1 = qword_1C67AB0;
  if ( v9 )
    return (__int64 *)sub_186B220((void *)(v9 - 8));
  return result;
}

