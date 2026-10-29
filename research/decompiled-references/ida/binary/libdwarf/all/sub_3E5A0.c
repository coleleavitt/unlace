void __fastcall sub_3E5A0(void *ptr)
{
  void *v2; // rdi
  void *v3; // rdi
  _QWORD *v4; // rbx
  unsigned __int64 v5; // r12
  void *v6; // rdi

  if ( *((_DWORD *)ptr + 5) )
  {
    _dwarf_closer(*((_DWORD *)ptr + 4));
    *((_DWORD *)ptr + 4) = -1;
  }
  v2 = *((void **)ptr + 21);
  if ( v2 )
  {
    free(v2);
    *((_QWORD *)ptr + 21) = 0;
  }
  v3 = *((void **)ptr + 25);
  if ( v3 )
  {
    free(v3);
    *((_QWORD *)ptr + 25) = 0;
  }
  free(*((void **)ptr + 1));
  v4 = *((_QWORD **)ptr + 27);
  if ( v4 )
  {
    if ( *((_QWORD *)ptr + 26) )
    {
      v5 = 0;
      do
      {
        v6 = (void *)v4[19];
        if ( v6 )
        {
          free(v6);
          v4[19] = 0;
        }
        ++v5;
        v4 += 20;
      }
      while ( v5 < *((_QWORD *)ptr + 26) );
      v4 = *((_QWORD **)ptr + 27);
    }
    free(v4);
  }
  free(ptr);
}

