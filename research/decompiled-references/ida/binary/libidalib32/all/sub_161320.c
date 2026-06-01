__int64 __fastcall sub_161320(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = 0;
  if ( *(_QWORD *)(a3 + 40) )
  {
    result = 1;
    if ( *(_QWORD *)(a2 + 40) )
      return (unsigned __int8)sub_1612C0(a1) ^ 1u;
  }
  return result;
}

