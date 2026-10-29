__int64 __fastcall sub_DDB2E0(__int64 a1, __int64 *a2)
{
  __int64 v2; // rbx
  unsigned int v3; // eax
  unsigned int v5; // ebp
  __int64 v6; // r12
  __int64 v7; // r13
  _QWORD *v8; // rax

  v2 = sub_E21760(*(_QWORD *)(a1 + 176), 48);
  v3 = sub_DCC160(a1, a2, v2, 4);
  if ( !(_BYTE)v3 )
    return 0;
  v5 = v3;
  if ( (unsigned __int8)sub_E21C70(a1) )
  {
    v6 = *(_QWORD *)v2;
    v7 = *(_QWORD *)(v2 + 32);
    if ( *(_DWORD *)(v2 + 24) )
      goto LABEL_9;
  }
  else
  {
    if ( *(_DWORD *)(v2 + 24) )
    {
      v6 = *(_QWORD *)v2;
      v7 = *(_QWORD *)(v2 + 32);
      goto LABEL_9;
    }
    if ( sub_DB0AB0(v2) )
      return 0;
    v6 = *(_QWORD *)v2;
    v7 = *(_QWORD *)(v2 + 32);
  }
  if ( *(_BYTE *)(sub_CFDF60(v2) + 60) && *(_DWORD *)(v2 + 40) == v6 )
  {
    v8 = (_QWORD *)(v7 + v6 + 72);
    goto LABEL_10;
  }
LABEL_9:
  v8 = (_QWORD *)(v7 + v6 + 40);
LABEL_10:
  --*v8;
  return v5;
}
