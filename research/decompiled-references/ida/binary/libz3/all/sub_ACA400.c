__int64 __fastcall sub_ACA400(__int64 a1, int a2)
{
  __int64 v2; // rax
  int v3; // ebp
  unsigned int v4; // ebp
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 104);
  if ( v2 )
    v3 = *(_DWORD *)(v2 - 4);
  else
    v3 = 0;
  v4 = v3 - a2;
  sub_AC9EC0(a1, *(_DWORD *)(v2 + 4LL * v4));
  result = *(_QWORD *)(a1 + 104);
  if ( result )
    *(_DWORD *)(result - 4) = v4;
  return result;
}

