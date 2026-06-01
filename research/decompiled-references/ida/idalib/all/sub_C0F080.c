void *__fastcall sub_C0F080(__int64 a1)
{
  void *result; // rax

  *(_WORD *)a1 = *(_WORD *)a1 & 0xFE00 | 0x4B;
  result = &unk_2CD7484;
  if ( unk_2CD7484 )
    result = (void *)sub_EE9B50(75);
  *(_QWORD *)(a1 + 8) = 0;
  return result;
}
