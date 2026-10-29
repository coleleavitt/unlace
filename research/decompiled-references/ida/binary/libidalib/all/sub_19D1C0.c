__int64 __fastcall sub_19D1C0(char *a1)
{
  __int16 v1; // ax
  unsigned int v2; // edx
  int v3; // ebp
  __int16 *v4; // rbx
  __int16 v5; // dx
  int v6; // r13d

  v1 = sub_19CA40(a1);
  v2 = 0;
  if ( !v1 || dword_256B38 <= 0 )
    return v2;
  v3 = 0;
  v4 = (__int16 *)&unk_256B40;
  do
  {
    v5 = *v4;
    v4 += 8;
    if ( v5 == v1 )
    {
      qfree();
      v6 = dword_256B38 - 1;
      __memmove_chk();
      dword_256B38 = v6;
      return 1;
    }
    ++v3;
  }
  while ( v3 != dword_256B38 );
  return 0;
}

