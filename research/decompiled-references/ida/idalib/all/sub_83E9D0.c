__int64 __fastcall sub_83E9D0(const char *a1, unsigned int a2, int a3)
{
  unsigned int v4; // eax
  unsigned int v5; // ebx

  v4 = open64(a1, 66, a2);
  if ( v4 == -1 )
  {
    set_qerrno(1);
  }
  else
  {
    v5 = v4;
    if ( !(unsigned int)sub_83E730(v4, 66, a3) && !(unsigned int)qchsize(v5, 0) )
      return v5;
    qclose(v5);
  }
  return 0xFFFFFFFFLL;
}
