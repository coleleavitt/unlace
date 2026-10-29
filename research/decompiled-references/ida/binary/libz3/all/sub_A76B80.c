__int64 __fastcall sub_A76B80(__int64 *a1, unsigned int *a2)
{
  __int64 v2; // r12
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r13
  __int64 result; // rax

  v2 = *a1;
  v3 = *(_QWORD *)(*(_QWORD *)(*a1 + 16) + 8656LL);
  if ( !v3 )
    return sub_A986A0((_DWORD)a1);
  v4 = *a2;
  if ( (unsigned int)v4 >= *(_DWORD *)(v3 - 4) )
    return sub_A986A0((_DWORD)a1);
  v5 = *(_QWORD *)(v3 + 8 * v4);
  if ( !v5 )
    return sub_A986A0((_DWORD)a1);
  LODWORD(result) = sub_B39350(*(_QWORD *)(v3 + 8 * v4), *(unsigned int *)(v2 + 8));
  if ( (_DWORD)result == -1 )
    return sub_A986A0((_DWORD)a1);
  result = (unsigned int)result;
  if ( *(_QWORD *)(*(_QWORD *)(v2 + 32) + 8LL * (unsigned int)result) != v5 )
    return sub_A986A0((_DWORD)a1);
  return result;
}

