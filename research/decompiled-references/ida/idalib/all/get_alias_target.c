__int64 __fastcall get_alias_target(__int64 a1, unsigned int a2)
{
  if ( a2 )
    return sub_64BE30(*(_QWORD *)(qword_2CCB598 + 1672), a1, a2);
  else
    return 0;
}
