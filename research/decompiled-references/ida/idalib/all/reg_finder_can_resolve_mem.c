__int64 __fastcall reg_finder_can_resolve_mem(__int64 a1, unsigned __int64 a2)
{
  __int64 result; // rax
  __int64 (*v3)(); // rdx

  result = sub_4F7720(a2);
  if ( !(_BYTE)result )
  {
    v3 = *(__int64 (**)())(*(_QWORD *)a1 + 40LL);
    if ( v3 != sub_4F3CA0 )
      return ((__int64 (__fastcall *)(__int64, unsigned __int64))v3)(a1, a2);
  }
  return result;
}
