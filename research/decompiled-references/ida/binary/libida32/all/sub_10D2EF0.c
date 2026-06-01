_QWORD *__fastcall sub_10D2EF0(__int64 a1)
{
  _QWORD *result; // rax
  _QWORD *v2; // rcx

  result = *(_QWORD **)a1;
  v2 = *(_QWORD **)(a1 + 8);
  if ( v2 != *(_QWORD **)a1 )
  {
    do
    {
      if ( *result != -1 && *result != -2 )
        break;
      result += 2;
      *(_QWORD *)a1 = result;
    }
    while ( result != v2 );
  }
  return result;
}

