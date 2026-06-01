__int64 __fastcall split_sreg_range(unsigned int a1, signed int a2, unsigned __int32 a3, unsigned __int8 a4, char a5)
{
  __int64 *v6; // r9
  _DWORD *v7; // rsi

  v6 = *(__int64 **)(qword_2CA1698 + 1480);
  v7 = (_DWORD *)v6[2];
  if ( a2 >= v7[17] && a2 <= v7[18] && a2 != v7[20] )
    return sub_5044E0(*v6, a1, a2, a3, a4, a5);
  if ( !a5 )
    sub_375400();
  return 0;
}

