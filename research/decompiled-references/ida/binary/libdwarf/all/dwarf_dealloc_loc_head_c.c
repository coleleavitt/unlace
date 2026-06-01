void __fastcall dwarf_dealloc_loc_head_c(void ***a1)
{
  struct Dwarf_Debug_s *v2; // r13
  void **v3; // rbp
  void **v4; // rdi
  void **v5; // rsi
  void **v6; // r14
  void **v7; // rbp
  void **i; // r12

  if ( a1 )
  {
    if ( a1[7] == (void **)&dword_ADAB4 )
    {
      v2 = (struct Dwarf_Debug_s *)a1[6];
      if ( v2 )
      {
        if ( *(_QWORD *)v2 == 3959286781LL )
        {
          v3 = a1[10];
          if ( v3 )
          {
            do
            {
              v4 = v3;
              v3 = (void **)v3[18];
              free(v4);
            }
            while ( v3 );
            v5 = *a1;
            a1[1] = nullptr;
            *((_OWORD *)a1 + 5) = 0;
            if ( !v5 )
              goto LABEL_8;
          }
          else
          {
            v5 = *a1;
            if ( !*a1 )
            {
LABEL_8:
              dwarf_dealloc(v2, a1, 0x3Bu);
              return;
            }
            v6 = a1[1];
            if ( v6 )
            {
              v7 = v5 + 14;
              for ( i = nullptr; i != v6; i = (void **)((char *)i + 1) )
              {
                if ( *v7 )
                {
                  dwarf_dealloc(v2, *v7, 0x39u);
                  *v7 = nullptr;
                }
                v7 += 19;
              }
              v5 = *a1;
            }
          }
          dwarf_dealloc(v2, v5, 0x3Au);
          a1[1] = nullptr;
          *a1 = nullptr;
          goto LABEL_8;
        }
      }
    }
  }
}

