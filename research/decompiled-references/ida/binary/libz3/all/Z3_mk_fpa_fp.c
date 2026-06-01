__int64 __fastcall Z3_mk_fpa_fp(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v6; // bp
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 result; // rax
  __int64 v10; // rax
  __int64 v11; // [rsp+8h] [rbp-40h]

  v6 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v6 )
    sub_2A0E70();
  *(_DWORD *)(a1 + 1520) = 0;
  v7 = sub_15D1F10(a2);
  if ( (unsigned __int8)sub_1673B10(a1 + 312, v7)
    && (v8 = sub_15D1F10(a3), (unsigned __int8)sub_1673B10(a1 + 312, v8))
    && (v10 = sub_15D1F10(a4), (unsigned __int8)sub_1673B10(a1 + 312, v10)) )
  {
    v11 = sub_15E1BF0(*(_QWORD *)(a1 + 368));
    sub_251FD0(a1, v11);
    result = v11;
    if ( v6 )
    {
      sub_2BB620(v11);
      result = v11;
LABEL_12:
      byte_1C7EBA0 = 1;
    }
  }
  else
  {
    sub_24EA30(a1, 3u, "bv sorts expected for arguments");
    if ( v6 )
    {
      sub_2BB620(0);
      result = 0;
      goto LABEL_12;
    }
    return 0;
  }
  return result;
}

