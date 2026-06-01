/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_472573
// Address: 0x00472573

//----- (00472573) --------------------------------------------------------
int __usercall sub_472573@<eax>(int a1@<ebx>, int a2@<edi>, unsigned int a3)
{
  WCHAR RootPathName; // [esp+0h] [ebp-Ch] BYREF
  wchar_t v5[3]; // [esp+2h] [ebp-Ah] BYREF

  if ( a3 <= 0x1A )
  {
    if ( !a3 )
      return 1;
    RootPathName = a3 + 64;
    wcscpy(v5, L":\\");
    if ( GetDriveTypeW(&RootPathName) > 1 )
      return 1;
  }
  else
  {
    *sub_46B971() = 15;
    *sub_46B984() = 13;
    sub_467EF4(a1, a2);
  }
  return 0;
}
