__int64 __fastcall sub_3A4FF0(__int64 a1, unsigned __int64 a2)
{
  _QWORD *v2; // rax

  v2 = *(_QWORD **)(qword_2CA1698 + 1384);
  if ( a2 >= v2[1] )
    return 0;
  else
    return *(_QWORD *)(*v2 + 8 * a2);
}

