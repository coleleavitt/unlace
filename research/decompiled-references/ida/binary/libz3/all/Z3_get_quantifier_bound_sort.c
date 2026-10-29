__int64 __fastcall Z3_get_quantifier_bound_sort(__int64 a1, __int64 a2, unsigned int a3)
{
  char v4; // r13
  __int64 result; // rax
  bool v6; // zf
  __int64 v7; // [rsp+8h] [rbp-30h]

  v4 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v4 )
  {
    sub_29B000();
    v6 = *(_WORD *)(a2 + 4) == 2;
    *(_DWORD *)(a1 + 1520) = 0;
    if ( v6 )
    {
      v7 = *(_QWORD *)(a2 + 8LL * a3 + 80);
      sub_2BB620(v7);
      result = v7;
    }
    else
    {
      sub_24EA30(a1, 1u, nullptr);
      sub_2BB620(0);
      result = 0;
    }
    byte_1C7EBA0 = 1;
  }
  else
  {
    *(_DWORD *)(a1 + 1520) = 0;
    if ( *(_WORD *)(a2 + 4) == 2 )
    {
      return *(_QWORD *)(a2 + 8LL * a3 + 80);
    }
    else
    {
      sub_24EA30(a1, 1u, nullptr);
      return 0;
    }
  }
  return result;
}

