__int64 __fastcall get_module_data(int a1)
{
  if ( byte_2CCB5A4 && a1 && (unsigned __int64)a1 < *(_QWORD *)(qword_2CCB598 + 168) )
    return *(_QWORD *)(*(_QWORD *)(qword_2CCB598 + 160) + 8LL * a1);
  else
    return 0;
}
