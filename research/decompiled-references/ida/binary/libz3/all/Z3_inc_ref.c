void __fastcall Z3_inc_ref(__int64 a1, __int64 a2)
{
  char v2; // al

  v2 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v2 )
  {
    sub_294B80();
    *(_DWORD *)(a1 + 1520) = 0;
    sub_251050(a1);
    if ( a2 )
      ++*(_DWORD *)(a2 + 8);
    byte_1C7EBA0 = 1;
  }
  else
  {
    *(_DWORD *)(a1 + 1520) = 0;
    sub_251050(a1);
    if ( a2 )
      ++*(_DWORD *)(a2 + 8);
  }
}

