__int64 (__fastcall **__fastcall sub_174EE0(__int64 a1))()
{
  __int64 (__fastcall **result)(); // rax
  bool v2; // zf

  result = &off_235A60;
  v2 = *(_BYTE *)(a1 + 32) == 0;
  *(_QWORD *)a1 = &off_235A60;
  if ( !v2 )
  {
    if ( *(_QWORD *)(a1 + 16) )
      return (__int64 (__fastcall **)())qfclose();
  }
  return result;
}

