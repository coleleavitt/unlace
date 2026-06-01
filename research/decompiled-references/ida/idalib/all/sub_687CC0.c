_BYTE *__fastcall sub_687CC0(_BYTE *a1, __int64 a2, __int64 a3, unsigned int a4)
{
  int v4; // r15d
  int v5; // r14d
  _BYTE *v6; // r13
  _BYTE *v7; // r12
  __int64 v9; // rdx
  _BYTE *v10; // rbx
  _BYTE *result; // rax
  char *v12; // rax
  char v13; // dl
  unsigned __int64 v14; // [rsp+0h] [rbp-58h]

  v4 = 1;
  v5 = 32;
  v6 = a1 + 1023;
  v7 = a1;
  v14 = (unsigned __int64)(a1 + 1024);
  do
  {
    while ( 1 )
    {
      v9 = v4 & a4;
      if ( (v4 & a4) != 0 )
        break;
LABEL_2:
      v4 *= 2;
      if ( !--v5 )
        goto LABEL_8;
    }
    if ( (unsigned __int64)v7 >= v14 )
    {
      if ( !under_debugger )
        interr(518);
LABEL_19:
      BUG();
    }
    v10 = v7 + 1;
    *v7 = 32;
    v7 = a1 + 1023;
    if ( (unsigned __int64)v10 >= v14 )
    {
      a1[1023] = 0;
      strarray(a2, a3, v9);
      goto LABEL_7;
    }
    v12 = (char *)strarray(a2, a3, v9);
    if ( v10 != v6 )
    {
      while ( 1 )
      {
        v13 = *v12++;
        *v10 = v13;
        if ( !v13 )
          break;
        if ( ++v10 == v6 )
          goto LABEL_7;
      }
      v7 = v10;
      goto LABEL_2;
    }
LABEL_7:
    v4 *= 2;
    a1[1023] = 0;
    --v5;
  }
  while ( v5 );
LABEL_8:
  result = a1 + 1024;
  if ( (unsigned __int64)v7 >= v14 )
  {
    if ( !under_debugger )
      interr(519);
    goto LABEL_19;
  }
  *v7 = 0;
  return result;
}
