__int64 __fastcall sub_117E260(__int64 a1)
{
  __int64 v2; // rbx
  void **v3; // r12
  void **v4; // rbx
  void *v5; // rdi

  v2 = *(unsigned int *)(a1 + 5032);
  v3 = *(void ***)(a1 + 5024);
  *(_QWORD *)a1 = off_2C378E8;
  v4 = &v3[4 * v2];
  if ( v3 != v4 )
  {
    do
    {
      while ( 1 )
      {
        v4 -= 4;
        if ( *v4 == v4 + 2 )
          break;
        operator delete(*v4);
        if ( v3 == v4 )
          goto LABEL_4;
      }
    }
    while ( v3 != v4 );
LABEL_4:
    v4 = *(void ***)(a1 + 5024);
  }
  if ( v4 != (void **)(a1 + 5040) )
    free(v4);
  v5 = *(void **)(a1 + 4984);
  if ( v5 != (void *)(a1 + 5000) )
    operator delete(v5);
  *(_QWORD *)a1 = off_2C3B350;
  return sub_12203A0(a1);
}
