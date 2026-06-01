__int64 __fastcall sub_8B0600(__int64 a1)
{
  unsigned int v1; // r12d
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // rsi
  __int64 v5; // r14

  v1 = 0;
  v2 = *(_QWORD *)(a1 + 1592);
  if ( !v2 || !*(_DWORD *)(v2 - 4) )
    return 1;
  while ( 1 )
  {
    v3 = 232LL * v1;
    v4 = v2 + v3;
    if ( (*(_BYTE *)(v2 + v3 + 3) & 0x40) != 0 )
    {
      v5 = a1 + 736;
      if ( sub_8AEDF0(a1 + 736, v4 + 8, v4 + 72) )
        return 0;
      v2 = *(_QWORD *)(a1 + 1592);
      v4 = v2 + v3;
      if ( *(char *)(v2 + v3 + 3) >= 0 )
        goto LABEL_9;
    }
    else
    {
      v5 = a1 + 736;
      if ( *(char *)(v4 + 3) >= 0 )
        goto LABEL_5;
    }
    if ( sub_8AEDF0(v5, v4 + 136, v4 + 8) )
      return 0;
    v2 = *(_QWORD *)(a1 + 1592);
LABEL_9:
    if ( !v2 )
      return 1;
LABEL_5:
    if ( ++v1 >= *(_DWORD *)(v2 - 4) )
      return 1;
  }
}

