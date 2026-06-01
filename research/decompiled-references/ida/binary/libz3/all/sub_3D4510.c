__int64 __fastcall sub_3D4510(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebp
  __int16 v4; // dx
  _DWORD *v5; // rax
  _QWORD *v6; // rax
  __int64 v7; // rsi

  do
  {
    if ( *(_WORD *)(a2 + 4) == 2 )
      break;
    v3 = sub_15D2CB0(a1, a2);
    if ( !(_BYTE)v3 )
      break;
    v4 = *(_WORD *)(a2 + 4);
    if ( v4 == 1 )
      return v3;
    v5 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
    if ( !v5 || *v5 || !v4 && v5[1] == 2 && !(unsigned __int8)sub_15D2CB0(a1, *(_QWORD *)(a2 + 32)) )
      return v3;
    if ( a2 == *(_QWORD *)(a1 + 856) || a2 == *(_QWORD *)(a1 + 864) )
      return v3;
    if ( *(_WORD *)(a2 + 4) )
      break;
    v6 = *(_QWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
    if ( !v6 )
      break;
    if ( *v6 != 0x200000000LL )
      break;
    if ( *(_DWORD *)(a2 + 24) != 2 )
      break;
    v7 = *(_QWORD *)(a2 + 32);
    a2 = *(_QWORD *)(a2 + 40);
  }
  while ( (unsigned __int8)sub_3D4510(a1, v7) );
  return 0;
}

