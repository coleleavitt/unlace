__int64 __fastcall get_custom_data_type(int a1)
{
  _QWORD *v1; // rdx

  if ( a1 <= 0 )
    return 0;
  v1 = *(_QWORD **)(**(_QWORD **)(qword_2CA1698 + 1480) + 1360LL);
  if ( (unsigned __int64)a1 >= v1[1] )
    return 0;
  else
    return *(_QWORD *)(*v1 + 40LL * a1);
}

