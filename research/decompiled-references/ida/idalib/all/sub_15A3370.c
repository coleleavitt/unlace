__int64 __fastcall sub_15A3370(__int64 a1)
{
  __int64 result; // rax

  if ( !*(_DWORD *)a1 )
    return *(_QWORD *)(a1 + 8);
  result = 0;
  if ( *(_DWORD *)a1 == 1 )
    return *(_QWORD *)(*(_QWORD *)(a1 + 8) + 48LL);
  return result;
}
