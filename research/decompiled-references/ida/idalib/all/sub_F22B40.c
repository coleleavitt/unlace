__int64 __fastcall sub_F22B40(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  __int64 result; // rax
  int v5; // edx

  v1 = *a1;
  v2 = (*a1 >> 1) & 3;
  if ( ((*a1 >> 1) & 3) != 0 )
  {
    result = 4;
    if ( v2 == 3 )
      return result;
    result = 3;
    if ( v2 == 2 )
      return result;
    result = 1;
    v5 = *(_BYTE *)(v1 & 0xFFFFFFFFFFFFFFF8LL) & 7;
    if ( !v5 )
      return result;
  }
  else
  {
    v3 = v1 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v3 )
      return (*(_BYTE *)(v3 + 28) & 0x7Fu) - 53 < 2 ? 7 : 0;
    LOBYTE(v5) = 7;
  }
  result = 2;
  if ( (_BYTE)v5 != 1 )
  {
    result = 5;
    if ( (_BYTE)v5 != 3 )
      return 2 * (unsigned int)((_BYTE)v5 == 2) + 6;
  }
  return result;
}
