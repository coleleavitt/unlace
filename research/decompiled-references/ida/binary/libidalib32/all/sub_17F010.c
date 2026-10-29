void (*__fastcall sub_17F010(__int64 a1, __int64 a2))()
{
  void (*v2)(); // rax
  void (*result)(); // rax

  v2 = *(void (**)())(*(_QWORD *)a1 + 184LL);
  if ( v2 != nullsub_113 )
    ((void (__fastcall *)(__int64, __int64, _QWORD))v2)(a1, a2, 0);
  sub_19D4F0(&qword_2554A0, &off_250350, 1, 0);
  sub_19B690(1, 0, &qword_2554A0);
  result = *(void (**)())(*(_QWORD *)a1 + 160LL);
  if ( result != nullsub_110 )
    return (void (*)())((__int64 (__fastcall *)(__int64))result)(a1);
  return result;
}

