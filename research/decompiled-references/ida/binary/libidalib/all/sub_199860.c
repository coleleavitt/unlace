__int64 (__fastcall **__fastcall sub_199860(__int64 a1))()
{
  __int64 (__fastcall **result)(); // rax
  bool v2; // zf
  __int64 v4; // rdi
  __int64 v5; // rdi

  result = &off_235FD8;
  v2 = *(_BYTE *)(a1 + 156) == 0;
  *(_QWORD *)a1 = &off_235FD8;
  if ( !v2 )
  {
    v4 = *(_QWORD *)(a1 + 128);
    if ( v4 )
      result = (__int64 (__fastcall **)())(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 24LL))(v4);
  }
  v5 = *(_QWORD *)(a1 + 176);
  *(_QWORD *)(a1 + 128) = 0;
  *(_QWORD *)(a1 + 144) = 0;
  if ( v5 )
  {
    *(_QWORD *)(a1 + 184) = 0;
    result = (__int64 (__fastcall **)())qfree();
  }
  if ( *(_QWORD *)(a1 + 40) )
  {
    *(_QWORD *)(a1 + 48) = 0;
    result = (__int64 (__fastcall **)())qfree();
  }
  if ( *(_QWORD *)(a1 + 16) )
  {
    *(_QWORD *)(a1 + 24) = 0;
    return (__int64 (__fastcall **)())qfree();
  }
  return result;
}

