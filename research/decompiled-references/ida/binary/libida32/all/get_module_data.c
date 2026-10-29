__int64 __fastcall get_module_data(int a1)
{
  if ( byte_2CA16A4 && a1 && (unsigned __int64)a1 < *(_QWORD *)(qword_2CA1698 + 168) )
    return *(_QWORD *)(*(_QWORD *)(qword_2CA1698 + 160) + 8LL * a1);
  else
    return 0;
}

