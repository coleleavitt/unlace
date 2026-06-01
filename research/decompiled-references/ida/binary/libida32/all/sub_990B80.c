int __fastcall sub_990B80(const void *a1, const void *a2, size_t a3)
{
  if ( a3 )
    return memcmp(a1, a2, a3);
  else
    return 0;
}

