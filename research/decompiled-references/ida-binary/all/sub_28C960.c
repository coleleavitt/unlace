__int64 __fastcall sub_28C960(__int64 a1)
{
  __int64 v1; // rbp
  __int64 *fchunk; // rbx
  const char *item_end; // rax

  v1 = *(_QWORD *)(a1 + 88);
  fchunk = (__int64 *)get_fchunk(v1);
  if ( !fchunk )
  {
    fchunk = (__int64 *)get_prev_fchunk(v1);
    if ( !fchunk )
      return 0;
  }
  item_end = (const char *)get_item_end(v1);
  if ( (const char *)fchunk[1] != item_end )
    sub_28B420(*fchunk, item_end);
  return 1;
}
