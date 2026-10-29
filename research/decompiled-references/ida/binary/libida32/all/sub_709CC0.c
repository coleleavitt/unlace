__int64 (__fastcall **__fastcall sub_709CC0(__int64 a1))()
{
  __int64 (__fastcall **result)(); // rax
  bool v2; // zf

  result = off_2B0E3E8;
  v2 = *(_BYTE *)(a1 + 48) == 0;
  *(_QWORD *)a1 = off_2B0E3E8;
  if ( !v2 )
    return (__int64 (__fastcall **)())close_linput(*(void **)(a1 + 24));
  return result;
}

