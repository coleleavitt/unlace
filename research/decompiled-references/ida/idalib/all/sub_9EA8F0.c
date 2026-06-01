void (*__fastcall sub_9EA8F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4))()
{
  void (*result)(); // rax

  result = *(void (**)())(*(_QWORD *)a2 + 24LL);
  if ( result != nullsub_401 )
    return (void (*)())((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, __int64, _QWORD))result)(
                         a2,
                         *(_QWORD *)(a1 + 16),
                         *(unsigned int *)(a1 + 32),
                         a4,
                         *(_QWORD *)(a1 + 24));
  return result;
}
