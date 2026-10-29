char __fastcall sub_CCBC10(__int64 a1)
{
  __int64 *v1; // rax
  unsigned __int64 v2; // rax
  __int64 v4; // rax

  while ( 1 )
  {
    if ( *(_BYTE *)(a1 + 60) )
    {
      v4 = *(_QWORD *)(a1 + 40);
      if ( !v4 )
        return 1;
      goto LABEL_8;
    }
    v1 = *(__int64 **)(a1 + 32);
    if ( v1 )
      break;
    if ( *(_BYTE *)(a1 + 52) )
      return 1;
    v4 = *(_QWORD *)(a1 + 40);
LABEL_8:
    if ( *(_BYTE *)(a1 + 61) )
      return 1;
    a1 = v4;
  }
  if ( *(_BYTE *)(a1 + 61) || (*(_BYTE *)(*v1 + 28) & 0x7Fu) - 59 > 2 )
    return 1;
  v2 = sub_B735C0(*v1);
  if ( v2 )
    return (unsigned __int8)BYTE2(*(_QWORD *)(v2 + 80)) >> 7;
  else
    return 1;
}

