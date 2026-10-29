char __fastcall fileAbsPath(char **a1)
{
  int i; // r12d
  char *v2; // rbx
  char v3; // bp
  char *v4; // rax
  char v5; // dl
  char result; // al

  for ( i = 1000; ; i *= 2 )
  {
    v2 = (char *)operator new[](i);
    if ( getcwd(v2, i) )
      break;
    operator delete[](v2);
  }
  v3 = *v2;
  if ( *v2 != 47 )
    v3 = 92;
  operator delete[](v2);
  v4 = *a1;
  if ( *((_QWORD *)*a1 - 3) <= 1u )
  {
    v5 = *v4;
    return v5 == v3;
  }
  v5 = *v4;
  if ( v4[1] != 58 )
    return v5 == v3;
  result = 1;
  if ( (unsigned __int8)((v5 & 0xDF) - 65) > 0x19u )
    return v5 == v3;
  return result;
}

