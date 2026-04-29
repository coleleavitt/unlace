__int64 __fastcall sub_FDF0(_QWORD *a1, __int64 a2, __int64 a3)
{
  bool v4; // dl
  __int64 result; // rax
  __int64 module_data; // rax

  v4 = sub_FD50(a1, a3);
  result = 1;
  if ( v4 )
  {
    module_data = get_module_data((unsigned int)dword_2D4F4);
    *(_QWORD *)(module_data + 176) += a3;
    (*(void (__fastcall **)(_QWORD *, __int64, _QWORD))(*a1 + 56LL))(a1, a2, 0);
    return 0;
  }
  return result;
}
