_BYTE *__fastcall sub_F4ACE0(__int64 a1)
{
  _BYTE *result; // rax

  result = *(_BYTE **)(a1 + 32);
  if ( (unsigned __int64)result >= *(_QWORD *)(a1 + 24) )
    return (_BYTE *)sub_2257CD0(a1, 32);
  *(_QWORD *)(a1 + 32) = result + 1;
  *result = 32;
  return result;
}

