__int64 __fastcall sub_178E2C0(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  char v4; // cl
  char v5; // r10
  char v6; // si
  char v7; // r9
  unsigned __int16 v8; // ax
  __int64 result; // rax

  v2 = *(_QWORD *)(a2 + 8);
  v3 = v2 + 8LL * *(unsigned int *)(a2 + 16);
  if ( v3 == v2 )
    return 2;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  do
  {
    while ( 1 )
    {
      v8 = *(_WORD *)(*(_QWORD *)(*(_QWORD *)v2 + 72LL) + 8LL);
      if ( v8 != 73 )
        break;
      v5 = 1;
LABEL_5:
      v2 += 8;
      if ( v3 == v2 )
        goto LABEL_10;
    }
    if ( v8 <= 0x49u )
    {
      if ( v8 == 70 )
        v6 = 1;
      goto LABEL_5;
    }
    if ( v8 != 75 )
    {
      if ( v8 == 76 )
        v4 = 1;
      goto LABEL_5;
    }
    v2 += 8;
    v7 = 1;
  }
  while ( v3 != v2 );
LABEL_10:
  result = 4;
  if ( v4 )
    return result;
  result = 1;
  if ( v5 )
    return result;
  if ( !v7 )
  {
    if ( v6 )
      return 0;
    return 2;
  }
  result = 3;
  if ( !v6 )
    return 2;
  return result;
}
