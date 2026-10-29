__int64 __fastcall sub_91EF50(__int64 a1, __int64 a2, _QWORD *a3)
{
  _DWORD *v3; // rax
  __int64 result; // rax

  if ( *(_WORD *)(a2 + 4) )
    return 0;
  v3 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
  if ( !v3 )
    return 0;
  if ( *v3 != 5 )
    return 0;
  if ( v3[1] != 9 )
    return 0;
  if ( *(_DWORD *)(a2 + 24) != 2 )
    return 0;
  result = sub_3DB3F0(a1, *(_QWORD *)(a2 + 32));
  if ( !(_BYTE)result )
    return 0;
  *a3 = *(_QWORD *)(a2 + 40);
  return result;
}

