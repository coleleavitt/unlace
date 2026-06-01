__int64 __fastcall dwarf_basic_crc32(char *a1, __int64 a2, unsigned int a3)
{
  char *v3; // rsi
  unsigned int v4; // eax
  char v5; // dl

  if ( !a1 )
    return 0;
  v3 = &a1[a2];
  v4 = ~a3;
  if ( a1 >= v3 )
    return a3;
  do
  {
    v5 = *a1++;
    v4 = *((_DWORD *)qword_940E0 + (unsigned __int8)(v4 ^ v5)) ^ (v4 >> 8);
  }
  while ( v3 != a1 );
  return ~v4;
}

