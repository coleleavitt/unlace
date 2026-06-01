void (*__fastcall sub_9EAA70(__int64 a1, __int64 a2, unsigned __int8 a3))()
{
  void (*result)(); // rax

  result = *(void (**)())(*(_QWORD *)a2 + 16LL);
  if ( result != nullsub_400 )
    return (void (*)())((__int64 (__fastcall *)(__int64, _QWORD, _QWORD))result)(a2, *(_QWORD *)(a1 + 16), a3);
  return result;
}
