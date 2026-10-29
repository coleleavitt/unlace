__int64 __fastcall sub_22A7C80(void *s2, size_t n)
{
  const void **v2; // rbx

  v2 = (const void **)&off_2BF0540;
  do
  {
    if ( v2[1] == (const void *)n && (!n || !memcmp(*v2, s2, n)) )
      return 1;
    v2 += 2;
  }
  while ( v2 != (const void **)&unk_2BF0950 );
  return 0;
}
