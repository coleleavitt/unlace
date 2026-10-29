__int64 __fastcall segtype(unsigned __int64 a1)
{
  unsigned __int64 *v1; // rax

  v1 = sub_505D70(*(_QWORD *)(qword_2CCB598 + 1672) + 1624LL, a1);
  if ( v1 )
    return *((unsigned __int8 *)v1 + 184);
  else
    return 8;
}
