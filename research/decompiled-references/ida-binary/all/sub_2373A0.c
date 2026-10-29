__int64 __fastcall sub_2373A0(int a1)
{
  __int64 result; // rax
  __int64 v2; // rbx

  if ( dword_8BA590 != -1 && dword_8BA590 == a1 )
    return qword_8BA5A0;
  v2 = qword_8BA5A8;
  result = sub_233780(qword_8BA5A8);
  if ( result == -1 )
    return v2;
  return result;
}
