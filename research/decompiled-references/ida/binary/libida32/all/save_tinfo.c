__int64 __fastcall save_tinfo(unsigned __int64 *a1, void **a2, __int64 a3, const char *a4, int a5)
{
  if ( (unsigned int)get_tinfo_property4(*a1, 300, 0, 0, 0, 0) == -1 )
    return sub_521820(*(void ***)(qword_2CA1698 + 1480), a1, a2, a3, a4, a5, 0);
  else
    return 4294967291LL;
}

