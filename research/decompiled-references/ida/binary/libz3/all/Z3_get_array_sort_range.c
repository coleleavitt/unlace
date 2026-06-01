__int64 __fastcall Z3_get_array_sort_range(__int64 a1, __int64 a2)
{
  char v2; // r12
  __int64 v3; // rax
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 *v7; // rax
  __int64 v8; // [rsp+8h] [rbp-30h]

  v2 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v2 )
  {
    sub_299950();
    *(_DWORD *)(a1 + 1520) = 0;
    if ( !a2 || !*(_DWORD *)(a2 + 8) )
    {
      sub_24EA30(a1, 3u, "not a valid ast");
LABEL_18:
      result = 0;
      goto LABEL_19;
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
    goto LABEL_18;
  }
  v5 = 0xFFFFFFFF0LL;
  v6 = *(_QWORD *)(v3 + 8);
  if ( v6 )
    v5 = 16LL * (unsigned int)(*(_DWORD *)(v6 - 4) - 1);
  v7 = (__int64 *)(v5 + v6);
  if ( *((_BYTE *)v7 + 8) != 1 )
    sub_A8ADA((__int64)"std::get: wrong index for variant");
  result = *v7;
  if ( v2 )
  {
    v8 = result;
    sub_2BB620(result);
    result = v8;
LABEL_19:
    byte_1C7EBA0 = 1;
  }
  return result;
}

