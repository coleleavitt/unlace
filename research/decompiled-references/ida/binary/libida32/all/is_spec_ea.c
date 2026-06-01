__int64 __fastcall is_spec_ea(__int64 a1)
{
  unsigned __int8 v1; // al

  v1 = segtype(a1);
  return is_spec_segm(v1);
}

