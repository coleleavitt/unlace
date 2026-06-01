_QWORD *__fastcall sub_101B340(_QWORD *a1, unsigned int *a2, unsigned __int8 a3)
{
  if ( *a2 )
  {
    sub_1022900(a1, *((_QWORD *)a2 + 1), *a2, a3);
    return a1;
  }
  else
  {
    *a1 = 0;
    a1[1] = 0;
    a1[2] = 0;
    return a1;
  }
}
