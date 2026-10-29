__int64 __fastcall sub_3D4640(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax
  unsigned int v3; // ebx
  _DWORD *v5; // rax

  v2 = sub_3D4510(a1, a2);
  if ( (_BYTE)v2 )
    return 1;
  v3 = v2;
  if ( *(_WORD *)(a2 + 4) )
    return v3;
  v5 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
  if ( !v5 || *v5 )
    return v3;
  if ( v5[1] == 8 )
  {
    if ( (unsigned __int8)sub_3D4510(a1, *(_QWORD *)(a2 + 32)) )
      return 1;
    if ( *(_WORD *)(a2 + 4) )
      return v3;
    v5 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
    if ( !v5 || *v5 )
      return v3;
  }
  if ( v5[1] != 6 || !*(_DWORD *)(a2 + 24) )
    return v3;
  return sub_3D45E0(a1, *(_QWORD *)(a2 + 32));
}

