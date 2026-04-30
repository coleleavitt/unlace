__int64 __fastcall sub_59593E(__int64 a1, unsigned __int64 a2)
{
  if ( a2 > sub_595AC6(a1) )
    std::__throw_bad_alloc();
  return operator new(8 * a2);
}
