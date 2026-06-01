__int64 __fastcall Z3_mk_bool_sort(__int64 a1)
{
  char v1; // bp
  __int64 result; // rax
  __int64 v3; // [rsp+8h] [rbp-20h]

  v1 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v1 )
    sub_2951C0();
  *(_DWORD *)(a1 + 1520) = 0;
  result = sub_15D2CD0(*(_QWORD *)(a1 + 232), 0, 0, 0, 0);
  if ( v1 )
  {
    v3 = result;
    sub_2BB620(result);
    byte_1C7EBA0 = 1;
    return v3;
  }
  return result;
}

