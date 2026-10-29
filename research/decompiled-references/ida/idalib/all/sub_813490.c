__int64 __fastcall sub_813490(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r13
  __int64 v5; // rbx
  int v6; // r12d
  __int64 v7; // r13
  char byte; // al
  unsigned int v10; // [rsp+0h] [rbp-48h]

  v4 = *(_QWORD *)(a2 + 24);
  v5 = *(_QWORD *)(a2 + 16);
  v6 = v4;
  if ( (debug & 4) != 0 )
    sub_368890();
  if ( (int)v4 <= 0 )
    return 0;
  v10 = 0;
  v7 = 0;
  while ( 1 )
  {
    if ( !*(_BYTE *)(v5 + 2 * v7) )
    {
      if ( (debug & 4) != 0 )
        sub_368890();
      goto LABEL_5;
    }
    byte = get_byte(a3);
    if ( (debug & 4) != 0 )
      sub_368890();
    if ( *(_BYTE *)(v5 + 2 * v7 + 1) != byte )
      break;
    ++v10;
LABEL_5:
    ++v7;
    a3 = *(_QWORD *)(*(_QWORD *)a1 + 1504LL) & (a3 + 1);
    if ( v6 <= (int)v7 )
    {
      if ( (debug & 4) != 0 )
        sub_368890();
      return v10;
    }
  }
  if ( (debug & 4) != 0 )
    sub_368890();
  return (unsigned int)-1;
}
