void __fastcall sub_51D1E0(void **a1)
{
  void **v1; // rbx
  void **i; // r12

  if ( *a1 && !_InterlockedSub((volatile signed __int32 *)*a1, 1u) )
  {
    v1 = (void **)a1[1];
    for ( i = &v1[3 * (_QWORD)a1[2]]; i != v1; v1 += 3 )
    {
      if ( *v1 )
      {
        if ( !_InterlockedSub((volatile signed __int32 *)*v1, 1u) )
          free(*v1);
      }
    }
    free(*a1);
  }
}
