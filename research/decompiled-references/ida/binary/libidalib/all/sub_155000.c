__int64 __fastcall sub_155000(_WORD *a1, unsigned __int16 a2, unsigned int a3)
{
  __int16 v4; // r13
  __int16 v5; // r13
  __int64 result; // rax

  v4 = a1[14];
  TWindow::setState();
  sub_17C510(a1 + 36, a2, a3);
  v5 = v4 & 0x10;
  result = a1[14] & 0x10;
  if ( v5 )
  {
    if ( (a1[14] & 0x10) != 0 )
      return result;
  }
  else if ( (a1[14] & 0x10) != 0 )
  {
    return (*(__int64 (__fastcall **)(_WORD *))(*(_QWORD *)a1 + 392LL))(a1);
  }
  if ( v5 )
    return (*(__int64 (__fastcall **)(_WORD *))(*(_QWORD *)a1 + 400LL))(a1);
  return result;
}

