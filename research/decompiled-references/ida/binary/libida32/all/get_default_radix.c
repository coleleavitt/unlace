__int64 get_default_radix()
{
  __int64 ph; // rax
  unsigned int v1; // edx
  int v2; // eax

  ph = get_ph();
  v1 = 10;
  v2 = *(_DWORD *)(ph + 8) & 0xC0;
  if ( v2 != 128 )
  {
    v1 = 2;
    if ( v2 != 192 )
      return 8 * (unsigned int)(v2 != 64) + 8;
  }
  return v1;
}

