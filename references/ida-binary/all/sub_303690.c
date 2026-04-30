__int64 __fastcall sub_303690(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rax
  int v3; // edx
  __int64 result; // rax

  v1 = 0;
  if ( 8LL * (dword_8CD7F4 + 2) >= (unsigned __int64)(dword_8CD7F4 + 2) )
    v1 = qrealloc(qword_8CD7F8);
  qword_8CD7F8 = v1;
  v2 = qstrdup(a1);
  v3 = dword_8CD7F4;
  *(_QWORD *)(qword_8CD7F8 + 8LL * dword_8CD7F4) = v2;
  dword_8CD7F4 = v3 + 1;
  result = v3 + 1;
  *(_QWORD *)(qword_8CD7F8 + 8LL * (int)result) = 0;
  return result;
}
