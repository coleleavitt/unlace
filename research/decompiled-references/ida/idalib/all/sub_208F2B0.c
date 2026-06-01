__int64 __fastcall sub_208F2B0(__int64 a1)
{
  __int64 v1; // rdi
  __int64 result; // rax

  if ( *(_BYTE *)a1 != 13 || *(_QWORD *)(a1 + 72) == a1 + 72 )
    return 0;
  v1 = a1 + 120;
  result = 0;
  if ( *(_QWORD *)v1 )
    return *(_BYTE *)(*(_QWORD *)v1 + 15LL) & 1;
  return result;
}
