__int64 __fastcall get_segm_name(__int64 *a1, unsigned int *a2, char a3)
{
  if ( a2 )
    return sub_4F90F0(*(_QWORD **)(**(_QWORD **)(qword_2CA1698 + 1480) + 1568LL), a1, *a2, a2[2], a3);
  else
    return -1;
}

