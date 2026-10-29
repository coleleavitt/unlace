__int64 __fastcall sub_C0100(__int64 a1)
{
  char v1; // dl
  __int64 result; // rax

  v1 = sub_BFF50(0, nullptr);
  result = 0;
  if ( v1 )
  {
    *(_BYTE *)(a1 + 180) = 1;
    return 1;
  }
  return result;
}

