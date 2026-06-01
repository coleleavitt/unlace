void dwarf_free_static_errlist()
{
  __int64 v0; // rbx
  unsigned __int64 v1; // rdi

  if ( dword_B8D30 )
  {
    v0 = 0;
    do
    {
      v1 = qword_B8CE0[v0];
      if ( v1 )
      {
        sub_F280(v1);
        qword_B8CE0[v0] = 0;
      }
      ++v0;
    }
    while ( (unsigned int)v0 < dword_B8D30 );
  }
}

