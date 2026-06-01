__int64 __fastcall sub_590F7E(__int64 a1, unsigned __int64 a2)
{
  if ( a2 > sub_591244(a1) )
    std::__throw_bad_alloc();
  return operator new(a2);
}
