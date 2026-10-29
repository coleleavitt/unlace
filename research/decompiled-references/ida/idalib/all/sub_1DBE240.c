unsigned __int64 __fastcall sub_1DBE240(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  unsigned __int64 result; // rax
  __int64 v6; // rdx
  unsigned __int64 v7; // rbx

  v4 = a2;
  result = sub_1DBE010(a1, a2, a3, a4);
  if ( !result && ((*(_BYTE *)(a2 + 28) + 69) & 0x7Fu) <= 2 )
  {
    while ( 1 )
    {
      v6 = *(_QWORD *)(v4 + 16);
      v7 = v6 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v6 & 4) != 0 )
        v7 = *(_QWORD *)v7;
      if ( (*(_BYTE *)(v7 + 8) & 0x7Fu) - 59 > 2 )
        break;
      v4 = v7 - 64;
      if ( !v4 )
        return 0;
    }
  }
  return result;
}
