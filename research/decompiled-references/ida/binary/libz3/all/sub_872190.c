__int64 __fastcall sub_872190(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdx
  __int64 v3; // rdx

  result = *(_QWORD *)(a1 + 16);
  v2 = *(_QWORD *)(result + 32);
  if ( v2 )
    *(_QWORD *)(v2 + 40) = result;
  v3 = *(_QWORD *)(result + 40);
  if ( v3 )
    *(_QWORD *)(v3 + 32) = result;
  else
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) = result;
  return result;
}

