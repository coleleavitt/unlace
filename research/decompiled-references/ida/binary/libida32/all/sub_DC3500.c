__int64 __fastcall sub_DC3500(__int64 a1, __int64 *a2)
{
  __int64 v2; // r12
  unsigned int v3; // ebx
  __int64 v5; // r12
  __int64 v6; // rbp
  unsigned int v7; // eax

  v2 = sub_DFDA20(*(_QWORD *)(a1 + 176), 48);
  v3 = sub_DA8420(a1, a2, v2, 0);
  if ( !(_BYTE)v3 )
    return v3;
  if ( *(_DWORD *)(v2 + 24) )
    return 0;
  v5 = sub_CEB480(v2);
  v6 = sub_DFD980(*(_QWORD *)(a1 + 176), 24);
  v7 = *(_DWORD *)(v5 + 8);
  *(_DWORD *)(v6 + 8) = v7;
  if ( v7 > 0x40 )
    sub_21E17D0(v6);
  else
    *(_QWORD *)v6 = *(_QWORD *)v5;
  *(_BYTE *)(v6 + 12) = *(_BYTE *)(v5 + 12);
  *(_DWORD *)(v6 + 16) = *(_DWORD *)(v5 + 16);
  return v3;
}

