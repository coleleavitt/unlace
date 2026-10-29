__int64 __fastcall sub_19C5C0(char *a1)
{
  __int16 v1; // ax
  unsigned int v2; // edx
  int v3; // ebp
  __int16 *v4; // rbx
  __int16 v5; // dx
  int v6; // r13d

  v1 = sub_19BE40(a1);
  v2 = 0;
  if ( !v1 || dword_255978 <= 0 )
    return v2;
  v3 = 0;
  v4 = (__int16 *)&unk_255980;
  do
  {
    v5 = *v4;
    v4 += 8;
    if ( v5 == v1 )
    {
      qfree();
      v6 = dword_255978 - 1;
      __memmove_chk();
      dword_255978 = v6;
      return 1;
    }
    ++v3;
  }
  while ( v3 != dword_255978 );
  return 0;
}

