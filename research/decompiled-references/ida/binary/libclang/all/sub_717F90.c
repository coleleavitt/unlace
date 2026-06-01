void *__fastcall sub_717F90(_QWORD *a1, void *a2, void *a3, unsigned __int8 a4)
{
  void *v5; // r12
  void *result; // rax

  if ( a2 == a3 )
    return a2;
  v5 = sub_717B10(a1, a2, a4);
  result = sub_717B10(a1, a3, 0);
  if ( result != v5 )
    return nullptr;
  return result;
}

