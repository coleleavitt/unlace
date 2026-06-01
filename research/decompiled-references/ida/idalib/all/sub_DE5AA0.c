__int64 __fastcall sub_DE5AA0(__int64 a1, __int64 *a2)
{
  __int64 v2; // r12
  unsigned int v3; // ebx
  _DWORD *v5; // r12

  v2 = sub_E21760(*(_QWORD *)(a1 + 176), 48);
  v3 = sub_DCC160(a1, a2, v2, 0);
  if ( !(_BYTE)v3 )
    return v3;
  if ( *(_DWORD *)(v2 + 24) )
    return 0;
  v5 = (_DWORD *)sub_D0D1D0(v2);
  *(_DWORD *)sub_E216C0(*(_QWORD *)(a1 + 176), 8) = *v5;
  return v3;
}
