__int64 sub_73C50()
{
  char *v0; // rbx
  int v1; // edi

  v0 = (char *)qword_130A20;
  do
  {
    v1 = *(_DWORD *)v0;
    v0 += 4;
    signal(v1, (__sighandler_t)handler);
  }
  while ( v0 != "12interr_exc_t" );
  return sub_128CC0(sub_73AC0);
}

