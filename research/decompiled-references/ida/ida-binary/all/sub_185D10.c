__int64 __fastcall ActionsInspector::update_action_list(__int64 a1, __int64 a2)
{
  const char *v3; // r12
  _QWORD *v5; // r13
  _BYTE *v6; // rax
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rax

  if ( *(_QWORD *)(a2 + 40) )
  {
    v3 = *(const char **)(a2 + 32);
    if ( !strncmp(v3, "___dynact#", 0xAu) || !strncmp(v3, "Actins", 6u) )
      return 0;
  }
  else
  {
    v3 = &s1;
  }
  v5 = *(_QWORD **)(a1 + 8);
  v6 = (_BYTE *)v5[8];
  if ( *v6 && *(int *)(a2 + 120) > 3 )
    return 0;
  if ( v6[1] )
  {
    if ( (unsigned __int8)sub_4B1970(0, 0, v3) )
    {
      v5 = *(_QWORD **)(a1 + 8);
      goto LABEL_10;
    }
    return 0;
  }
LABEL_10:
  v7 = v5[10];
  v8 = v5[9];
  if ( v5[11] < (unsigned __int64)(v7 + 1) )
  {
    v9 = qvector_reserve(v5 + 9, v8, v7 + 1, 8);
    v5[9] = v9;
    v8 = v9;
    v7 = v5[10];
  }
  *(_QWORD *)(v8 + 8 * v7) = a2;
  ++v5[10];
  return 0;
}
