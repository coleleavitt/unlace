__int64 __fastcall sub_289D30(_QWORD *a1, _DWORD *a2, __int64 *a3, __int64 a4, double a5)
{
  __int64 result; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax

  result = sub_173180((__int64)a1, a2, (__int64)a3, a4);
  if ( a3 )
  {
    v10 = sub_1EA6A0(a1[2] + 384LL, (__int64)a2, v8, v9, a5);
    result = (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 560LL))(a1, a4, v10 + 24);
    *a3 = result;
  }
  return result;
}
