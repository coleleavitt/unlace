bool __fastcall sub_C8DE0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  bool result; // al
  __int64 v4; // rax
  __int64 v5; // rbp

  v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 128LL))(a1);
  result = 0;
  if ( v2 != -1 )
  {
    if ( (_DWORD)a2 != dword_245170 || dword_245170 == -1 )
    {
      v5 = qword_245188;
      v4 = sub_C4580(qword_245188, a2);
      if ( v4 == -1 )
        v4 = v5;
    }
    else
    {
      v4 = qword_245180;
    }
    return v2 == v4;
  }
  return result;
}

