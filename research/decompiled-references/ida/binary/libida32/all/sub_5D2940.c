__int64 __fastcall sub_5D2940(char a1)
{
  _BYTE *v1; // rdx
  int v2; // eax

  v1 = &unk_2B05F81;
  v2 = 0;
  while ( a1 != *v1 )
  {
    ++v2;
    v1 += 24;
    if ( v2 == 7 )
      return 0;
  }
  return *((unsigned __int8 *)&unk_2B05F80 + 24 * v2);
}

