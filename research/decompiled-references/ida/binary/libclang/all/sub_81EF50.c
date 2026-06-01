char *__fastcall sub_81EF50(__int64 a1)
{
  char *result; // rax

  *(_WORD *)a1 = *(_WORD *)a1 & 0xFE00 | 0x4C;
  result = &byte_4AD234C;
  if ( byte_4AD234C )
    result = (char *)sub_AC4570(76);
  *(_QWORD *)(a1 + 8) = 0;
  return result;
}

