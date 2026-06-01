__int64 get_search_utils()
{
  if ( (_BYTE)byte_2CCBF90 )
    return qword_2CCBF98;
  if ( __cxa_guard_acquire(&byte_2CCBF90) )
  {
    qword_2CCBF98 = operator new(8u);
    *(_QWORD *)qword_2CCBF98 = off_2B2D668;
    __cxa_guard_release(&byte_2CCBF90);
  }
  return qword_2CCBF98;
}
