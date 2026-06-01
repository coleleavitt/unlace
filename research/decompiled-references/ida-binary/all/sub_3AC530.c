__int64 sub_3AC530()
{
  unsigned int place_class_id; // eax

  if ( (_BYTE)byte_8CF570 )
    return qword_8CF578;
  if ( __cxa_guard_acquire(&byte_8CF570) )
  {
    place_class_id = get_place_class_id("tiplace_t");
    qword_8CF578 = get_place_class(0, 0, place_class_id);
    __cxa_guard_release(&byte_8CF570);
  }
  return qword_8CF578;
}
