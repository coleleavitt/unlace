void __fastcall Z3_stats_get_double_value(__int64 a1, __int64 a2, unsigned int a3)
{
  char v4; // r13
  __int64 v5; // rbx

  v4 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v4 )
    sub_29E7A0();
  *(_DWORD *)(a1 + 1520) = 0;
  v5 = a2 + 24;
  if ( a3 >= (unsigned int)sub_1817F10(a2 + 24) )
  {
    sub_24EA30(a1, 2u, nullptr);
  }
  else
  {
    if ( !(unsigned __int8)sub_1817F40(v5, a3) )
    {
      sub_1817FA0(v5, a3);
      if ( !v4 )
        return;
LABEL_9:
      byte_1C7EBA0 = 1;
      return;
    }
    sub_24EA30(a1, 3u, nullptr);
  }
  if ( v4 )
    goto LABEL_9;
}

