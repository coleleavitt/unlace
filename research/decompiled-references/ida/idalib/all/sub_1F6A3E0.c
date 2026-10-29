__int64 __fastcall sub_1F6A3E0(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)(a1 + 24) == result )
    return 0;
  return result;
}
