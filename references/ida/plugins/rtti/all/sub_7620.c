void __fastcall sub_7620(__int64 a1, __int64 a2, __int64 *a3, unsigned int a4)
{
  __int64 v6; // rdx

  if ( a3 && a3[3] && (unsigned __int8)sub_7200(a1, a2, a3[6], a4) )
  {
    v6 = *a3;
    if ( !*(_QWORD *)(a2 + 8) )
    {
LABEL_6:
      sub_7690(a3, a2, v6, a4);
      return;
    }
    if ( !rangeset_t_find_range() )
    {
      v6 = *a3;
      goto LABEL_6;
    }
  }
}
