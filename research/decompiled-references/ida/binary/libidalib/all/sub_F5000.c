__int64 sub_F5000()
{
  __int64 v0; // rax
  _BYTE *v1; // rbx
  _BYTE *fchunk; // rax

  v0 = getseg();
  if ( v0 )
  {
    v1 = (_BYTE *)v0;
    if ( (getinf() & 0x80u) == 0LL && (v1[44] & 4) != 0 )
      return *(_QWORD *)v1;
    if ( (getinf() & 0x40) == 0 )
    {
      fchunk = (_BYTE *)get_fchunk();
      if ( fchunk )
      {
        if ( (fchunk[16] & 0x40) != 0 )
          return *(_QWORD *)fchunk;
      }
    }
    fchunk = (_BYTE *)get_hidden_range();
    if ( fchunk )
    {
      if ( !fchunk[40] )
        return *(_QWORD *)fchunk;
    }
  }
  return -1;
}

