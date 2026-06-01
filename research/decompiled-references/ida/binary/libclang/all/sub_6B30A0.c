bool __fastcall sub_6B30A0(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rax

  if ( *(_BYTE *)(a1 + 16) != 33 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 33 )
      return 0;
    a1 = sub_B0D320(a1);
    if ( !a1 )
      return 0;
  }
  v1 = *(_QWORD *)(*(_QWORD *)(a1 + 32) & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(v1 + 16) - 34 > 1 )
  {
    v1 = sub_B0D320(v1);
    if ( *(_BYTE *)(v1 + 19) >> 2 )
      return 0;
  }
  else if ( *(_BYTE *)(v1 + 19) >> 2 )
  {
    return 0;
  }
  v2 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v1 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v2 + 16) == 13 )
    return ((*(_WORD *)(v2 + 18) >> 3) & 0x1FF) == 488;
  return 0;
}

