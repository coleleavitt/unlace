__int64 sub_9B8A0()
{
  __int64 v1; // rax
  __int64 v2; // rdx

  if ( *(char *)(dbg + 34LL) < 0 )
    return 0;
  v1 = sub_C4D00(HIDWORD(qword_251320));
  if ( !v1 )
    return 0;
  if ( *(_BYTE *)(v1 + 153) )
    return 1;
  v2 = *(_QWORD *)(v1 + 128);
  if ( !v2 )
    return 0;
  LOBYTE(v2) = *(_BYTE *)(*(_QWORD *)(v1 + 120) + 8 * v2 - 4) != 0;
  return (unsigned int)v2;
}

