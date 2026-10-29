__int64 num_flag()
{
  __int64 ph; // rax
  __int64 v1; // rdx
  int v2; // eax

  ph = get_ph();
  v1 = 0x22222202200000LL;
  v2 = *(_DWORD *)(ph + 8) & 0xC0;
  if ( v2 != 128 )
  {
    v1 = 0x66666606600000LL;
    if ( v2 != 192 )
    {
      v1 = 0x77777707700000LL;
      if ( v2 != 64 )
        return 0x11111101100000LL;
    }
  }
  return v1;
}

