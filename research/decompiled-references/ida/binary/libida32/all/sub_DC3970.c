__int64 __fastcall sub_DC3970(__int64 a1, __int64 *a2)
{
  __int64 v2; // r12
  unsigned int v3; // ebx
  __int64 v5; // r12
  __int64 v6; // rbp

  v2 = sub_DFDA20(*(_QWORD *)(a1 + 176), 48);
  v3 = sub_DA8420(a1, a2, v2, 0);
  if ( !(_BYTE)v3 )
    return v3;
  if ( *(_DWORD *)(v2 + 24) )
    return 0;
  v5 = sub_CEB200(v2);
  v6 = sub_DFD980(*(_QWORD *)(a1 + 176), 64);
  sub_DFF4A0(v6, v5);
  *(_QWORD *)(v6 + 48) = *(_QWORD *)(v5 + 48);
  *(_DWORD *)(v6 + 56) = *(_DWORD *)(v5 + 56);
  return v3;
}

