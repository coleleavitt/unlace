__int64 __fastcall get_func_bitness(unsigned __int64 *a1)
{
  unsigned __int64 *v1; // rax

  if ( !a1 )
    return 0;
  v1 = sub_505D70(*(_QWORD *)(qword_2CCB598 + 1672) + 1624LL, *a1);
  if ( v1 )
    return *((unsigned __int8 *)v1 + 43);
  else
    return 0;
}
