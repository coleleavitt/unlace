__int64 __fastcall sub_179B70(__int64 a1, unsigned __int8 a2)
{
  __int64 result; // rax

  if ( a2 )
    return sub_52F040(a1, a2);
  result = *(_QWORD *)(a1 + 8);
  if ( !result )
    return sub_52F040(a1, a2);
  return result;
}
