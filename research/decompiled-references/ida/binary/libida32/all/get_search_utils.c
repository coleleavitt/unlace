__int64 get_search_utils()
{
  if ( (_BYTE)byte_2CA2090 )
    return qword_2CA2098;
  if ( __cxa_guard_acquire(&byte_2CA2090) )
  {
    qword_2CA2098 = operator new(8u);
    *(_QWORD *)qword_2CA2098 = off_2B036A8;
    __cxa_guard_release(&byte_2CA2090);
  }
  return qword_2CA2098;
}

