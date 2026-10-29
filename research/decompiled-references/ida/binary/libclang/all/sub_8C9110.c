__int64 __fastcall sub_8C9110(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdx

  if ( *(_BYTE *)(a1 + 26) == 1 )
    return *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL);
  if ( *(_BYTE *)(a1 + 26) > 1u )
    return *(_QWORD *)(a1 + 40);
  v2 = *(_QWORD *)(a1 + 40);
  result = 0;
  if ( v2 )
    return *(_QWORD *)v2;
  return result;
}

