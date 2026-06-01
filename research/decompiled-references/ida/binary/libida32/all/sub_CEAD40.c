__int64 __fastcall sub_CEAD40(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // ebp
  __int64 v4; // rbp
  __int64 v5; // r12
  __int64 v6; // r12
  __int64 v7; // rax

  v2 = 1;
  if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
    return v2;
  v4 = *(_QWORD *)(a1 + 1232);
  *(_QWORD *)(a1 + 1240) = *a2;
  v5 = sub_DFDA20(*(_QWORD *)(a1 + 560), 48);
  v2 = sub_DA8420(a1 + 384, v4, v5, 0);
  if ( !(_BYTE)v2 )
    return v2;
  if ( *(_DWORD *)(v5 + 24) )
    return 0;
  v6 = sub_CEACF0(v5);
  v7 = sub_DFD980(*(_QWORD *)(a1 + 560), 48);
  sub_DFF4A0(v7, v6);
  return v2;
}

