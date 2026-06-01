__int64 __fastcall sub_C8DA0(int a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rbx

  if ( dword_245170 != -1 && dword_245170 == a1 )
    return qword_245180;
  v3 = qword_245188;
  result = sub_C4580(qword_245188, a2);
  if ( result == -1 )
    return v3;
  return result;
}

