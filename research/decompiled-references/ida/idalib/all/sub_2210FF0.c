__int64 *__fastcall sub_2210FF0(const char *a1)
{
  size_t v2; // rbx
  size_t v3; // rax

  if ( (_BYTE)byte_2D0A720 )
    return &qword_2D0A740;
  if ( __cxa_guard_acquire(&byte_2D0A720) )
  {
    v2 = j__strlen("General options");
    v3 = j__strlen(&byte_22F0C30);
    qword_2D0A748 = v2;
    qword_2D0A758 = v3;
    qword_2D0A740 = (__int64)"General options";
    qword_2D0A750 = (__int64)&byte_22F0C30;
    sub_22106F0((__int64)&qword_2D0A740);
    __cxa_guard_release(&byte_2D0A720);
  }
  return &qword_2D0A740;
}
