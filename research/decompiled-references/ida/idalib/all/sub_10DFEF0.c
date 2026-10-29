__int64 __fastcall sub_10DFEF0(__int64 *a1)
{
  __int64 result; // rax
  __int64 v2; // rdi

  if ( (a1[1] & 1) != 0 )
  {
    v2 = *a1;
    if ( v2 )
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  }
  else if ( *(_DWORD *)a1 != -1 )
  {
    return sub_228D530();
  }
  return result;
}
