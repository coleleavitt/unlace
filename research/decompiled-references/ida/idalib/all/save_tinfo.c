__int64 __fastcall save_tinfo(unsigned __int64 *a1, void **a2, __int64 a3, const char *a4, int a5)
{
  if ( get_tinfo_property4(*a1, 300, 0, 0, 0, 0) == -1 )
    return sub_53A4F0(*(void ***)(qword_2CCB598 + 1672), a1, a2, a3, a4, a5, 0);
  else
    return 4294967291LL;
}
