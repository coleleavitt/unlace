void __fastcall sub_55110(Dwarf_Debug a1, void ***a2)
{
  void ***v2; // rbx
  void ***v3; // rbp
  void **v4; // r12

  if ( a2 )
  {
    if ( a1 )
    {
      v2 = a2;
      if ( *(_QWORD *)a1 == 3959286781LL )
      {
        do
        {
          v3 = v2;
          v2 = (void ***)v2[2];
          v4 = *v3;
          if ( *v3 )
          {
            free(v4[9]);
            free(v4);
            *v3 = nullptr;
            dwarf_dealloc(a1, v3, 0x1Fu);
          }
        }
        while ( v2 );
      }
    }
  }
}

