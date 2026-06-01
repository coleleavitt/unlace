__int64 __fastcall get_stock_tinfo(__int64 a1, unsigned int a2)
{
  __int64 v2; // r12
  __int64 result; // rax

  v2 = *(_QWORD *)(qword_2CA1698 + 1632);
  result = 0;
  if ( !*(_DWORD *)(v2 + 128) )
  {
    if ( a2 - 22 <= 2 )
    {
      sub_5223A0(*(_QWORD *)(qword_2CA1698 + 1632), 20);
    }
    else if ( a2 > 0x1E )
    {
      return result;
    }
    sub_5223A0(v2, a2);
    copy_tinfo_t(a1);
    return 1;
  }
  return result;
}

