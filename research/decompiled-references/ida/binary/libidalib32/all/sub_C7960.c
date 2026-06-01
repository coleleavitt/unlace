bool __fastcall sub_C7960(__int64 a1, int a2)
{
  int v2; // ebx
  bool result; // al
  int v4; // eax
  int v5; // ebp

  v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 128LL))(a1);
  result = 0;
  if ( v2 != -1 )
  {
    if ( a2 != dword_244118 || dword_244118 == -1 )
    {
      v5 = dword_244128;
      v4 = sub_C3380((unsigned int)dword_244128);
      if ( v4 == -1 )
        v4 = v5;
    }
    else
    {
      v4 = dword_244124;
    }
    return v2 == v4;
  }
  return result;
}

