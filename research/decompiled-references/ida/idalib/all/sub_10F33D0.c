_BYTE *__fastcall sub_10F33D0(__int64 a1, __int64 a2)
{
  _BYTE *result; // rax

  *(_BYTE *)(a1 + 32) = 0;
  if ( *(_BYTE *)(a2 + 32) )
  {
    *(_QWORD *)a1 = a1 + 16;
    result = sub_10D8CD0((_QWORD *)a1, *(_BYTE **)a2, *(_QWORD *)a2 + *(_QWORD *)(a2 + 8));
    *(_BYTE *)(a1 + 32) = 1;
  }
  return result;
}
