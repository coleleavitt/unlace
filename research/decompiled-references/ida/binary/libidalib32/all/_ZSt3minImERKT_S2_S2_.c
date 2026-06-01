_QWORD *__fastcall std::min<unsigned long>(_QWORD *a1, _QWORD *a2)
{
  if ( *a2 >= *a1 )
    return a1;
  else
    return a2;
}

