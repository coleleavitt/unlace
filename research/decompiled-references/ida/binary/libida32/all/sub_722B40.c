_BOOL8 sub_722B40()
{
  int v0; // ebp
  unsigned int **v1; // rbx

  if ( byte_2CA272E )
    return 0;
  v0 = 0;
  v1 = (unsigned int **)&unk_2CA2740;
  byte_2CA272E = 1;
  do
  {
    if ( *v1 )
      v0 += (unsigned __int8)sub_71BBD0(*v1) == 0;
    ++v1;
  }
  while ( v1 != (unsigned int **)&unk_2CA27C0 );
  byte_2CA272E = 0;
  return v0 == 0;
}

