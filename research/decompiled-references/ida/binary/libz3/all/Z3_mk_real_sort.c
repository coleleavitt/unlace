__int64 __fastcall Z3_mk_real_sort(__int64 a1)
{
  char v2; // bp
  __int64 v3; // rdi
  __int64 result; // rax
  __int64 v5; // [rsp+8h] [rbp-20h]

  v2 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v2 )
    sub_295200();
  v3 = *(_QWORD *)(a1 + 232);
  *(_DWORD *)(a1 + 1520) = 0;
  result = sub_15D2CD0(v3, 5, 0, 0, 0);
  if ( v2 )
  {
    v5 = result;
    sub_2BB620(result);
    byte_1C7EBA0 = 1;
    return v5;
  }
  return result;
}

