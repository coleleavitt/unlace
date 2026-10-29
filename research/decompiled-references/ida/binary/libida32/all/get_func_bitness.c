__int64 __fastcall get_func_bitness(unsigned int *a1)
{
  unsigned int *v1; // rax

  if ( !a1 )
    return 0;
  v1 = sub_4EE820(*(_QWORD *)(qword_2CA1698 + 1480) + 1552LL, *a1);
  if ( v1 )
    return *((unsigned __int8 *)v1 + 23);
  else
    return 0;
}

