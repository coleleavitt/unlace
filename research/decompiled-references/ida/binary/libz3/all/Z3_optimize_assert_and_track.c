void __fastcall Z3_optimize_assert_and_track(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v6; // r12

  v6 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v6 )
  {
    sub_2A04A0(a1, a2, a3, a4);
    *(_DWORD *)(a1 + 1520) = 0;
    if ( !a3 || !*(_DWORD *)(a3 + 8) )
    {
      sub_24EA30(a1, 3u, nullptr);
LABEL_18:
      byte_1C7EBA0 = 1;
      return;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 1520) = 0;
    if ( !a3 || !*(_DWORD *)(a3 + 8) )
    {
      sub_24EA30(a1, 3u, nullptr);
      return;
    }
  }
  if ( (unsigned int)*(unsigned __int16 *)(a3 + 4) - 3 > 1
    && (unsigned __int8)sub_15D2CB0(*(_QWORD *)(a1 + 232), a3)
    && a4
    && *(_DWORD *)(a4 + 8)
    && (unsigned int)*(unsigned __int16 *)(a4 + 4) - 3 > 1
    && (unsigned __int8)sub_15D2CB0(*(_QWORD *)(a1 + 232), a4) )
  {
    sub_2F2590(*(_QWORD *)(a2 + 24), a3, a4);
  }
  else
  {
    sub_24EA30(a1, 3u, nullptr);
  }
  if ( v6 )
    goto LABEL_18;
}

