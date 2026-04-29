__int64 __fastcall sub_19B540(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax

  v1 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 280LL);
  if ( (*(_BYTE *)(v1 + 4) & 0x40) == 0 )
  {
    if ( !under_debugger )
      sub_37E160(52041);
    goto LABEL_12;
  }
  if ( !(unsigned __int8)sub_19B4D0((_QWORD *)a1) )
    return 0xFFFFFFFFLL;
  if ( !*(_BYTE *)(v1 + 320) )
  {
    v2 = *(_QWORD *)(v1 + 464);
    if ( v2 )
      return *(unsigned int *)(*(_QWORD *)(v1 + 456) + 4 * v2 - 4);
    if ( !under_debugger )
      sub_37E160(52042);
LABEL_12:
    BUG();
  }
  return *(unsigned int *)(a1 + 48);
}
