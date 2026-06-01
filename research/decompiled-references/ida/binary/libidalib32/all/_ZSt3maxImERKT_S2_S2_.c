_QWORD *__fastcall std::max<unsigned long>(_QWORD *a1, _QWORD *a2)
{
  if ( *a1 >= *a2 )
    return a1;
  else
    return a2;
}

