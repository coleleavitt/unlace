void __fastcall sub_F280(unsigned __int64 a1)
{
  __int64 v1; // rbx

  if ( dword_B8D30 )
  {
    v1 = 0;
    while ( 1 )
    {
      if ( qword_B8CE0[v1] != a1 )
        goto LABEL_3;
      if ( *(_DWORD *)(a1 + 16) == 2 )
      {
        if ( a1 > 0x10 )
        {
          _dwarf_error_destructor(a1);
          free((void *)(a1 - 16));
          goto LABEL_6;
        }
LABEL_3:
        if ( (unsigned int)++v1 >= dword_B8D30 )
          return;
      }
      else
      {
LABEL_6:
        qword_B8CE0[v1++] = 0;
        if ( (unsigned int)v1 >= dword_B8D30 )
          return;
      }
    }
  }
}

