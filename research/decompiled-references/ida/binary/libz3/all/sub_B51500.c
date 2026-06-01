void __fastcall sub_B51500(void ***a1)
{
  void **v1; // rbx
  __int64 v2; // rax
  void **v3; // rbp

  v1 = *a1;
  if ( *a1 )
  {
    v2 = *((unsigned int *)v1 - 1);
    if ( (_DWORD)v2 )
    {
      v3 = &v1[3 * v2];
      do
      {
        while ( *v1 )
        {
          sub_186B220(*v1);
          v1 += 3;
          if ( v1 == v3 )
          {
            v1 = *a1;
            goto LABEL_7;
          }
        }
        v1 += 3;
      }
      while ( v1 != v3 );
      v1 = *a1;
    }
LABEL_7:
    sub_186B220(v1 - 1);
  }
}

