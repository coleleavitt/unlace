__int64 __fastcall sub_5A70DA(__int64 a1, unsigned __int64 a2)
{
  if ( a2 > sub_5A74BA(a1) )
    std::__throw_bad_alloc();
  return operator new(8 * a2);
}
