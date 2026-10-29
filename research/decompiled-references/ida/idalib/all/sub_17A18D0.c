unsigned __int64 __fastcall sub_17A18D0(unsigned __int64 a1)
{
  __int64 v1; // rax
  unsigned __int64 v2; // rdi
  int v3; // eax
  unsigned __int64 result; // rax
  unsigned __int64 v5; // rdi
  bool v6; // cf

  while ( 1 )
  {
    v1 = *(_QWORD *)(a1 + 16);
    v2 = v1 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v1 & 4) != 0 )
      v2 = *(_QWORD *)v2;
    v3 = *(_BYTE *)(v2 + 8) & 0x7F;
    if ( (unsigned int)(v3 - 59) > 2 )
      break;
    a1 = v2 - 64;
    if ( !a1 )
      return 0;
  }
  v5 = v2 - 72;
  v6 = (unsigned int)(v3 - 34) < 6;
  result = 0;
  if ( v6 )
    return v5;
  return result;
}
