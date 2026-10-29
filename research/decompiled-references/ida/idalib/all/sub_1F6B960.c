_QWORD *__fastcall sub_1F6B960(_QWORD **a1, _QWORD *a2)
{
  _QWORD *result; // rax

  for ( result = *a1; result != a2; *a1 = result )
  {
    if ( *result != -4096 && *result != -8192 )
      break;
    ++result;
  }
  return result;
}
