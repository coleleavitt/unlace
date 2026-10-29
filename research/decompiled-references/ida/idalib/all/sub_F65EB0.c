bool __fastcall sub_F65EB0(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rax
  char v4; // dl
  unsigned __int16 v5; // dx
  bool result; // al
  __int64 v7; // rdx
  __int64 v8; // rax

  v2 = *(_QWORD *)(*a1 & 0xFFFFFFFFFFFFFFF0LL);
  v3 = *(_QWORD *)(*(_QWORD *)(v2 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v4 = *(_BYTE *)(v3 + 16);
  if ( v4 == 13 )
  {
    v5 = *(_WORD *)(v3 + 18);
    result = 1;
    if ( ((v5 >> 3) & 0x1FF) == 0x1AF )
      return result;
    if ( *(_BYTE *)(v2 + 16) != 42 )
      return 0;
  }
  else if ( *(_BYTE *)(v2 + 16) != 42 )
  {
    if ( v4 != 42 )
      return 0;
    v2 = sub_F62E70(v2);
    if ( !v2 )
      return 0;
  }
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 32) & 0xFFFFFFFFFFFFFFF0LL)
                                                                + 8LL)
                                                    & 0xFFFFFFFFFFFFFFF0LL)
                                        + 16LL)
     - 25 > 1 )
    return 0;
  v7 = *(_QWORD *)&byte_8[*a1 & 0xFFFFFFFFFFFFFFF0LL];
  LODWORD(v8) = 0;
  if ( (v7 & 8) != 0 )
    v8 = *(__int64 *)((char *)&qword_18 + (v7 & 0xFFFFFFFFFFFFFFF0LL));
  return (unsigned int)v8 >> 9 == 24;
}
