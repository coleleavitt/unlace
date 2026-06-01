__int64 __fastcall sub_15AF7D0(__int64 a1, int a2, _QWORD *a3, _DWORD *a4)
{
  if ( *(_DWORD *)(a1 + 268) )
  {
    *a3 = "__module_private__";
    *a4 = 97;
    return 1;
  }
  else
  {
    *(_DWORD *)(a1 + 268) = a2;
    return 0;
  }
}
