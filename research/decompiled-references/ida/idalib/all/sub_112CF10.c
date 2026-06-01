__int64 __fastcall sub_112CF10(_QWORD *a1)
{
  __int64 result; // rax
  __int64 v3; // rdi

  result = a1[213];
  if ( !result )
  {
    result = (*(__int64 (**)(void))(*a1 + 8LL))();
    v3 = a1[213];
    a1[213] = result;
    if ( v3 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
      return a1[213];
    }
  }
  return result;
}
