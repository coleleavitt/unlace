unsigned __int64 __fastcall sub_20938D0(__int64 a1, unsigned int a2)
{
  unsigned __int8 v2; // al
  __int64 v3; // rax
  __int64 v4; // rcx

  v2 = *(_BYTE *)(a1 - 16);
  if ( (v2 & 2) != 0 )
  {
    v3 = *(_QWORD *)(a1 - 32);
    v4 = *(unsigned int *)(a1 - 24);
  }
  else
  {
    v4 = (*(_WORD *)(a1 - 16) >> 6) & 0xF;
    v3 = a1 - 8LL * ((v2 >> 2) & 0xF) - 16;
  }
  return sub_2092C70((__int64 *)(v3 + 8LL * a2), (__int64 *)(v3 + 8 * v4));
}
