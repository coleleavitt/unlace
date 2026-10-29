__int64 __fastcall sub_974AA0(void **ptr)
{
  void (__fastcall *v1)(void *); // rbp
  void *v2; // r12

  if ( !ptr )
    return 0;
  v1 = (void (__fastcall *)(void *))ptr[3417];
  v2 = ptr[3418];
  if ( *ptr )
  {
    if ( v1 )
    {
      v1(ptr[3418]);
LABEL_5:
      ((void (__fastcall *)(void *, void **))v1)(v2, ptr);
      return 0;
    }
    free(*ptr);
  }
  else if ( v1 )
  {
    goto LABEL_5;
  }
  free(ptr);
  return 0;
}
