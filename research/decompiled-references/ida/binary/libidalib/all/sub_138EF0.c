__int64 __fastcall sub_138EF0(char a1)
{
  int v1; // ebx
  int fchunk_qty; // r13d
  __int64 result; // rax
  int v4; // ebx
  int v5; // r12d

  if ( !a1 && get_first_seg() )
  {
    do
      set_visible_segm();
    while ( get_next_seg() );
  }
  v1 = 0;
  fchunk_qty = get_fchunk_qty();
  if ( fchunk_qty > 0 )
  {
    do
    {
      ++v1;
      getn_fchunk();
      set_visible_func();
    }
    while ( fchunk_qty != v1 );
  }
  result = get_hidden_range_qty();
  v4 = 0;
  v5 = result;
  if ( (int)result > 0 )
  {
    do
    {
      result = getn_hidden_range();
      if ( result )
        *(_BYTE *)(result + 40) = a1 ^ 1;
      ++v4;
    }
    while ( v5 != v4 );
  }
  return result;
}

