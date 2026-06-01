__int64 __fastcall sub_15F380(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int a5)
{
  __int64 result; // rax
  unsigned __int64 v9; // rax

  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 536LL))(a1);
  if ( result == -1 )
  {
    tag_remove();
    v9 = qustrlen();
    if ( v9 < (int)a4 )
      a4 = v9;
    if ( (unsigned int)sub_9E360() == 1 )
      return -1;
    else
      return (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 528LL))(
               a1,
               a2,
               a3,
               a4,
               a5);
  }
  return result;
}

