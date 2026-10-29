__int64 __fastcall sub_ACE090(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // rdx

  result = sub_ACDB80(
             a3,
             a3 + 88,
             a2,
             *(_DWORD *)(a1 + 16),
             *(_QWORD *)(a2 + 8LL * (unsigned int)(*(_DWORD *)(a2 + 20) + ~*(_DWORD *)(a1 + 16)) + 80));
  do
  {
    v4 = result;
    result = *(_QWORD *)(result + 8);
  }
  while ( result );
  *(_BYTE *)(v4 + 32) = 1;
  return result;
}

