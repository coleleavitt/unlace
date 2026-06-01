__int64 __fastcall sub_490B60(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 result; // rax

  if ( !*(_QWORD *)(a2 + 328) )
    return 7;
  v2 = *(_QWORD *)(a2 + 200);
  result = 7;
  if ( v2 )
  {
    if ( *(_QWORD *)(v2 + 8) )
      return 3;
  }
  return result;
}
