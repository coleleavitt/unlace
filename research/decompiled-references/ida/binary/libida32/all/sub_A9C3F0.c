_BYTE *__fastcall sub_A9C3F0(__int64 a1)
{
  __int64 v1; // rdi
  _BYTE *result; // rax

  v1 = *(_QWORD *)(a1 + 48);
  result = *(_BYTE **)(v1 + 32);
  if ( (unsigned __int64)result >= *(_QWORD *)(v1 + 24) )
    return (_BYTE *)sub_2257CD0(v1, 127);
  *(_QWORD *)(v1 + 32) = result + 1;
  *result = 127;
  return result;
}

