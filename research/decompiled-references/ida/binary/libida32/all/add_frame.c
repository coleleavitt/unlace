__int64 __fastcall add_frame(int *a1, int a2, unsigned __int16 a3, unsigned int a4)
{
  __int64 *v7; // r14

  if ( !a1 )
    return 0;
  if ( a1[4] == -1 && a2 >= 0 )
  {
    v7 = *(__int64 **)(qword_2CA1698 + 1480);
    if ( (unsigned __int8)sub_5A20F0(v7, (__int64)a1, a2, a3) )
      return sub_5A22E0(*(__int64 **)(*v7 + 1480), a1, a2, a3, a4, 1);
  }
  return 0;
}

