__int64 __fastcall sub_5EE760(char a1)
{
  _BYTE *v1; // rdx
  int v2; // eax

  v1 = &unk_2B2FF41;
  v2 = 0;
  while ( a1 != *v1 )
  {
    ++v2;
    v1 += 24;
    if ( v2 == 7 )
      return 0;
  }
  return *((unsigned __int8 *)&unk_2B2FF40 + 24 * v2);
}
