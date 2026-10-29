__int64 __fastcall sub_7868C0(__int64 *a1, int a2)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 88LL))(*a1);
  *((_DWORD *)a1 + 2) -= a2;
  return result;
}

