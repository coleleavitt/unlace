__int64 __fastcall sub_64C320(__int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 2984) )
  {
    result = sub_63D320(a1 + 2360);
    *(_BYTE *)(a1 + 2984) = 0;
  }
  return result;
}

