char *__fastcall sub_F5ED10(char *a1)
{
  char v1; // al

  v1 = *a1;
  if ( *a1 == 1 )
  {
    j__strlen("nonallocating");
    return "nonallocating";
  }
  else if ( v1 )
  {
    if ( v1 == 2 )
    {
      j__strlen("blocking");
      return "blocking";
    }
    else
    {
      j__strlen("allocating");
      return "allocating";
    }
  }
  else
  {
    j__strlen("nonblocking");
    return "nonblocking";
  }
}
