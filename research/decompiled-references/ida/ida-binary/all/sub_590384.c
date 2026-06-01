void *__fastcall sub_590384(void *a1, const void *a2, size_t a3)
{
  if ( a3 )
    return memmove(a1, a2, a3);
  else
    return a1;
}
