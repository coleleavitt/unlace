__int64 __fastcall sub_32E3E0(__int64 a1, unsigned int a2, __int64 a3, int a4, unsigned int a5)
{
  unsigned __int8 (__fastcall *v8)(__int64, _QWORD); // r15
  __int64 flags; // rax
  bool v10; // zf
  __int64 result; // rax

  v8 = *(unsigned __int8 (__fastcall **)(__int64, _QWORD))a3;
  flags = get_flags_ex(a1, 0);
  v10 = v8(flags, a2) == 0;
  result = 0;
  if ( v10 )
  {
    if ( a4 != 2 )
      return (*(unsigned int (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(a3 + 8))(
               a1,
               a2,
               *(_QWORD *)(a3 + 16),
               a5) == 0;
  }
  else if ( a4 != 3 )
  {
    return (unsigned __int8)clr_op_type(a1, a2) ^ 1u;
  }
  return result;
}
