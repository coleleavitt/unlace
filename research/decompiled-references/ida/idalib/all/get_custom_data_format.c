__int64 __fastcall get_custom_data_format(int a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(qword_2CCB598 + 1552);
  if ( a1 <= 0 || (unsigned __int64)a1 >= *(_QWORD *)(v1 + 120) )
    return 0;
  else
    return *(_QWORD *)(*(_QWORD *)(v1 + 112) + 16LL * a1);
}
