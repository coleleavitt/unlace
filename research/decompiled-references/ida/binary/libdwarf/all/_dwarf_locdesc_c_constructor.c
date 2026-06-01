__int64 __fastcall dwarf_locdesc_c_constructor(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax

  result = 1;
  if ( a1 )
  {
    if ( *a1 == 3959286781LL )
    {
      *(_BYTE *)(a2 + 2) = -2;
      *(_WORD *)a2 = 99;
      return 0;
    }
  }
  return result;
}

