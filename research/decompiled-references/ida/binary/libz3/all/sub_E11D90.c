__int64 __fastcall sub_E11D90(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  if ( !*(_QWORD *)(a1 + 32) )
    return 8;
  v1 = *(_QWORD *)(a1 + 40);
  result = 11;
  if ( v1 )
  {
    if ( *(_DWORD *)(v1 - 4) )
      return 14;
  }
  return result;
}

