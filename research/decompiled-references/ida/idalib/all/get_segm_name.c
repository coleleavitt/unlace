__int64 __fastcall get_segm_name(__int64 *a1, unsigned __int64 *a2, char a3)
{
  if ( a2 )
    return sub_510AC0(*(_QWORD **)(**(_QWORD **)(qword_2CCB598 + 1672) + 1760LL), a1, *a2, a2[2], a3);
  else
    return -1;
}
