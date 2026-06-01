__int64 __fastcall sub_79D350(unsigned __int64 a1, __int64 a2)
{
  char v3; // dl

  while ( a1 != sub_79CC40(a1) )
    a1 = sub_79CC40(a1);
  if ( !a2 )
    return 0;
  v3 = *(_BYTE *)(a2 + 8) & 0x7F;
  if ( (*(_BYTE *)(a2 + 8) & 0x7D) == 4 )
    goto LABEL_6;
  if ( a1 != sub_79CC40(a2) )
  {
    v3 = *(_BYTE *)(a2 + 8) & 0x7F;
LABEL_6:
    __asm { jmp     rax }
  }
  return 1;
}

