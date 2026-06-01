__int64 __fastcall tinfo_get_func_frame(unsigned __int64 *a1, int *a2)
{
  __int64 *v2; // rbp
  unsigned int v3; // eax

  if ( !a2 )
    return 0;
  v2 = *(__int64 **)(qword_2CA1698 + 1480);
  v3 = sub_3B90A0(v2, *a2);
  if ( v3 == -1 )
    return 0;
  else
    return sub_532DA0(v2, a1, v3);
}

