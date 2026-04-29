bool __fastcall sub_3E1870(_DWORD *a1, int a2)
{
  bool (__fastcall *v2)(_DWORD *, int); // rax
  bool result; // al

  if ( a1[21] == 8 && a1[156] <= a2 && a1[171] + 32 > a2 )
    return 0;
  v2 = *(bool (__fastcall **)(_DWORD *, int))(*(_QWORD *)a1 + 200LL);
  if ( v2 == sub_3DF310 )
  {
    if ( a2 >= a1[123] && a2 < a1[130] + a1[112] )
      return 0;
  }
  else if ( v2(a1, a2) )
  {
    return 0;
  }
  result = 1;
  if ( a2 >= a1[132] )
    return a2 >= a1[139] + 8;
  return result;
}
