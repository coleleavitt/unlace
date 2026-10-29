__int64 __fastcall sub_809FC(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 256);
  if ( *(_QWORD *)(a1 + 288) != result )
    return sub_911E0(a1);
  return result;
}

