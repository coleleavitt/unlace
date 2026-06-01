__int64 sub_F4210()
{
  __int64 v0; // rax
  _BYTE *v1; // rbx
  _BYTE *hidden_range; // rax

  v0 = getseg();
  if ( !v0 )
    return 0xFFFFFFFFLL;
  v1 = (_BYTE *)v0;
  if ( (getinf() & 0x80u) == 0LL && (v1[24] & 4) != 0 )
    return *(unsigned int *)v1;
  if ( (getinf() & 0x40) != 0 || (hidden_range = (_BYTE *)get_fchunk()) == nullptr || (hidden_range[8] & 0x40) == 0 )
  {
    hidden_range = (_BYTE *)get_hidden_range();
    if ( !hidden_range || hidden_range[32] )
      return 0xFFFFFFFFLL;
  }
  return *(unsigned int *)hidden_range;
}

