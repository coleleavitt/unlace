__int64 __fastcall sub_24240(__int64 a1, __int64 (***a2)(), unsigned __int64 *a3)
{
  unsigned __int64 v3; // rbx
  __int64 (*v5)(); // rax
  __int64 result; // rax

  v3 = *a3;
  if ( *a3 >= a3[1] )
    return 0;
  while ( 1 )
  {
    v5 = **a2;
    if ( v5 != sub_F030 )
    {
      result = ((__int64 (__fastcall *)(__int64 (***)(), unsigned __int64))v5)(a2, v3);
      if ( (_DWORD)result )
        break;
    }
    v3 += *(_QWORD *)(a1 + 240);
    if ( v3 >= a3[1] )
      return 0;
  }
  return result;
}
