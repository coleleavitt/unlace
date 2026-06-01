__int64 __fastcall sub_5AA83C(__int64 a1, unsigned __int64 a2)
{
  if ( a2 > sub_5AA9CC(a1) )
    std::__throw_bad_alloc();
  return operator new(2 * a2);
}
