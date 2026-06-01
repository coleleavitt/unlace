__int64 __fastcall sub_B72B60(__int64 a1)
{
  __int64 v1; // rbx
  unsigned __int64 v2; // rax
  unsigned int *v3; // rdi
  size_t v4; // rbp
  const void *v6; // r12
  size_t v7; // rax

  v1 = *(_QWORD *)(a1 + 40) & 7LL;
  if ( (*(_QWORD *)(a1 + 40) & 7) != 0 )
    return 0;
  v2 = *(_QWORD *)(a1 + 40) & 0xFFFFFFFFFFFFFFF8LL;
  if ( v2 )
  {
    v3 = *(unsigned int **)(v2 + 16);
    v4 = *v3;
    if ( *v3 )
    {
      if ( *((_BYTE *)v3 + 16) == 67 )
      {
        v6 = v3 + 4;
        v7 = j__strlen("CFStringCreateWithFormat");
        if ( v7 == v4 && !memcmp(v6, "CFStringCreateWithFormat", v7)
          || j__strlen("CFStringCreateWithFormatAndArguments") == v4
          && !memcmp(v6, "CFStringCreateWithFormatAndArguments", v4)
          || j__strlen("CFStringAppendFormat") == v4 && !memcmp(v6, "CFStringAppendFormat", v4) )
        {
          LODWORD(v1) = 2;
        }
        else if ( j__strlen("CFStringAppendFormatAndArguments") == v4
               && !memcmp(v6, "CFStringAppendFormatAndArguments", v4) )
        {
          LODWORD(v1) = 2;
        }
      }
    }
  }
  return (unsigned int)v1;
}
