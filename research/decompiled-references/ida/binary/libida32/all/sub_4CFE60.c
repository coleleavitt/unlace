void __fastcall sub_4CFE60(__int64 a1)
{
  _QWORD *v1; // rbx
  _QWORD *v2; // rbp
  void *v4; // rdi

  if ( a1 )
  {
    v1 = qword_2CA2010;
    if ( qword_2CA2010 )
    {
      v2 = nullptr;
      while ( a1 != v1[15] )
      {
        v2 = v1;
        if ( !*v1 )
          return;
        v1 = (_QWORD *)*v1;
      }
      if ( (*((_DWORD *)v1 + 32))-- == 1 )
      {
        free_dll(v1 + 5);
        if ( v2 )
          *v2 = *v1;
        else
          qword_2CA2010 = (void *)*v1;
        v4 = (void *)v1[2];
        if ( v4 )
        {
          v1[3] = 0;
          qfree(v4);
        }
        operator delete(v1, 0x88u);
      }
    }
  }
}

