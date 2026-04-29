__int64 __fastcall sub_1BE410(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // eax
  __int64 *v6; // r12
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rbx

  v4 = *(_DWORD *)a1;
  if ( *(_DWORD *)a1 != 2 )
  {
    if ( v4 <= 2 )
    {
      if ( v4 == 1 )
        return sub_1EB130(a2, *(_QWORD *)(a1 + 8), a3);
LABEL_15:
      if ( !under_debugger )
        sub_37E160(51028);
      BUG();
    }
    if ( (unsigned int)(v4 - 3) > 1 )
      goto LABEL_15;
    return 0;
  }
  v6 = *(__int64 **)(a1 + 8);
  v7 = v6[1];
  v8 = *v6;
  v9 = *v6;
  if ( !(24 * v7) )
    return 0;
  while ( (unsigned int)(*(_DWORD *)v9 - 3) <= 1 )
  {
LABEL_12:
    v9 += 24;
    if ( v9 == v8 + 24 * v7 )
      return 0;
  }
  if ( *(_DWORD *)v9 == 1 && !(unsigned __int8)sub_1EB130(a2, *(_QWORD *)(v9 + 8), *(unsigned __int16 *)(v9 + 18)) )
  {
    v8 = *v6;
    v7 = v6[1];
    goto LABEL_12;
  }
  return 1;
}
