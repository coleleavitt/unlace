_BYTE *__fastcall sub_22110A0(__int64 a1)
{
  _BYTE *result; // rax

  sub_995540(a1, "Build config: ");
  result = *(_BYTE **)(a1 + 32);
  if ( (unsigned __int64)result >= *(_QWORD *)(a1 + 24) )
    return (_BYTE *)sub_227BA10(a1, 10);
  *(_QWORD *)(a1 + 32) = result + 1;
  *result = 10;
  return result;
}
