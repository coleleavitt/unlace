__int64 sub_1E06A0()
{
  __int64 result; // rax

  if ( !(_BYTE)byte_8CB428 && __cxa_guard_acquire(&byte_8CB428) )
  {
    qword_8CB430 = (__int64)dbgreg_place_t___vtable;
    xmmword_8CB438 = (__int128)_mm_load_si128((const __m128i *)&xmmword_5DC600);
    __cxa_guard_release(&byte_8CB428);
  }
  result = (unsigned int)dword_8BA4F0;
  if ( dword_8BA4F0 < 0 )
  {
    result = internal_register_place_class(&qword_8CB430, 2, 0, 930);
    dword_8BA4F0 = result;
  }
  return result;
}
