_UNKNOWN **__fastcall sub_2299530(int a1)
{
  _UNKNOWN **result; // rax

  for ( result = &off_2B414A0; a1 != *((_DWORD *)result + 10); result += 14 )
    ;
  return result;
}
