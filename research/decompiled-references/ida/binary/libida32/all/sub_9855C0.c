_WORD *__fastcall sub_9855C0(__int64 a1)
{
  _WORD *result; // rax

  result = *(_WORD **)(*(_QWORD *)(a1 + 16) + 8LL * *(unsigned int *)(a1 + 24) + 32);
  if ( result )
  {
    if ( (*result & 0x1FF) != 0x7D )
      return nullptr;
  }
  return result;
}

