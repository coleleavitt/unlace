void __fastcall sub_282A40(void **a1)
{
  volatile signed __int32 *v1; // rax
  volatile signed __int32 *v2; // rax

  v1 = (volatile signed __int32 *)a1[6];
  if ( v1 && !_InterlockedSub(v1, 1u) )
    free(a1[6]);
  v2 = (volatile signed __int32 *)a1[3];
  if ( v2 && !_InterlockedSub(v2, 1u) )
    free(a1[3]);
  if ( *a1 )
  {
    if ( !_InterlockedSub((volatile signed __int32 *)*a1, 1u) )
      free(*a1);
  }
}
