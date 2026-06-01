const char *__fastcall sub_21B7BC0(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned __int64 v4; // rax
  __int64 v5; // rdx
  char *v6; // rbx
  char *v7; // rbp
  __int64 v9; // r12
  __int64 v10; // rax
  const char **v11; // rax
  const char *v12; // rbx
  unsigned int v13[11]; // [rsp+Ch] [rbp-2Ch] BYREF

  v13[0] = a2;
  v4 = sub_21B6DA0(a1, (int *)v13, 1);
  v5 = *(_QWORD *)(a1 + 8);
  v6 = (char *)(v5 + 8LL * (unsigned int)v4);
  v7 = (char *)(v5 + 8 * HIDWORD(v4));
  if ( v6 == v7 )
    return (const char *)a3;
  if ( a2 )
  {
    while ( !*(_QWORD *)v6 || !(unsigned __int8)sub_21B9810(*(_QWORD *)v6, a2) )
    {
      v6 += 8;
      if ( v7 == v6 )
        return (const char *)a3;
    }
  }
  else
  {
    v6 += 8 * ((unsigned __int64)(v7 - 8 - v6) >> 3) + 8;
  }
  if ( v7 == v6 )
    return (const char *)a3;
  do
  {
    v9 = *(_QWORD *)v6;
    v10 = *(_QWORD *)(*(_QWORD *)v6 + 16LL);
    if ( !v10 )
      v10 = *(_QWORD *)v6;
    *(_BYTE *)(v10 + 44) |= 1u;
    if ( v6 + 8 == v7 )
      break;
    if ( a2 )
    {
      v6 += 8;
      while ( !*(_QWORD *)v6 || !(unsigned __int8)sub_21B9810(*(_QWORD *)v6, a2) )
      {
        v6 += 8;
        if ( v6 == v7 )
          goto LABEL_17;
      }
    }
    else
    {
      v6 += 8 * ((unsigned __int64)(v7 - 16 - v6) >> 3) + 16;
    }
  }
  while ( v7 != v6 );
LABEL_17:
  v11 = *(const char ***)(v9 + 48);
  v12 = *v11;
  if ( *v11 )
    strlen(*v11);
  return v12;
}
