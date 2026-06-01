__int64 __fastcall sub_32E730(__int64 a1)
{
  unsigned int v1; // ebp

  if ( a1 && (unsigned __int8)deserialize_tinfo() )
    LOBYTE(v1) = (unsigned int)verify_tinfo() == 0;
  else
    v1 = 0;
  clear_tinfo_t();
  return v1;
}
