__int64 __fastcall sub_BD4A20(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  int v3; // eax
  _BYTE *v4; // rdx
  _BYTE *v5; // rax
  __int64 v6; // rcx

  v2 = sub_15D1F10(a2);
  v3 = sub_BDD570(a1, v2);
  v4 = *(_BYTE **)(*(_QWORD *)(v2 + 24) + 8LL);
  if ( !v3 )
    return 1;
  v5 = &v4[16 * v3];
  while ( 1 )
  {
    if ( v4[8] != 1 )
      sub_DBF6E(0);
    v6 = *(_QWORD *)(*(_QWORD *)v4 + 24LL);
    if ( !v6 || (unsigned int)(*(_DWORD *)(v6 + 24) - 1) <= 1 || *(_QWORD *)(v6 + 32) != 1 )
      break;
    v4 += 16;
    if ( v4 == v5 )
      return 1;
  }
  return 0;
}

