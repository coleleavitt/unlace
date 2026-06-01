__int64 __fastcall Z3_get_quantifier_id(__int64 a1, __int64 a2)
{
  char v2; // r12
  __int64 result; // rax

  v2 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v2 )
  {
    sub_29AE00();
    *(_DWORD *)(a1 + 1520) = 0;
    if ( *(_WORD *)(a2 + 4) == 2 )
    {
      result = *(_QWORD *)(a2 + 56);
    }
    else
    {
      sub_24EA30(a1, 1u, nullptr);
      result = 0;
    }
    byte_1C7EBA0 = 1;
  }
  else
  {
    *(_DWORD *)(a1 + 1520) = 0;
    if ( *(_WORD *)(a2 + 4) == 2 )
    {
      return *(_QWORD *)(a2 + 56);
    }
    else
    {
      sub_24EA30(a1, 1u, nullptr);
      return 0;
    }
  }
  return result;
}

