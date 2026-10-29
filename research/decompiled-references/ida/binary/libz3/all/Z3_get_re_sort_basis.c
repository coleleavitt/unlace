__int64 __fastcall Z3_get_re_sort_basis(__int64 a1, __int64 a2)
{
  char v2; // bp
  __int64 v3; // rax
  int v4; // edx
  __int64 result; // rax
  __int64 *v6; // rax
  __int64 v7; // [rsp+8h] [rbp-30h]

  v2 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v2 )
    sub_297A00();
  v3 = *(_QWORD *)(a2 + 24);
  v4 = *(_DWORD *)(a1 + 456);
  *(_DWORD *)(a1 + 1520) = 0;
  if ( v3 && v4 == *(_DWORD *)v3 && *(_DWORD *)(v3 + 4) == 1 )
  {
    v6 = *(__int64 **)(v3 + 8);
    if ( *((_BYTE *)v6 + 8) != 1 )
      sub_A8ADA((__int64)"std::get: wrong index for variant");
    result = *v6;
    if ( v2 )
    {
      v7 = result;
      sub_2BB620(result);
      result = v7;
LABEL_12:
      byte_1C7EBA0 = 1;
    }
  }
  else
  {
    sub_24EA30(a1, 3u, "expected regex sort");
    if ( v2 )
    {
      sub_2BB620(0);
      result = 0;
      goto LABEL_12;
    }
    return 0;
  }
  return result;
}

