__int64 __fastcall sub_688BA0(__int64 a1, __int64 a2)
{
  int v2; // edx
  __int64 result; // rax

  v2 = compare_arglocs(a1 + 40, a2);
  result = 1;
  if ( v2 )
  {
    sub_6860B0(a1);
    copy_argloc(a1 + 40, a2);
    return 0;
  }
  return result;
}

