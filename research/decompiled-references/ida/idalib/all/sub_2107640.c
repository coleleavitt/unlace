bool __fastcall sub_2107640(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // rbp
  __int64 v4; // rsi
  __int64 v5; // rcx
  bool result; // al
  unsigned int v7; // [rsp+4h] [rbp-24h] BYREF
  int *v8; // [rsp+8h] [rbp-20h] BYREF

  v3 = a2;
  v4 = a1 + 1720;
  v5 = *(_QWORD *)(a1 + 1728);
  v7 = a3;
  if ( !v5 )
    goto LABEL_11;
  do
  {
    while ( a3 <= *(_DWORD *)(v5 + 32) )
    {
      v4 = v5;
      v5 = *(_QWORD *)(v5 + 16);
      if ( !v5 )
        goto LABEL_6;
    }
    v5 = *(_QWORD *)(v5 + 24);
  }
  while ( v5 );
LABEL_6:
  if ( a1 + 1720 == v4 || a3 < *(_DWORD *)(v4 + 32) )
  {
LABEL_11:
    v8 = (int *)&v7;
    v4 = sub_2107230((_QWORD *)(a1 + 1712), v4, &v8);
    if ( !(_DWORD)v3 )
      return *(_WORD *)(a1 + 1880) > 4u;
  }
  else if ( !(_DWORD)v3 )
  {
    return *(_WORD *)(a1 + 1880) > 4u;
  }
  result = 0;
  if ( (unsigned int)v3 < *(_DWORD *)(v4 + 168) )
    return *(_QWORD *)(*(_QWORD *)(v4 + 160) + 80 * v3 + 8) != 0;
  return result;
}
