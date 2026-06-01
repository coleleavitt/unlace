__int64 sub_277DF0()
{
  __int64 v1; // rbp

  if ( (_BYTE)byte_8CC758 )
    return qword_8CC760;
  if ( __cxa_guard_acquire(&byte_8CC758) )
  {
    v1 = operator new(0xB0u);
    sub_277D20(v1);
    qword_8CC760 = v1;
    __cxa_guard_release(&byte_8CC758);
  }
  return qword_8CC760;
}
