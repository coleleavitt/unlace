__int64 __fastcall sub_32B7D0(__int64 a1, __int64 a2)
{
  unsigned __int8 v2; // r12
  char v3; // bp
  unsigned int v4; // ebx
  __int64 v5; // rdx
  int fchunk_qty; // r13d
  unsigned int v7; // r12d
  __int64 v8; // rdi
  __int64 result; // rax
  unsigned int v10; // ebx
  char v11; // bp
  int v12; // r12d
  __int64 *i; // rbx

  v2 = a1;
  v3 = a1;
  if ( !(_BYTE)a1 )
  {
    for ( i = (__int64 *)get_first_seg(); i; i = (__int64 *)get_next_seg(*i) )
    {
      a2 = 1;
      set_visible_segm(i, 1);
      a1 = *i;
    }
  }
  v4 = 0;
  fchunk_qty = get_fchunk_qty();
  v7 = v2 ^ 1;
  if ( fchunk_qty > 0 )
  {
    do
    {
      v8 = v4++;
      a2 = v7;
      a1 = getn_fchunk(v8);
      set_visible_func(a1, v7);
    }
    while ( fchunk_qty != v4 );
  }
  result = get_hidden_range_qty(a1, a2, v5);
  v10 = 0;
  v11 = v3 ^ 1;
  v12 = result;
  if ( (int)result > 0 )
  {
    do
    {
      result = getn_hidden_range(v10);
      if ( result )
        *(_BYTE *)(result + 40) = v11;
      ++v10;
    }
    while ( v12 != v10 );
  }
  return result;
}
