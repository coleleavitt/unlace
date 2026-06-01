__int64 *__fastcall sub_5801A0(__int64 a1)
{
  __int64 *v2; // rdi
  __int64 *result; // rax
  char *v4; // r13
  __int64 v5; // rax
  __int64 v6; // rbx
  char *v7; // r12
  __int64 v8; // rdi
  char *v9; // r13
  __int64 v10; // rax
  __int64 v11; // rbx
  char *v12; // r12
  __int64 v13; // rdi
  __int64 v14; // rdi

  v2 = (__int64 *)(a1 + 56);
  *(v2 - 7) = (__int64)&off_1C51520;
  sub_57FB00(v2);
  result = sub_57FDC0((__int64 *)(a1 + 80));
  v4 = *(char **)(a1 + 80);
  if ( v4 )
  {
    v5 = *(unsigned int *)(a1 + 88);
    if ( (_DWORD)v5 )
    {
      v6 = *(_QWORD *)(a1 + 80);
      v7 = &v4[24 * v5];
      do
      {
        while ( 1 )
        {
          v8 = *(_QWORD *)(v6 + 8);
          if ( !v8 )
            break;
          v6 += 24;
          sub_186B220((void *)(v8 - 8));
          if ( (char *)v6 == v7 )
            goto LABEL_6;
        }
        v6 += 24;
      }
      while ( (char *)v6 != v7 );
    }
LABEL_6:
    result = (__int64 *)sub_186B220(v4);
  }
  v9 = *(char **)(a1 + 56);
  if ( v9 )
  {
    v10 = *(unsigned int *)(a1 + 64);
    if ( (_DWORD)v10 )
    {
      v11 = *(_QWORD *)(a1 + 56);
      v12 = &v9[24 * v10];
      do
      {
        while ( 1 )
        {
          v13 = *(_QWORD *)(v11 + 8);
          if ( !v13 )
            break;
          v11 += 24;
          sub_186B220((void *)(v13 - 8));
          if ( v12 == (char *)v11 )
            goto LABEL_12;
        }
        v11 += 24;
      }
      while ( v12 != (char *)v11 );
    }
LABEL_12:
    result = (__int64 *)sub_186B220(v9);
  }
  v14 = *(_QWORD *)(a1 + 48);
  if ( v14 )
    return (__int64 *)sub_186B220((void *)(v14 - 8));
  return result;
}

