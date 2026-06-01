__int64 __fastcall sub_8FDCC0(char *a1)
{
  unsigned int v1; // eax
  unsigned int v3; // edi
  unsigned int v4; // ebx
  int v5; // eax
  char v7; // dl

  v3 = *a1;
  LOBYTE(v1) = (_BYTE)v3 == 92 || (_BYTE)v3 == 47;
  v4 = v1;
  if ( (_BYTE)v1 )
    return v4;
  if ( v3 > 0x7F )
    return v4;
  v5 = isalpha(v3);
  if ( !v5 || a1[1] != 58 )
    return v4;
  v7 = a1[2];
  LOBYTE(v5) = v7 == 47;
  return (v7 == 92) | (unsigned int)v5;
}
