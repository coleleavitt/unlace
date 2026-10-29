void __fastcall Z3_fixedpoint_assert(__int64 a1, __int64 a2, __int64 a3)
{
  char v4; // r12

  v4 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v4 )
  {
    sub_29FDE0();
    *(_DWORD *)(a1 + 1520) = 0;
    if ( !a3 || !*(_DWORD *)(a3 + 8) )
    {
      sub_24EA30(a1, 3u, nullptr);
LABEL_14:
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
  if ( (unsigned int)*(unsigned __int16 *)(a3 + 4) - 3 > 1 && (unsigned __int8)sub_15D2CB0(*(_QWORD *)(a1 + 232), a3) )
    sub_64F1A0(*(_QWORD *)(a2 + 24) + 48LL, a3);
  else
    sub_24EA30(a1, 3u, nullptr);
  if ( v4 )
    goto LABEL_14;
}

