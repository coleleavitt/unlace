__int64 __fastcall sub_595A84(__int64 a1, unsigned __int64 a2)
{
  if ( a2 > sub_595B1C(a1) )
    std::__throw_bad_alloc();
  return operator new(32 * a2);
}
