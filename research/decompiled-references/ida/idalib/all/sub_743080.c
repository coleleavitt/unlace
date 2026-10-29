_BOOL8 sub_743080()
{
  int v0; // ebp
  unsigned int **v1; // rbx

  if ( byte_2CCC62E )
    return 0;
  v0 = 0;
  v1 = (unsigned int **)&unk_2CCC640;
  byte_2CCC62E = 1;
  do
  {
    if ( *v1 )
      v0 += (unsigned __int8)sub_73C110(*v1) == 0;
    ++v1;
  }
  while ( v1 != (unsigned int **)&unk_2CCC6C0 );
  byte_2CCC62E = 0;
  return v0 == 0;
}
