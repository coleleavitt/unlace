__int64 __fastcall qwrite(int a1, const void *a2, size_t a3)
{
  unsigned int v4; // eax
  unsigned int v5; // ebp

  v4 = write(a1, a2, a3);
  v5 = v4;
  if ( v4 != a3 )
    set_qerrno((unsigned int)(v4 != -1) + 1, a2);
  return v5;
}

