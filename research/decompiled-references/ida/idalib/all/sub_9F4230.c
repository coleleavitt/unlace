unsigned __int64 *__fastcall sub_9F4230(_QWORD *a1, unsigned __int64 *a2)
{
  const char *v2; // rdx
  unsigned __int64 v3; // rcx
  const char *v4; // rax
  unsigned __int64 *v6; // [rsp+0h] [rbp-10h] BYREF

  v2 = (const char *)a1[2];
  if ( !v2 )
  {
    v4 = (const char *)(a1 + 1);
LABEL_8:
    v6 = a2;
    return sub_9F4170(a1, v4, &v6) + 5;
  }
  v3 = *a2;
  v4 = (const char *)(a1 + 1);
  do
  {
    while ( *((_QWORD *)v2 + 4) >= v3 )
    {
      v4 = v2;
      v2 = *((const char **)v2 + 2);
      if ( !v2 )
        goto LABEL_6;
    }
    v2 = *((const char **)v2 + 3);
  }
  while ( v2 );
LABEL_6:
  if ( a1 + 1 == (_QWORD *)v4 || *((_QWORD *)v4 + 4) > v3 )
    goto LABEL_8;
  return (unsigned __int64 *)(v4 + 40);
}
