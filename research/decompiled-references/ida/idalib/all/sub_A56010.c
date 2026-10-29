__int64 __fastcall sub_A56010(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 16);
  if ( result == *(_QWORD *)(a1 + 40) )
    return 0;
  return result;
}
