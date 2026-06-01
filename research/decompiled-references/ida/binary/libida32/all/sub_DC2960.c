__int64 __fastcall sub_DC2960(__int64 a1, __int64 *a2)
{
  __int64 v2; // r12
  unsigned int v3; // ebx
  _QWORD *v5; // r12

  v2 = sub_DFDA20(*(_QWORD *)(a1 + 176), 48);
  v3 = sub_DA8420(a1, a2, v2, 0);
  if ( !(_BYTE)v3 )
    return v3;
  if ( *(_DWORD *)(v2 + 24) )
    return 0;
  v5 = (_QWORD *)sub_CE9E90(v2);
  *(_QWORD *)sub_DFD980(*(_QWORD *)(a1 + 176), 8) = *v5;
  return v3;
}

