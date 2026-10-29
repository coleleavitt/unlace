__int64 __fastcall sub_9BDA00(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rax
  unsigned __int64 v7; // rax

  v1 = sub_B5ABC0(a1);
  if ( !v1 )
    return 0;
LABEL_2:
  if ( (*(_BYTE *)(v1 + 68) & 1) != 0 && !*(_QWORD *)(v1 + 40)
    || (v2 = sub_B685F0(v1), (unsigned __int8)sub_B5AE10(v1, v2))
    || (v6 = sub_F3F500(*(_QWORD *)(*(_QWORD *)(v1 + 48) & 0xFFFFFFFFFFFFFFF0LL), v2, v3, v4, v5)) != 0
    && !(unsigned __int8)sub_9BDA00(v6) )
  {
    while ( 1 )
    {
      v7 = *(_QWORD *)(v1 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      v1 = v7;
      if ( !v7 )
        return 0;
      if ( (*(_BYTE *)(v7 + 28) & 0x7Fu) - 49 <= 2 )
        goto LABEL_2;
    }
  }
  return 1;
}

