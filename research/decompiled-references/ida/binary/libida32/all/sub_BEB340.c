void *__fastcall sub_BEB340(__int64 a1)
{
  void *result; // rax

  *(_WORD *)a1 = *(_WORD *)a1 & 0xFE00 | 0x4B;
  result = &unk_2CAD564;
  if ( unk_2CAD564 )
    result = (void *)sub_EC5E10(75);
  *(_QWORD *)(a1 + 8) = 0;
  return result;
}

