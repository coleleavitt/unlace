__int64 __fastcall qread(int a1, void *a2, signed __int64 a3)
{
  unsigned int v4; // eax
  unsigned int v5; // ebp

  if ( a3 < 0 )
  {
    if ( !under_debugger )
      interr(1225);
    BUG();
  }
  v4 = read(a1, a2, a3);
  v5 = v4;
  if ( v4 != a3 )
    set_qerrno(2 * (unsigned int)(v4 != -1) + 1, a2);
  return v5;
}

