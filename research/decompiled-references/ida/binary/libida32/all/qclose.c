__int64 __fastcall qclose(int a1, __int64 a2)
{
  unsigned int v2; // ebx

  v2 = close(a1);
  if ( v2 != -1 )
    return v2;
  set_qerrno(1, a2);
  return 0xFFFFFFFFLL;
}

