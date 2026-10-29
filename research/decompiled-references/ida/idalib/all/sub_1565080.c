_QWORD *__fastcall sub_1565080(__int64 a1)
{
  _QWORD *result; // rax

  result = *(_QWORD **)a1;
  if ( *(_QWORD *)a1 )
    return (_QWORD *)sub_15ED1C0(*(_QWORD *)a1, *result, *(unsigned int *)(a1 + 8));
  return result;
}
