__int64 __fastcall Z3_get_array_sort_domain(__int64 a1, __int64 a2)
{
  char v2; // r12
  __int64 v3; // rax
  __int64 result; // rax
  __int64 *v5; // rax
  __int64 v6; // [rsp+8h] [rbp-30h]

  v2 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v2 )
  {
    sub_2998D0();
    *(_DWORD *)(a1 + 1520) = 0;
    if ( !a2 || !*(_DWORD *)(a2 + 8) )
    {
      sub_24EA30(a1, 3u, "not a valid ast");
LABEL_16:
      result = 0;
      goto LABEL_17;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 1520) = 0;
    if ( !a2 || !*(_DWORD *)(a2 + 8) )
    {
      sub_24EA30(a1, 3u, "not a valid ast");
      return 0;
    }
  }
  v3 = *(_QWORD *)(a2 + 24);
  if ( !v3 || *(_DWORD *)v3 != *(_DWORD *)(a1 + 1440) || *(_DWORD *)(v3 + 4) )
  {
    sub_24EA30(a1, 3u, nullptr);
    if ( !v2 )
      return 0;
    sub_2BB620(0);
    goto LABEL_16;
  }
  v5 = *(__int64 **)(v3 + 8);
  if ( *((_BYTE *)v5 + 8) != 1 )
    sub_A8ADA((__int64)"std::get: wrong index for variant");
  result = *v5;
  if ( v2 )
  {
    v6 = result;
    sub_2BB620(result);
    result = v6;
LABEL_17:
    byte_1C7EBA0 = 1;
  }
  return result;
}

