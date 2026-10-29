__int64 __fastcall sub_11C120(__int64 *a1)
{
  __int64 v2; // rdi
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 56LL))(v2, 1);
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1[1] + 56LL))(a1[1], 45);
  }
  return result;
}

