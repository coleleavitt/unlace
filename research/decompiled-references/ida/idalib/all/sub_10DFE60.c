void __fastcall sub_10DFE60(void ***a1)
{
  void **v1; // rbp
  void **v2; // rbx

  v1 = *a1;
  if ( ((_BYTE)a1[6] & 1) != 0 )
  {
    if ( v1 )
      (*((void (__fastcall **)(void **))*v1 + 1))(*a1);
  }
  else
  {
    v2 = &v1[4 * *((unsigned int *)a1 + 2)];
    if ( v2 != v1 )
    {
      do
      {
        while ( 1 )
        {
          v2 -= 4;
          if ( *v2 == v2 + 2 )
            break;
          operator delete(*v2);
          if ( v2 == v1 )
            goto LABEL_7;
        }
      }
      while ( v2 != v1 );
LABEL_7:
      v1 = *a1;
    }
    if ( v1 != (void **)(a1 + 2) )
      free(v1);
  }
}
