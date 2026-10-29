__int64 __fastcall sub_3BCAC0(char *ptr, int a2)
{
  char *v3; // rbx
  char *v4; // rbp
  __int64 v5; // rdi

  if ( a2 )
  {
    v3 = ptr;
    v4 = &ptr[16 * a2];
    do
    {
      while ( 1 )
      {
        v5 = *((_QWORD *)v3 + 1);
        if ( !v5 )
          break;
        v3 += 16;
        sub_186B220((void *)(v5 - 8));
        if ( v3 == v4 )
          return sub_186B220(ptr);
      }
      v3 += 16;
    }
    while ( v3 != v4 );
  }
  return sub_186B220(ptr);
}

