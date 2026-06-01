__int64 __fastcall sub_DB73E0(__int64 a1, __int64 *a2)
{
  __int64 v2; // rbx
  unsigned int v3; // eax
  unsigned int v5; // ebp
  __int64 v6; // r12
  __int64 v7; // r13
  _WORD *v8; // rax

  v2 = sub_DFDA20(*(_QWORD *)(a1 + 176), 48);
  v3 = sub_DA8420(a1, a2, v2, 4);
  if ( !(_BYTE)v3 )
    return 0;
  v5 = v3;
  if ( (unsigned __int8)sub_DFDF30(a1) )
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
    if ( sub_D8CD70(v2) )
      return 0;
    v6 = *(_QWORD *)v2;
    v7 = *(_QWORD *)(v2 + 32);
  }
  if ( *(_BYTE *)(sub_CDA220(v2) + 60) && *(_DWORD *)(v2 + 40) == v6 )
  {
    v8 = (_WORD *)(v7 + v6 + 72);
    goto LABEL_10;
  }
LABEL_9:
  v8 = (_WORD *)(v7 + v6 + 40);
LABEL_10:
  --*v8;
  return v5;
}

