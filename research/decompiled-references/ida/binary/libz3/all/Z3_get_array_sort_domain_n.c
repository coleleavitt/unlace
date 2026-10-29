__int64 __fastcall Z3_get_array_sort_domain_n(__int64 a1, __int64 a2, unsigned int a3)
{
  char v4; // r12
  __int64 v5; // rax
  __int64 result; // rax
  __int64 v7; // rax
  unsigned int v8; // edx
  __int64 *v9; // rax
  __int64 v10; // [rsp+8h] [rbp-30h]

  v4 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v4 )
  {
    sub_299910();
    *(_DWORD *)(a1 + 1520) = 0;
    if ( !a2 || !*(_DWORD *)(a2 + 8) )
    {
      sub_24EA30(a1, 3u, "not a valid ast");
LABEL_19:
      result = 0;
      goto LABEL_20;
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
  v5 = *(_QWORD *)(a2 + 24);
  if ( !v5
    || *(_DWORD *)v5 != *(_DWORD *)(a1 + 1440)
    || *(_DWORD *)(v5 + 4)
    || ((v7 = *(_QWORD *)(v5 + 8)) == 0 ? (v8 = -1) : (v8 = *(_DWORD *)(v7 - 4) - 1), a3 >= v8) )
  {
    sub_24EA30(a1, 3u, nullptr);
    if ( !v4 )
      return 0;
    sub_2BB620(0);
    goto LABEL_19;
  }
  v9 = (__int64 *)(16LL * a3 + v7);
  if ( *((_BYTE *)v9 + 8) != 1 )
    sub_A8ADA((__int64)"std::get: wrong index for variant");
  result = *v9;
  if ( v4 )
  {
    v10 = result;
    sub_2BB620(result);
    result = v10;
LABEL_20:
    byte_1C7EBA0 = 1;
  }
  return result;
}

