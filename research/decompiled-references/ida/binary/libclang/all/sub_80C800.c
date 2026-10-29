__int64 __fastcall sub_80C800(__int64 a1)
{
  unsigned __int16 v1; // ax
  bool v2; // zf
  __int64 v3; // rax

  v1 = *(_WORD *)a1 & 0x1FF;
  if ( v1 > 0x56u )
    return a1 + 8LL * *(unsigned int *)(a1 + 4) + 40;
  v2 = v1 == 80;
  v3 = *(unsigned int *)(a1 + 4);
  if ( v2 )
    return a1 + 8 * v3 + 24;
  else
    return a1 + 8 * v3 + 48;
}

