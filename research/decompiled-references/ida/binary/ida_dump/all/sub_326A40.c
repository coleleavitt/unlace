__int64 sub_326A40()
{
  size_t v0; // r12
  unsigned int v1; // ebx
  char *s; // [rsp+0h] [rbp-58h]
  void *v4; // [rsp+10h] [rbp-48h]

  if ( (int)get_named_type() <= 0 )
  {
    return 0;
  }
  else
  {
    v4 = nullptr;
    if ( s )
    {
      v0 = strlen(s);
      v4 = (void *)qvector_reserve();
      memmove(v4, s, v0);
      *((_BYTE *)v4 + v0) = 0;
    }
    v1 = deserialize_tinfo();
    if ( v4 )
      qfree();
  }
  return v1;
}
