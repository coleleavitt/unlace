__int64 sub_B7840()
{
  unsigned int v0; // ebx
  __int64 hidden_range; // rax

  qsnprintf();
  qsnprintf();
  qsnprintf();
  v0 = add_hidden_range();
  if ( (_BYTE)v0 )
  {
    hidden_range = get_hidden_range();
    if ( hidden_range )
    {
      *(_BYTE *)(hidden_range + 32) = 1;
      update_hidden_range();
    }
  }
  return v0;
}

