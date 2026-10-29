__int64 (__fastcall **__fastcall sub_780D0(__int64 a1))()
{
  __int64 (__fastcall **result)(); // rax
  bool v2; // zf

  result = off_163AF0;
  v2 = *(_BYTE *)(a1 + 48) == 0;
  *(_QWORD *)a1 = off_163AF0;
  if ( !v2 )
    return (__int64 (__fastcall **)())sub_92380(*(void **)(a1 + 24));
  return result;
}

