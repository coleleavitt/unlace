__int64 __fastcall sub_32030(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v3; // rax
  bool v4; // cf
  unsigned __int64 v5; // rdx
  __int64 v7; // r8

  v3 = *a2;
  v4 = __CFADD__(*a2, a3);
  v5 = *a2 + a3;
  if ( v4 )
    return 0;
  v7 = v3 + 6;
  if ( v5 < v3 + 6 )
    return 0;
  *(_DWORD *)(a1 + 9) = *(_DWORD *)v3;
  *(_WORD *)(a1 + 13) = *(_WORD *)(v3 + 4);
  *a2 = v7;
  return 1;
}

