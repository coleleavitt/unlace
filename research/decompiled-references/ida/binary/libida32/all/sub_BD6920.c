unsigned __int64 __fastcall sub_BD6920(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 result; // rax
  unsigned __int64 v7; // rdx

  result = sub_B5ABC0(a1, a2, a3, a4, a5, a6);
  if ( !result )
    return 0;
LABEL_2:
  if ( *(_QWORD *)(*(_QWORD *)&byte_8[*(_QWORD *)(result + 48) & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL) != *(_QWORD *)(*(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL)
    || (*(_BYTE *)(result + 68) & 1) != 0 && !*(_QWORD *)(result + 40) )
  {
    while ( 1 )
    {
      v7 = *(_QWORD *)(result + 8) & 0xFFFFFFFFFFFFFFF8LL;
      result = v7;
      if ( !v7 )
        return 0;
      if ( (*(_BYTE *)(v7 + 28) & 0x7Fu) - 49 <= 2 )
        goto LABEL_2;
    }
  }
  return result;
}

