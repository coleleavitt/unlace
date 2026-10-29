__int64 sub_239050()
{
  unsigned __int64 v0; // rax
  __int64 v1; // rdx

  v0 = getinf(5);
  if ( (unsigned int)v0 <= 0x19 )
  {
    v1 = 33818624;
    if ( _bittest64(&v1, v0) )
      return 1;
  }
  if ( (unsigned __int8)is_miniidb() )
    return 1;
  else
    return 5;
}
