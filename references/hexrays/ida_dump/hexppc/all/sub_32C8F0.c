__int64 __fastcall sub_32C8F0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 56);
  if ( result )
  {
    *(_QWORD *)(result + 8) = a2;
    result = *(_QWORD *)(a1 + 56);
  }
  if ( !*(_QWORD *)(a1 + 48) )
    *(_QWORD *)(a1 + 48) = a2;
  *(_QWORD *)(a2 + 16) = result;
  *(_QWORD *)(a1 + 56) = a2;
  return result;
}
