void __fastcall sub_13A40(unsigned int *src, unsigned int *a2, _QWORD *a3)
{
  unsigned int *i; // r15
  unsigned int v5; // ebp
  unsigned int v6; // r12d

  if ( src != a2 )
  {
    for ( i = src + 1; a2 != i; ++i )
    {
      v5 = *i;
      v6 = *src;
      if ( sub_86D0(208LL * *i + *a3, *a3 + 208LL * *src) >= 0 )
      {
        sub_139D0(i, a3);
      }
      else
      {
        if ( (char *)i - (char *)src <= 4 )
        {
          if ( (char *)i - (char *)src == 4 )
            *i = v6;
        }
        else
        {
          memmove(src + 1, src, (char *)i - (char *)src);
        }
        *src = v5;
      }
    }
  }
}
