__int64 __fastcall Z3_func_entry_get_arg(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rbx
  char v4; // r13
  __int64 result; // rax
  __int64 v6; // [rsp+8h] [rbp-30h]

  v3 = a3;
  v4 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v4 )
  {
    sub_29BBB0(a1, a2, a3);
    *(_DWORD *)(a1 + 1520) = 0;
    if ( (unsigned int)v3 >= *(_DWORD *)(*(_QWORD *)(a2 + 32) + 8LL) )
    {
      sub_24EA30(a1, 2u, nullptr);
      sub_2BB620(0);
      result = 0;
    }
    else
    {
      v6 = *(_QWORD *)(*(_QWORD *)(a2 + 40) + 8 * v3 + 16);
      sub_2BB620(v6);
      result = v6;
    }
    byte_1C7EBA0 = 1;
  }
  else
  {
    *(_DWORD *)(a1 + 1520) = 0;
    if ( a3 >= *(_DWORD *)(*(_QWORD *)(a2 + 32) + 8LL) )
    {
      sub_24EA30(a1, 2u, nullptr);
      return 0;
    }
    else
    {
      return *(_QWORD *)(*(_QWORD *)(a2 + 40) + 8LL * a3 + 16);
    }
  }
  return result;
}

