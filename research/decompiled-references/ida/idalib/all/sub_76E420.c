__int64 sub_76E420()
{
  unsigned int v0; // edx
  char *v1; // rbx
  char *v3; // r13
  char *v4; // rbp
  char *v5; // r14
  __int64 v6; // r12
  int v7; // eax

  v0 = 0;
  v1 = qword_2CD44C0;
  if ( (unsigned int)(qword_2CD44B8 - (_DWORD)qword_2CD44C0) > 0xC )
  {
    if ( *(_DWORD *)qword_2CD44C0 == 1701994335 )
    {
      v3 = qword_2CD44C0;
    }
    else
    {
      if ( *(_DWORD *)(qword_2CD44C0 - 1) != 1701994335 )
        return v0;
      v3 = qword_2CD44C0 - 1;
    }
    v0 = 0;
    if ( *((_DWORD *)v3 + 1) == 1818321767 && *((_DWORD *)v3 + 2) == 1600074604 )
    {
      v4 = v3 + 11;
      v5 = &v3[(unsigned int)(qword_2CD44B8 - (_DWORD)qword_2CD44C0 - 1)];
      do
      {
        v6 = *++v4;
        if ( (_BYTE)v6 != 95 && ((*__ctype_b_loc())[v6] & 8) == 0 )
          return 0;
      }
      while ( v4 != v5 );
      v7 = 1610612736;
      if ( v1 == v3 )
        v7 = 0x10000000;
      v0 = 1;
      dword_2CD44C8 = v7;
    }
  }
  return v0;
}
