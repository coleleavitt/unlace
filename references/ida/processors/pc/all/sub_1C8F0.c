__int64 __fastcall sub_1C8F0(char **a1)
{
  char *v1; // rcx
  char v3; // al
  char *v4; // rax
  char v5; // dl

  v1 = *a1;
  if ( (**a1 & 0xDF) != 0x4D || (v1[1] & 0xDF) != 0x4D || (unsigned __int8)(v1[2] - 48) > 7u )
    return 0xFFFFFFFFLL;
  *a1 = v1 + 3;
  v3 = v1[3];
  if ( v3 == 9 || v3 == 32 )
  {
    v4 = v1 + 4;
    do
    {
      do
      {
        *a1 = v4;
        v5 = *v4++;
      }
      while ( v5 == 9 );
    }
    while ( v5 == 32 );
  }
  return (unsigned int)(v1[2] - 48);
}
