__int64 sub_9B9A0()
{
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 v3; // rdx

  if ( *(char *)(dbg + 34LL) < 0 )
    return 0;
  v1 = sub_C6150(HIDWORD(qword_2524A0));
  if ( !v1 )
    return 0;
  if ( *(_BYTE *)(v1 + 153) )
    return 1;
  v2 = *(_QWORD *)(v1 + 128);
  if ( !v2 )
    return 0;
  v3 = *(_QWORD *)(v1 + 120) + 16 * v2;
  LOBYTE(v3) = *(_BYTE *)(v3 - 8) != 0;
  return (unsigned int)v3;
}

