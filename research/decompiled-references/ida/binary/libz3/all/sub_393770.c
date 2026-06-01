__int64 __fastcall sub_393770(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 result; // rax

  sub_DFBCB0(a2);
  v2 = a1[6];
  a1[4] = 0;
  if ( v2 )
    *(_DWORD *)(v2 - 4) = 0;
  result = a1[7];
  if ( result )
    *(_DWORD *)(result - 4) = 0;
  return result;
}

