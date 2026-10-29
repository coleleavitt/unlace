__int64 __fastcall sub_866B60(int a1, __int64 a2, __int64 a3)
{
  char v3; // di
  const char *v4; // rcx
  int v5; // r9d
  const char *v6; // rax
  char v7; // al
  const char *v8; // r8
  __int64 result; // rax
  __int64 v10; // rdx

  if ( !a3 )
    return 4294967248LL;
  if ( a1 > 99 )
  {
    v5 = a1 - 100;
    v4 = "no error";
  }
  else
  {
    if ( a1 >= 0 )
    {
      v3 = 0;
      v4 = (const char *)&unk_23BF7CC;
      v5 = 1;
LABEL_5:
      v6 = v4 + 1;
      if ( !*v4 )
        goto LABEL_11;
LABEL_6:
      v3 = v4[1];
      v4 = v6;
      do
      {
        v7 = v3;
        v8 = v4;
        v3 = *++v4;
      }
      while ( v7 );
      if ( !v3 )
        return 4294967267LL;
      while ( --v5 )
      {
        v3 = v8[2];
        v6 = v4 + 1;
        if ( *v4 )
          goto LABEL_6;
LABEL_11:
        v8 = v4;
        v4 = v6;
        if ( !v3 )
          return 4294967267LL;
      }
      goto LABEL_16;
    }
    v4 = "no error";
    v5 = -a1;
  }
  v3 = 110;
  if ( v5 > 0 )
  {
    v3 = v4[1];
    goto LABEL_5;
  }
LABEL_16:
  v10 = a3 - 1;
  result = 0;
  do
  {
    if ( result == v10 )
    {
      *(_BYTE *)(a2 + result) = 0;
      return 4294967248LL;
    }
    *(_BYTE *)(a2 + result++) = v3;
    v3 = v4[result];
  }
  while ( v3 );
  *(_BYTE *)(a2 + result) = 0;
  return result;
}
