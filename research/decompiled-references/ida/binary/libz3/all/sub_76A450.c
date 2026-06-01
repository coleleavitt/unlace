__int64 __fastcall sub_76A450(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  unsigned int v5; // r12d
  __int64 v6; // rax
  _BYTE *v7; // rax

  v2 = sub_15D1F10(a2);
  v3 = *(_QWORD *)(v2 + 24);
  if ( !v3 || *(_DWORD *)(a1 + 64) != *(_DWORD *)v3 || *(_DWORD *)(v3 + 4) )
    return 0;
  v5 = 0;
  do
  {
    v6 = *(_QWORD *)(v3 + 8);
    if ( !v6 || v5 >= *(_DWORD *)(v6 - 4) )
      break;
    v7 = (_BYTE *)(16LL * v5 + v6);
    if ( v7[8] != 1 || *(_WORD *)(*(_QWORD *)v7 + 4LL) != 3 || !(unsigned __int8)sub_1673B10(a1 + 40, *(_QWORD *)v7) )
      return 0;
    v3 = *(_QWORD *)(v2 + 24);
    ++v5;
  }
  while ( v3 );
  return 1;
}

