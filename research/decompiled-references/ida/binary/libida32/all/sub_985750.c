_WORD *__fastcall sub_985750(__int64 a1)
{
  _WORD *result; // rax

  result = (_WORD *)sub_B4F900(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL));
  if ( (*result & 0x1FF) != 0x7D )
    return nullptr;
  return result;
}

