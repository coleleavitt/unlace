void __fastcall Z3_add_const_interp(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v6; // r12

  v6 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v6 )
  {
    sub_29B850();
    *(_DWORD *)(a1 + 1520) = 0;
    if ( !a3 || *(_DWORD *)(a3 + 32) )
    {
      sub_24EA30(a1, 3u, nullptr);
      goto LABEL_10;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 1520) = 0;
    if ( !a3 || *(_DWORD *)(a3 + 32) )
    {
      sub_24EA30(a1, 3u, nullptr);
      return;
    }
  }
  sub_135F9B0(*(_QWORD *)(a2 + 24), a3, a4);
  if ( v6 )
LABEL_10:
    byte_1C7EBA0 = 1;
}

