__int64 __fastcall sub_E11E50(__int64 a1)
{
  __int64 v1; // rax
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 24);
  if ( v1 )
    *(_DWORD *)(v1 - 4) = 0;
  result = *(_QWORD *)(a1 + 32);
  if ( result )
    *(_DWORD *)(result - 4) = 0;
  *(_DWORD *)(a1 + 40) = 0;
  return result;
}

