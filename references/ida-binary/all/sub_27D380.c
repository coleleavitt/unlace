__int64 __fastcall sub_27D380(__int64 a1)
{
  __int64 v1; // rax
  _BYTE *v2; // rbx
  _BYTE *fchunk; // rax

  v1 = getseg(a1);
  if ( v1 )
  {
    v2 = (_BYTE *)v1;
    if ( (getinf(45) & 0x80u) == 0LL && (v2[44] & 4) != 0 )
      return *(_QWORD *)v2;
    if ( (getinf(45) & 0x40) == 0 )
    {
      fchunk = (_BYTE *)get_fchunk(a1);
      if ( fchunk )
      {
        if ( (fchunk[16] & 0x40) != 0 )
          return *(_QWORD *)fchunk;
      }
    }
    fchunk = (_BYTE *)get_hidden_range(a1);
    if ( fchunk )
    {
      if ( !fchunk[40] )
        return *(_QWORD *)fchunk;
    }
  }
  return -1;
}
