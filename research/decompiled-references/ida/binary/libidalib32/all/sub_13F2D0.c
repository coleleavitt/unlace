void __fastcall sub_13F2D0(char *dest, unsigned __int64 a2)
{
  char *v2; // rax
  const void *v3; // rbp
  size_t v4; // rax

  if ( dest )
  {
    v2 = strchr(dest, 10);
    if ( v2 )
    {
      v3 = v2 + 1;
      v4 = strlen(v2 + 1);
      memmove(dest, v3, v4 + 1);
    }
    else
    {
      *(_BYTE *)((__PAIR128__((unsigned __int64)dest, a2) - (unsigned __int64)dest) >> 64) = 0;
    }
  }
}

