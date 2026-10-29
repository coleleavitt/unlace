__int64 __fastcall recalc_spd(__int64 a1)
{
  unsigned int *func; // rax

  func = (unsigned int *)get_func(a1);
  if ( func )
    return sub_5A0500(*(_QWORD **)(qword_2CA1698 + 1480), func, a1);
  else
    return 0;
}

