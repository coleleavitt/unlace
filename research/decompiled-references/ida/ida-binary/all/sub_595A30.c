__int64 __fastcall sub_595A30(__int64 a1, unsigned __int64 a2)
{
  if ( a2 > sub_595B08(a1) )
    std::__throw_bad_alloc();
  return operator new(328 * a2);
}
