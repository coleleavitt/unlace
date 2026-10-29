__int64 __fastcall sub_6A9330(__int64 a1, __int64 a2)
{
  int v2; // edx
  __int64 result; // rax

  v2 = compare_arglocs(a1 + 40, a2);
  result = 1;
  if ( v2 )
  {
    sub_6A6800(a1);
    copy_argloc(a1 + 40, a2);
    return 0;
  }
  return result;
}
