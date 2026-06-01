bool __fastcall sub_2373E0(__int64 a1, int a2)
{
  __int64 v2; // rbx
  bool result; // al
  __int64 v4; // rax
  __int64 v5; // rbp

  v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 128LL))(a1);
  result = 0;
  if ( v2 != -1 )
  {
    if ( a2 != dword_8BA590 || dword_8BA590 == -1 )
    {
      v5 = qword_8BA5A8;
      v4 = sub_233780(qword_8BA5A8);
      if ( v4 == -1 )
        v4 = v5;
    }
    else
    {
      v4 = qword_8BA5A0;
    }
    return v2 == v4;
  }
  return result;
}
