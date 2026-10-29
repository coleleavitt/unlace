void __fastcall Z3_fixedpoint_update_rule(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v6; // r12
  __int64 v7; // rdi
  _QWORD v8[8]; // [rsp+8h] [rbp-40h] BYREF

  v6 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v6 )
  {
    sub_29FF50();
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
  {
    v7 = *(_QWORD *)(a2 + 24);
    v8[0] = a4;
    sub_64DEB0(v7 + 48, a3, v8);
  }
  else
  {
    sub_24EA30(a1, 3u, nullptr);
  }
  if ( v6 )
    goto LABEL_14;
}

